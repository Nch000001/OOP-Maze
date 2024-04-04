#ifndef MAZESCENE_H
#define MAZESCENE_H

#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsItem>
#include <vector>
#include <cmath>
#include <QPen>

class MazeScene : public QGraphicsScene{
    Q_OBJECT

public:
    explicit MazeScene(QObject *parent = nullptr);
    void generateMaze(const std::vector<std::vector<int> >& mazeData);
    void addMazeCell(int x, int y, bool isWall);
    void fogOfWar(int playerRow, int playerCol);
    QGraphicsItem* findCellItem(int cellX, int cellY);
private:
    int cellSize = 20;
    int mazeWidth, mazeHeight;
};

#endif // MAZESCENE_H
