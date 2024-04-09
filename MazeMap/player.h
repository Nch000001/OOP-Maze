#ifndef PLAYER_H
#define PLAYER_H
#include <QGraphicsPixmapItem>
#include <QGraphicsItem>
#include <QPixmap>
#include <vector>

class Player : public QGraphicsPixmapItem {
public:
    Player(const QPixmap &pixmap, QGraphicsItem *parent = nullptr);

    void moveUp();
    void moveDown();
    void moveLeft();
    void moveRight();
private:
    int posX, posY;
    int viewRange;
    int cellSize = 100;
    std::vector<std::vector <int> > data;
};

#endif // PLAYER_H
