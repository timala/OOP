#include "mythread.h"
#include "mainwindow.h"


MyThread::MyThread(MainWindow *mainWnd)
{
    objectMainWindow = mainWnd;
}

void MyThread::run()
{
    objectQTimer = new QTimer;
    connect(objectQTimer, SIGNAL(timeout()),
            this, SLOT(sendDataToUi()));
    objectQTimer->start(1000);
    exec();
    delete objectQTimer;
    objectQTimer = nullptr;
}

void MyThread::sendDataToUi()
{
    objectMainWindow->updateListWidgetShowThreadData("Thread is working...");
}
