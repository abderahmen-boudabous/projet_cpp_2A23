#-------------------------------------------------
#
# Project created by QtCreator 2018-10-26T21:45:23
#
#-------------------------------------------------

QT       += core gui sql serialport charts
QT       += network printsupport

QT += widgets

QT += printsupport
QT += printsupport






greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Atelier_Connexion
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
    arduino.cpp \
    arduino.cpp \
    client.cpp \
    client.cpp \
    connection.cpp \
    equipement.cpp \
    equipement.cpp \
        main.cpp \
        mainwindow.cpp \
    connection.cpp \
    notification.cpp \
    notification.cpp \
    notification1.cpp \
    notification1.cpp \
    ticket.cpp \
    ticket.cpp

HEADERS += \
    arduino.h \
    arduino.h \
    client.h \
    client.h \
    connection.h \
    equipement.h \
    equipement.h \
        mainwindow.h \
    connection.h \
    notification.h \
    notification.h \
    notification1.h \
    notification1.h \
    ticket.h \
    ticket.h

FORMS += \
        mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
