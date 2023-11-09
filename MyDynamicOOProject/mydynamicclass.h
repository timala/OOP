#ifndef MYDYNAMICCLASS_H
#define MYDYNAMICCLASS_H

#include <iostream>

using namespace std;

class MyDynamicClass
{    
public:
    MyDynamicClass();
    ~MyDynamicClass();
    void myDynamicMemberFunction();
    void myFunction();
    void myThisFunction(MyDynamicClass *parameterThis);

private:
    short myMemberVariable;
};

#endif // MYDYNAMICCLASS_H
