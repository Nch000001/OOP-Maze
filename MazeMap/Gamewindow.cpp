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

    //取得迷宮陣列的數據;
    mazeScene->generateMaze(mapCreate->getMazeData());

    //創立一個角色並放進迷宮中
    QPixmap playerPixmap(":/images/images/player.png");
    playerPixmap = playerPixmap.scaled(cellSize, cellSize, Qt::KeepAspectRatio);
    player = new Player(playerPixmap);
    mazeScene->addItem(player);
    player->setPos(1*cellSize,2*cellSize);

    //mazeScene->fogOfWar(2*cellSize,2*cellSize);
    view = new QGraphicsView(mazeScene);
    setCentralWidget(view);

    view->centerOn(player);
    //禁用滾動條
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setSceneRect(mazeScene->itemsBoundingRect());
    /*view->update();
    view->viewport()->update();*/
}

GameWindow::~GameWindow()
{
    delete ui;
}

void GameWindow::keyPressEvent(QKeyEvent *event){

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
    qDebug() << "Applying fog of war for player grid position:" << playerRow << playerCol;
    //碰到終點
    if(!mazeScene->isWall(playerRow, playerCol)){

        player->setPos(newX, newY);
        mazeScene->fogOfWar(playerRow, playerCol);
        qDebug() << player->pos() << "|| " << view->mapToScene(view->viewport()->rect().center());
        view->centerOn(player);

        //碰到終點
        if(mazeScene->isDone(playerRow, playerCol)){

            QMessageBox messageBox;
            messageBox.setWindowTitle("通過");
            messageBox.setText("恭喜通關!!");
            messageBox.setStandardButtons(QMessageBox::Yes);


            messageBox.setStyleSheet("QMessageBox {"
                                     "background-color: #444444;"  // 背景颜色
                                     "color: #FFFFFF;"             // 文字颜色
                                     "}"
                                     "QPushButton {"
                                     "color: #FFFFFF;"             // 按钮文字
                                     "background-color: #555555;"  // 按钮背景颜色
                                     "border: 3px solid #AAAAAA;"  // 按钮邊框
                                     "}");

            int ret = messageBox.exec();
            if (ret == QMessageBox::Yes) {
                this->close();
            }

        }
    }

}

