#-------------------------------------------------
#
# Project created by QtCreator 2015-12-09T00:05:16
#
#-------------------------------------------------

QT       -= core gui

TARGET = appCPP
TEMPLATE = lib
CONFIG += staticlib

SOURCES += \
    bankconsoleuicpp.cpp \
    cmtoinchconsoleuicpp.cpp \
    homeconsoleuicpp.cpp \
    matrixconsoleuicpp.cpp \
    stringsconsoleuicpp.cpp

HEADERS += \
    bankconsoleuicpp.h \
    cmtoinchconsoleuicpp.h \
    homeconsoleuicpp.h \
    matrixconsoleuicpp.h \
    stringsconsoleuicpp.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}

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
