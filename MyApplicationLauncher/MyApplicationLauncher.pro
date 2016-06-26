#-------------------------------------------------
#
# Project created by QtCreator 2016-06-26T17:42:19
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MyApplicationLauncher
TEMPLATE = app


SOURCES += main.cpp\
        Widget.cpp

HEADERS  += Widget.h

FORMS    += Widget.ui

QMAKE_CXXFLAGS += -std=gnu++14
