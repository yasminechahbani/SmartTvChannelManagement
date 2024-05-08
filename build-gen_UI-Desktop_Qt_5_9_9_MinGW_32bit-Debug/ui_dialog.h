/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label_32;
    QLabel *label_52;
    QLineEdit *lineEdit_date2;
    QLineEdit *lineEdit_prenom2;
    QLabel *label_62;
    QLineEdit *lineEdit_metier2;
    QLineEdit *lineEdit_nom2;
    QLabel *label_42;
    QLabel *label_82;
    QLineEdit *lineEdit_sexe2;
    QLineEdit *lineEdit_tel2;
    QLabel *label_22;
    QPushButton *updatebutton;
    QLabel *label_83;
    QLineEdit *lineEdit_id2;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QStringLiteral("Dialog"));
        Dialog->resize(600, 437);
        Dialog->setStyleSheet(QLatin1String("QWidget {\n"
"    background-color: white;\n"
"}\n"
"\n"
""));
        buttonBox = new QDialogButtonBox(Dialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(10, 410, 71, 20));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label_32 = new QLabel(Dialog);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(110, 200, 56, 16));
        label_32->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: rgb(217, 237, 255); /* Set the background color */\n"
"    border-radius: 3px; /* Adjust the radius as needed */\n"
"    padding: 3px; /* Adjust padding as needed */\n"
"color:rgb(3, 43, 67);\n"
"}"));
        label_52 = new QLabel(Dialog);
        label_52->setObjectName(QStringLiteral("label_52"));
        label_52->setGeometry(QRect(60, 300, 111, 16));
        label_52->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: rgb(217, 237, 255); /* Set the background color */\n"
"    border-radius: 3px; /* Adjust the radius as needed */\n"
"    padding: 3px; /* Adjust padding as needed */\n"
"color:rgb(3, 43, 67);\n"
"}"));
        lineEdit_date2 = new QLineEdit(Dialog);
        lineEdit_date2->setObjectName(QStringLiteral("lineEdit_date2"));
        lineEdit_date2->setGeometry(QRect(190, 290, 221, 41));
        lineEdit_date2->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: #f0f0f0; /* Set a very light background color */\n"
"    border-radius: 5px; /* Adjust the radius as needed */\n"
"    padding: 5px; /* Adjust padding as needed */\n"
"    border: 1px solid #ccc; /* Add a border */\n"
"    color: #333333; /* Set the color of the text to dark */\n"
"}\n"
""));
        lineEdit_prenom2 = new QLineEdit(Dialog);
        lineEdit_prenom2->setObjectName(QStringLiteral("lineEdit_prenom2"));
        lineEdit_prenom2->setGeometry(QRect(190, 140, 221, 41));
        lineEdit_prenom2->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: #f0f0f0; /* Set a very light background color */\n"
"    border-radius: 5px; /* Adjust the radius as needed */\n"
"    padding: 5px; /* Adjust padding as needed */\n"
"    border: 1px solid #ccc; /* Add a border */\n"
"    color: #333333; /* Set the color of the text to dark */\n"
"}\n"
""));
        label_62 = new QLabel(Dialog);
        label_62->setObjectName(QStringLiteral("label_62"));
        label_62->setGeometry(QRect(100, 350, 56, 16));
        label_62->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: rgb(217, 237, 255); /* Set the background color */\n"
"    border-radius: 3px; /* Adjust the radius as needed */\n"
"    padding: 3px; /* Adjust padding as needed */\n"
"color:rgb(3, 43, 67);\n"
"}"));
        lineEdit_metier2 = new QLineEdit(Dialog);
        lineEdit_metier2->setObjectName(QStringLiteral("lineEdit_metier2"));
        lineEdit_metier2->setGeometry(QRect(190, 240, 221, 41));
        lineEdit_metier2->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: #f0f0f0; /* Set a very light background color */\n"
"    border-radius: 5px; /* Adjust the radius as needed */\n"
"    padding: 5px; /* Adjust padding as needed */\n"
"    border: 1px solid #ccc; /* Add a border */\n"
"    color: #333333; /* Set the color of the text to dark */\n"
"}\n"
""));
        lineEdit_nom2 = new QLineEdit(Dialog);
        lineEdit_nom2->setObjectName(QStringLiteral("lineEdit_nom2"));
        lineEdit_nom2->setGeometry(QRect(190, 90, 221, 41));
        lineEdit_nom2->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: #f0f0f0; /* Set a very light background color */\n"
"    border-radius: 5px; /* Adjust the radius as needed */\n"
"    padding: 5px; /* Adjust padding as needed */\n"
"    border: 1px solid #ccc; /* Add a border */\n"
"    color: #333333; /* Set the color of the text to dark */\n"
"}\n"
""));
        label_42 = new QLabel(Dialog);
        label_42->setObjectName(QStringLiteral("label_42"));
        label_42->setGeometry(QRect(110, 250, 56, 16));
        label_42->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: rgb(217, 237, 255); /* Set the background color */\n"
"    border-radius: 3px; /* Adjust the radius as needed */\n"
"    padding: 3px; /* Adjust padding as needed */\n"
"color:rgb(3, 43, 67);\n"
"}"));
        label_82 = new QLabel(Dialog);
        label_82->setObjectName(QStringLiteral("label_82"));
        label_82->setGeometry(QRect(110, 100, 71, 20));
        label_82->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: rgb(217, 237, 255); /* Set the background color */\n"
"    border-radius: 3px; /* Adjust the radius as needed */\n"
"    padding: 3px; /* Adjust padding as needed */\n"
"color:rgb(3, 43, 67);\n"
"}"));
        lineEdit_sexe2 = new QLineEdit(Dialog);
        lineEdit_sexe2->setObjectName(QStringLiteral("lineEdit_sexe2"));
        lineEdit_sexe2->setGeometry(QRect(190, 190, 221, 41));
        lineEdit_sexe2->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: #f0f0f0; /* Set a very light background color */\n"
"    border-radius: 5px; /* Adjust the radius as needed */\n"
"    padding: 5px; /* Adjust padding as needed */\n"
"    border: 1px solid #ccc; /* Add a border */\n"
"    color: #333333; /* Set the color of the text to dark */\n"
"}\n"
""));
        lineEdit_tel2 = new QLineEdit(Dialog);
        lineEdit_tel2->setObjectName(QStringLiteral("lineEdit_tel2"));
        lineEdit_tel2->setGeometry(QRect(190, 340, 221, 41));
        lineEdit_tel2->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: #f0f0f0; /* Set a very light background color */\n"
"    border-radius: 5px; /* Adjust the radius as needed */\n"
"    padding: 5px; /* Adjust padding as needed */\n"
"    border: 1px solid #ccc; /* Add a border */\n"
"    color: #333333; /* Set the color of the text to dark */\n"
"}\n"
""));
        label_22 = new QLabel(Dialog);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(110, 150, 56, 16));
        label_22->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: rgb(217, 237, 255); /* Set the background color */\n"
"    border-radius: 3px; /* Adjust the radius as needed */\n"
"    padding: 3px; /* Adjust padding as needed */\n"
"color:rgb(3, 43, 67);\n"
"}"));
        updatebutton = new QPushButton(Dialog);
        updatebutton->setObjectName(QStringLiteral("updatebutton"));
        updatebutton->setGeometry(QRect(420, 390, 131, 41));
        updatebutton->setStyleSheet(QLatin1String("QPushButton{color: rgb(107, 189, 171);\n"
"border-radius:20px;\n"
"border: 1px solid rgb(107, 189, 171);\n"
"font: 75 12pt \"8514oem\";\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"    background: rgb(107, 189, 171);\n"
"	color:white;\n"
"	\n"
"}"));
        label_83 = new QLabel(Dialog);
        label_83->setObjectName(QStringLiteral("label_83"));
        label_83->setGeometry(QRect(110, 50, 71, 20));
        label_83->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: rgb(217, 237, 255); /* Set the background color */\n"
"    border-radius: 3px; /* Adjust the radius as needed */\n"
"    padding: 3px; /* Adjust padding as needed */\n"
"color:rgb(3, 43, 67);\n"
"}"));
        lineEdit_id2 = new QLineEdit(Dialog);
        lineEdit_id2->setObjectName(QStringLiteral("lineEdit_id2"));
        lineEdit_id2->setGeometry(QRect(190, 40, 221, 41));
        lineEdit_id2->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: #f0f0f0; /* Set a very light background color */\n"
"    border-radius: 5px; /* Adjust the radius as needed */\n"
"    padding: 5px; /* Adjust padding as needed */\n"
"    border: 1px solid #ccc; /* Add a border */\n"
"    color: #333333; /* Set the color of the text to dark */\n"
"}\n"
""));

        retranslateUi(Dialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", Q_NULLPTR));
        label_32->setText(QApplication::translate("Dialog", "sexe", Q_NULLPTR));
        label_52->setText(QApplication::translate("Dialog", "date de naissance", Q_NULLPTR));
        lineEdit_prenom2->setText(QString());
        label_62->setText(QApplication::translate("Dialog", "num tel", Q_NULLPTR));
        lineEdit_nom2->setText(QString());
        label_42->setText(QApplication::translate("Dialog", "metier", Q_NULLPTR));
        label_82->setText(QApplication::translate("Dialog", "nom", Q_NULLPTR));
        label_22->setText(QApplication::translate("Dialog", "prenom", Q_NULLPTR));
        updatebutton->setText(QApplication::translate("Dialog", "modifier", Q_NULLPTR));
        label_83->setText(QApplication::translate("Dialog", "id", Q_NULLPTR));
        lineEdit_id2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
