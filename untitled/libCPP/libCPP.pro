#-------------------------------------------------
#
# Project created by QtCreator 2015-12-09T22:57:43
#
#-------------------------------------------------

QT       -= core gui

TARGET = libCPP
TEMPLATE = lib
CONFIG += staticlib

SOURCES += bank.cpp

HEADERS += bank.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}
