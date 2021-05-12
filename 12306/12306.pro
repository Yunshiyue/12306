#-------------------------------------------------
#
# Project created by QtCreator 2020-09-14T14:30:50
#
#-------------------------------------------------

QT       += core gui
QT       += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = 12306
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
    information.cpp \
    main_window.cpp \
    order.cpp \
    station.cpp \
    ticket.cpp \
    train.cpp \
    login.cpp \
    register.cpp \
    train_socket.cpp \
    change_password_dialog.cpp \
    add_passenger_dialog.cpp \
    change_passenger_dialog.cpp \
    choose_passenger_dialog.cpp \
    order_dialog.cpp \
    transfer.cpp

HEADERS += \
    information.h \
    login.h \
    main_window.h \
    train.h \
    ticket.h \
    station.h \
    order.h \
    register.h \
    train_socket.h \
    change_password_dialog.h \
    add_passenger_dialog.h \
    change_passenger_dialog.h \
    choose_passenger_dialog.h \
    order_dialog.h \
    transfer.h

FORMS += \
    MainWindow.ui \
    login.ui \
    ticket.ui \
    train.ui \
    station.ui \
    information.ui \
    order.ui \
    register.ui \
    changepassworddialog.ui \
    addpassengerdialog.ui \
    changepassengerdialog.ui \
    choosepassengerdialog.ui \
    orderdialog.ui \
    transfer.ui

OBJECTS_DIR  = tmp
MOC_DIR      = tmp

RESOURCES += \
    qss.qrc
