#include <QCoreApplication>
#include"myreadfileclass.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MyReadFileClass *objectMyReadFileClass = new MyReadFileClass;

    objectMyReadFileClass->readFile();

    QObject::connect(objectMyReadFileClass, SIGNAL(finishProgram()),
                     &a, SLOT(quit()), Qt::QueuedConnection);

    int execReturnValue;
    execReturnValue = a.exec(); //jäädään sanomajonoon odottamaan quit viestiä, jolla poistutaan sanomajonosta

    delete objectMyReadFileClass;
    objectMyReadFileClass = nullptr;

    return execReturnValue;
}
