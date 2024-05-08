/********************************************************************************
** Form generated from reading UI file 'calendrier.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALENDRIER_H
#define UI_CALENDRIER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_calendrier
{
public:
    QCalendarWidget *calendarWidget;
    QTextEdit *notesTextEdit;
    QComboBox *categoryComboBox;
    QLabel *label;

    void setupUi(QWidget *calendrier)
    {
        if (calendrier->objectName().isEmpty())
            calendrier->setObjectName(QStringLiteral("calendrier"));
        calendrier->resize(786, 558);
        calendrier->setStyleSheet(QLatin1String("QWidget {\n"
"    background-color: #ffffff;\n"
"    border: 2px solid #ccc;\n"
"    border-radius: 5px;\n"
"    padding: 10px;\n"
"}\n"
""));
        calendarWidget = new QCalendarWidget(calendrier);
        calendarWidget->setObjectName(QStringLiteral("calendarWidget"));
        calendarWidget->setGeometry(QRect(10, 100, 421, 441));
        calendarWidget->setStyleSheet(QString::fromUtf8("QCalendarWidget {\n"
"    background-color: #3F88C5; /* Couleur de fond */\n"
"    border: 2px solid #aaa; /* Bordure */\n"
"    border-radius: 8px; /* Coins arrondis */\n"
"    padding: 10px; /* Espace int\303\251rieur */\n"
"    color: #333; /* Couleur du texte */\n"
"}\n"
"\n"
"QCalendarWidget QAbstractItemView:enabled {\n"
"    selection-background-color: #3F88C5; /* Couleur de fond de la s\303\251lection */\n"
"    selection-color: #ffffff; /* Couleur du texte de la s\303\251lection */\n"
"}\n"
""));
        notesTextEdit = new QTextEdit(calendrier);
        notesTextEdit->setObjectName(QStringLiteral("notesTextEdit"));
        notesTextEdit->setGeometry(QRect(460, 130, 301, 411));
        notesTextEdit->setStyleSheet(QLatin1String("QTextEdit {\n"
"    background-color: white; /* Couleur de fond */\n"
"    border: 1px solid #3F88C5; /* Bordure */\n"
"    border-radius: 3px;\n"
"    padding: 5px;\n"
"    color: black; /* Couleur du texte */\n"
"}\n"
""));
        categoryComboBox = new QComboBox(calendrier);
        categoryComboBox->setObjectName(QStringLiteral("categoryComboBox"));
        categoryComboBox->setGeometry(QRect(480, 400, 271, 51));
        categoryComboBox->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"    border: 1px solid rgb(107, 189, 171); /* Bordure */\n"
"    border-radius: 5px; /* Coins arrondis */\n"
"    padding: 5px; /* Espacement du texte */\n"
"    min-width: 100px; /* Largeur minimale */\n"
"    background-color: #fff; /* Couleur de fond */\n"
"    font-size: 12px; /* Taille de la police */\n"
"    color: #333; /* Couleur du texte */\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    border: none; /* Supprimer la bordure de la fl\303\250che */\n"
"    subcontrol-origin: padding;\n"
"    subcontrol-position: right;\n"
"    width: 20px; /* Largeur de la fl\303\250che */\n"
"    border-left-width: 1px;\n"
"    border-left-color: rgb(107, 189, 171); /* Couleur de bordure de la fl\303\250che */\n"
"    border-left-style: solid;\n"
"    border-top-right-radius: 5px; /* Coins arrondis de la fl\303\250che */\n"
"    border-bottom-right-radius: 5px; /* Coins arrondis de la fl\303\250che */\n"
"    background: rgb(107, 189, 171); /* Couleur de fond de la fl\303\250che */\n"
"}\n"
"\n"
"QComboBo"
                        "x::down-arrow {\n"
"    width: 10px; /* Largeur de la fl\303\250che */\n"
"    height: 10px; /* Hauteur de la fl\303\250che */\n"
"    border-image: none; /* Supprimer toute image */\n"
"    background-color: transparent; /* Fond transparent */\n"
"    image: url(); /* Supprimer toute image */\n"
"    border: none; /* Supprimer la bordure */\n"
"}\n"
"\n"
"QComboBox::down-arrow:hover {\n"
"    background-color: rgba(107, 189, 171, 0.7); /* Couleur de fond au survol */\n"
"}\n"
"\n"
"QComboBox::down-arrow:pressed {\n"
"    background-color: rgba(107, 189, 171, 0.9); /* Couleur de fond lorsqu'appuy\303\251 */\n"
"}\n"
""));
        label = new QLabel(calendrier);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(220, 10, 361, 81));
        label->setStyleSheet(QLatin1String("font: 28pt \"MS Shell Dlg 2\";\n"
"font: 75 26pt \"MS Shell Dlg 2\";"));

        retranslateUi(calendrier);

        QMetaObject::connectSlotsByName(calendrier);
    } // setupUi

    void retranslateUi(QWidget *calendrier)
    {
        calendrier->setWindowTitle(QApplication::translate("calendrier", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("calendrier", "Nos programmes", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class calendrier: public Ui_calendrier {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALENDRIER_H
