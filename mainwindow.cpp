#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "emission.h" // Include the emission header file
#include <QMessageBox>
#include <QSqlError>
#include<QDebug>
#include <QPdfWriter>
#include<QPainter>
#include<QDate>
#include<QDesktopServices>
#include<QUrl>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // Connect signals and slots here if needed
    ui->tabb->setModel(Emission.ReadEmission()); // Update to use the EMISSION class
}

MainWindow::~MainWindow()
{
    delete ui;
}

// Validate form function remains the same if form fields are common

void MainWindow::on_ajouter_clicked()
{
    QString emission_id = ui->id_lineEdit->text();
    QString emission_nom = ui->name_lineEdit->text();
    QString emission_host = ui->host_lineEdit->text();
    int emission_nbviewers = ui->nbviews_lineEdit->text().toInt();
    QString emission_genre = ui->genre_lineEdit->text();
    QString emission_type = ui->type_lineEdit->text();
    QString emission_date = ui->date_lineEdit->text();
    QString emission_duree = ui->duree_lineEdit->text();

    EMISSION Emission(emission_id, emission_nom, emission_host, emission_nbviewers, emission_genre, emission_type, emission_date, emission_duree);

    if (!Emission.CreateEmission()) {
        QMessageBox::critical(nullptr, "Error", "Failed to add emission.");
        return;
    }

    ui->tabb->setModel(Emission.ReadEmission());
    QMessageBox::information(nullptr, "Success", "Emission added successfully.");
}

void MainWindow::on_delete_button_clicked()
{
    QString emission_id = ui->id_lineEdit_delete->text();
    if (!Emission.deleteEmission(emission_id)) {
        QMessageBox::critical(nullptr, "Error", "Failed to delete emission.");
        return;
    }

    ui->tabb->setModel(Emission.ReadEmission());
    QMessageBox::information(nullptr, "Success", "Emission deleted successfully.");
}


//void MainWindow::on_list_all_button_clicked()
//{
//    ui->tabb->setModel(Emission.ReadEmission());
//}



void MainWindow::on_clear_all_in_table_clicked()
{
    int reply = QMessageBox::question(this, "Confirmation", "Are you sure you want to clear all lines in the table?", QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        QSqlQuery query;
        query.prepare("DELETE FROM emissions");
        if (!query.exec()) {
            QMessageBox::critical(this, "Error", "Failed to clear table.");
            return;
        }
        ui->tabb->setModel(Emission.ReadEmission());
    }
}


void MainWindow::on_list_all_button_clicked()
{
    QString searchName = ui->search_name_lineEdit->text();

    ui->tabb->setModel(Emission.searchEmissionByName(searchName));
}


void MainWindow::on_update_clicked()
{
    QString emission_id = ui->id_lineEdit_2->text();
    QString emission_nom = ui->name_lineEdit_2->text();
    QString emission_host = ui->host_lineEdit_2->text();
    int emission_nbviewers = ui->nbviews_lineEdit_2->text().toInt();
    QString emission_genre = ui->genre_lineEdit_2->text();
    QString emission_type = ui->type_lineEdit_2->text();
    QString emission_date = ui->date_lineEdit_2->text();
    QString emission_duree = ui->duree_lineEdit_2->text();

    EMISSION Emission(emission_id, emission_nom, emission_host, emission_nbviewers, emission_genre, emission_type, emission_date, emission_duree);

    if (!Emission.updateEmission(emission_id)) {
        QMessageBox::critical(nullptr, "Error", "Failed to update emission.");
        return;
    }
    else
        QMessageBox::information(nullptr, "Success", "Emission edited successfully.");


    ui->tabb->setModel(Emission.ReadEmission());
    QMessageBox::information(nullptr, "Success", "Emission updated successfully.");
}

