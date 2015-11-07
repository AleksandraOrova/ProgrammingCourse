TEMPLATE = subdirs

app.depends = lib # Подпроект app зависит от lib
test.depends = lib

SUBDIRS += \
    app \
    lib \
    test
