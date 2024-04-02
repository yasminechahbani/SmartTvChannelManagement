#include "invites.h"
#include <iostream>
#include <QSqlError>
#include<QDebug>
using namespace std;

invites::invites()
{
    id_inv="1";
    nom_inv="";
    prenom_inv="";
    sexe_inv="";
    metier_inv="";
    dateN_inv="";
    tel_inv="";
    id_em="";
}


invites::invites(QString id_inv,QString nom_inv, QString prenom_inv, QString sexe_inv, QString metier_inv, QString dateN_inv,  QString tel_inv, QString id_em){
this->id_inv=id_inv;
    this->nom_inv=nom_inv;
    this->prenom_inv=prenom_inv;
    this->sexe_inv=sexe_inv;
    this->metier_inv=metier_inv;
    this->dateN_inv=dateN_inv;
    this->tel_inv=tel_inv;
    this->id_em=id_em;
}

bool invites::ajouter()
{
    QSqlQuery query;
  //  QString res = QString::number(id_inv);
   //QString test = QString::number(tel_inv);
  //  QString aux = QString::number(id_em);
    query.prepare("INSERT INTO invites (ID_INV, NOM_INV, PRENOM_INV,SEXE_INV, METIER_INV, DATEN_INV,TEL_INV, ID_EM)"
                  "VALUES (:ID_INV, :NOM_INV, :PRENOM_INV, :SEXE_INV, :METIER_INV, :DATEN_INV, :TEL_INV, :ID_EM)");
    query.bindValue(":ID_INV", id_inv);
    query.bindValue(":NOM_INV", nom_inv);
    query.bindValue(":PRENOM_INV", prenom_inv);
    query.bindValue(":SEXE_INV", sexe_inv);
    query.bindValue(":METIER_INV", metier_inv);
    query.bindValue(":DATEN_INV", dateN_inv);
    query.bindValue(":TEL_INV", tel_inv);
    query.bindValue(":ID_EM", id_em);
    return query.exec();
}


QSqlQueryModel * invites::afficher()
{
QSqlQueryModel * model=new QSqlQueryModel();
model->setQuery("select * from invites ORDER BY ID_INV ASC");
model->setHeaderData(0,Qt::Horizontal,QObject::tr("id_inv"));
model->setHeaderData(1,Qt::Horizontal,QObject::tr("nom_inv"));
model->setHeaderData(2,Qt::Horizontal,QObject::tr("prenom_inv"));
model->setHeaderData(3,Qt::Horizontal,QObject::tr("sexe_inv"));
model->setHeaderData(4,Qt::Horizontal,QObject::tr("metier_inv"));
model->setHeaderData(5,Qt::Horizontal,QObject::tr("dateN_inv"));
model->setHeaderData(6,Qt::Horizontal,QObject::tr("tel_inv"));
model->setHeaderData(7,Qt::Horizontal,QObject::tr("id_em"));
return model;
}

bool invites::supprimer(QString id_inv)
{
    QSqlQuery query;
            query.prepare("DELETE FROM invites WHERE id_inv = :id_inv");
            query.bindValue(":id_inv", id_inv);

            if (query.exec()) {
                return true;
            } else {
                qDebug() << "Error: " << query.lastError().text();
            }
               return false;
}

QSqlQuery invites::getInvitesData()
{
    QSqlQuery query;
    query.prepare("SELECT * FROM invites");
    query.exec();
    return query;
}

QSqlQuery invites::getStatByType()
{
    QSqlQuery query;
    query.exec("SELECT SEXE_INV, COUNT(*) FROM invites GROUP BY SEXE_INV");
    return query;
}
