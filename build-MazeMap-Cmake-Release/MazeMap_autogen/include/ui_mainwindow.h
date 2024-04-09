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
    QLabel *label;
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
        MainWindow->setDocumentMode(false);
        MainWindow->setDockNestingEnabled(false);
        MainWindow->setUnifiedTitleAndToolBarOnMac(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setMouseTracking(false);
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(0, -20, 600, 480));
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        page = new QWidget();
        page->setObjectName("page");
        page->setStyleSheet(QString::fromUtf8("background-image: url(:/images/images/mi.png);"));
        label_Title = new QLabel(page);
        label_Title->setObjectName("label_Title");
        label_Title->setGeometry(QRect(240, 150, 135, 76));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Microsoft JhengHei UI")});
        font1.setPointSize(36);
        font1.setBold(true);
        label_Title->setFont(font1);
        label_Title->setMouseTracking(true);
        label_Title->setStyleSheet(QString::fromUtf8("color: rgb(4, 4, 4);"));
        pushButton_end = new QPushButton(page);
        pushButton_end->setObjectName("pushButton_end");
        pushButton_end->setGeometry(QRect(370, 340, 169, 57));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Microsoft JhengHei UI")});
        font2.setPointSize(24);
        font2.setBold(true);
        pushButton_end->setFont(font2);
        pushButton_end->setStyleSheet(QString::fromUtf8("color: rgb(5, 5, 5);"));
        pushButton_start = new QPushButton(page);
        pushButton_start->setObjectName("pushButton_start");
        pushButton_start->setGeometry(QRect(50, 340, 169, 57));
        pushButton_start->setFont(font2);
        pushButton_start->setStyleSheet(QString::fromUtf8("color: rgb(6, 6, 6);"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        page_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        pushButton_lastPage = new QPushButton(page_2);
        pushButton_lastPage->setObjectName("pushButton_lastPage");
        pushButton_lastPage->setGeometry(QRect(40, 400, 70, 32));
        pushButton_lastPage->setStyleSheet(QString::fromUtf8("color: rgb(226, 34, 213);\n"
"background-color: rgb(241, 241, 241);"));
        pushButton_easy = new QPushButton(page_2);
        pushButton_easy->setObjectName("pushButton_easy");
        pushButton_easy->setGeometry(QRect(230, 50, 129, 81));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Helvetica")});
        font3.setPointSize(36);
        pushButton_easy->setFont(font3);
        pushButton_easy->setStyleSheet(QString::fromUtf8("color: rgb(62, 156, 56);\n"
"background-color: rgb(241, 241, 241);"));
        pushButton_middle = new QPushButton(page_2);
        pushButton_middle->setObjectName("pushButton_middle");
        pushButton_middle->setGeometry(QRect(230, 190, 129, 81));
        pushButton_middle->setFont(font3);
        pushButton_middle->setStyleSheet(QString::fromUtf8("color: rgb(60, 81, 144);\n"
"background-color: rgb(241, 241, 241);"));
        pushButton_difficulty = new QPushButton(page_2);
        pushButton_difficulty->setObjectName("pushButton_difficulty");
        pushButton_difficulty->setGeometry(QRect(230, 320, 129, 81));
        pushButton_difficulty->setFont(font3);
        pushButton_difficulty->setStyleSheet(QString::fromUtf8("color: rgb(61, 10, 15);\n"
"background-color: rgb(241, 241, 241);"));
        label = new QLabel(page_2);
        label->setObjectName("label");
        label->setGeometry(QRect(380, 370, 151, 31));
        label->setStyleSheet(QString::fromUtf8("color: rgb(170, 0, 0);"));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        page_3->setStyleSheet(QString::fromUtf8("background-color: rgb(239, 239, 178);"));
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

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_Title->setText(QCoreApplication::translate("MainWindow", "\350\277\267 \345\256\256", nullptr));
        pushButton_end->setText(QCoreApplication::translate("MainWindow", "\347\265\220\346\235\237\351\201\212\346\210\262", nullptr));
        pushButton_start->setText(QCoreApplication::translate("MainWindow", "\351\226\213\345\247\213\351\201\212\346\210\262", nullptr));
        pushButton_lastPage->setText(QCoreApplication::translate("MainWindow", "\344\270\212\344\270\200\351\240\201", nullptr));
        pushButton_easy->setText(QCoreApplication::translate("MainWindow", "\347\260\241\345\226\256", nullptr));
        pushButton_middle->setText(QCoreApplication::translate("MainWindow", "\344\270\255\347\255\211", nullptr));
        pushButton_difficulty->setText(QCoreApplication::translate("MainWindow", "\345\233\260\351\233\243", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "PS.\346\234\203\350\265\260\345\210\260\346\255\273\346\216\211\345\226\224!!", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
