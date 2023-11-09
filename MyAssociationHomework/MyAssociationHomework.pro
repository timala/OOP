TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    controller.cpp \
    view.cpp \
    button.cpp

HEADERS += \
    controller.h \
    view.h \
    button.h
