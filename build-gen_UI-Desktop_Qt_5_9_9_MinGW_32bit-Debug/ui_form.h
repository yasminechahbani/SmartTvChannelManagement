/********************************************************************************
** Form generated from reading UI file 'form.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_H
#define UI_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QGroupBox *groupBox;
    QLabel *label_6;
    QPushButton *pushButton_sms;
    QLineEdit *phoneLineEdit;
    QLabel *label;
    QLineEdit *messageLineEdit;
    QPushButton *pushButton_WhatsApp;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QStringLiteral("Form"));
        Form->resize(678, 535);
        groupBox = new QGroupBox(Form);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(90, 80, 401, 421));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 80, 56, 16));
        pushButton_sms = new QPushButton(groupBox);
        pushButton_sms->setObjectName(QStringLiteral("pushButton_sms"));
        pushButton_sms->setGeometry(QRect(120, 300, 93, 28));
        phoneLineEdit = new QLineEdit(groupBox);
        phoneLineEdit->setObjectName(QStringLiteral("phoneLineEdit"));
        phoneLineEdit->setGeometry(QRect(90, 60, 261, 71));
        phoneLineEdit->setStyleSheet(QLatin1String("QLineEdit {\n"
"    padding: 8px;\n"
"    border: 1px solid #ccc;\n"
"    border-radius: 5px;\n"
"    font-size: 14px;\n"
"    color: black;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #007bff;\n"
"    border-width: 2px;\n"
"}"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 210, 56, 16));
        messageLineEdit = new QLineEdit(groupBox);
        messageLineEdit->setObjectName(QStringLiteral("messageLineEdit"));
        messageLineEdit->setGeometry(QRect(90, 180, 251, 101));
        messageLineEdit->setStyleSheet(QLatin1String("QLineEdit {\n"
"    padding: 8px;\n"
"    border: 1px solid #ccc;\n"
"    border-radius: 5px;\n"
"    font-size: 14px;\n"
"    color: black;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #007bff;\n"
"    border-width: 2px;\n"
"}"));
        pushButton_WhatsApp = new QPushButton(groupBox);
        pushButton_WhatsApp->setObjectName(QStringLiteral("pushButton_WhatsApp"));
        pushButton_WhatsApp->setGeometry(QRect(180, 360, 131, 31));
        pushButton_WhatsApp->setStyleSheet(QLatin1String("QPushButton {\n"
"    background-color: #3F88C5;\n"
"    border: none;\n"
"    color: white;\n"
"    font-weight: bold;\n"
"    padding: 5px;\n"
"    width: 30px;\n"
"    height: 30px;\n"
"    border-radius: 20px;\n"
"    font: 75 12pt \"8514oem\";\n"
"}\n"
"\n"
"QPushButton::menu-indicator {\n"
"    image: none;\n"
"}"));

        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Form", "SMS", Q_NULLPTR));
        label_6->setText(QApplication::translate("Form", "num tel", Q_NULLPTR));
        pushButton_sms->setText(QApplication::translate("Form", "envoyer", Q_NULLPTR));
        label->setText(QApplication::translate("Form", "message", Q_NULLPTR));
        pushButton_WhatsApp->setText(QApplication::translate("Form", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_H
