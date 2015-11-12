#-------------------------------------------------
#
# Project created by QtCreator 2015-11-11T23:48:02
#
#-------------------------------------------------

QT       -= core gui

TARGET = lib
TEMPLATE = lib
CONFIG += staticlib

SOURCES += \
    bank.c \
    home.c \
    cm_to_inch.c \
    matrix.c

HEADERS += \
    bank.h \
    home.h \
    cm_to_inch.h \
    matrix.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}
