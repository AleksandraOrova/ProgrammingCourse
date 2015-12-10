#-------------------------------------------------
#
# Project created by QtCreator 2015-12-09T21:25:42
#
#-------------------------------------------------

QT       -= gui

TARGET = lib
TEMPLATE = lib
CONFIG += staticlib

SOURCES += \
    bank.c \
    cm_to_inch.c \
    home.c \
    matrix.c \
    strings.c

HEADERS += \
    bank.h \
    cm_to_inch.h \
    home.h \
    matrix.h \
    strings.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}
