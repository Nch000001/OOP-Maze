#include <QMainWindow>
#include <QKeyEvent>
#include <QGraphicsView>
#include <QPixmap>
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
private:
    Ui::GameWindow *ui;
    MapCreate *mapCreate;
    MazeScene *mazeScene;
    Player *player;
    QGraphicsScene *scene;
    QGraphicsView *view;
    int cellSize = 20;
};
