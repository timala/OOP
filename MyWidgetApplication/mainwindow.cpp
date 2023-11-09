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
    ui = nullptr;
}


void MainWindow::on_myFirstPushButton_clicked()
{
    this->close();
}


void MainWindow::on_setPushButton_clicked()
{
    QString myText;

    myText = ui->myLineEdit->text();

    ui->myLabel->setText(myText);
}

