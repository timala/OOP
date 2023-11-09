#include "standardcalculator.h"

void StandardCalculator::summa(){
    //lukuYksi = 10;
    //lukuKaksi = 5;
    tulos=lukuYksi+lukuKaksi;
    print('+');
}
void StandardCalculator::erotus(){
    tulos=lukuYksi-lukuKaksi;
    print('-');
}
void StandardCalculator::tulo(){
    tulos=lukuYksi*lukuKaksi;
    print('*');
}
void StandardCalculator::osamaara(){
    tulos=lukuYksi/lukuKaksi;
    print('/');
}
void StandardCalculator::print(char merkki){
    cout << lukuYksi << merkki << lukuKaksi << "=" << tulos << endl;
}
