#include "mapcreate.h"
#include <cstdlib>
#include <ctime>

MapCreate::MapCreate(QWidget *parent) : QWidget(parent), mazeMap(30, std::vector<int>(30, 0)){
    srand((unsigned)time(NULL));4xcr5b
    for(int i = 0 ; i < mazeMap.size(); i++){
        for(int j = 0 ; j < mazeMap.size() ; j++){
            if(i == 0 || j == 0 || i == mazeMap.size()-1 || j == mazeMap.size() -1 ) mazeMap[i][j] = wall;
        }
    }
    mazeMap[0][0] = route;
    mazeMap[mazeMap.size()-1][mazeMap.size()-1] = route;
}



void MapCreate::paintEvent(QPaintEvent *event){

    QPainter painter(this);
    int cellWidth = width() / mazeMap.size();
    int cellHeight = height() / mazeMap.size();

    for (int i = 0; i < mazeMap.size(); ++i) {
        for (int j = 0; j < mazeMap[i].size(); ++j) {
            if (mazeMap[i][j] == wall) {
                painter.fillRect(i * cellWidth, j * cellHeight, cellWidth, cellHeight, Qt::black);
            } else {
                painter.fillRect(i * cellWidth, j * cellHeight, cellWidth, cellHeight, Qt::white);
            }
        }
    }
}
