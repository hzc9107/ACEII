#-------------------------------------------------
#
# Project created by QtCreator 2013-08-01T11:16:31
#
#-------------------------------------------------

QT       += core gui sql
INCLUDEPATH +=  /usr/include/gstreamer-0.10 /usr/include/glib-2.0 /usr/lib/i386-linux-gnu/glib-2.0/include /usr/include/libxml2
LIBS += -lgstinterfaces-0.10 -lgstreamer-0.10 -lgobject-2.0 -lgmodule-2.0 -lgthread-2.0 -lrt -lxml2 -lglib-2.0
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = AceVal
TEMPLATE = app


SOURCES += main.cpp\
        aceval.cpp \
    pipeline.cpp \
    scenedialog.cpp \
    playerdialog.cpp \
    playerscontrol.cpp \
    dbconnection.cpp \
    newdb.cpp \
    dbthread.cpp

HEADERS  += aceval.h \
    pipeline.h \
    scene.h \
    scenedialog.h \
    player.h \
    playerdialog.h \
    playerscontrol.h \
    dbconnection.h \
    newdb.h \
    dbthread.h

FORMS    += aceval.ui \
    scenedialog.ui \
    playerdialog.ui \
    playerscontrol.ui \
    dbconnection.ui \
    newdb.ui
