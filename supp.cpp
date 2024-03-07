#include "supp.h"
#include "ui_supp.h"
#include "invites.h"
#include <QString>
#include <QMessageBox>
supp::supp(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::supp)
{
    ui->setupUi(this);
}

supp::~supp()
{
    delete ui;
}

void supp::on_pushButton_supp_clicked()
{
    QString id_inv = ui->lineEdit_sup->text();
    bool test = inv.supprimer(id_inv);
    if (test) {
        // Mise à jour de l'affichage si nécessaire
        // ui->equip_tab->setModel(inv.afficher());

        QMessageBox::information(nullptr, QObject::tr("OK"), QObject::tr("Suppression effectuée"), QMessageBox::Cancel);
    } else {
        QMessageBox::critical(nullptr, QObject::tr("Erreur"), QObject::tr("Suppression non effectuée"), QMessageBox::Cancel);
    }
}



