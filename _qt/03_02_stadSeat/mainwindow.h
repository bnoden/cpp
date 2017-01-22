#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    const int costA = 15;
    const int costB = 12;
    const int costC = 9;
    void setTicketsA(int tix) {
        incomeTotal+=tix*costA;
    }
    void setTicketsB(int tix) {
        incomeTotal+=tix*costB;
    }
    void setTicketsC(int tix) {
        incomeTotal+=tix*costC;
    }
    void setIncomeTotal(double total) {
        incomeTotal = total;
    }
    double getIncomeTotal() {
        return incomeTotal;
    }

private slots:
    void on_btnExit_clicked();

    void on_lineA_returnPressed();

    void on_lineB_returnPressed();

    void on_lineC_returnPressed();

    void on_btnClear_clicked();

private:
    Ui::MainWindow *ui;
    int ticketsA = 0, ticketsB = 0, ticketsC = 0;
    double incomeTotal = 0.0;
};

#endif // MAINWINDOW_H
