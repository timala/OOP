#include "mytimetouithreadapp.h"

MyTimeToUIThreadApp::MyTimeToUIThreadApp()
{
    run();
}

void MyTimeToUIThreadApp::run()
{
    for(i=0; i<10; i++){
    qDebug() << QTime::currentTime().toString();
    sleep(1);
    }
    qDebug() << "MyTimeToUIThreadClass run() -function finished!";
}
