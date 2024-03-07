#include "form.h"
#include "ui_form.h"
#include "invites.h"
#include <QString>
#include <QMessageBox>
//#include "connexion.h"

Form::Form(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);
}

Form::~Form()
{
    delete ui;
}




bool Form::validateFormData()
{
    // Retrieve data from UI
    QString ID_INV=ui->lineEdit_id->text();
    QString NOM_INV=ui->lineEdit_nom->text();
    QString PRENOM_INV=ui->lineEdit_prenom->text();
    QString SEXE_INV=ui->lineEdit_sexe->text();
    QString METIER_INV=ui->lineEdit_metier->text();
    QString DATEN_INV=ui->lineEdit_date->text();
    QString TEL_INV=ui->lineEdit_tel->text();

    // Check constraints for each field
    if (ID_INV.isEmpty()) {
        QMessageBox::critical(this, "Error", "ID_INV cannot be empty.");
        return false;
    }

    if (NOM_INV.isEmpty()) {
        QMessageBox::critical(this, "Error", "NOM_INV cannot be empty.");
        return false;
    }

    if (PRENOM_INV.isEmpty()) {
        QMessageBox::critical(this, "Error", "PRENOM_INV cannot be empty.");
        return false;
    }

    if (SEXE_INV.isEmpty()) {
        QMessageBox::critical(this, "Error", "SEXE_INV cannot be empty.");
        return false;
    }

    if (METIER_INV.isEmpty()) {
        QMessageBox::critical(this, "Error", "METIER_INV cannot be empty.");
        return false;
    }

    if (DATEN_INV.isEmpty()) {
        QMessageBox::critical(this, "Error", "DATEN_INV cannot be empty.");
        return false;
    }

    if (TEL_INV.isEmpty()) {
        QMessageBox::critical(this, "Error", "TEL_INV cannot be empty.");
        return false;
    }

    // Add more checks for other fields if needed

    return true; // All checks passed
}






void Form::on_pushButton_clicked()
{
    QString id_inv=ui->lineEdit_id->text();
    QString nom_inv=ui->lineEdit_nom->text();
    QString prenom_inv=ui->lineEdit_prenom->text();
    QString sexe_inv=ui->lineEdit_sexe->text();
    QString metier_inv=ui->lineEdit_metier->text();
    QString dateN_inv=ui->lineEdit_date->text();
    QString tel_inv=ui->lineEdit_tel->text();
    //QString nom_inv=ui->lineEdit_nom->text();
    //invites i(nom_inv,prenom_inv,sexe_inv,metier_inv,dateN_inv,tel_inv);

   //QString id_inv = "3"; // Définir l'ID de l'invité selon votre logique
   QString id_em = "";
    invites i(id_inv,nom_inv, prenom_inv, sexe_inv, metier_inv, dateN_inv,tel_inv, id_em);


    bool test=i.ajouter();


    if (!validateFormData()) {
           return; // Stop further processing if validation fails
       }



    if(test)
    {
        QMessageBox::information(nullptr,QObject::tr("OK"),
                QObject::tr("Ajout effectué \n"
                            "Click cancel to exit."),QMessageBox::Cancel);

    }
    else
        QMessageBox::critical(nullptr, QObject::tr("Not OK"),
                              QObject::tr("Ajout non effectué.\n"
                                          "click cancel to exit."),QMessageBox::Cancel);

}


