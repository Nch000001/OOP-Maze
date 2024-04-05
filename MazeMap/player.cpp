#include "player.h"
#include <vector>
#include <QDebug>
Player::Player(const QPixmap &pixmap, QGraphicsItem *parent)
    : QGraphicsPixmapItem(pixmap, parent)
{
}

void Player::moveUp(){
    setPos(x(), y() - cellSize);
}

void Player::moveDown(){
    setPos(x(), y() + cellSize);
}

void Player::moveLeft(){
    setPos(x() - cellSize, y());
}

void Player::moveRight(){
    setPos(x() + cellSize, y());
}
