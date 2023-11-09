#ifndef MYTIMETOFILETHREADAPP_H
#define MYTIMETOFILETHREADAPP_H

#include<QThread>
#include<QDebug>
#include<QTime>
#include<QFile>

class MyTimeToFileThreadApp : public QThread
{
public:
    MyTimeToFileThreadApp();
protected:
    virtual void run() override;
private:
    QString objectQString;
    QTime objectQTime;
    QFile objectQFile;
    QTextStream objectQTextStream;
    short i;
};

#endif // MYTIMETOFILETHREADAPP_H
