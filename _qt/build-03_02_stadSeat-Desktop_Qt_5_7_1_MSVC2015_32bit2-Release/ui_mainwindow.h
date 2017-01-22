/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineA;
    QLineEdit *lineB;
    QLineEdit *lineC;
    QLabel *label_4;
    QPushButton *btnClear;
    QPushButton *btnExit;
    QLineEdit *lineTotal;
    QMenuBar *menuBar;
    QMenu *menuStadium_Seating;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(188, 292);
        MainWindow->setStyleSheet(QLatin1String("background-color: rgb(93, 126, 176);\n"
"color: rgb(255, 255, 255);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(11, 11, 71, 22));
        label->setStyleSheet(QLatin1String("\n"
"font: 75 14pt \"Consolas\";"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(11, 40, 70, 22));
        label_2->setStyleSheet(QLatin1String("\n"
"font: 75 14pt \"Consolas\";"));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(11, 69, 70, 22));
        label_3->setStyleSheet(QLatin1String("\n"
"font: 75 14pt \"Consolas\";"));
        lineA = new QLineEdit(centralWidget);
        lineA->setObjectName(QStringLiteral("lineA"));
        lineA->setGeometry(QRect(89, 11, 88, 22));
        lineA->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(255, 0, 4);"));
        lineB = new QLineEdit(centralWidget);
        lineB->setObjectName(QStringLiteral("lineB"));
        lineB->setGeometry(QRect(89, 40, 88, 22));
        lineB->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(255, 0, 4);"));
        lineC = new QLineEdit(centralWidget);
        lineC->setObjectName(QStringLiteral("lineC"));
        lineC->setGeometry(QRect(89, 69, 88, 22));
        lineC->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(255, 0, 4);"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(11, 98, 16, 24));
        label_4->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 16pt \"Consolas\";"));
        btnClear = new QPushButton(centralWidget);
        btnClear->setObjectName(QStringLiteral("btnClear"));
        btnClear->setGeometry(QRect(20, 150, 151, 31));
        btnClear->setStyleSheet(QLatin1String("background-color: rgb(255, 0, 4);\n"
"font: 75 12pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        btnExit = new QPushButton(centralWidget);
        btnExit->setObjectName(QStringLiteral("btnExit"));
        btnExit->setGeometry(QRect(20, 190, 151, 31));
        btnExit->setStyleSheet(QLatin1String("background-color: rgb(255, 0, 4);\n"
"font: 75 12pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        lineTotal = new QLineEdit(centralWidget);
        lineTotal->setObjectName(QStringLiteral("lineTotal"));
        lineTotal->setGeometry(QRect(30, 100, 151, 31));
        lineTotal->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"color: rgb(255, 0, 4);"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 188, 20));
        menuStadium_Seating = new QMenu(menuBar);
        menuStadium_Seating->setObjectName(QStringLiteral("menuStadium_Seating"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuStadium_Seating->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Class A", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Class B", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Class C", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "$", Q_NULLPTR));
        btnClear->setText(QApplication::translate("MainWindow", "CLEAR", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnExit->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Submit and exit.</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnExit->setText(QApplication::translate("MainWindow", "OK", Q_NULLPTR));
        menuStadium_Seating->setTitle(QApplication::translate("MainWindow", "Stadium Seating", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
