QT       += core gui multimedia multimediawidgets
QT        +=sql
QT       += sql charts
QT       += widgets
QT       += serialport
QT += printsupport
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    arduino.cpp \
    article.cpp \
    ceremonies.cpp \
    commande.cpp \
    connexion.cpp \
    decorateur.cpp \
    exportexcelobject.cpp \
    grade.cpp \
    invites.cpp \
    login.cpp \
    mailt.cpp \
    main.cpp \
    mainwindow.cpp \
    pack.cpp \
    patisserie.cpp \
    personnel.cpp \
    promotion.cpp \
    salle.cpp \
    smtp.cpp \
    stat.cpp \
    tache.cpp \
    traiteur.cpp \
    vente.cpp

HEADERS += \
    arduino.h \
    article.h \
    ceremonies.h \
    commande.h \
    connexion.h \
    decorateur.h \
    exportexcelobject.h \
    grade.h \
    invites.h \
    login.h \
    mailt.h \
    mainwindow.h \
    pack.h \
    patisserie.h \
    personnel.h \
    promotion.h \
    salle.h \
    smtp.h \
    stat.h \
    tache.h \
    traiteur.h \
    vente.h

FORMS += \
    mailt.ui \
    mainwindow.ui \
    stat.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    src.qrc
