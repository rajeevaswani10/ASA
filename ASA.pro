#-------------------------------------------------
#
# Project created by QtCreator 2018-09-08T00:49:36
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ASA
TEMPLATE = app


SOURCES += main.cpp\
    loginform.cpp \
    mainui.cpp \
    starttest.cpp \
    service.cpp \
    mytest.cpp \
    dbmanager.cpp \
    progress.cpp \
    report.cpp \
    worker.cpp \
    workerthread.cpp

HEADERS  += \
    loginform.h \
    mainui.h \
    starttest.h \
    service.h \
    mytest.h \
    dbmanager.h \
    progress.h \
    report.h \
    worker.h \
    workerthread.h

FORMS    += \
    starttest.ui \
    loginform.ui \
    mainui.ui \
    progress.ui \
    report.ui

RESOURCES += \
    asa_resource.qrc
