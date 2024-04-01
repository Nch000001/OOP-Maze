#ifndef MAPCREATE_H
#define MAPCREATE_H

#include <QWidget>
#include <QPainter>
#include <vector>

class MapCreate : public QWidget
{
    Q_OBJECT
public:
    explicit MapCreate(QWidget *parent = nullptr);

protected:
    void paintEvent(QPaintEvent *event) override;

private:
    std::vector<std::vector<int> > mazeMap;
    void createMap();
    int wall = 0, route = 1;
signals:
};
//全都是牆,讓他隨便畫,瀏覽所有外圍出口 只留下一個可通的路
//讓算法隨便走, 以路上的節點隨機判定是否為出口.
#endif // MAPCREATE_H
