#-------------------------------------------------
#
# Project created by QtCreator 2015-12-09T22:54:18
#
#-------------------------------------------------

QT       -= core gui

TARGET = appCPP
TEMPLATE = lib
CONFIG += staticlib

SOURCES += bank.cpp

HEADERS += bank.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}
