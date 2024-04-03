#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "gamewindow.h"
#include "./ui_gamewindow.h"
#include "mapcreate.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //確保打開之後是第一頁
    ui->stackedWidget->setCurrentIndex(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}

// 退出按鈕(含直接關閉視窗) 事件觸發之後的判定 (雙重確認)
void MainWindow::on_pushButton_end_clicked()
{
    this->close();
}
void MainWindow::closeEvent(QCloseEvent *event){

    QMessageBox messageBox;
    messageBox.setWindowTitle("退出");
    messageBox.setText("你确定要退出吗？");
    messageBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);


    messageBox.setStyleSheet("QMessageBox {"
                             "background-color: #444444;"  // 背景颜色
                             "color: #FFFFFF;"             // 文字颜色
                             "}"
                             "QPushButton {"
                             "color: #FFFFFF;"             // 按钮文本颜色
                             "background-color: #555555;"  // 按钮背景颜色
                             "border: 3px solid #AAAAAA;"  // 按钮边
                             "}");

    int ret = messageBox.exec();

    if (ret == QMessageBox::Yes) {
        event->accept();
    } else {
        event->ignore();
    }
}

//開始遊戲按鈕被觸發 -> 應跳轉到下一個選難易度的畫面
void MainWindow::on_pushButton_start_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

//以下是第二頁的功能
//返回上一頁的功能鍵
void MainWindow::on_pushButton_lastPage_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

//簡單鈕轉至開啟新的視窗
void MainWindow::on_pushButton_easy_clicked()
{
    this->hide();

    GameWindow *gameWindow = new GameWindow(this, 34);
    // MapCreate *easyMap = new MapCreate(this, 30);
    gameWindow->setAttribute(Qt::WA_DeleteOnClose);
    connect(gameWindow, &GameWindow::destroyed, [this](){
        this->show();
    });

    gameWindow->show();
}



void MainWindow::on_pushButton_middle_clicked()
{
    this->hide();

    GameWindow *gameWindow = new GameWindow(this, 64);
    // MapCreate *easyMap = new MapCreate(this, 30);
    gameWindow->setAttribute(Qt::WA_DeleteOnClose);
    connect(gameWindow, &GameWindow::destroyed, [this](){
        this->show();
    });

    gameWindow->show();
}


void MainWindow::on_pushButton_difficulty_clicked()
{

}

