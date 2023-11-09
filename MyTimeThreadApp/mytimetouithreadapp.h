#ifndef MYTIMETOUITHREADAPP_H
#define MYTIMETOUITHREADAPP_H

#include<QThread>
#include<QDebug>
#include<QTime>

class MyTimeToUIThreadApp : public QThread
{
public:
    MyTimeToUIThreadApp();
protected:
    virtual void run() override;
private:
    QString objectQString;
    QTime objectQTime;
    short i;
};

#endif // MYTIMETOUITHREADAPP_H
