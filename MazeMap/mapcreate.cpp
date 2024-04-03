#include "mapcreate.h"
#include <random>


MapCreate::MapCreate(QWidget *parent, int L) : QWidget(parent), L(L), mazeMap(L, std::vector<int>(L, 0)){

    initializ();
    dfs(2,2);

    mazeMap[2][1] = route;

    for(int i = L - 3 ; i >= 0 ; i--){
        if(mazeMap[i][L-3] == route){
            mazeMap[i][L-2] = route;
            break;
        }
    }
}

void MapCreate::dfs(int x, int y){

    //設置隨機數 使用mt19937引擎 來生成介於0~3之間的整數 分別代表上下左右;
    std::random_device rd;
    std::mt19937 eng(rd());
    std::uniform_int_distribution<> distr(0,3);

    mazeMap[x][y] = route;

    int direction[4][2]={   {1, 0},{-1, 0},
                           {0, 1},{0, -1}  };

    for(int i = 0 ; i < 4 ; i++){
        int r = distr(eng);
        std::swap(direction[0][0], direction[r][0]);
        std::swap(direction[r][1], direction[0][1]);
    }
    for(int i = 0 ; i < 4 ; i++){

        int dx = x, dy = y, range = 1;

        while(range > 0){

            dx += direction[i][0];
            dy += direction[i][1];

            if(mazeMap[dx][dy] == route) break;

            int count = 0;
            for(int j = dx - 1 ; j < dx + 2 ; j++){
                for(int k = dy -1 ; k < dy + 2 ; k++){
                    if(abs(j-dx) + abs(k-dy) == 1 && mazeMap[j][k] == route) count++;
                }
            }
            if(count > 1) break;
            range--;
            mazeMap[dx][dy] = route;
        }
        if(range <= 0){
            dfs(dx, dy);
        }
    }

}

void MapCreate::initializ(){

    for(int i = 0 ; i < L ; i++){
        mazeMap[i][0] = route;
        mazeMap[0][i] = route;
        mazeMap[i][L-1] = route;
        mazeMap[L-1][i] = route;
    }

}

// 已知bug -> painting後視窗大小對不上 會留白,待處理;
//目前想法: 放一張背景圖片 並縮小迷宮展示範圍 右手邊及正下方可做其他功能處理.

void MapCreate::paintEvent(QPaintEvent *event){

    QPainter painter(this);

    const int cellSize = 600/L;

    const int mazeSize = L * cellSize;

    const int startX = (this->width() - mazeSize)/2;
    const int startY = (this->height() - mazeSize)/2;

    for (int i = 0; i < L; i++) {
        for (int j = 0; j < L; j++) {

            int x = startX + j*cellSize;
            int y = startY + i*cellSize;

            if (mazeMap[i][j] == wall) {
                painter.fillRect(x, y, cellSize, cellSize, Qt::black);
            } else {
                painter.fillRect(x, y, cellSize, cellSize, Qt::white);
            }
        }
    }

    /*int clientWidth = this->width(); 舊版填不滿整個窗口的做法
    int clientHeight = this->height();
    int cellWidth = clientWidth / L;
    int cellHeight = clientHeight / L;

    for (int i = 0; i < L; ++i) {
        for (int j = 0; j < L; ++j) {

            if (mazeMap[i][j] == wall) {
                painter.fillRect(j * cellWidth, i * cellHeight, cellWidth, cellHeight, Qt::black);
            } else {
                painter.fillRect(j * cellWidth, i * cellHeight, cellWidth, cellHeight, Qt::white);
            }
        }
    }*/

}
