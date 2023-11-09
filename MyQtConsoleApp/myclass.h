#ifndef MYCLASS_H
#define MYCLASS_H
#include<QDebug>
#include<QString>
#include<QList>
#include<QStack>
#include<QDir>
#include<QFileInfoList>
#include<QFileInfo>

class MyClass
{
public:
    MyClass();
    void printMyList();
    void printMyStack();
    void printMyDirectoryContent();
private:
    QString myObjectQString;
};

#endif // MYCLASS_H
