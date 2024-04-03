#ifndef MAPCREATE_H
#define MAPCREATE_H

#include <QWidget>
#include <QPainter>
#include <vector>

class MapCreate : public QWidget
{
    Q_OBJECT
public:
    explicit MapCreate(QWidget *parent, int);
    void initializ();
    void dfs(int, int);
    void prim();
    void randomDivide();
protected:
    void paintEvent(QPaintEvent *event) override;
private:
    std::vector<std::vector<int> > mazeMap;
    int wall = 0, route = 1;
    int L = 34; // 地圖大小 根據難度傳參數
signals:
};
//全都是牆,讓他隨便畫,瀏覽所有外圍出口 只留下一個可通的路
//讓算法隨便走, 以路上的節點隨機判定是否為出口.
#endif // MAPCREATE_H
