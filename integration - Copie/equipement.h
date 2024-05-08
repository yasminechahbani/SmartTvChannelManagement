#ifndef EQUIPEMENT_H
#define EQUIPEMENT_H

#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <iostream>
#include <QtCharts>

class EQUIPEMENT
{
private:
    QString EQUIPEMENT_ID;
    QString EQUIPEMENT_NAME;
    QString EQUIPEMENT_TYPE;
    QString EQUIPEMENT_AVAILABILITY;
    QString EQUIPEMENT_STATE;
    QString EQUIPEMENT_CURRENTHOLDER;
    int EMPLOYEE_ID;

public:
    EQUIPEMENT() {}
    EQUIPEMENT(QString id, QString name, QString type, QString availability, QString state, QString currentHolder,int EMPLOYEE_ID);

    // Getters
    QString getEquipement_ID()  { return EQUIPEMENT_ID; }
    QString getEquipement_TYPE()  { return EQUIPEMENT_TYPE; }
    QString getEquipement_AVAILABILITY()  { return EQUIPEMENT_AVAILABILITY; }
    QString getEquipement_STATE() { return EQUIPEMENT_STATE; }
    int getEmployee_ID()  { return EMPLOYEE_ID; }
    QString getEquipement_NAME()  { return EQUIPEMENT_NAME; }
    QString getEquipement_CURRENTHOLDER()  { return EQUIPEMENT_CURRENTHOLDER; }

    // Setters
    void setEquipement_ID(QString id) { EQUIPEMENT_ID = id; }
    void setEquipement_TYPE(QString type) { EQUIPEMENT_TYPE = type; }
    void setEquipement_AVAILABILITY(QString availability) { EQUIPEMENT_AVAILABILITY = availability; }
    void setEquipement_STATE(QString state) { EQUIPEMENT_STATE = state; }
    void setEmployee_ID(int employeeID) { EMPLOYEE_ID = employeeID; }
    void setEquipement_NAME(const QString& name) { EQUIPEMENT_NAME = name; }
    void setEquipement_CURRENTHOLDER(const QString& currentHolder) { EQUIPEMENT_CURRENTHOLDER = currentHolder; }
    bool addEquipement();
    QSqlQueryModel * showEquipement();
    bool deleteEquipement(QString);
    QSqlQuery getEQUIPEMENTData();
    //search
       QSqlQueryModel* showSearch(const QString &searchTerm);
       QSqlQueryModel* getAllEQUIPSorted();

       // stat

       QSqlQuery getStatByType();






};

#endif // EQUIPEMENT_H
