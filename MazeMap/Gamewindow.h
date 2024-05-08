#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include <QMainWindow>
#include <QKeyEvent>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QPixmap>
#include <QMessageBox>
#include <QTimer>
#include <QTime>
#include "mapcreate.h"
#include "mazescene.h"
#include "player.h"

QT_BEGIN_NAMESPACE
namespace Ui { class GameWindow; }
QT_END_NAMESPACE

class GameWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit GameWindow(QWidget *parent, int L = 30);
    ~GameWindow();

protected:
    void keyPressEvent(QKeyEvent *event) override;

private slots:
    void updateWindowTitle();

private:
    void startTimer();
    void stopTimer();

    Ui::GameWindow *ui;
    MapCreate *mapCreate;
    MazeScene *mazeScene;
    Player *player;
    QGraphicsView *view;
    int cellSize = 100;

    QTimer *timer;
    QTime startTime;
};

#endif // GAMEWINDOW_H
