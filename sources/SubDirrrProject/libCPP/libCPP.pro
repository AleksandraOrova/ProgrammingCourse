#-------------------------------------------------
#
# Project created by QtCreator 2015-12-09T00:12:13
#
#-------------------------------------------------

QT       -= core gui

TARGET = libCPP
TEMPLATE = lib
CONFIG += staticlib

SOURCES += \
    bankcpp.cpp \
    cmtoinchcpp.cpp \
    matrixcpp.cpp \
    stringscpp.cpp \
    rectangle.cpp

HEADERS += \
    bankcpp.h \
    cmtoinchcpp.h \
    matrixcpp.h \
    stringscpp.h \
    rectangle.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}
