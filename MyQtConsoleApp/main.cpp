#include <QCoreApplication>
#include "myclass.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MyClass objectMyClass;
    objectMyClass.printMyList();
    objectMyClass.printMyStack();
    objectMyClass.printMyDirectoryContent();
    return a.exec();
}
