#include "mydeviceui.h"

MyDeviceUI::MyDeviceUI()
{
    objectDeviceDisplay = new DeviceDisplay;
    objectDeviceMouse = new DeviceMouse;
    objectDeviceTouchPad = new DeviceTouchPad;
}
MyDeviceUI::~MyDeviceUI()
{
    delete objectDeviceDisplay;
    objectDeviceDisplay = nullptr;
    delete objectDeviceMouse;
    objectDeviceMouse = nullptr;
    delete objectDeviceTouchPad;
    objectDeviceTouchPad = nullptr;
}
void MyDeviceUI::uiShowMenu()
{
    cout << "DEVICE MENU" << endl
         << "===========" << endl
         << "1: Set Mouse Information" << endl
         << "2: Set Touch Pad Information" << endl
         << "3: Set Display Information" << endl
         << "4: Show Devices Information" << endl
         << "5: Finish" << endl
         << endl
         << "Choose: ";
    short valinta;
    cin >> valinta;
    cout << endl;
    switch (valinta) {
    case 1:
       uiSetMouseInformation();
        break;
    case 2:
       uiSetTouchPadInformation();
        break;
    case 3:
        uiSetDisplayInformation();
        break;
    case 4:
        uiShowDeviceInformation();
        break;
    case 5:
        break;
    default:
        uiShowMenu();
        break;
    }
}
void MyDeviceUI::uiSetMouseInformation()
{
    cout << "SET MOUSE INFORMATION" << endl
         << "=====================" << endl
         << "Set Mouse Device ID: ";
         objectDeviceMouse->setDeviceID();
    cout << "Set Mouse Primary Button: ";
         objectDeviceMouse->setPrimaryButton();
    cout << endl;
    uiShowMenu();
}
void MyDeviceUI::uiSetTouchPadInformation()
{
    cout << "SET TOUCH PAD INFORMATION" << endl
         << "=========================" << endl
         << "Set Touch Pad Device ID: ";
    objectDeviceTouchPad->setDeviceID();
    cout << "Set Touch Pad Sensitivity: ";
    objectDeviceTouchPad->setTouchPadSensitivity();
    cout << endl;
    uiShowMenu();
}
void MyDeviceUI::uiSetDisplayInformation()
{
    cout << "SET DISPLAY INFORMATION" << endl
         << "=======================" << endl
         << "Set Display Device ID: ";
    objectDeviceDisplay->setDeviceID();
    cout << "Set Display Resolution: ";
    objectDeviceDisplay->setDisplayResolution();
    cout << endl;
    uiShowMenu();
}
void MyDeviceUI::uiShowDeviceInformation()
{
    cout << "Mouse Device ID: "<< objectDeviceMouse->getDeviceID();
    cout << endl;
    cout << "Mouse Primary Button: "<< objectDeviceMouse->getPrimaryButton();
    cout << endl;
    cout << "Touch Pad Device ID: " << objectDeviceTouchPad->getDeviceID();
    cout << endl;
    cout << "Touch Pad Sensitivity: " << objectDeviceTouchPad->getTouchPadSensitivity();
    cout << endl;
    cout << "Display Device ID: " << objectDeviceDisplay->getDeviceID();
    cout << endl;
    cout << "Display Resolution: " << objectDeviceDisplay->getDisplayResolution();
    cout << endl;
    cout << endl;
    uiShowMenu();
}
