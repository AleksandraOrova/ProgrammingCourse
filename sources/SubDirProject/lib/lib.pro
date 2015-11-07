#-------------------------------------------------
#
# Project created by QtCreator 2015-10-22T14:49:24
#
#-------------------------------------------------

QT       -= core gui

TARGET = lib
TEMPLATE = lib
CONFIG += staticlib
QMAKE_CFLAGS += -std=c99

SOURCES += \
    arrays.c \
    dateCalc.c \
    factorization.c \
    quadEquation.c \
    bank.c \
    home.c

HEADERS += \
    arrays.h \
    dateCalc.h \
    factorization.h \
    quadEquation.h \
    bank.h \
    home.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}
