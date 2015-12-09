TEMPLATE = subdirs

app.depends = lib
test.depends = lib

SUBDIRS += \
    app \
    lib \
    set \
    appCPP \
    libCPP \
    test

