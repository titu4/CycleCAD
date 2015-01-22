#-------------------------------------------------
#
# Project created by QtCreator 2015-01-09T00:22:42
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CycleCAD
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    TrailCalculator/calculator.cpp \
    Bike/bike.cpp \
    Bike/fork.cpp \
    Bike/frame.cpp \
    Bike/tube.cpp \
    Bike/wheel.cpp \
    displaywidget.cpp \
    setparam.cpp

HEADERS  += mainwindow.h \
    TrailCalculator/calculator.h \
    Bike/bike.h \
    Bike/fork.h \
    Bike/frame.h \
    Bike/tube.h \
    Bike/wheel.h \
    displaywidget.h \
    Bike/structs.h \
    setparam.h

FORMS    += mainwindow.ui \
    TrailCalculator/calculator.ui \
    setparam.ui
