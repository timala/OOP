#include "mydynamicclass.h"

MyDynamicClass::MyDynamicClass()
{
    myMemberVariable = 15;
    cout << "Olio luotu." << endl;
    cout << "Luokan jasenmuuttujan myMemberVariable muistiosoite kekomuistissa: " << &myMemberVariable << endl;
    cout << "Olion ensimmainen muistipaikka on: " << this << endl;
}

MyDynamicClass::~MyDynamicClass()
{
    myMemberVariable = 0;
    cout << "Olio tuhottu." << endl;
}
void MyDynamicClass::myDynamicMemberFunction(){
    cout << "Ollaan funktiossa myDynamicMemberFunction" << endl;
    cout << "Jasenmuuttujan myMemberVariable arvo:" << myMemberVariable << " ja muistipaikka: "
    << &myMemberVariable << endl;
    this->myFunction(); // funktiota voidaan kutsua myös ilman this osoitinta.
    this->myThisFunction(this);
}
void MyDynamicClass::myFunction(){
    cout << "Hello" << endl;
}
void MyDynamicClass::myThisFunction(MyDynamicClass *parameterThis){
    cout << "parameterThis muistiosoite: " << parameterThis << endl;
    parameterThis->myFunction();
}
