#include "gamewindow.h"
#include "ui_gamewindow.h"
#include "mapcreate.h"

GameWindow::GameWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::GameWindow)
    , mapCreate(new MapCreate(this))
{
    ui->setupUi(this);
    setCentralWidget(mapCreate);
}

GameWindow::~GameWindow()
{
    delete ui;
}
