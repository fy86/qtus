QT += core network
QT -= gui

TARGET = testuserver
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    udpserver.cpp

HEADERS += \
    udpserver.h

