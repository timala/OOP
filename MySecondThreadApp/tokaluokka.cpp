#include "tokaluokka.h"

TokaLuokka::TokaLuokka()
{

}

void TokaLuokka::run()
{
    for(short i=0 ; i<10 ; i++){
        qDebug() << "Second thread = " << i;
        msleep(1000);
    }
    qDebug() << "Second thread finished";
}
