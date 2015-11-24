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
    matrix.c \
    strings.c \
    matrix.c \
    strings.c \
    matrix.c \
    srtings.c

HEADERS += \
    bank.h \
    home.h \
    cm_to_inch.h \
    matrix.h \
    strings.h \
    matrix.h \
    strings.h \
    matrix.h \
    strings.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}
