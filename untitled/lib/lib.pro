#-------------------------------------------------
#
# Project created by QtCreator 2015-12-09T21:25:42
#
#-------------------------------------------------

QT       -= gui

TARGET = lib
TEMPLATE = lib
CONFIG += staticlib

SOURCES += lib.cpp

HEADERS += lib.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}
