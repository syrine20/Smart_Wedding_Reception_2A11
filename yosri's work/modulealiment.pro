QT       += core gui multimedia
QT       += gui widgets
QT       += sql
QT       += printsupport
QT       += network
QT       += serialport
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11
CONFIG += qaxcontainer

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

INCLUDEPATH += /Users/ghaba/Desktop/Projet Qt/modulealiment
INCLUDEPATH += $$quote("C:\OpenSSL-Win32\include")

ICON = wedding_rings.png

SOURCES += \
    arduino.cpp \
    article.cpp \
    commande.cpp \
    connection.cpp \
    excelexporthelper.cpp \
    fenetre.cpp \
    main.cpp \
    mainwindow.cpp \
    patisserie.cpp \
    traiteur.cpp

HEADERS += \
    arduino.h \
    article.h \
    commande.h \
    connection.h \
    excelexporthelper.h \
    fenetre.h \
    mainwindow.h \
    patisserie.h \
    traiteur.h

FORMS += \
    fenetre.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    src.qrc

DISTFILES += \
    resources/bakery elemenstos patt.svg \
    resources/down.png \
    resources/pastries patt.jpg \
    resources/up.png
