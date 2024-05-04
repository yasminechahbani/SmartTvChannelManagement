#include "employee.h"
#include <QSqlError>
#include <QDebug>
#include <QCryptographicHash>

EMPLOYEE::EMPLOYEE(QString id, QString prenom, QString mail, QString role, QString tel, QString date_embauche, QString datenaissance, QString password)
{
    employee_id = id;
    employee_prenom = prenom;
    employee_mail = mail;
    employee_role = role;
    employee_tel = tel;
    employee_date_embauche = date_embauche;
    employee_datenaissance = datenaissance;
    employee_password = hashPassword(password); // Hacher le mot de passe
}
bool EMPLOYEE::CreateEmployee()
{
    QSqlQuery query;
    query.prepare("INSERT INTO EMPLOYEE(employee_id, employee_prenom, employee_mail, employee_role, employee_tel, employee_date_embauche, employee_datenaissance, employee_password) VALUES(:id, :prenom, :mail, :role, :tel, :date_embauche, :datenaissance, :password)");
    query.bindValue(":password", employee_password);
    query.bindValue(":id", employee_id);
    query.bindValue(":prenom", employee_prenom);
    query.bindValue(":mail", employee_mail);
    query.bindValue(":role", employee_role);
    query.bindValue(":tel", employee_tel);
    query.bindValue(":date_embauche", employee_date_embauche);
    query.bindValue(":datenaissance", employee_datenaissance);
    return query.exec();
}

QSqlQueryModel* EMPLOYEE::ReadEmployee()
{
    QSqlQueryModel* model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM EMPLOYEE");
    // Set header data here
    return model;
}

bool EMPLOYEE::deleteEmployee(QString id)
{
    QSqlQuery query;
    query.prepare("DELETE FROM EMPLOYEE WHERE employee_id = :id");
    query.bindValue(":id", id);
    return query.exec();
}



QSqlQuery EMPLOYEE::getEmployeeData()
{
    QSqlQuery query;
    query.prepare("SELECT * FROM EMPLOYEE");
    query.exec();
    return query;
}



QSqlQueryModel* EMPLOYEE::searchEmployeebyName(QString name)
{
    QSqlQueryModel* model = new QSqlQueryModel();
    model->setQuery("SELECT * FROM EMPLOYEE WHERE employee_prenom LIKE '%" + name + "%'");
    return model;
}

QSqlQuery EMPLOYEE::getStatByroles()
{
    QSqlQuery query;
    query.exec("SELECT employee_role, COUNT(*) FROM EMPLOYEE GROUP BY employee_role");
    return query;
}

QString EMPLOYEE::hashPassword(const QString& password)
{
    QByteArray passwordBytes = password.toUtf8();
    QByteArray hashedBytes = QCryptographicHash::hash(passwordBytes, QCryptographicHash::Sha256);
    QString hashedPassword = QString(hashedBytes.toHex());
    return hashedPassword;
}



