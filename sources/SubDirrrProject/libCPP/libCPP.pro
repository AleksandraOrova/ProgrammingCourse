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
    homecpp.cpp \
    matrixcpp.cpp \
    stringscpp.cpp

HEADERS += libcpp.h \
    bankcpp.h \
    cmtoinchcpp.h \
    homecpp.h \
    matrixcpp.h \
    stringscpp.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}
