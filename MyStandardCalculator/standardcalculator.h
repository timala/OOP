#ifndef STANDARDCALCULATOR_H
#define STANDARDCALCULATOR_H

#include<iostream>
using namespace std;

class StandardCalculator
{
public:
    void summa();
    void erotus();
    void tulo();
    void osamaara();
    void print(char merkki);
private:
    double lukuYksi = 10;
    double lukuKaksi = 5;
    double tulos;
};

#endif // STANDARDCALCULATOR_H
