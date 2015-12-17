#-------------------------------------------------
#
# Project created by QtCreator 2015-12-13T21:36:34
#
#-------------------------------------------------

QT       += testlib

QT       -= gui

TARGET = tst_testcpptest
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += tst_testcpptest.cpp
DEFINES += SRCDIR=\\\"$$PWD/\\\"

win32:CONFIG(release, debug|release): LIBS += -L$$OUT_PWD/../libCPP/release/ -llibCPP
else:win32:CONFIG(debug, debug|release): LIBS += -L$$OUT_PWD/../libCPP/debug/ -llibCPP
else:unix: LIBS += -L$$OUT_PWD/../libCPP/ -llibCPP

INCLUDEPATH += $$PWD/../libCPP
DEPENDPATH += $$PWD/../libCPP

win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../libCPP/release/liblibCPP.a
else:win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../libCPP/debug/liblibCPP.a
else:win32:!win32-g++:CONFIG(release, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../libCPP/release/libCPP.lib
else:win32:!win32-g++:CONFIG(debug, debug|release): PRE_TARGETDEPS += $$OUT_PWD/../libCPP/debug/libCPP.lib
else:unix: PRE_TARGETDEPS += $$OUT_PWD/../libCPP/liblibCPP.a
