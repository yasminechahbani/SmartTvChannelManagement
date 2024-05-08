/********************************************************************************
** Form generated from reading UI file 'chatequip.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATEQUIP_H
#define UI_CHATEQUIP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_chatequip
{
public:
    QWidget *centralwidget;
    QTableView *tableView_notif;
    QPushButton *Display;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *chatequip)
    {
        if (chatequip->objectName().isEmpty())
            chatequip->setObjectName(QStringLiteral("chatequip"));
        chatequip->resize(800, 600);
        centralwidget = new QWidget(chatequip);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tableView_notif = new QTableView(centralwidget);
        tableView_notif->setObjectName(QStringLiteral("tableView_notif"));
        tableView_notif->setGeometry(QRect(90, 80, 621, 381));
        tableView_notif->setStyleSheet(QStringLiteral(""));
        Display = new QPushButton(centralwidget);
        Display->setObjectName(QStringLiteral("Display"));
        Display->setGeometry(QRect(570, 400, 131, 41));
        Display->setStyleSheet(QLatin1String("QPushButton{color: rgb(107, 189, 171);\n"
"border-radius:20px;\n"
"border: 1px solid rgb(107, 189, 171);\n"
"font: 75 12pt \"8514oem\";\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"    background: rgb(107, 189, 171);\n"
"	color:white;\n"
"	\n"
"}\n"
""));
        chatequip->setCentralWidget(centralwidget);
        menubar = new QMenuBar(chatequip);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        chatequip->setMenuBar(menubar);
        statusbar = new QStatusBar(chatequip);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        chatequip->setStatusBar(statusbar);

        retranslateUi(chatequip);

        QMetaObject::connectSlotsByName(chatequip);
    } // setupUi

    void retranslateUi(QMainWindow *chatequip)
    {
        chatequip->setWindowTitle(QApplication::translate("chatequip", "MainWindow", Q_NULLPTR));
        Display->setText(QApplication::translate("chatequip", "Display", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class chatequip: public Ui_chatequip {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATEQUIP_H
