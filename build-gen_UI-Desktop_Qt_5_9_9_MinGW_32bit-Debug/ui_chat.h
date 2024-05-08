/********************************************************************************
** Form generated from reading UI file 'chat.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHAT_H
#define UI_CHAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_chat
{
public:
    QTableView *tableView_notif;
    QPushButton *pushButton_notif;

    void setupUi(QWidget *chat)
    {
        if (chat->objectName().isEmpty())
            chat->setObjectName(QStringLiteral("chat"));
        chat->resize(698, 402);
        tableView_notif = new QTableView(chat);
        tableView_notif->setObjectName(QStringLiteral("tableView_notif"));
        tableView_notif->setGeometry(QRect(30, 30, 631, 261));
        pushButton_notif = new QPushButton(chat);
        pushButton_notif->setObjectName(QStringLiteral("pushButton_notif"));
        pushButton_notif->setGeometry(QRect(20, 360, 93, 28));

        retranslateUi(chat);

        QMetaObject::connectSlotsByName(chat);
    } // setupUi

    void retranslateUi(QWidget *chat)
    {
        chat->setWindowTitle(QApplication::translate("chat", "Form", Q_NULLPTR));
        pushButton_notif->setText(QApplication::translate("chat", "ignorer", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class chat: public Ui_chat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHAT_H
