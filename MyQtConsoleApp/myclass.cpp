#include "myclass.h"

MyClass::MyClass()
{
    int myIntVariable = 15;
    qDebug() << "Hello";
    QString objectQString = "Hello QString";
    qDebug() << objectQString;
    objectQString.setNum(myIntVariable);
    qDebug() << objectQString;
    myObjectQString = "Hello my other QString";

    myObjectQString.chop(3);
    qDebug() << myObjectQString;

    QString x = "free";
    QString y = "dom";
    x.append(y); // x == "freedom“
    qDebug() << x;

}

void MyClass::printMyList()
{
    QList<int> integerList = {1, 2, 3};
    for (int i=0; i<3; i++){
        qDebug() << integerList[i];
    }
    QList<QString> stringList = {"yksi", "kaksi", "kolme"};
    QString str;
    foreach (str, stringList) {
        qDebug() << str;
    }
}

void MyClass::printMyStack()
{
    QStack<int> stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    while(!stack.isEmpty())
        qDebug() << stack.pop();
}

void MyClass::printMyDirectoryContent()
{
        QDir dir;
        dir.setPath("C:/Windows/");
        dir.setFilter(QDir::Files);
        dir.setSorting(QDir::Size | QDir::Reversed);

        QFileInfoList list = dir.entryInfoList();
        QFileInfo fileInfo;
        for (int i = 0; i < list.size(); ++i) {
            fileInfo = list.at(i);
            qDebug() << fileInfo.fileName()<<":"<<fileInfo.size();
        }
}
