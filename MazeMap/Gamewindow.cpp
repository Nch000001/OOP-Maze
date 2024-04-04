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

    //從mapCreate中算完的地圖拿到mazeData;
    mazeScene->generateMaze(mapCreate->getMazeData());
    //創立一個角色並放進迷宮中
    QPixmap playerPixmap(":/images/images/drawingPin.png");
    playerPixmap = playerPixmap.scaled(cellSize, cellSize, Qt::KeepAspectRatio);
    player = new Player(playerPixmap);
    mazeScene->addItem(player);
    player->setPos(2*cellSize,2*cellSize);

    mazeScene->fogOfWar(2*cellSize,2*cellSize);
    view = new QGraphicsView(mazeScene);
    setCentralWidget(view);
    /*view->update();
    view->viewport()->update();*/
}

GameWindow::~GameWindow()
{
    delete ui;
}

void GameWindow::keyPressEvent(QKeyEvent *event){

    switch(event->key()){

        case Qt::Key_Up:
        case Qt::Key_W:
            player->moveUp();
            break;
        case Qt::Key_Down:
        case Qt::Key_S:
            player->moveDown();
            break;
        case Qt::Key_Left:
        case Qt::Key_A:
            player->moveLeft();
            break;
        case Qt::Key_Right:
        case Qt::Key_D:
            player->moveRight();
            break;
        default:
            break;
    }
    int playerRow = player->y() / cellSize;
    int playerCol = player->x() / cellSize;
    qDebug() << "Applying fog of war for player grid position:" << playerRow << playerCol;

    mazeScene->fogOfWar(playerRow, playerCol);
}
