#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Number1Line_textChanged(const QString &arg1)
{
    luku1 = arg1.toDouble();
}


void MainWindow::on_Number2Line_textChanged(const QString &arg1)
{
    luku2 = arg1.toDouble();
}

void MainWindow::on_ADD_clicked()
{
    result = luku1 + luku2;

    ui->EmptyLabel->setNum(result);
}

void MainWindow::on_SUB_clicked()
{
    result = luku1 - luku2;

    ui->EmptyLabel->setNum(result);
}


void MainWindow::on_MUL_clicked()
{
    result = luku1 * luku2;

    ui->EmptyLabel->setNum(result);
}


void MainWindow::on_DIV_clicked()
{
    result = luku1 / luku2;

    ui->EmptyLabel->setNum(result);
}

