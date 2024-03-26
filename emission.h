#ifndef EMISSION_H
#define EMISSION_H

#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class EMISSION
{
private:
    QString emission_id;
    QString emission_nom;
    QString emission_host;
    int emission_nbviewers;
    QString emission_genre;
    QString emission_type;
    QString emission_date;
    QString emission_duree;

public:
    EMISSION() {}
    EMISSION(QString id, QString nom, QString host, int nbviewers, QString genre, QString type, QString date, QString duree);

    // Getters
    QString getEmission_id()  { return emission_id; }
    QString getEmission_nom()  { return emission_nom; }
    QString getEmission_host()  { return emission_host; }
    int getEmission_nbviewers()  { return emission_nbviewers; }
    QString getEmission_genre() { return emission_genre; }
    QString getEmission_type()  { return emission_type; }
    QString getEmission_date()  { return emission_date; }
    QString getEmission_duree()  { return emission_duree; }

    // Setters
    void setEmission_id(QString id) { emission_id = id; }
    void setEmission_nom(QString nom) { emission_nom = nom; }
    void setEmission_host(QString host) { emission_host = host; }
    void setEmission_nbviewers(int nbviewers) { emission_nbviewers = nbviewers; }
    void setEmission_genre(QString genre) { emission_genre = genre; }
    void setEmission_type(QString type) { emission_type = type; }
    void setEmission_date(QString date) { emission_date = date; }
    void setEmission_duree(QString duree) { emission_duree = duree; }

    bool CreateEmission();
    QSqlQueryModel* ReadEmission();
    bool deleteEmission(QString);
    QSqlQueryModel* searchEmissionByName(QString name);
    bool updateEmission(QString id);


};

#endif // EMISSION_H
