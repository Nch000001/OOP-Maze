#include <QMainWindow>
#include "mapcreate.h"

QT_BEGIN_NAMESPACE
namespace Ui { class GameWindow; }
QT_END_NAMESPACE

class GameWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit GameWindow(QWidget *parent, int L = 30);
    ~GameWindow();

private:
    Ui::GameWindow *ui;
    MapCreate *mapCreate;
};
