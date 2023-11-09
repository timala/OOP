#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv); //graafisen sovelluksen prosessin käynnistävä luokka. Olio a.

    MainWindow w; //sovelluksen pääikkunaluokka. Olio w.

    w.show(); //luokan QWidget jäsenfunktio. Näyttää käyttöliittymän näytöllä



    return a.exec();
}
