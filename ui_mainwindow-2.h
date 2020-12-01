/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QPushButton *redPaint;
    QPushButton *bluePaint;
    QPushButton *purplePaint;
    QPushButton *yellowPaint;
    QPushButton *greenPaint;
    QPushButton *eraser;
    QPushButton *brush;
    QPushButton *smileEmoji;
    QPushButton *cryEmoji;
    QPushButton *excitedEmoji;
    QPushButton *surprisedEmoji;
    QPushButton *disappointedEmoji;
    QPushButton *medium;
    QPushButton *large;
    QPushButton *small;
    QLabel *leftClick;
    QLabel *rightClick;
    QLabel *leftClick_3;
    QLabel *label;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1167, 756);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 500, 1161, 191));
        groupBox->setStyleSheet(QString::fromUtf8("background-color: grey;\n"
"border-radius: 20px;\n"
"border: 2px solid black;"));
        redPaint = new QPushButton(groupBox);
        redPaint->setObjectName(QString::fromUtf8("redPaint"));
        redPaint->setGeometry(QRect(840, 10, 71, 91));
        redPaint->setStyleSheet(QString::fromUtf8("border-image: url(:/Red Paint.png);"));
        bluePaint = new QPushButton(groupBox);
        bluePaint->setObjectName(QString::fromUtf8("bluePaint"));
        bluePaint->setGeometry(QRect(960, 10, 71, 91));
        bluePaint->setStyleSheet(QString::fromUtf8("border-image: url(:/Blue Paint.png);"));
        purplePaint = new QPushButton(groupBox);
        purplePaint->setObjectName(QString::fromUtf8("purplePaint"));
        purplePaint->setGeometry(QRect(900, 80, 71, 91));
        purplePaint->setStyleSheet(QString::fromUtf8("border-image: url(:/BlackPaint.png);"));
        yellowPaint = new QPushButton(groupBox);
        yellowPaint->setObjectName(QString::fromUtf8("yellowPaint"));
        yellowPaint->setGeometry(QRect(1080, 10, 71, 91));
        yellowPaint->setStyleSheet(QString::fromUtf8("border-image: url(:/Yellow Paint.png);"));
        greenPaint = new QPushButton(groupBox);
        greenPaint->setObjectName(QString::fromUtf8("greenPaint"));
        greenPaint->setGeometry(QRect(1020, 80, 71, 91));
        greenPaint->setStyleSheet(QString::fromUtf8("border-image: url(:/GreenPaint.png);"));
        eraser = new QPushButton(groupBox);
        eraser->setObjectName(QString::fromUtf8("eraser"));
        eraser->setGeometry(QRect(420, 70, 101, 121));
        eraser->setStyleSheet(QString::fromUtf8("border-image: url(:/Eraser.png);\n"
"background: transparent;\n"
""));
        brush = new QPushButton(groupBox);
        brush->setObjectName(QString::fromUtf8("brush"));
        brush->setGeometry(QRect(40, 10, 61, 81));
        brush->setStyleSheet(QString::fromUtf8("border-image: url(:/Pencil.png);\n"
"background: transparent;\n"
""));
        smileEmoji = new QPushButton(groupBox);
        smileEmoji->setObjectName(QString::fromUtf8("smileEmoji"));
        smileEmoji->setGeometry(QRect(600, 10, 71, 111));
        smileEmoji->setStyleSheet(QString::fromUtf8("border-image: url(:/HappyEmoji.png);\n"
"background: transparent;"));
        cryEmoji = new QPushButton(groupBox);
        cryEmoji->setObjectName(QString::fromUtf8("cryEmoji"));
        cryEmoji->setGeometry(QRect(550, 80, 71, 111));
        cryEmoji->setStyleSheet(QString::fromUtf8("border-image: url(:/CryingEmoji.png);\n"
"background: transparent;"));
        excitedEmoji = new QPushButton(groupBox);
        excitedEmoji->setObjectName(QString::fromUtf8("excitedEmoji"));
        excitedEmoji->setGeometry(QRect(650, 80, 71, 111));
        excitedEmoji->setStyleSheet(QString::fromUtf8("border-image: url(:/ExcitedEmoji.png);\n"
"background: transparent;"));
        surprisedEmoji = new QPushButton(groupBox);
        surprisedEmoji->setObjectName(QString::fromUtf8("surprisedEmoji"));
        surprisedEmoji->setGeometry(QRect(700, 10, 71, 111));
        surprisedEmoji->setStyleSheet(QString::fromUtf8("border-image: url(:/SurprisedEmoji.png);\n"
"border-radius: 1px;\n"
"background: transparent;\n"
""));
        disappointedEmoji = new QPushButton(groupBox);
        disappointedEmoji->setObjectName(QString::fromUtf8("disappointedEmoji"));
        disappointedEmoji->setGeometry(QRect(750, 80, 71, 111));
        disappointedEmoji->setStyleSheet(QString::fromUtf8("border-image: url(:/DisappointedEmoji.png);\n"
"background: transparent;"));
        medium = new QPushButton(groupBox);
        medium->setObjectName(QString::fromUtf8("medium"));
        medium->setGeometry(QRect(280, 110, 30, 30));
        medium->setStyleSheet(QString::fromUtf8(" background-color: black;\n"
"border:solid;\n"
" border-radius:15px;\n"
" max-width:30px;\n"
" max-height:30px;"));
        large = new QPushButton(groupBox);
        large->setObjectName(QString::fromUtf8("large"));
        large->setGeometry(QRect(310, 30, 92, 92));
        large->setStyleSheet(QString::fromUtf8(" background-color: black;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:45px;\n"
"\n"
" max-width:90px;\n"
" max-height:90px;\n"
" min-width:90px;\n"
" min-height:90px;"));
        small = new QPushButton(groupBox);
        small->setObjectName(QString::fromUtf8("small"));
        small->setGeometry(QRect(250, 150, 12, 12));
        small->setStyleSheet(QString::fromUtf8(" background-color: black;\n"
" border-style: solid;\n"
" border-width:1px;\n"
" border-radius:5px;\n"
"\n"
" max-width:10px;\n"
" max-height:10px;\n"
" min-width:10px;\n"
" min-height:10px;"));
        leftClick = new QLabel(groupBox);
        leftClick->setObjectName(QString::fromUtf8("leftClick"));
        leftClick->setGeometry(QRect(40, 90, 61, 91));
        leftClick->setStyleSheet(QString::fromUtf8("border-image: url(:/LeftClick.png);"));
        rightClick = new QLabel(groupBox);
        rightClick->setObjectName(QString::fromUtf8("rightClick"));
        rightClick->setGeometry(QRect(120, 90, 61, 91));
        rightClick->setStyleSheet(QString::fromUtf8("border-image: url(:/RightClick.png);"));
        leftClick_3 = new QLabel(groupBox);
        leftClick_3->setObjectName(QString::fromUtf8("leftClick_3"));
        leftClick_3->setGeometry(QRect(110, 0, 81, 121));
        leftClick_3->setStyleSheet(QString::fromUtf8("border-image: url(:/EmojiIcon.png); \n"
" background-color: transparent;"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 201, 171));
        label->setStyleSheet(QString::fromUtf8("radius: 20px; \n"
" background-color:transparent"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 1161, 491));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1167, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QString());
        redPaint->setText(QString());
        bluePaint->setText(QString());
        purplePaint->setText(QString());
        yellowPaint->setText(QString());
        greenPaint->setText(QString());
        eraser->setText(QString());
        brush->setText(QString());
        smileEmoji->setText(QString());
        cryEmoji->setText(QString());
        excitedEmoji->setText(QString());
        surprisedEmoji->setText(QString());
        disappointedEmoji->setText(QString());
        medium->setText(QString());
        large->setText(QString());
        small->setText(QString());
        leftClick->setText(QString());
        rightClick->setText(QString());
        leftClick_3->setText(QString());
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
