#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    objectMyThread = new MyThread(this);
}

MainWindow::~MainWindow()
{
    delete ui;

    if(objectMyThread->isRunning()){
        objectMyThread->quit();
        qDebug() << "Thread ended";
    }

    delete objectMyThread;
    objectMyThread = nullptr;
}

void MainWindow::updateListWidgetShowThreadData(QString listWidgetData)
{
    ui->listWidgetShowData->addItem(listWidgetData);
}


void MainWindow::on_pushButtonStartThread_clicked()
{
    ui->listWidgetShowData->addItem("Thread Started");
    objectMyThread->start();
}


void MainWindow::on_pushButtonStopThread_clicked()
{
    ui->listWidgetShowData->addItem("Thread ended");
    objectMyThread->quit();
}

