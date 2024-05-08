#ifndef SPONSOR_H
#define SPONSOR_H

#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDebug>
#include <QJsonDocument>
#include <QJsonObject>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QObject>


class Sponsor : public QObject
{
    Q_OBJECT

private:
    QString sponsor_id;
    QString sponsor_nom;
    QString sponsor_montant;
    QString sponsor_tempsaffichage;
    QString sponsor_nb_totalaffichage;
    QString sponsor_etatcontrat;


public:
    Sponsor() {}
    Sponsor(QString id, QString nom, QString montant, QString tempsaffichage, QString nb_totalaffichage, QString etatcontrat);

    // Getters
    QString getSponsorId() const { return sponsor_id; }
    QString getSponsorNom() const { return sponsor_nom; }
    QString getSponsorMontant() const { return sponsor_montant; }
    QString getSponsorTempsAffichage() const { return sponsor_tempsaffichage; }
    QString getSponsorNbTotalAffichage() const { return sponsor_nb_totalaffichage; }
    QString getSponsorEtatContrat() const { return sponsor_etatcontrat; }

    // Setters
    void setSponsorId(QString id) { sponsor_id = id; }
    void setSponsorNom(QString nom) { sponsor_nom = nom; }
    void setSponsorMontant(QString montant) { sponsor_montant = montant; }
    void setSponsorTempsAffichage(QString tempsaffichage) { sponsor_tempsaffichage = tempsaffichage; }
    void setSponsorNbTotalAffichage(QString nb_totalaffichage) { sponsor_nb_totalaffichage = nb_totalaffichage; }
    void setSponsorEtatContrat(QString etatcontrat) { sponsor_etatcontrat = etatcontrat; }

    // CRUD operations
    bool addSponsor();
    QSqlQueryModel *showSponsor();
    bool deleteSponsor(QString id);
    QSqlQuery getSponsorData();
    QSqlQueryModel *showSearch(const QString &searchTerm);
    bool updateSponsor(QString id) ;
    QSqlQueryModel *Readsponsor() ;
    QSqlQueryModel* searchsponsorByName(QString name) ;
    QSqlQuery getSPONSORData() ;
    QSqlQuery getStatByTempsAffichage() ;
    QSqlQuery getSponsorsWithNonValideContract();
    QSqlQueryModel* getAllSponsorsSorted();


    bool sendSMS(const QString& from, const QString& to, const QString& message);


    
};


#endif // SPONSOR_H
