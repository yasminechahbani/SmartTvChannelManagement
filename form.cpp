#include "form.h"
#include "ui_form.h"
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply> // Ajoutez cette ligne
#include <QMessageBox>

#include <QtNetwork>
#include <QUrl>
#include <QNetworkRequest>
#include <QNetworkReply>

Form::Form(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);
    //setupConnections();
}

Form::~Form()
{
    delete ui;
}

/*
void Form::sendSMS() {
    QNetworkAccessManager *manager = new QNetworkAccessManager(this);
    QUrl url("https://api.twilio.com/2010-04-01/Accounts/ACd25f435fa45075b1a05079c1b08200a2/Messages.json");

    QByteArray postData;
    postData.append("From=+12132960550"); // Votre numéro Twilio
    postData.append("&To= +21696027492");
    postData.append("&Body= hello");

    QNetworkRequest request(url);
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/x-www-form-urlencoded");
    request.setRawHeader("Authorization", "Basic " + QByteArray("ACd25f435fa45075b1a05079c1b08200a2:97989348834c400a4c239f6273f1cc63").toBase64());

    QNetworkReply *reply = manager->post(request, postData);

    connect(reply, &QNetworkReply::finished, [=]() {
        if (reply->error() == QNetworkReply::NoError) {
            QMessageBox::information(this, "Success", "SMS sent successfully");
        } else {
            QMessageBox::critical(this, "Error", "Error sending SMS: " + reply->errorString());
        }
        reply->deleteLater();
    });
}

void Form::on_pushButton_SMS_clicked() {
    QString recipient = ui->phoneLineEdit->text();
    QString message = ui->messageLineEdit->text();
    sendSMS();
}

void Form::setupConnections() {
    connect(ui->pushButton_SMS, &QPushButton::clicked, this, &Form::on_pushButton_SMS_clicked);
}
*/






void Form::sendSMS(const QString& recipient, const QString& message)
{
    QNetworkAccessManager* manager = new QNetworkAccessManager(this);
    connect(manager, &QNetworkAccessManager::finished, this, &Form::onSMSRequestFinished);

    // Twilio API credentials
    QString accountSid = "ACd25f435fa45075b1a05079c1b08200a2";
    QString authToken = "97989348834c400a4c239f6273f1cc63";

    // Construct Twilio API endpoint URL
    QUrl url("https://api.twilio.com/2010-04-01/Accounts/" + accountSid + "/Messages.json");
    QNetworkRequest request(url);
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/x-www-form-urlencoded");

    // Construct request parameters
    QUrlQuery params;
    params.addQueryItem("To", recipient);
    params.addQueryItem("From", "+12132960550");
    params.addQueryItem("Body", message);
    QByteArray postData = params.toString(QUrl::FullyEncoded).toUtf8();

    // Set Twilio API authentication header
    QString auth = accountSid + ":" + authToken;
    QByteArray authData = auth.toUtf8().toBase64();
    request.setRawHeader("Authorization", "Basic " + authData);

    // Send HTTP POST request to Twilio API
    manager->post(request, postData);
}

void Form::onSMSRequestFinished(QNetworkReply* reply)
{
    if (reply->error() == QNetworkReply::NoError) {
        QMessageBox::information(this, "SMS Sent", "The SMS message has been sent successfully.");
    } else {
        QMessageBox::critical(this, "Error", "Failed to send SMS message: " + reply->errorString());
    }
    reply->deleteLater();
}
void Form::on_pushButton_SMS_clicked() {
    QString recipient = ui->phoneLineEdit->text();
    QString message = ui->messageLineEdit->text();
    sendSMS(recipient, message);
}

