#include "koosteluokka.h"

Koosteluokka::Koosteluokka()
{
    //olioPartClass.PartClassfunktio();
    cout << "Koosteluokan muodostinfunktio" << endl;
    olioPartClass = new PartClass;
    olioPartClass->PartClassfunktio();
    cout << "Osaluokan partClass muuttujan arvo: " << olioPartClass->TokaPartClassfunktio() << endl;
    //cout << "Osaluokan partClass muuttujan arvo: " << olioPartClass.TokaPartClassfunktio() << endl;
}
Koosteluokka::~Koosteluokka()
{
    cout << "Koosteluokan tuhoajafunktio" << endl;
    delete olioPartClass;
    olioPartClass = nullptr;
}
