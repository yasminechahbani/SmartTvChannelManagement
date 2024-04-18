// form.cpp
#include "form.h"
#include "ui_form.h"
#include <QUrlQuery>
#include <QNetworkRequest>
#include <QJsonArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonParseError>
#include <QNetworkReply>
#include <QDebug>


Form::Form(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Form),
    m_manager(new QNetworkAccessManager(this))
{
    ui->setupUi(this);
    connect(m_manager, &QNetworkAccessManager::finished, this, &Form::onReplyReceived);
}

Form::~Form()
{
    delete ui;
}

void Form::on_pushButton_WhatsApp_clicked()
{

    qDebug() << "Bouton WhatsApp cliqué.";

    QString recipient = ui->phoneLineEdit->text();
    QString message = ui->messageLineEdit->text();

    qDebug() << "Numéro de téléphone du destinataire :" << recipient;
        qDebug() << "Message à envoyer :" << message;

    QUrl url("https://mmk3j9.api.infobip.com/omni/1/whatsapp");
    QNetworkRequest request(url);
    request.setRawHeader("Authorization", "App <0494b2a19ad04cc2d2c4c303bd9da375-77491f75-6f22-4d72-852c-cd5faee6cd32>");
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    QJsonObject requestBody;
    requestBody["messages"] = QJsonArray::fromVariantList({
        QJsonObject {
            {"from", "whatsapp:<447860099299>"},
            {"destinations", QJsonArray::fromVariantList({
                QJsonObject {
                    {"to", recipient}
                }
            })},
            {"content", {
                {"text", message}
            }}
        }
    });

    QJsonDocument doc(requestBody);
    QByteArray postData = doc.toJson();
    m_manager->post(request, postData);
}

void Form::onReplyReceived(QNetworkReply *reply)
{
    if (reply->error() == QNetworkReply::NoError) {
        QByteArray responseData = reply->readAll();
        QJsonDocument json = QJsonDocument::fromJson(responseData);
        QJsonObject obj = json.object();

        // Handle the response from Infobip
        // This will depend on the format of Infobip's response
        // You need to parse the response and emit the appropriate signal
        // For example:
        // emit messageSent(true, "Message sent successfully");
    } else {
        emit messageSent(false, reply->errorString());
    }
    reply->deleteLater();
}
