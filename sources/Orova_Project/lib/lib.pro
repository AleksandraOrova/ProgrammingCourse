#-------------------------------------------------
#
# Project created by QtCreator 2015-11-07T14:26:52
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
    matrix.c \
    string.c

HEADERS += \
    bank.h \
    home.h \
    cm_to_inch.h \
    matrix.h \
    string.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}
