#ifndef MYUICLASS_H
#define MYUICLASS_H

#include "mycalculationclass.h"

#include<iostream>

using namespace std;

class MyUiClass
{
public:
    MyUiClass();
    ~MyUiClass();
    void inputNumbers();
    void showMenu();
    void showResult(char merkki);
private:
    MyCalculationClass *olioMyCalculationClass;
    double eka, toka, tulos;
};

#endif // MYUICLASS_H
