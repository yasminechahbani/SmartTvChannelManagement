/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginMainWindow
{
public:
    QWidget *centralwidget;
    QWidget *interface_2;
    QFrame *frame;
    QPushButton *loginButton;
    QLineEdit *employeeIdLineEdit;
    QLineEdit *passwordLineEdit;
    QLineEdit *lineEdit_3;
    QLabel *label_53;
    QLabel *label_54;
    QLabel *label_55;
    QLabel *back;
    QLabel *label_4;
    QLabel *label_5;
    QMenuBar *menubar;
    QMenu *menulogin;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LoginMainWindow)
    {
        if (LoginMainWindow->objectName().isEmpty())
            LoginMainWindow->setObjectName(QStringLiteral("LoginMainWindow"));
        LoginMainWindow->resize(961, 594);
        centralwidget = new QWidget(LoginMainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        centralwidget->setStyleSheet(QStringLiteral("back:url(backui.jpg);"));
        interface_2 = new QWidget(centralwidget);
        interface_2->setObjectName(QStringLiteral("interface_2"));
        interface_2->setGeometry(QRect(-20, 0, 981, 611));
        interface_2->setStyleSheet(QLatin1String("#back {\n"
"  background-image: url(backui.jpg);\n"
"  background-position: center;\n"
"  background-repeat: no-repeat;\n"
"  background-size: cover;\n"
"}"));
        frame = new QFrame(interface_2);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(310, 90, 421, 431));
        frame->setStyleSheet(QLatin1String("QFrame\n"
"{\n"
"background: rgba(51, 51, 51, 0.5);;\n"
"border-radius: 15px;\n"
"\n"
"\n"
"}\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        loginButton = new QPushButton(frame);
        loginButton->setObjectName(QStringLiteral("loginButton"));
        loginButton->setGeometry(QRect(20, 310, 361, 61));
        QFont font;
        font.setPointSize(25);
        loginButton->setFont(font);
        loginButton->setStyleSheet(QLatin1String("QPushButton{\n"
"background: white;\n"
"border-radius: 30px;\n"
"}\n"
"QPushButton:hover{\n"
"color:#00000;\n"
"border-radius: 30px;\n"
"background: #136F63;\n"
"}"));
        QIcon icon;
        QString iconThemeName = QStringLiteral("profil");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QStringLiteral("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        loginButton->setIcon(icon);
        employeeIdLineEdit = new QLineEdit(frame);
        employeeIdLineEdit->setObjectName(QStringLiteral("employeeIdLineEdit"));
        employeeIdLineEdit->setGeometry(QRect(20, 130, 381, 61));
        employeeIdLineEdit->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"background:transparent;\n"
"border: none;\n"
"color:#717072;\n"
"border-bottom: 1px solid #717072;\n"
"font: 15pt \"MS Shell Dlg 2\";\n"
"}"));
        passwordLineEdit = new QLineEdit(frame);
        passwordLineEdit->setObjectName(QStringLiteral("passwordLineEdit"));
        passwordLineEdit->setGeometry(QRect(10, 230, 381, 61));
        passwordLineEdit->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"background:transparent;\n"
"border: none;\n"
"color:#717072;\n"
"border-bottom: 1px solid #717072;\n"
"font: 12pt \"MS Shell Dlg 2\";\n"
"}"));
        passwordLineEdit->setEchoMode(QLineEdit::Password);
        lineEdit_3 = new QLineEdit(frame);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(60, 370, 321, 51));
        lineEdit_3->setStyleSheet(QLatin1String("QLineEdit\n"
"{\n"
"background:transparent;\n"
"border: none;\n"
"color:#717072;\n"
"font: 10pt \"MS Shell Dlg 2\";\n"
"}"));
        label_53 = new QLabel(frame);
        label_53->setObjectName(QStringLiteral("label_53"));
        label_53->setGeometry(QRect(150, 10, 211, 61));
        label_53->setStyleSheet(QLatin1String("color:white;\n"
"font: 75 12pt \"8514oem\";\n"
"border: 0px solid white;\n"
"background:transparent;\n"
" border-radius: 10px;\n"
""));
        label_54 = new QLabel(frame);
        label_54->setObjectName(QStringLiteral("label_54"));
        label_54->setGeometry(QRect(10, 100, 211, 61));
        label_54->setStyleSheet(QLatin1String("color:white;\n"
"font: 75 12pt \"8514oem\";\n"
"border: 0px solid white;\n"
"background:transparent;\n"
" border-radius: 10px;\n"
""));
        label_55 = new QLabel(frame);
        label_55->setObjectName(QStringLiteral("label_55"));
        label_55->setGeometry(QRect(0, 190, 211, 61));
        label_55->setStyleSheet(QLatin1String("color:white;\n"
"font: 75 12pt \"8514oem\";\n"
"border: 0px solid white;\n"
"background:transparent;\n"
" border-radius: 10px;\n"
""));
        back = new QLabel(interface_2);
        back->setObjectName(QStringLiteral("back"));
        back->setGeometry(QRect(-20, -10, 991, 611));
        back->setStyleSheet(QLatin1String("background-image: url(:/res/backui.jpg);\n"
""));
        label_4 = new QLabel(interface_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(450, 30, 111, 91));
        label_4->setStyleSheet(QStringLiteral("image:url(:/profil/iconprofil.png);"));
        label_5 = new QLabel(interface_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(170, 60, 56, 16));
        label_5->setStyleSheet(QStringLiteral("image:url(:/iconeprofil /icone.qrc);"));
        back->raise();
        frame->raise();
        label_4->raise();
        label_5->raise();
        LoginMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LoginMainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 961, 26));
        menulogin = new QMenu(menubar);
        menulogin->setObjectName(QStringLiteral("menulogin"));
        LoginMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(LoginMainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        LoginMainWindow->setStatusBar(statusbar);

        menubar->addAction(menulogin->menuAction());
        menulogin->addSeparator();

        retranslateUi(LoginMainWindow);

        QMetaObject::connectSlotsByName(LoginMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *LoginMainWindow)
    {
        LoginMainWindow->setWindowTitle(QApplication::translate("LoginMainWindow", "MainWindow", Q_NULLPTR));
        loginButton->setText(QApplication::translate("LoginMainWindow", "login", Q_NULLPTR));
        employeeIdLineEdit->setText(QString());
        passwordLineEdit->setText(QString());
        passwordLineEdit->setPlaceholderText(QApplication::translate("LoginMainWindow", "Password", Q_NULLPTR));
        lineEdit_3->setText(QApplication::translate("LoginMainWindow", "forget password", Q_NULLPTR));
        label_53->setText(QApplication::translate("LoginMainWindow", "login here", Q_NULLPTR));
        label_54->setText(QApplication::translate("LoginMainWindow", "id", Q_NULLPTR));
        label_55->setText(QApplication::translate("LoginMainWindow", "password", Q_NULLPTR));
        back->setText(QString());
        label_4->setText(QString());
        label_5->setText(QString());
        menulogin->setTitle(QApplication::translate("LoginMainWindow", "login", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LoginMainWindow: public Ui_LoginMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
