#ifndef PLAYER_H
#define PLAYER_H
#include <QGraphicsPixmapItem>
#include <QGraphicsItem>
#include <QPixmap>

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
    int cellSize = 20;
};

#endif // PLAYER_H
