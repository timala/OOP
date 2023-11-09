#include "standardcalculator.h"

int main()
{
    StandardCalculator *objectStandardCalculator;
    objectStandardCalculator = new StandardCalculator;
    objectStandardCalculator.summa();
    objectStandardCalculator.erotus();
    objectStandardCalculator.tulo();
    objectStandardCalculator.osamaara();
    delete objectStandardCalculator;
    objectStandardCalculator=nullptr;
    return 0;
}
