#include <iostream>

using namespace std;

int main()
{
    short kokonaislukuYksi, kokonaislukuKaksi;
    short *osoitinmuuttuja = nullptr;
    kokonaislukuYksi =1;
    kokonaislukuKaksi = 2;
    osoitinmuuttuja = &kokonaislukuYksi;
    kokonaislukuKaksi = *osoitinmuuttuja; // Kun halutaan käsitellä muistiosoitteessa olevaa tietoa, käytetään osoitus-operaattoria  *
    cout << "kokonaislukuYksi arvo: " << kokonaislukuYksi << endl;
    cout << "kokonaislukuKaksi arvo: " << kokonaislukuKaksi << endl;
    cout << "osoitinmuuttuja osoittaa arvoon: " << *osoitinmuuttuja << endl;
    return 0;
}
