/********************************************************************************
** Form generated from reading UI file 'chooseequipforqr.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSEEQUIPFORQR_H
#define UI_CHOOSEEQUIPFORQR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_chooseEquipForQr
{
public:
    QWidget *centralwidget;
    QTableView *tableView;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *chooseEquipForQr)
    {
        if (chooseEquipForQr->objectName().isEmpty())
            chooseEquipForQr->setObjectName(QStringLiteral("chooseEquipForQr"));
        chooseEquipForQr->resize(1033, 572);
        centralwidget = new QWidget(chooseEquipForQr);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(15, 41, 891, 451));
        tableView->setStyleSheet(QStringLiteral(""));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(720, 430, 141, 41));
        pushButton->setStyleSheet(QLatin1String("QPushButton{color:#D00000;\n"
"border-radius:20px;\n"
"border: 1px solid #D00000;\n"
"font: 75 12pt \"8514oem\";\n"
"}\n"
"QPushButton:hover {\n"
"    background: #D00000;\n"
"	color:white;\n"
"	\n"
"	\n"
"}\n"
""));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 380, 471, 91));
        label->setStyleSheet(QLatin1String("font: 75 12pt \"8514oem\";\n"
""));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 390, 631, 131));
        label_2->setStyleSheet(QLatin1String("font: 75 12pt \"8514oem\";\n"
""));
        chooseEquipForQr->setCentralWidget(centralwidget);
        menubar = new QMenuBar(chooseEquipForQr);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1033, 26));
        chooseEquipForQr->setMenuBar(menubar);
        statusbar = new QStatusBar(chooseEquipForQr);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        chooseEquipForQr->setStatusBar(statusbar);

        retranslateUi(chooseEquipForQr);

        QMetaObject::connectSlotsByName(chooseEquipForQr);
    } // setupUi

    void retranslateUi(QMainWindow *chooseEquipForQr)
    {
        chooseEquipForQr->setWindowTitle(QApplication::translate("chooseEquipForQr", "MainWindow", Q_NULLPTR));
        pushButton->setText(QApplication::translate("chooseEquipForQr", "List Table", Q_NULLPTR));
        label->setText(QApplication::translate("chooseEquipForQr", "\342\235\223 : Select the row of the ", Q_NULLPTR));
        label_2->setText(QApplication::translate("chooseEquipForQr", "Equipement you want to generate its corresponding QR code ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class chooseEquipForQr: public Ui_chooseEquipForQr {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSEEQUIPFORQR_H
