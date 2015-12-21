TEMPLATE = subdirs

app.depends = lib
test.depends = lib

appCPP.depends = libCPP

SUBDIRS += \
    app \
    lib \
    set \
    appCPP \
    libCPP \
    test \
    testCPP

