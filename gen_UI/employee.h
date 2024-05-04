#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class EMPLOYEE
{
private:
    QString employee_id;
    QString employee_prenom;
    QString employee_mail;
    QString employee_role;
    QString employee_tel;
    QString employee_date_embauche;
    QString employee_datenaissance;
    QString employee_password; // Nouvelle variable pour stocker le mot de passe haché

public:
    EMPLOYEE() {}
    EMPLOYEE(QString id, QString prenom, QString mail, QString role, QString tel, QString date_embauche, QString datenaissance, QString password); // Mise à jour du constructeur

    QString getEmployee_id() { return employee_id; }
    QString getEmployee_prenom() { return employee_prenom; }
    QString getEmployee_mail() { return employee_mail; }
    QString getEmployee_role() { return employee_role; }
    QString getEmployee_tel() { return employee_tel; }
    QString getEmployee_date_embauche() { return employee_date_embauche; }
    QString getEmployee_datenaissance() { return employee_datenaissance; }
    QString getEmployee_password() { return employee_password; } // Getter pour le mot de passe

    void setEmployee_id(QString id) { employee_id = id; }
    void setEmployee_prenom(QString prenom) { employee_prenom = prenom; }
    void setEmployee_mail(QString mail) { employee_mail = mail; }
    void setEmployee_role(QString role) { employee_role = role; }
    void setEmployee_tel(QString tel) { employee_tel = tel; }
    void setEmployee_date_embauche(QString date_embauche) { employee_date_embauche = date_embauche; }
    void setEmployee_datenaissance(QString datenaissance) { employee_datenaissance = datenaissance; }
    void setEmployee_password(QString password) { employee_password = password; } // Setter pour le mot de passe

    bool CreateEmployee();
    QSqlQueryModel* ReadEmployee();
    bool deleteEmployee(QString);
    QSqlQuery getEmployeeData();
    QSqlQuery getStatByroles();
    QSqlQueryModel* searchEmployeebyName(QString name);
    QString hashPassword(const QString& password);

};

#endif // EMPLOYEE_H
