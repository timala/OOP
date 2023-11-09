#include <QCoreApplication>

#include"ekaluokka.h"
#include"tokaluokka.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    EkaLuokka * olioEkaLuokka = new EkaLuokka;
    TokaLuokka * olioTokaLuokka = new TokaLuokka;

    olioEkaLuokka->start();
    olioTokaLuokka->start();

    int execReturnValue;
    execReturnValue = a.exec();

    delete olioEkaLuokka;
    olioEkaLuokka = nullptr;
    delete olioTokaLuokka;
    olioTokaLuokka = nullptr;

    return execReturnValue;
}
