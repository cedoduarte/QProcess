#-------------------------------------------------
#
# Project created by QtCreator 2016-06-26T17:30:32
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MyTestApplication
TEMPLATE = app


SOURCES += main.cpp\
        Widget.cpp \
    Arguments.cpp

HEADERS  += Widget.h \
    Arguments.h

FORMS    += Widget.ui

QMAKE_CXXFLAGS += -std=gnu++14
