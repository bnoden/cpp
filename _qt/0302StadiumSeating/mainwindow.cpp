#include <QtDebug>
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btnExit_clicked()
{
    QApplication::quit();
}

void MainWindow::on_lineA_returnPressed()
{
    //bool ok;
    //QValidator *validator = new QIntValidator(0, 9999);
    //QLineEdit *lineA = new QLineEdit();
    //lineA->setValidator(validator);
    int tixA = ui->lineA->text().toInt();
    MainWindow::setTicketsA(tixA);
    ui->lineTotal->setText(QString::number(getIncomeTotal()));
    this->focusNextChild();
}

void MainWindow::on_lineB_returnPressed()
{
    int tixB = ui->lineB->text().toInt();
    MainWindow::setTicketsB(tixB);
    ui->lineTotal->setText(QString::number(getIncomeTotal()));
    this->focusNextChild();
}

void MainWindow::on_lineC_returnPressed()
{
    int tixC = ui->lineC->text().toInt();
    MainWindow::setTicketsC(tixC);
    ui->lineTotal->setText(QString::number(getIncomeTotal()));
    this->focusNextChild();
}


void MainWindow::on_btnClear_clicked()
{
    ui->lineA->clear();
    ui->lineB->clear();
    ui->lineC->clear();
    MainWindow::setIncomeTotal(0.0);
    ui->lineTotal->setText(QString::number(getIncomeTotal()));
}
