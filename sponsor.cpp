#include "sponsor.h"
#include <QSqlError>
#include<QDebug>



Sponsor::Sponsor(QString id, QString nom, QString montant, QString tempsaffichage, QString nb_totalaffichage, QString etatcontrat)
{
    sponsor_id = id;
    sponsor_nom = nom;
    sponsor_montant = montant;
    sponsor_tempsaffichage = tempsaffichage;
    sponsor_nb_totalaffichage = nb_totalaffichage;
    sponsor_etatcontrat = etatcontrat;
}

bool Sponsor::addSponsor()
{
    QSqlQuery query;
    query.prepare("INSERT INTO sponsor (sponsor_id, sponsor_nom, sponsor_montant, sponsor_tempsaffichage, sponsor_nb_totalaffichage, sponsor_etatcontrat) "
                  "VALUES (:sponsor_id, :sponsor_nom, :sponsor_montant, :sponsor_tempsaffichage, :sponsor_nb_totalaffichage, :sponsor_etatcontrat)");
    query.bindValue(":sponsor_id", sponsor_id);
    query.bindValue(":sponsor_nom", sponsor_nom);
    query.bindValue(":sponsor_montant", sponsor_montant);
    query.bindValue(":sponsor_tempsaffichage", sponsor_tempsaffichage);
    query.bindValue(":sponsor_nb_totalaffichage", sponsor_nb_totalaffichage);
    query.bindValue(":sponsor_etatcontrat", sponsor_etatcontrat);

    return query.exec();
}

QSqlQueryModel *Sponsor::showSponsor()
{
    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM sponsor");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("sponsor_id"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("sponsor_nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("sponsor_montant"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("sponsor_tempsaffichage"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("sponsor_nb_totalaffichage"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("sponsor_etatcontrat"));

    return model;
}

bool Sponsor::deleteSponsor(QString id)
{
    QSqlQuery query;
    query.prepare("DELETE FROM sponsor WHERE sponsor_id = :sponsor_id");
    query.bindValue(":sponsor_id", id);

    if (query.exec())
    {
        return true;
    }
    else
    {
        qDebug() << "Error: " << query.lastError().text();
    }
    return false;
}

QSqlQuery Sponsor::getSponsorData()
{
    QSqlQuery query;
    query.prepare("SELECT * FROM sponsor");
    query.exec();
    return query;
}
bool Sponsor::updateSponsor(QString id)
{
    QSqlQuery query;
    query.prepare("UPDATE sponsor SET sponsor_nom = :nom, sponsor_montant = :montant, sponsor_tempsaffichage = :tempsaffichage, sponsor_nb_totalaffichage = :nb_totalaffichage, sponsor_etatcontrat = :etatcontrat WHERE sponsor_id = :id");
    query.bindValue(":nom", sponsor_nom);
    query.bindValue(":montant", sponsor_montant);
    query.bindValue(":tempsaffichage", sponsor_tempsaffichage);
    query.bindValue(":nb_totalaffichage", sponsor_nb_totalaffichage);
    query.bindValue(":etatcontrat", sponsor_etatcontrat);
    query.bindValue(":id", id);
    return query.exec();
}
QSqlQueryModel *Sponsor::Readsponsor()
{
    QSqlQueryModel* model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM sponsor");
    // Set header data here
    return model;
}
QSqlQueryModel *Sponsor::searchsponsorByName(QString name)
{

    QSqlQueryModel *model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM sponsor WHERE sponsor_nom LIKE '%" + name + "%'");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("sponsor_id"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("sponsor_nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("sponsor_montant"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("sponsor_tempsaffichage"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("sponsor_nb_totalaffichage"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("sponsor_etatcontrat"));

    return model;
}
QSqlQuery Sponsor::getSPONSORData()
{
    QSqlQuery query;
    query.prepare("SELECT * FROM sponsor");
    query.exec();
    return query;
}
QSqlQuery Sponsor::getStatByTempsAffichage()
{
    QSqlQuery query;
    query.exec("SELECT sponsor_tempsaffichage, COUNT(*) FROM sponsor GROUP BY sponsor_tempsaffichage");
    return query;
}
QSqlQuery Sponsor::getSponsorsWithNonValideContract()
{
    QSqlQuery query;
    query.prepare("SELECT sponsor_id, sponsor_nom FROM sponsor WHERE sponsor_etatcontrat = 'non valide'");
    query.exec();
    return query;
}
bool Sponsor::sendSMS(const QString& from, const QString& to, const QString& message) {
    // Replace with your actual Infobip base URL and API key (Base64 encoded)
    QUrl url("https://k2l38x.api.infobip.com");
    QString apiKey = "e59d4b3da931706551a9ff5c675eb6a2-69a50cd4-cc59-45cd-b0e7-9fc8dd4e7a8f";

    // Create a QNetworkAccessManager instance
    QNetworkAccessManager* manager = new QNetworkAccessManager();

    // Set up the request
    QNetworkRequest request(url);
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    QString authorization = "Basic " + apiKey;
    request.setRawHeader("Authorization", authorization.toUtf8());

    // Create the JSON message body
    QJsonObject messageBody;
    messageBody["from"] = from;
    messageBody["to"] = to;
    messageBody["text"] = message;
    QJsonDocument doc(messageBody);
    QByteArray jsonData = doc.toJson(QJsonDocument::Compact);

    // Send the POST request asynchronously
    QNetworkReply *reply = manager->post(request, jsonData);
    connect(reply, &QNetworkReply::finished, [reply]() {
        if (reply->error() == QNetworkReply::NoError) {
            // SMS sent successfully
            qDebug() << "SMS sent successfully!";
        } else {
            // Handle errors
            qDebug() << "Error sending SMS:" << reply->errorString();
        }
        reply->deleteLater(); // Clean up the reply object
    });

    return true; // Indicate asynchronous operation (success will be determined in the callback)
}

QSqlQueryModel* Sponsor::getAllSponsorsSorted()
{
    QSqlQueryModel* model = new QSqlQueryModel();
    QString sqlQuery = "SELECT * FROM sponsor ORDER BY sponsor_nom ASC";
    model->setQuery(sqlQuery);
    return model;



}

