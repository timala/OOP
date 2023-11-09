#include "myreadfileclass.h"

MyReadFileClass::MyReadFileClass(QObject *parent) : QObject(parent)
{

}

void MyReadFileClass::readFile()
{
    QFile file("C:/Users/Ylläpitäjä/AppData/Local/Temp/myFile.txt");
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text)){
        qDebug() << "ei aukea";
        return;}

    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        qDebug() << line;
    }

    qDebug() << "Suljetaan";

    emit finishProgram();
}
