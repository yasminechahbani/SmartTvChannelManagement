/********************************************************************************
** Form generated from reading UI file 'modif.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIF_H
#define UI_MODIF_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_update
{
public:
    QLabel *label_mo;
    QLabel *label_2mo;
    QLineEdit *lineEdit_mo;
    QPushButton *pushButton_supp;

    void setupUi(QWidget *update)
    {
        if (update->objectName().isEmpty())
            update->setObjectName(QStringLiteral("update"));
        update->resize(584, 419);
        label_mo = new QLabel(update);
        label_mo->setObjectName(QStringLiteral("label_mo"));
        label_mo->setGeometry(QRect(90, 190, 81, 31));
        label_mo->setStyleSheet(QStringLiteral("font: 11pt \"MS Shell Dlg 2\";"));
        label_2mo = new QLabel(update);
        label_2mo->setObjectName(QStringLiteral("label_2mo"));
        label_2mo->setGeometry(QRect(110, 30, 611, 71));
        label_2mo->setStyleSheet(QLatin1String("font: 75 24pt \"MS Shell Dlg 2\";\n"
"font: 10pt \"MS Shell Dlg 2\";"));
        lineEdit_mo = new QLineEdit(update);
        lineEdit_mo->setObjectName(QStringLiteral("lineEdit_mo"));
        lineEdit_mo->setGeometry(QRect(190, 180, 221, 51));
        pushButton_supp = new QPushButton(update);
        pushButton_supp->setObjectName(QStringLiteral("pushButton_supp"));
        pushButton_supp->setGeometry(QRect(320, 320, 93, 28));

        retranslateUi(update);

        QMetaObject::connectSlotsByName(update);
    } // setupUi

    void retranslateUi(QWidget *update)
    {
        update->setWindowTitle(QApplication::translate("update", "Form", Q_NULLPTR));
        label_mo->setText(QApplication::translate("update", "id=", Q_NULLPTR));
        label_2mo->setText(QApplication::translate("update", "entrer id que vous voulez modifier", Q_NULLPTR));
        pushButton_supp->setText(QApplication::translate("update", "update", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class update: public Ui_update {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIF_H
