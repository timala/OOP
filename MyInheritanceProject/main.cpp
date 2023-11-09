#include"devicebaseclass.h"
#include"mydeviceui.h"

int main()
{
    MyDeviceUI *objectMyDeviceUI;
    objectMyDeviceUI = new MyDeviceUI;
    objectMyDeviceUI->uiShowMenu();

    delete objectMyDeviceUI;
    objectMyDeviceUI = nullptr;
}
