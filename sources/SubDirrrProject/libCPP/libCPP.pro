#-------------------------------------------------
#
# Project created by QtCreator 2015-12-09T00:12:13
#
#-------------------------------------------------

QT       -= core gui

TARGET = libCPP
TEMPLATE = lib
CONFIG += staticlib

SOURCES += libcpp.cpp

HEADERS += libcpp.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}
