#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "sponsor.h" // Include the sponsor header file
#include <QMessageBox>
#include <QSqlError>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // Connect signals and slots here if needed
    ui->sponsor_tab->setModel(sponsor.showSponsor()); // Update to use the Sponsor class
}

MainWindow::~MainWindow()
{
    delete ui;
}

// Validate form function remains the same if form fields are common

void MainWindow::on_ajouter_clicked()
{
    QString sponsor_id = ui->id_lineEdit->text();
    QString sponsor_nom = ui->name_lineEdit->text();
    QString sponsor_montant = ui->montant_lineEdit->text();
    QString sponsor_tempsaffichage = ui->tempsaffichage_lineEdit->text();
    QString sponsor_nb_totalaffichage = ui->nb_totalaffichage_lineEdit->text();
    QString sponsor_etatcontrat = ui->etatcontrat_lineEdit->text();

    Sponsor sponsor(sponsor_id, sponsor_nom, sponsor_montant, sponsor_tempsaffichage, sponsor_nb_totalaffichage, sponsor_etatcontrat);

    if (!sponsor.addSponsor()) {
        QMessageBox::critical(nullptr, "Error", "Failed to add sponsor.");
        return;
    }

    ui->sponsor_tab->setModel(sponsor.showSponsor());
    QMessageBox::information(nullptr, "Success", "Sponsor added successfully.");
}

void MainWindow::on_delete_button_clicked()
{
    QString sponsor_id = ui->id_lineEdit_delete->text();
    if (!sponsor.deleteSponsor(sponsor_id)) {
        QMessageBox::critical(nullptr, "Error", "Failed to delete sponsor.");
        return;
    }

    ui->sponsor_tab->setModel(sponsor.showSponsor());
    QMessageBox::information(nullptr, "Success", "Sponsor deleted successfully.");
}


void MainWindow::on_list_all_button_clicked()
{
    ui->sponsor_tab->setModel(sponsor.showSponsor());
}

void MainWindow::on_clear_fields_add_clicked()
{
    ui->id_lineEdit->clear();
    ui->name_lineEdit->clear();
    ui->montant_lineEdit->clear();
    ui->tempsaffichage_lineEdit->clear();
    ui->nb_totalaffichage_lineEdit->clear();
    ui->etatcontrat_lineEdit->clear();
}

void MainWindow::on_clear_all_in_table_clicked()
{
    int reply = QMessageBox::question(this, "Confirmation", "Are you sure you want to clear all lines in the table?", QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        QSqlQuery query;
        query.prepare("DELETE FROM sponsor");
        if (!query.exec()) {
            QMessageBox::critical(this, "Error", "Failed to clear table.");
            return;
        }
        ui->sponsor_tab->setModel(sponsor.showSponsor());
    }
}
void MainWindow::on_update_clicked()
{
    QString sponsor_id = ui->id_lineEdit_2->text();
    QString sponsor_nom = ui->name_lineEdit_2->text();
    QString sponsor_montant = ui->montant_lineEdit_2->text();
    QString sponsor_tempsaffichage = ui->tempsaffichage_lineEdit_2->text();
    QString sponsor_nb_totalaffichage = ui->nb_totalaffichage_lineEdit_2->text();
    QString sponsor_etatcontrat = ui->etatcontrat_lineEdit_2->text();

    Sponsor sponsor(sponsor_id, sponsor_nom, sponsor_montant, sponsor_tempsaffichage, sponsor_nb_totalaffichage, sponsor_etatcontrat);

    if (!sponsor.updateSponsor(sponsor_id)) {
        QMessageBox::critical(nullptr, "Error", "Failed to update sponsor.");
        return;
    }
    else {
        QMessageBox::information(nullptr, "Success", "Sponsor edited successfully.");
    }

    ui->sponsor_tab->setModel(sponsor.showSponsor());
}

