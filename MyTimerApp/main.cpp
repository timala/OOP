#include <QCoreApplication>
#include"mytimer.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MyTimer *objectMyTimer = new MyTimer;

    QObject::connect(objectMyTimer,SIGNAL(finishProgram()),
                     &a,SLOT(quit()), Qt::QueuedConnection);


    int execReturnValue;
    execReturnValue=a.exec();

    delete objectMyTimer;
    objectMyTimer=nullptr;

    return execReturnValue;
}
