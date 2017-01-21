#include "tictactoewidget.h"

TicTacToeWidget::TicTacToeWidget(QWidget *parent)
    : QWidget(parent)
{
    QHBoxLayout *layout = new QHBoxLayout(parentWidget);
    QPushButton *button1 = new QPushButton;
    QPushButton *button2 = new QPushButton;
    layout->addWidget(button1);
    layout->addWidget(button2);
    layout->setSpacing(10);
    layout->setMargins(10, 5, 10, 5); // left, top, right, bottom
}

TicTacToeWidget::~TicTacToeWidget()
{

}
