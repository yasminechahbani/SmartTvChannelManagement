/********************************************************************************
** Form generated from reading UI file 'returnequipmentwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RETURNEQUIPMENTWINDOW_H
#define UI_RETURNEQUIPMENTWINDOW_H

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

class Ui_returnequipmentwindow
{
public:
    QWidget *centralwidget;
    QTableView *tableView;
    QPushButton *list;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *returnequipmentwindow)
    {
        if (returnequipmentwindow->objectName().isEmpty())
            returnequipmentwindow->setObjectName(QStringLiteral("returnequipmentwindow"));
        returnequipmentwindow->resize(986, 538);
        centralwidget = new QWidget(returnequipmentwindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 0, 891, 451));
        tableView->setStyleSheet(QStringLiteral(""));
        list = new QPushButton(centralwidget);
        list->setObjectName(QStringLiteral("list"));
        list->setGeometry(QRect(710, 340, 121, 41));
        list->setStyleSheet(QLatin1String("QPushButton{color:#D00000;\n"
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
        label->setGeometry(QRect(10, 300, 471, 91));
        label->setStyleSheet(QLatin1String("font: 75 12pt \"8514oem\";\n"
""));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 340, 291, 71));
        label_2->setStyleSheet(QLatin1String("font: 75 12pt \"8514oem\";\n"
""));
        returnequipmentwindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(returnequipmentwindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 986, 26));
        returnequipmentwindow->setMenuBar(menubar);
        statusbar = new QStatusBar(returnequipmentwindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        returnequipmentwindow->setStatusBar(statusbar);

        retranslateUi(returnequipmentwindow);

        QMetaObject::connectSlotsByName(returnequipmentwindow);
    } // setupUi

    void retranslateUi(QMainWindow *returnequipmentwindow)
    {
        returnequipmentwindow->setWindowTitle(QApplication::translate("returnequipmentwindow", "MainWindow", Q_NULLPTR));
        list->setText(QApplication::translate("returnequipmentwindow", "List table", Q_NULLPTR));
        label->setText(QApplication::translate("returnequipmentwindow", "\342\235\223 : Select the row of the ", Q_NULLPTR));
        label_2->setText(QApplication::translate("returnequipmentwindow", "Equipement you want to return", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class returnequipmentwindow: public Ui_returnequipmentwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RETURNEQUIPMENTWINDOW_H
