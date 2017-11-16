#-------------------------------------------------
#
# Project created by QtCreator 2017-11-16T08:55:22
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
QT += webkit

TARGET = ControlMachine
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    ModuleGui.cpp \
    test.cpp \
    mylabel.cpp

HEADERS  += mainwindow.h \
    ModuleGui.h \
    test.h \
    mylabel.h

FORMS    += mainwindow.ui \
    test.ui

RESOURCES += \
    icon_image.qrc
