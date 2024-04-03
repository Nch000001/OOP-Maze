/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label_Title;
    QPushButton *pushButton_end;
    QPushButton *pushButton_start;
    QWidget *page_2;
    QPushButton *pushButton_lastPage;
    QPushButton *pushButton_easy;
    QPushButton *pushButton_middle;
    QPushButton *pushButton_difficulty;
    QWidget *page_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setEnabled(true);
        MainWindow->resize(600, 480);
        QFont font;
        font.setFamilies({QString::fromUtf8("Helvetica")});
        font.setPointSize(13);
        MainWindow->setFont(font);
        MainWindow->setAcceptDrops(true);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(111, 255, 237);"));
        MainWindow->setDocumentMode(false);
        MainWindow->setDockNestingEnabled(false);
        MainWindow->setUnifiedTitleAndToolBarOnMac(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setMouseTracking(false);
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, -30, 600, 480));
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        page = new QWidget();
        page->setObjectName("page");
        page->setStyleSheet(QString::fromUtf8(""));
        label_Title = new QLabel(page);
        label_Title->setObjectName("label_Title");
        label_Title->setGeometry(QRect(260, 110, 72, 57));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Academy Engraved LET")});
        font1.setPointSize(36);
        font1.setBold(false);
        label_Title->setFont(font1);
        label_Title->setMouseTracking(true);
        label_Title->setStyleSheet(QString::fromUtf8("color: rgb(4, 4, 4);"));
        pushButton_end = new QPushButton(page);
        pushButton_end->setObjectName("pushButton_end");
        pushButton_end->setGeometry(QRect(230, 280, 126, 50));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Helvetica")});
        font2.setPointSize(24);
        pushButton_end->setFont(font2);
        pushButton_end->setStyleSheet(QString::fromUtf8("color: rgb(5, 5, 5);"));
        pushButton_start = new QPushButton(page);
        pushButton_start->setObjectName("pushButton_start");
        pushButton_start->setGeometry(QRect(230, 210, 126, 54));
        pushButton_start->setFont(font2);
        pushButton_start->setStyleSheet(QString::fromUtf8("color: rgb(6, 6, 6);"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        pushButton_lastPage = new QPushButton(page_2);
        pushButton_lastPage->setObjectName("pushButton_lastPage");
        pushButton_lastPage->setGeometry(QRect(10, 410, 70, 32));
        pushButton_lastPage->setStyleSheet(QString::fromUtf8("color: rgb(226, 34, 213);"));
        pushButton_easy = new QPushButton(page_2);
        pushButton_easy->setObjectName("pushButton_easy");
        pushButton_easy->setGeometry(QRect(250, 60, 102, 67));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Helvetica")});
        font3.setPointSize(36);
        pushButton_easy->setFont(font3);
        pushButton_easy->setStyleSheet(QString::fromUtf8("color: rgb(62, 156, 56);"));
        pushButton_middle = new QPushButton(page_2);
        pushButton_middle->setObjectName("pushButton_middle");
        pushButton_middle->setGeometry(QRect(250, 150, 102, 67));
        pushButton_middle->setFont(font3);
        pushButton_middle->setStyleSheet(QString::fromUtf8("color: rgb(60, 81, 144);"));
        pushButton_difficulty = new QPushButton(page_2);
        pushButton_difficulty->setObjectName("pushButton_difficulty");
        pushButton_difficulty->setGeometry(QRect(250, 240, 102, 67));
        pushButton_difficulty->setFont(font3);
        pushButton_difficulty->setStyleSheet(QString::fromUtf8("color: rgb(61, 10, 15);"));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        stackedWidget->addWidget(page_3);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 600, 24));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_Title->setText(QCoreApplication::translate("MainWindow", "\350\277\267\345\256\256", nullptr));
        pushButton_end->setText(QCoreApplication::translate("MainWindow", "\347\265\220\346\235\237\351\201\212\346\210\262", nullptr));
        pushButton_start->setText(QCoreApplication::translate("MainWindow", "\351\226\213\345\247\213\351\201\212\346\210\262", nullptr));
        pushButton_lastPage->setText(QCoreApplication::translate("MainWindow", "\344\270\212\344\270\200\351\240\201", nullptr));
        pushButton_easy->setText(QCoreApplication::translate("MainWindow", "\347\260\241\345\226\256", nullptr));
        pushButton_middle->setText(QCoreApplication::translate("MainWindow", "\344\270\255\347\255\211", nullptr));
        pushButton_difficulty->setText(QCoreApplication::translate("MainWindow", "\345\233\260\351\233\243", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
