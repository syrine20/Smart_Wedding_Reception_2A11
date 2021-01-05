
QT       += core gui sql network multimedia multimediawidgets charts serialport
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
TARGET = RHumaines
CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    arduino.cpp \
    connexion.cpp \
    dialog.cpp \
    exportexcelobject.cpp \
    mail.cpp \
    main.cpp \
    mainwindow.cpp \
    personnel.cpp \
    smtp.cpp \
    stat_combo.cpp \
    tache.cpp

HEADERS += \
    arduino.h \
    connexion.h \
    dialog.h \
    exportexcelobject.h \
    mail.h \
    mainwindow.h \
    personnel.h \
    smtp.h \
    stat_combo.h \
    tache.h

FORMS += \
    dialog.ui \
    mail.ui \
    mainwindow.ui \
    stat_combo.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    ressources.qrc
