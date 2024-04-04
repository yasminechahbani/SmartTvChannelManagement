#include "emission.h"
#include <QSqlError>
#include <QDebug>

EMISSION::EMISSION(QString id, QString nom, QString host, int nbviewers, QString genre, QString type, QString date, QString duree)
{
    emission_id = id;
    emission_nom = nom;
    emission_host = host;
    emission_nbviewers = nbviewers;
    emission_genre = genre;
    emission_type = type;
    emission_date = date;
    emission_duree = duree;
}

bool EMISSION::CreateEmission()
{
    QSqlQuery query;
    query.prepare("INSERT INTO emissions(emission_id, emission_nom, emission_host, emission_nbviewers, emission_genre, emission_type, emission_date, emission_duree) VALUES(:id, :nom, :host, :nbviewers, :genre, :type, :date, :duree)");
    query.bindValue(":id", emission_id);
    query.bindValue(":nom", emission_nom);
    query.bindValue(":host", emission_host);
    query.bindValue(":nbviewers", emission_nbviewers);
    query.bindValue(":genre", emission_genre);
    query.bindValue(":type", emission_type);
    query.bindValue(":date", emission_date);
    query.bindValue(":duree", emission_duree);
    return query.exec();
}

QSqlQueryModel* EMISSION::ReadEmission()
{
    QSqlQueryModel* model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM emissions");
    // Set header data here
    return model;
}

bool EMISSION::deleteEmission(QString id)
{
    QSqlQuery query;
    query.prepare("DELETE FROM emissions WHERE emission_id = :id");
    query.bindValue(":id", id);
    return query.exec();
}

QSqlQueryModel* EMISSION::searchEmissionByName(QString name)
{
    QSqlQueryModel* model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM emissions WHERE emission_nom LIKE '%" + name + "%'");
    return model;
}

bool EMISSION::updateEmission(QString id)
{
    QSqlQuery query;
    query.prepare("UPDATE emissions SET emission_nom = :nom, emission_host = :host, emission_nbviewers = :nbviewers, emission_genre = :genre, emission_type = :type, emission_date = :date, emission_duree = :duree WHERE emission_id = :id");
    query.bindValue(":nom", emission_nom);
    query.bindValue(":host", emission_host);
    query.bindValue(":nbviewers", emission_nbviewers);
    query.bindValue(":genre", emission_genre);
    query.bindValue(":type", emission_type);
    query.bindValue(":date", emission_date);
    query.bindValue(":duree", emission_duree);
    query.bindValue(":id", id);
    return query.exec();
}




QSqlQuery EMISSION::getEMISSIONData()
{
    QSqlQuery query;
    query.prepare("SELECT * FROM emissions");
    query.exec();
    return query;
}


QSqlQuery EMISSION::getStatBynbviews()
{
    QSqlQuery query;
    query.exec("SELECT emission_nbviewers, COUNT(*) FROM emissions GROUP BY emission_nbviewers");
    return query;
}

QSqlQueryModel* EMISSION::ReadEmissionSorted(QString sortOrder) {
    QSqlQueryModel* model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM emissions ORDER BY emission_nom " + sortOrder);
    // Set header data here if needed
    return model;
}





