#include <QCoreApplication>
#include"mymainclass.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MyMainClass *objectMyMainClass = new MyMainClass;

    QObject::connect(objectMyMainClass, SIGNAL(finishProgram()),
                     &a, SLOT(quit()), Qt::QueuedConnection);

    int returnValue;
    returnValue=a.exec();

    delete objectMyMainClass;
    objectMyMainClass=nullptr;

    return returnValue;
}
