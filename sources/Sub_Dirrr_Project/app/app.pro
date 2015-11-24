TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.c \
    bank_console_ui.c \
    cm_to_inch_console_ui.c \
    home_console_ui.c \
    matrix_console_ui.c \
    strings_console_ui.c

HEADERS += \
    bank_console_ui.h \
    cm_to_inch_console_ui.h \
    home_console_ui.h \
    matrix_console_ui.h \
    string_console_ui.h

