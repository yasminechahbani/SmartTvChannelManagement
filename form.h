#ifndef FORM_H
#define FORM_H
#include "invites.h"
#include <QMainWindow>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QUrlQuery>
#include <QDialog>

namespace Ui {
class Form;
}

class Form : public QDialog
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = nullptr);
   //void sendSMS(const QString& recipient, const QString& message);
void sendSMS(const QString& recipient, const QString& message);
void onSMSRequestFinished(QNetworkReply* reply);


    //void setInvites(invites i);
    ~Form();

private slots:
    void on_pushButton_SMS_clicked();

    //void on_pushButton_2_clicked();
 //bool validateFormData();
private:
    void setupConnections();
    Ui::Form *ui;
};

#endif // FORM_H
