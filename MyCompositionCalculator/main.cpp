#include "myuiclass.h"

int main()
{
    MyUiClass *olio;
    olio = new MyUiClass;
    while(1)
    {
    olio->showMenu();
    }
    delete olio;
    olio=nullptr;
    return 0;
}
