#ifndef KOOSTELUOKKA_H
#define KOOSTELUOKKA_H

#include<iostream>
using namespace std;

#include "partclass.h"

class Koosteluokka
{
public:
    Koosteluokka();
    ~Koosteluokka();
private:
    //PartClass olioPartClass;
    PartClass *olioPartClass;
};

#endif // KOOSTELUOKKA_H
