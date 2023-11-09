#include "myuiclass.h"

MyUiClass::MyUiClass()
{
    olioMyCalculationClass = new MyCalculationClass;
}
MyUiClass::~MyUiClass()
{

}
void MyUiClass::inputNumbers()
{
    cout << "Anna luku yksi: ";
    cin >> eka;
    cout << "Anna luku kaksi: ";
    cin >> toka;
}
void MyUiClass::showMenu()
{
    int menuVariable;
    cout << "NELILASKIN" << endl;
    cout << "===========" << endl;
    cout << "1 = Summa" << endl;
    cout << "2 = Erotus" << endl <<
            "3 = Tulo" << endl <<
            "4 = Osamaara" << endl <<
            "5 = Lopeta" << endl <<
            "Valitse: ";
    cin >> menuVariable;
    cout << endl;
    if (menuVariable > 0 && menuVariable <5){
    inputNumbers();
    cout << endl;
    switch (menuVariable) {
    case 1:
        tulos = olioMyCalculationClass->summa(eka,toka);
        showResult('+');
        break;
    case 2:
        tulos = olioMyCalculationClass->erotus(eka, toka);
        showResult('-');
        break;
    case 3:
        tulos = olioMyCalculationClass->tulo(eka, toka);
        showResult('*');
        break;
    case 4:
        tulos = olioMyCalculationClass->osamaara(eka,toka);
        showResult('/');
        break;
    }
    }
}
void MyUiClass::showResult(char merkki)
{
    cout << "Laskutoimitus ja tulos:" << endl
         << eka << merkki << toka << "=" << tulos << endl << endl;
}
