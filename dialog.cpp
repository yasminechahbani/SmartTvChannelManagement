#include "dialog.h"
#include "ui_dialog.h"
#include <QMessageBox>
#include <QSqlError>
#include <QSqlQuery>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    connect(ui->updatebutton, &QPushButton::clicked, this, &Dialog::saveChanges);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::saveChanges()
{
    QString id = ui->lineEdit_id2->text();
    QString nom = ui->lineEdit_nom2->text();
    QString prenom = ui->lineEdit_prenom2->text();
    QString sexe = ui->lineEdit_sexe2->text();
    QString metier = ui->lineEdit_metier2->text();
    QString date = ui->lineEdit_date2->text();
    QString tel = ui->lineEdit_tel2->text();

    QSqlQuery query;
    query.prepare("UPDATE invites SET NOM_INV = :nom_inv, PRENOM_INV = :prenom_inv, SEXE_INV = :sexe_inv, METIER_INV = :metier_inv, DATEN_INV = :dateN_inv, TEL_INV = :tel_inv WHERE ID_INV = :id_inv");
    query.bindValue(":id_inv", id);  // Correction ici
    query.bindValue(":nom_inv", nom);  // Correction ici
    query.bindValue(":prenom_inv", prenom);  // Correction ici
    query.bindValue(":sexe_inv", sexe);  // Correction ici
    query.bindValue(":metier_inv", metier);  // Correction ici
    query.bindValue(":dateN_inv", date);  // Correction ici
    query.bindValue(":tel_inv", tel);  // Correction ici

    query.exec();
}


void Dialog::updateInviteDetails(const QString &id,const QString &nom, const QString &prenom, const QString &sexe, const QString &metier, const QString &date, const QString &tel)
{
    ui->lineEdit_id2->setText(id);
    ui->lineEdit_nom2->setText(nom);
    ui->lineEdit_prenom2->setText(prenom);
    ui->lineEdit_sexe2->setText(sexe);
    ui->lineEdit_metier2->setText(metier);
    ui->lineEdit_date2->setText(date);
    ui->lineEdit_tel2->setText(tel);
}

void Dialog::on_pushButton_clicked()
{
    // Logique pour le bouton "Fermer" si nécessaire
}
