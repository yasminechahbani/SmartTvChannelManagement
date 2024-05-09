#include "statistique.h"
#include "ui_statistique.h" // Assurez-vous d'inclure ce fichier

Statistique::Statistique(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Statistique)
{
    ui->setupUi(this);
}

Statistique::~Statistique()
{
    delete ui;
}
