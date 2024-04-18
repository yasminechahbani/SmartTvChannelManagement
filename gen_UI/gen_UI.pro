QT       += core gui
QT+= network
QT+=sql
QT += charts


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
CONFIG+=console;
CONFIG += c++11



TARGET = gen_UI.pro
TEMPLATE = app
INCLUDEPATH += "C:\Program Files (x86)\OpenSSL-Win32\include"

#LIBS += -LC:\Program Files (x86)\OpenSSL-Win32\lib\MinGW\x86 -lssl -lcrypto




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
    chat.cpp \
    chooseequipforqr.cpp \
    connexion.cpp \
    emailaddress.cpp \
    equipement.cpp \
    main.cpp \
    mainwindow.cpp \
    mimeattachment.cpp \
    mimecontentformatter.cpp \
    mimefile.cpp \
    mimehtml.cpp \
    mimeinlinefile.cpp \
    mimemessage.cpp \
    mimemultipart.cpp \
    mimepart.cpp \
    mimetext.cpp \
    qrgeneratewindow.cpp \
    quotedprintable.cpp \
    returnequipmentwindow.cpp \
    smtp.cpp \
    smtpclient.cpp \
    useequipmentwindow.cpp

HEADERS += \
    SmtpMime \
    availabilitydelegate.h \
    chat.h \
    chooseequipforqr.h \
    connexion.h \
    emailaddress.h \
    equipement.h \
    mainwindow.h \
    mimeattachment.h \
    mimecontentformatter.h \
    mimefile.h \
    mimehtml.h \
    mimeinlinefile.h \
    mimemessage.h \
    mimemultipart.h \
    mimepart.h \
    mimetext.h \
    qrgeneratewindow.h \
    quotedprintable.h \
    returnequipmentwindow.h \
    smtp.h \
    smtpclient.h \
    smtpexports.h \
    useequipmentwindow.h

FORMS += \
    chat.ui \
    chooseequipforqr.ui \
    mainwindow.ui \
    qrgeneratewindow.ui \
    returnequipmentwindow.ui \
    useequipmentwindow.ui
DISTFILES +=\
fonts/Kabel Book BT_0.ttf \
    lineEdit.qss \
    smtp/CMakeLists.txt

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    font.qrc \
    icons_ui_dark.qrc \
    logo.qrc

include(C:\Users\user\OneDrive\Documents\Qt-QrCodeGenerator-main\Qt-QrCodeGenerator.pri)
#include (C:\Users\user\OneDrive\Documents\simple-mail-master\src\SimpleMail)
#include (C:\Users\user\OneDrive\Documents\simple-mail-master\src\simplemail-qtX.pc.in)
#include(C:\Users\user\OneDrive\Documents\SmtpClient-for-Qt-2.0\src\SMTPEmail.pro)

SUBDIRS += \
    smtp/SMTPEmail.pro




win32:CONFIG(release, debug|release): LIBS += -L$$PWD/'../../../../../Program Files (x86)/OpenSSL-Win32/lib/VC/x86/MT/' -llibcrypto
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/'../../../../../Program Files (x86)/OpenSSL-Win32/lib/VC/x86/MT/' -llibcryptod
else:unix: LIBS += -L$$PWD/'../../../../../Program Files (x86)/OpenSSL-Win32/lib/VC/x86/MT/' -llibcrypto

INCLUDEPATH += $$PWD/'../../../../../Program Files (x86)/OpenSSL-Win32/lib/VC/x86/MT'
DEPENDPATH += $$PWD/'../../../../../Program Files (x86)/OpenSSL-Win32/lib/VC/x86/MT'

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/'../../../../../Program Files (x86)/OpenSSL-Win32/lib/VC/x86/MT/' -llibssl
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/'../../../../../Program Files (x86)/OpenSSL-Win32/lib/VC/x86/MT/' -llibssld
else:unix: LIBS += -L$$PWD/'../../../../../Program Files (x86)/OpenSSL-Win32/lib/VC/x86/MT/' -llibssl

INCLUDEPATH += $$PWD/'../../../../../Program Files (x86)/OpenSSL-Win32/lib/VC/x86/MT'
DEPENDPATH += $$PWD/'../../../../../Program Files (x86)/OpenSSL-Win32/lib/VC/x86/MT'
