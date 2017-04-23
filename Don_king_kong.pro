#-------------------------------------------------
#
# Project created by QtCreator 2017-03-01T10:04:49
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Don_king_kong
TEMPLATE = app


SOURCES += main.cpp\
    model.cpp \
    control.cpp \
    view.cpp \
    king.cpp \
    banane.cpp

HEADERS  += \
    model.h \
    control.h \
    view.h \
    king.h \
    banane.h

FORMS    += \
    view.ui

RESOURCES += \
    ressource.qrc
