#include "mycalculationclass.h"

MyCalculationClass::MyCalculationClass()
{

}
MyCalculationClass::~MyCalculationClass()
{

}
double MyCalculationClass::summa(double ekaLuku, double tokaLuku)
{
    return ekaLuku+tokaLuku;
}
double MyCalculationClass::erotus(double ekaLuku, double tokaLuku){
    return ekaLuku-tokaLuku;
}
double MyCalculationClass::osamaara(double ekaLuku, double tokaLuku){
    return ekaLuku/tokaLuku;
}
double MyCalculationClass::tulo(double ekaLuku, double tokaLuku){
    return ekaLuku*tokaLuku;
}
