/********************************************************************************
** Form generated from reading UI file 'supp.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUPP_H
#define UI_SUPP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_supp
{
public:
    QTableView *tableView;

    void setupUi(QWidget *supp)
    {
        if (supp->objectName().isEmpty())
            supp->setObjectName(QStringLiteral("supp"));
        supp->resize(578, 434);
        tableView = new QTableView(supp);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(140, 90, 256, 192));

        retranslateUi(supp);

        QMetaObject::connectSlotsByName(supp);
    } // setupUi

    void retranslateUi(QWidget *supp)
    {
        supp->setWindowTitle(QApplication::translate("supp", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class supp: public Ui_supp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUPP_H
