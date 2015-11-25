TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.c \
    ../../bananaProject/app/bank_console_ui.c \
    ../../bananaProject/app/cm_to_inch_console_ui.c \
    ../../bananaProject/app/home_console_ui.c \
    ../../bananaProject/app/main.c \
    ../../bananaProject/app/matrix_console_ui.c \
    ../../bananaProject/app/strings_console_ui.c

DISTFILES += \
    ../../bananaProject/app/matrix_console_ui.c.autosave

HEADERS += \
    ../../bananaProject/app/bank_console_ui.h \
    ../../bananaProject/app/cm_to_inch_console_ui.h \
    ../../bananaProject/app/home_console_ui.h \
    ../../bananaProject/app/matrix_console_ui.h

