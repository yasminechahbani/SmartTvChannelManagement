QT       += core gui
QT+=sql
QT += charts
QT += network
TARGET = gen_UI.pro
TEMPLATE = app
INCLUDEPATH += "C:\Program Files (x86)\OpenSSL-Win32\include"
INCLUDEPATH += openssl

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
    calendrier.cpp \
    chat.cpp \
    chatserver.cpp \
    connexion.cpp \
    dialog.cpp \
    form.cpp \
    invites.cpp \
    main.cpp \
    mainwindow.cpp \
    supp.cpp

HEADERS += \
    calendrier.h \
    chat.h \
    chatserver.h \
    connexion.h \
    dialog.h \
    form.h \
    invites.h \
    mainwindow.h \
    supp.h

FORMS += \
    calendrier.ui \
    chat.ui \
    dialog.ui \
    form.ui \
    mainwindow.ui \
    modif.ui \
    supp.ui
DISTFILES +=\
fonts/Kabel Book BT_0.ttf

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    font.qrc \
    icons_ui_dark.qrc \
    logo.qrc



win32: LIBS += -L$$PWD/'../../../../Program Files (x86)/OpenSSL-Win32/lib/' -lopenssl

INCLUDEPATH += $$PWD/'../../../../Program Files (x86)/OpenSSL-Win32/include'
DEPENDPATH += $$PWD/'../../../../Program Files (x86)/OpenSSL-Win32/include'

