#include <iostream>

#include "mydynamicclass.h"

using namespace std;

int main()
{
    MyDynamicClass *objectMyDynamicClass;
    cout << "Osoittimen *objectMyDynamicClass osoite pinossa: " << &objectMyDynamicClass << endl;
    objectMyDynamicClass = new MyDynamicClass;
    objectMyDynamicClass->myDynamicMemberFunction();
    delete objectMyDynamicClass;
    objectMyDynamicClass = nullptr;
    return 0;
}
