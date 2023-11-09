#include "mytimetofilethreadapp.h"

MyTimeToFileThreadApp::MyTimeToFileThreadApp()
{
    run();
}

void MyTimeToFileThreadApp::run()
{
    for(i=0; i<10; i++){
        QFile file("C:/Users/tiina/AppData/Local/Temp/myTime.txt");
        if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
               return;

        QTextStream out(&file);
        out << QTime::currentTime().toString();

        qDebug() << "Write operation " << i << " done!";

        sleep(2);
    }
    qDebug() << "MyTimeToFileThreadClass run() -function finished!";
}
