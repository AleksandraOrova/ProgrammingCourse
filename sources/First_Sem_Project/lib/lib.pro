#-------------------------------------------------
#
# Project created by QtCreator 2015-11-21T00:21:05
#
#-------------------------------------------------

QT       -= core gui

TARGET = lib
TEMPLATE = lib
CONFIG += staticlib

SOURCES += lib.cpp

HEADERS += lib.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}
