#include "equipement.h"
#include "availabilitydelegate.h"
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
  query.bindValue(":EQUIPEMENT_AVAILABILITY", /*EQUIPEMENT_AVAILABILITY*/"AVAILABLE");

  query.bindValue(":EQUIPEMENT_STATE",/* EQUIPEMENT_STATE*/"NEW");
  query.bindValue(":EQUIPEMENT_CURRENTHOLDER", /*EQUIPEMENT_CURRENTHOLDER*/"NONE");
  query.bindValue(":EMPLOYEE_ID", EMPLOYEE_ID);

  return query.exec();


}
QSqlQueryModel* EQUIPEMENT::showEquipement()
{
    QSqlQueryModel* model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM EQUIPEMENT");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("EQUIPEMENT_ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NAME"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("TYPE"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("AVAILABILITY"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("STATE"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("CURRENTHOLDER"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("EMPLOYEE_ID"));


    //
    return model;
}
void setAvailabilityRowColoring(QTableView *tableView)
{
    // Create an instance of the custom delegate
    AvailabilityDelegate *delegate = new AvailabilityDelegate(tableView);

    // Set the delegate for the "AVAILABILITY" column (assuming it's column 3)
    tableView->setItemDelegateForColumn(3, delegate);
}


//delete
bool EQUIPEMENT::deleteEquipement(QString EQUIPEMENT_ID)
{

        QSqlQuery query;
        query.prepare("DELETE FROM EQUIPEMENT WHERE EQUIPEMENT_ID = :EQUIPEMENT_ID");
        query.bindValue(":EQUIPEMENT_ID", EQUIPEMENT_ID);

        if (query.exec()) {
              if (query.numRowsAffected() > 0) {
                  return true;
              } else {
                  qDebug() << "Error: No rows affected. ID may not exist.";
              }
          }
        else {
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

////charts
///
///
QSqlQuery EQUIPEMENT::getStatByType()
{
    QSqlQuery query;
    query.exec("SELECT EQUIPEMENT_TYPE, COUNT(*) FROM EQUIPEMENT GROUP BY EQUIPEMENT_TYPE");
    return query;
}


//



QSqlQueryModel* EQUIPEMENT::getAllEQUIPSorted()
{
    QSqlQueryModel* model = new QSqlQueryModel();
    QString sqlQuery = "SELECT * FROM EQUIPEMENT ORDER BY EQUIPEMENT_NAME ASC";
    model->setQuery(sqlQuery);
    return model;



}
