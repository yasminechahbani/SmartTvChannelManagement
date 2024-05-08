/********************************************************************************
** Form generated from reading UI file 'useequipmentwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USEEQUIPMENTWINDOW_H
#define UI_USEEQUIPMENTWINDOW_H

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

class Ui_useequipmentwindow
{
public:
    QWidget *centralwidget;
    QTableView *tableView;
    QPushButton *list;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *useequipmentwindow)
    {
        if (useequipmentwindow->objectName().isEmpty())
            useequipmentwindow->setObjectName(QStringLiteral("useequipmentwindow"));
        useequipmentwindow->resize(1291, 483);
        centralwidget = new QWidget(useequipmentwindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(0, 0, 891, 451));
        tableView->setStyleSheet(QLatin1String("QTableView::item {\n"
"    /* Set default background color for all cells */\n"
"    background-color: white;\n"
"}\n"
"\n"
"QTableView::item:enabled {\n"
"    /* Set background color for enabled cells */\n"
"    color: black;\n"
"}\n"
"\n"
"QTableView::item:selected {\n"
"    /* Set background color for selected cells */\n"
"    background-color: lightblue;\n"
"}\n"
"\n"
"QTableView::item[row=\"AVAILABLE\"] {\n"
"    /* Set background color for cells in column 4 where the text is \"AVAILABLE\" */\n"
"    background-color: lightgray;\n"
"}"));
        list = new QPushButton(centralwidget);
        list->setObjectName(QStringLiteral("list"));
        list->setGeometry(QRect(670, 350, 181, 51));
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
        label->setGeometry(QRect(20, 310, 471, 91));
        label->setStyleSheet(QLatin1String("font: 75 12pt \"8514oem\";\n"
""));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 350, 341, 71));
        label_2->setStyleSheet(QLatin1String("font: 75 12pt \"8514oem\";\n"
""));
        useequipmentwindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(useequipmentwindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1291, 26));
        useequipmentwindow->setMenuBar(menubar);
        statusbar = new QStatusBar(useequipmentwindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        useequipmentwindow->setStatusBar(statusbar);

        retranslateUi(useequipmentwindow);

        QMetaObject::connectSlotsByName(useequipmentwindow);
    } // setupUi

    void retranslateUi(QMainWindow *useequipmentwindow)
    {
        useequipmentwindow->setWindowTitle(QApplication::translate("useequipmentwindow", "MainWindow", Q_NULLPTR));
        list->setText(QApplication::translate("useequipmentwindow", "list table", Q_NULLPTR));
        label->setText(QApplication::translate("useequipmentwindow", "\342\235\223 : Select the row of the ", Q_NULLPTR));
        label_2->setText(QApplication::translate("useequipmentwindow", "Equipement you want to use ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class useequipmentwindow: public Ui_useequipmentwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USEEQUIPMENTWINDOW_H
