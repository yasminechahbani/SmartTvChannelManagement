// form.h
#pragma once

#include <QDialog>
#include <QNetworkAccessManager>

namespace Ui {
class Form;
}

class Form : public QDialog
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = nullptr);
    ~Form();
    void sendWhatsAppMessage(const QString &recipient, const QString &message);

private slots:
    void on_pushButton_WhatsApp_clicked();
    void onReplyReceived(QNetworkReply *reply);

signals:
    void messageSent(bool success, const QString &errorMessage);

private:
    Ui::Form *ui;
    QNetworkAccessManager *m_manager;
};

