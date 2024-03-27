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

