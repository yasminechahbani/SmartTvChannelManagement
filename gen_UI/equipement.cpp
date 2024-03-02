#include "equipement.h"
#include <QSqlError>
#include<QDebug>
EQUIPEMENT::EQUIPEMENT(QString id, QString name, QString type, QString availability, QString state, QString currentHolder,int EMPLOYEE_ID)
{
    EQUIPEMENT_ID=id;
    EQUIPEMENT_TYPE=type;
    EQUIPEMENT_AVAILABILITY=availability;
    EQUIPEMENT_STATE=state;
    EQUIPEMENT_NAME=name;
    EQUIPEMENT_CURRENTHOLDER=currentHolder;
}
//////crud//////
bool EQUIPEMENT::addEquipement()
{
    QSqlQuery query;
    query.prepare("insert into EQUIPEMENT(EQUIPEMENT_ID,EQUIPEMENT_NAME,EQUIPEMENT_TYPE,EQUIPEMENT_AVAILABILITY,EQUIPEMENT_STATE,EQUIPEMENT_CURRENTHOLDER,EMPLOYEE_ID)""values(:EQUIPEMENT_ID,:EQUIPEMENT_NAME,:EQUIPEMENT_TYPE,:EQUIPEMENT_AVAILABILITY,:EQUIPEMENT_STATE,:EQUIPEMENT_CURRENTHOLDER,:EMPLOYEE_ID)");
  query.bindValue(":EQUIPEMENT_ID",EQUIPEMENT_ID);
  query.bindValue(":EQUIPEMENT_NAME", EQUIPEMENT_NAME);
  query.bindValue(":EQUIPEMENT_TYPE", EQUIPEMENT_TYPE);
  query.bindValue(":EQUIPEMENT_AVAILABILITY", EQUIPEMENT_AVAILABILITY);
  query.bindValue(":EQUIPEMENT_STATE", EQUIPEMENT_STATE);
  query.bindValue(":EQUIPEMENT_CURRENTHOLDER", EQUIPEMENT_CURRENTHOLDER);
  query.bindValue(":EMPLOYEE_ID", EMPLOYEE_ID);

  return query.exec();


}
QSqlQueryModel* EQUIPEMENT::showEquipement()
{
    QSqlQueryModel* model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM EQUIPEMENT");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("EQUIPEMENT_ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("EQUIPEMENT_NAME"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("EQUIPEMENT_TYPE"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("EQUIPEMENT_AVAILABILITY"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("EQUIPEMENT_STATE"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("EQUIPEMENT_CURRENTHOLDER"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("EMPLOYEE_ID"));

    return model;
}

//delete
bool EQUIPEMENT::deleteEquipement(QString EQUIPEMENT_ID)
{

        QSqlQuery query;
        query.prepare("DELETE FROM EQUIPEMENT WHERE EQUIPEMENT_ID = :EQUIPEMENT_ID");
        query.bindValue(":EQUIPEMENT_ID", EQUIPEMENT_ID);

        if (query.exec()) {
            return true;
        } else {
            qDebug() << "Error: " << query.lastError().text();
        }
           return false;
    }


////////pdf////////
QSqlQuery EQUIPEMENT::getEQUIPEMENTData()
{
    QSqlQuery query;
    query.prepare("SELECT * FROM EQUIPEMENT");
    query.exec();
    return query;
}

