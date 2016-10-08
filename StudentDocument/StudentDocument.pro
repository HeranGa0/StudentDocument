#-------------------------------------------------
#
# Project created by QtCreator 2015-12-21T05:35:51
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = StudentDocument
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    help.cpp \
    document.cpp \
    inform.cpp \
    warning.cpp \
    about.cpp

HEADERS  += mainwindow.h \
    help.h \
    document.h \
    inform.h \
    warning.h \
    about.h

FORMS    += mainwindow.ui \
    help.ui \
    document.ui \
    inform.ui \
    about.ui \
    warning.ui

RESOURCES +=

DISTFILES +=
