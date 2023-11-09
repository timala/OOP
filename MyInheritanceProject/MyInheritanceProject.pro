TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    mydeviceui.cpp \
    devicedisplay.cpp \
    devicebaseclass.cpp \
    devicemouse.cpp \
    devicetouchpad.cpp

HEADERS += \
    mydeviceui.h \
    devicedisplay.h \
    devicebaseclass.h \
    devicemouse.h \
    devicetouchpad.h
