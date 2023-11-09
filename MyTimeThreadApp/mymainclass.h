#ifndef MYMAINCLASS_H
#define MYMAINCLASS_H

#include <QObject>
#include"mytimetofilethreadapp.h"
#include"mytimetouithreadapp.h"

class MyMainClass : public QObject
{
    Q_OBJECT
public:
    explicit MyMainClass(QObject *parent = nullptr);
    ~MyMainClass();
private:
    MyTimeToUIThreadApp *objectMyTimeToUi;
    MyTimeToFileThreadApp *objectMyTimeToFile;
signals:
    void finishProgram();
public slots:
    void mySlotFunction();
};

#endif // MYMAINCLASS_H
