#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDialog>
#include <QWidget>
#include <QMessageBox>
#include <QCloseEvent>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_end_clicked();

    void on_pushButton_start_clicked();

    void on_pushButton_lastPage_clicked();

    void on_pushButton_easy_clicked();

    void on_pushButton_difficulty_clicked();

    void on_pushButton_middle_clicked();

private:
    Ui::MainWindow *ui;

protected:
    void closeEvent(QCloseEvent *event) override;
};
#endif // MAINWINDOW_H
