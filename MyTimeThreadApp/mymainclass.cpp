#include "mymainclass.h"

MyMainClass::MyMainClass(QObject *parent) : QObject(parent)
{
    objectMyTimeToUi = new MyTimeToUIThreadApp;
    objectMyTimeToFile = new MyTimeToFileThreadApp;

    connect(objectMyTimeToFile,SIGNAL(finished()),
            this, SLOT(mySlotFunction()));
}

MyMainClass::~MyMainClass()
{
    delete objectMyTimeToUi;
    delete objectMyTimeToFile;
    objectMyTimeToUi=nullptr;
    objectMyTimeToFile=nullptr;
}

void MyMainClass::mySlotFunction()
{
    emit finishProgram();
}
