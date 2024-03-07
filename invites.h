#ifndef INVITES_H
#define INVITES_H
#include<QString>
#include<QSqlQuery>
#include<QSqlQueryModel>
#include <QtDebug>
using namespace std;
class invites
{
public:
    invites();
    //invites(int,int,int,QString,QString,QString,QString,QString);
    invites(QString,QString, QString, QString, QString, QString,QString,QString);


    //getters
    QString getId() { return id_inv; }
    QString getNom(){return nom_inv;}
    QString getPrenom(){return prenom_inv;}
    QString getSexe(){return sexe_inv;}
    QString getMetier() { return metier_inv; }
    QString getDateNaissance() { return dateN_inv; }
    QString getTelephone() { return tel_inv; }
    QString getIdEmission() { return id_em; }
    // Setters
     void setId(QString id) { id_inv = id; }
        void setNom(QString nom) { nom_inv = nom; }
        void setPrenom(QString prenom) { prenom_inv = prenom; }
        void setSexe(QString sexe) { sexe_inv = sexe; }
        void setMetier(QString metier) { metier_inv = metier; }
        void setDateNaissance(QString date) { dateN_inv = date; }
        void setTelephone(QString telephone) { tel_inv = telephone; }
        void setIdEmission(QString idEmission) { id_em = idEmission; }

        //fonctionnalités de base relatives à l'entité invité
        bool ajouter();
        QSqlQueryModel * afficher();
        bool supprimer(QString);
 QSqlQueryModel* showSearch(const QString &searchTerm);

 QSqlQuery getInvitesData();

private:
        QString id_inv;
        QString nom_inv;
        QString prenom_inv;
        QString sexe_inv;
        QString metier_inv;
        QString dateN_inv;
        QString tel_inv;
        QString id_em;
};

#endif // INVITES_H
