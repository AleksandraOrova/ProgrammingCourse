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
    strings_console_ui.h


win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../lib/release/ -llib
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../lib/debug/ -llib
else:unix: LIBS += -L$$OUT_PWD/../lib/ -llib

INCLUDEPATH += $$PWD/../lib
DEPENDPATH += $$PWD/../lib

win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../lib/release/liblib.a
else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../lib/debug/liblib.a
else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../lib/release/lib.lib
else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../lib/debug/lib.lib
else:unix: PRE_TARGETDEPS += $$OUT_PWD/../lib/liblib.a
