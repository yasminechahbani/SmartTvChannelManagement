
QT       += core gui
QT += sql
QT += charts
QT += printsupport
QT += uitools

QT += serialport

CONFIG+=console;
CONFIG += c++11
QT += network
CONFIG += linkstaticlib

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets


TEMPLATE = app




#INCLUDEPATH += "C:\Program Files (x86)\OpenSSL-Win32\include"

################LIBS += -LC:\Program Files (x86)\OpenSSL-Win32\lib\MinGW\x86 -lssl -lcrypto


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
    QSortFilterProxyModel.cpp \
    emissionmainwindow.cpp \
    emissionmainwindowdarkmode.cpp \
    main.cpp \
    emission.cpp\
    connexion.cpp\
    smtp.cpp \
    sponsor.cpp \
    sponsormain.cpp \
    sponsormainwindow.cpp \
    sponsormainwindow_fr.cpp\
    Employeemainwindow.cpp \
    employee.cpp \
#yasmine
    chatequip.cpp \
    chooseequipforqr.cpp \
    emailaddress.cpp \
    equip_mainwindow.cpp \
    equipement.cpp \
    qrgeneratewindow.cpp \
    quotedprintable.cpp \
    returnequipmentwindow.cpp \
    smtpclient.cpp \
    useequipmentwindow.cpp\
#emna
    arduino.cpp \
    calendrier.cpp \
    chat.cpp \
    chatserver.cpp \
    dialog.cpp \
    form.cpp \
    invites.cpp \
    invitesmainwindow.cpp \
    supp.cpp\
    mainwindow.cpp

HEADERS += \
    emission.h\
    connexion.h\
    emissionmainwindow.h \
    emissionmainwindowdarkmode.h \
    smtp.h \
    sponsor.h \
    sponsormainwindow.h \
    sponsormainwindow_fr.h\
    Employeemainwindow.h \
    employee.h\
    arduino.h \
    calendrier.h \
    chat.h \
    chatserver.h \
    dialog.h \
    form.h \
    invites.h \
    invitesmainwindow.h \
    supp.h\
    SmtpMime \
    availabilitydelegate.h \
    chatequip.h \
    chooseequipforqr.h \
    emailaddress.h \
    equip_mainwindow.h \
    equipement.h \
    qrgeneratewindow.h \
    quotedprintable.h \
    returnequipmentwindow.h \
    smtpclient.h \
    smtpexports.h \
    useequipmentwindow.h\
    mainwindow.h


FORMS += \
    emissionmainwindow.ui \
    emissionmainwindowdarkmode.ui \
    sponsormainwindow.ui \
    sponsormainwindow_fr.ui\
    Employeemainwindow.ui\
    calendrier.ui \
    chat.ui \
    dialog.ui \
    form.ui \
    invitesmainwindow.ui \
    modif.ui \
    supp.ui\
    chatequip.ui \
    chooseequipforqr.ui \
    equip_mainwindow.ui \
    qrgeneratewindow.ui \
    returnequipmentwindow.ui \
    useequipmentwindow.ui\
    login.ui



DISTFILES +=\
fonts/Kabel Book BT_0.ttf \
    lineEdit.qss \
    smtp/CMakeLists.txt \
    usermanagment/backui.jpg


include(C:\Users\USER\Downloads\Qt-QrCodeGenerator-main\Qt-QrCodeGenerator-main\Qt-QrCodeGenerator.pri)

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target


RESOURCES += \
    font.qrc \
    icons_ui_dark.qrc \
    logo.qrc\
    back.qrc \
    icone.qrc \
    iconeprofil.qrc
SUBDIRS += \
    smtp/SMTPEmail.pro


#include "C:\Users\emnaa\Desktop\integration - Copie\Qt-QrCodeGenerator-main\Qt-QrCodeGenerator.pro"

#win32:CONFIG(release, debug|release): LIBS += -L$$PWD/'../../../../../Program Files (x86)/OpenSSL-Win32/lib/VC/x86/MT/' -llibcrypto
#else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/'../../../../../Program Files (x86)/OpenSSL-Win32/lib/VC/x86/MT/' -llibcryptod
#else:unix: LIBS += -L$$PWD/'../../../../../Program Files (x86)/OpenSSL-Win32/lib/VC/x86/MT/' -llibcrypto

#INCLUDEPATH += $$PWD/'../../../../../Program Files (x86)/OpenSSL-Win32/lib/VC/x86/MT'
#DEPENDPATH += $$PWD/'../../../../../Program Files (x86)/OpenSSL-Win32/lib/VC/x86/MT'

#win32:CONFIG(release, debug|release): LIBS += -L$$PWD/'../../../../../Program Files (x86)/OpenSSL-Win32/lib/VC/x86/MT/' -llibssl
#else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/'../../../../../Program Files (x86)/OpenSSL-Win32/lib/VC/x86/MT/' -llibssld
#else:unix: LIBS += -L$$PWD/'../../../../../Program Files (x86)/OpenSSL-Win32/lib/VC/x86/MT/' -llibssl

#INCLUDEPATH += $$PWD/'../../../../../Program Files (x86)/OpenSSL-Win32/lib/VC/x86/MT'
#DEPENDPATH += $$PWD/'../../../../../Program Files (x86)/OpenSSL-Win32/lib/VC/x86/MT'





#include (C:\Users\user\OneDrive\Documents\simple-mail-master\src\SimpleMail)
#include (C:\Users\user\OneDrive\Documents\simple-mail-master\src\simplemail-qtX.pc.in)
#include(C:\Users\user\OneDrive\Documents\SmtpClient-for-Qt-2.0\src\SMTPEmail.pro)




