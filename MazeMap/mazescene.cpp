#include "mazescene.h"
#include <QDebug>
MazeScene::MazeScene(QObject *parent) : QGraphicsScene(parent) {}

void MazeScene::generateMaze(const std::vector<std::vector<int> >& mazeData){

    data = mazeData;

    for(int i = 0 ; i < mazeData.size() ; i++){
        for(int j = 0 ; j < mazeData.size() ; j++){
            addMazeCell(i, j, mazeData[i][j] == 0);
        }
    }

}

void MazeScene::addMazeCell(int x, int y, bool isWall){
    QPen pen(Qt::NoPen);
    QGraphicsRectItem *cell = new QGraphicsRectItem(0, 0, cellSize, cellSize);

    cell->setPen(pen);
    cell->setBrush(isWall ? Qt::black : Qt::white);
    addItem(cell);
    cell->setPos(y * cellSize, x * cellSize);
    cell->setData(1, "mazeCell");
}

void MazeScene::fogOfWar(int playerRow, int playerCol) {

    const int viewRange = 1;
    /*for (auto& item : this->items()) {
        item->setVisible(false);

    }*/
    for (auto& item : this->items()) {

        if (item->data(1).toString() == "mazeCell") {

            int cellX = item->x()/cellSize;
            int cellY = item->y()/cellSize;

            if (abs(cellX - playerCol) <= viewRange && abs(cellY - playerRow) <= viewRange) {
                item->setData(0, QVariant(true));
                item->setVisible(true);
            }else {
                item->setData(0, QVariant(false));
                item->setVisible(false);
            }
        }
    }
}

bool MazeScene::isWall(int x, int y){

    if(x < 0 || x >= data.size() - 1 || y < 0 || y >= data.size() - 1) return true;
    return (data[x][y] == 0);
}

bool MazeScene::isDone(int x, int y){

    return(y == data.size() - 2);
}
