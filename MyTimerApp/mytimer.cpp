#include "mytimer.h"

MyTimer::MyTimer(QObject *parent) : QObject(parent)
{
    objectQTimer = new QTimer();
    timerCounter = 0;

    connect(objectQTimer, SIGNAL(timeout()), this, SLOT(myTimerSlot()));

    objectQTimer->start(1000);
}

MyTimer::~MyTimer()
{
    qDebug() << "objectQTimer deleted";
}

void MyTimer::myTimerSlot()
{
    qDebug() << "Timer...";
    timerCounter++;

    if (timerCounter==5){
        objectQTimer->stop();

        delete objectQTimer;
        objectQTimer=nullptr;

        emit finishProgram();
    }
}
