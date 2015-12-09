#-------------------------------------------------
#
# Project created by QtCreator 2015-12-09T00:05:16
#
#-------------------------------------------------

QT       -= core gui

TARGET = appCPP
TEMPLATE = lib
CONFIG += staticlib

SOURCES += appcpp.cpp

HEADERS += appcpp.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}
