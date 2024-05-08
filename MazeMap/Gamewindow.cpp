#include "gamewindow.h"
#include "ui_gamewindow.h"
#include <QDebug>

GameWindow::GameWindow(QWidget *parent, int L)
    : QMainWindow(parent)
    , ui(new Ui::GameWindow)
    , mapCreate(new MapCreate(this, L))
    , mazeScene(new MazeScene(this))
{
    ui->setupUi(this);

    // 初始化計時器
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &GameWindow::updateWindowTitle);

    // 取得迷宮數據
    mazeScene->generateMaze(mapCreate->getMazeData());

    // 創建玩家並添加到迷宮中
    QPixmap playerPixmap(":/images/images/player.png");
    playerPixmap = playerPixmap.scaled(cellSize, cellSize, Qt::KeepAspectRatio);
    player = new Player(playerPixmap);
    mazeScene->addItem(player);
    player->setPos(1 * cellSize, 2 * cellSize);

    // 初始化並啟動計時器
    startTimer();

    // 設置視圖
    view = new QGraphicsView(mazeScene);
    setCentralWidget(view);
    view->centerOn(player);

    // 禁用滾動條
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setSceneRect(mazeScene->itemsBoundingRect());
}

GameWindow::~GameWindow()
{
    stopTimer();
    delete ui;
}

void GameWindow::keyPressEvent(QKeyEvent *event)
{
    int dx = 0, dy = 0;

    switch(event->key()){
    case Qt::Key_W: dy = -cellSize; break;
    case Qt::Key_S: dy = cellSize; break;
    case Qt::Key_A: dx = -cellSize; break;
    case Qt::Key_D: dx = cellSize; break;
    default: break;
    }

    int newX = player->x() + dx;
    int newY = player->y() + dy;

    int playerRow = newY / cellSize;
    int playerCol = newX / cellSize;

    // 檢查移動是否有效
    if(!mazeScene->isWall(playerRow, playerCol)){
        player->setPos(newX, newY);
        mazeScene->fogOfWar(playerRow, playerCol);
        view->centerOn(player);

        // 檢查玩家是否到達終點
        if(mazeScene->isDone(playerRow, playerCol)){
            stopTimer(); // 遊戲完成後停止計時器

            // 計算經過的時間
            QTime currentTime = QTime::currentTime();
            int elapsedSeconds = startTime.secsTo(currentTime);

            // 在消息框中顯示包含時間信息的消息
            QMessageBox messageBox;
            messageBox.setWindowTitle("通過");
            messageBox.setText(QString("恭喜通關!!\n用時：%1 分 %2 秒").arg(elapsedSeconds / 60, 2, 10, QLatin1Char('0')).arg(elapsedSeconds % 60, 2, 10, QLatin1Char('0')));
            messageBox.setStandardButtons(QMessageBox::Ok);
            messageBox.setStyleSheet("QMessageBox {"
                                     "background-color: #444444;"  // 背景顏色
                                     "color: #FFFFFF;"             // 文字顏色
                                     "}"
                                     "QPushButton {"
                                     "color: #FFFFFF;"             // 按鈕文字
                                     "background-color: #555555;"  // 按鈕背景顏色
                                     "border: 3px solid #AAAAAA;"  // 按鈕邊框
                                     "}");

            int ret = messageBox.exec();
            if (ret == QMessageBox::Ok) {
                this->close();
            }
        }
    }
}

void GameWindow::startTimer()
{
    startTime = QTime::currentTime();
    timer->start(1000); // 1 秒更新間隔
}

void GameWindow::stopTimer()
{
    timer->stop();
}

void GameWindow::updateWindowTitle()
{
    // 更新視窗標題以顯示遊戲運行時間
    QTime currentTime = QTime::currentTime();
    int elapsedSeconds = startTime.secsTo(currentTime);
    QString title = QString("Maze Game - Time: %1:%2").arg(elapsedSeconds / 60, 2, 10, QLatin1Char('0')).arg(elapsedSeconds % 60, 2, 10, QLatin1Char('0'));
    setWindowTitle(title);
}
