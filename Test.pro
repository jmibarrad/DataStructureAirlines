#-------------------------------------------------
#
# Project created by QtCreator 2014-02-24T15:45:18
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Test
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    boss.cpp \
    client.cpp

HEADERS  += mainwindow.h \
    boss.h \
    client.h

FORMS    += mainwindow.ui \
    boss.ui \
    client.ui

RESOURCES += \
    resources.qrc
