#include <QCoreApplication>
#include "myclass.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MyClass *objectMyClass = new MyClass;

    QObject::connect(objectMyClass, SIGNAL(finishProgram()),
    &a, SLOT(quit()), Qt::QueuedConnection);

    int execReturnValue;

    objectMyClass->raiseFinishProgramSignal();

    execReturnValue = a.exec(); // jaadaan sanomajonoon odottamaan quit viestiä, jolla poistutaan sanomajonosta.

    qDebug() << "Sanomajonosta poistuttu, koska sinne saapui viesti quit()";

    delete objectMyClass;
    objectMyClass = nullptr;

    return execReturnValue;
}
