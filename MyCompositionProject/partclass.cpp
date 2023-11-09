#include "partclass.h"

PartClass::PartClass()
{
    cout << "PartClass muodostinfunktio" << endl;
    muuttuja=15;
}
PartClass::~PartClass()
{
    cout << "PartClass tuhoajafunktio" << endl;
}
void PartClass::PartClassfunktio(){
    cout << "Ollaan PartClassfunktiossa" << endl;
}
short PartClass::TokaPartClassfunktio(){
    return muuttuja;
}
