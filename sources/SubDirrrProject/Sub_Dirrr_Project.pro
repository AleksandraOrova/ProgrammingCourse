TEMPLATE = subdirs

app.depends = lib
test.depends = lib

# Нужно указать зависимости для проектов, которые вы создали вновь

SUBDIRS += \
    app \
    lib \
    set \
    appCPP \
    libCPP \
    test \
    testCPP

