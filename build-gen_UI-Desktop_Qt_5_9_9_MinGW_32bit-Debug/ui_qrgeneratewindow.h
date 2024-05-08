/********************************************************************************
** Form generated from reading UI file 'qrgeneratewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QRGENERATEWINDOW_H
#define UI_QRGENERATEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QRGenerateWindow
{
public:
    QTableView *tableView;
    QLabel *qrCodeLabel;

    void setupUi(QWidget *QRGenerateWindow)
    {
        if (QRGenerateWindow->objectName().isEmpty())
            QRGenerateWindow->setObjectName(QStringLiteral("QRGenerateWindow"));
        QRGenerateWindow->resize(547, 393);
        tableView = new QTableView(QRGenerateWindow);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(60, 30, 411, 311));
        tableView->setStyleSheet(QStringLiteral(""));
        qrCodeLabel = new QLabel(QRGenerateWindow);
        qrCodeLabel->setObjectName(QStringLiteral("qrCodeLabel"));
        qrCodeLabel->setGeometry(QRect(70, 40, 381, 291));

        retranslateUi(QRGenerateWindow);

        QMetaObject::connectSlotsByName(QRGenerateWindow);
    } // setupUi

    void retranslateUi(QWidget *QRGenerateWindow)
    {
        QRGenerateWindow->setWindowTitle(QApplication::translate("QRGenerateWindow", "Form", Q_NULLPTR));
        qrCodeLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QRGenerateWindow: public Ui_QRGenerateWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QRGENERATEWINDOW_H
