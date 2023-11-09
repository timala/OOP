#include "ekaluokka.h"

EkaLuokka::EkaLuokka()
{

}

void EkaLuokka::run()
{
    for(short i=0 ; i<10 ; i++){
        qDebug() << "First thread = " << i;
        msleep(1000);
    }
    qDebug() << "First thread finished";
}
