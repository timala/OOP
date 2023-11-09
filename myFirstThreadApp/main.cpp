#include <QCoreApplication>
#include"myclass.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MyClass objectAMyClass("A");
    MyClass objectBMyClass("B");
    MyClass objectCMyClass("C");

    objectAMyClass.start();
    objectBMyClass.start();
    objectCMyClass.start();

    return a.exec();
}
