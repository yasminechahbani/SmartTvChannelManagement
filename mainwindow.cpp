#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "sponsor.h" // Include the sponsor header file
#include <QMessageBox>
#include <QSqlError>
#include <QDebug>
#include <QPdfWriter>
#include<QPainter>
#include<QDate>
#include<QDesktopServices>
#include<QUrl>
#include <QPainter>
#include <QtCharts>
#include <QCoreApplication>
#include <QtNetwork>
#include <QHeaderView>





MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->sponsor_tab->horizontalHeader(), &QHeaderView::sectionClicked, this, &MainWindow::on_tableHeader_clicked);
    ui->sponsor_tab->setModel(sponsor.showSponsor());
    ui->sponsor_tab->setSortingEnabled(true);

}

void MainWindow::on_tableHeader_clicked(int index)
{
    // Sort the table based on the clicked column
    ui->sponsor_tab->sortByColumn(index, Qt::AscendingOrder);
}


MainWindow::~MainWindow()
{
    delete ui;
}

// Validate form function remains the same if form fields are common

// Other functions remain unchanged
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
    //ui->sponsor_tab->setModel(sponsor.showSponsor());
    QString searchName = ui->search_lineEdit->text();
      //no search
      //ui->sponsor_tab->setModel(sponsor.Readsponsor());
      //with search
      ui->sponsor_tab->setModel(sponsor.searchsponsorByName(searchName));

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
void MainWindow::on_Generate_PDF_clicked()
{
    QPdfWriter pdf("C:/Users/MSI/Downloads/SmartTvChannelManagement-gestion_materiels/gen_UI/SPONSOR.pdf");
    QPainter painter(&pdf);
    int i = 4100;
    const QImage image("C:/Users/MSI/Downloads/SmartTvChannelManagement-gestion_materiels/gen_U/logo.qrc");
    const QPoint imageCoordinates(155,0);
    int width1 = 2000;
    int height1 = 2000;
    QImage img=image.scaled(width1,height1);
    painter.drawImage(imageCoordinates, img );

    QColor dateColor(0x4a5bcf);
    painter.setPen(dateColor);
    painter.setFont(QFont("Montserrat SemiBold", 11));
    QDate cd = QDate::currentDate();
    painter.drawText(7700,250,cd.toString("Ariana, El Ghazela"));
    painter.drawText(8100,500,cd.toString("dd/MM/yyyy"));

    QColor titleColor(0x341763);
    painter.setPen(titleColor);
    painter.setFont(QFont("Montserrat SemiBold", 25));
    painter.drawText(3000,2700,"SPONSOR LIST");

    painter.setPen(Qt::black);
    painter.setFont(QFont("Time New Roman", 15));
    painter.drawRect(100,3300,9400,500);

    painter.setFont(QFont("Montserrat SemiBold", 10));
    painter.drawText(1000, 3600, "SPONSOR_ID");
    painter.drawText(2000, 3600, "NOM");
    painter.drawText(3000, 3600, "MONTANT");
    painter.drawText(4000, 3600, "TEMPSAFFICHAGE");
    painter.drawText(5000, 3600, "NB_TOTALAFFICHAGE");
    painter.drawText(6000, 3600, "ETATCONTRAT");

    painter.setFont(QFont("Montserrat", 10));
    painter.drawRect(100,3300,9400,9000);

    Sponsor sponsor;
    QSqlQuery query = sponsor.getSponsorData();
    int y=4300;
    while (query.next())
    {
        painter.drawLine(100,y,9490,y);
        y+=500;
        painter.drawText(200,i,query.value(0).toString());
        painter.drawText(2000,i,query.value(1).toString());
        painter.drawText(3000,i,query.value(2).toString());
        painter.drawText(4000,i,query.value(3).toString());
        painter.drawText(5000,i,query.value(4).toString());
        painter.drawText(6000,i,query.value(5).toString());

        i = i + 500;
    }

    int reponse = QMessageBox::question(this, "Generate PDF", "PDF Saved. Do you want to open it?", QMessageBox::Yes | QMessageBox::No);
    if (reponse == QMessageBox::Yes)
    {
        QDesktopServices::openUrl(QUrl::fromLocalFile("C:/Users/USER/Desktop/official_projectCPP_folder/pdf/SPONSOR.pdf"));
        painter.end();
    }
    else
    {
        painter.end();
    }
}
void MainWindow::on_stat_clicked()
{
    Sponsor sponsor;
    QSqlQuery query = sponsor.getStatByTempsAffichage();

    QtCharts::QPieSeries *series = new QtCharts::QPieSeries();
    while (query.next()) {
        QString tempsAffichage = query.value(0).toString();
        int count = query.value(1).toInt();
        QtCharts::QPieSlice *slice = new QtCharts::QPieSlice(tempsAffichage, count);
        series->append(slice);
    }

    QtCharts::QChart *chart = new QtCharts::QChart();
    chart->addSeries(series);
    chart->setTitle("Statistiques de temps d'affichage des sponsors");
    chart->setAnimationOptions(QtCharts::QChart::SeriesAnimations);

    QtCharts::QChartView *chartView = new QtCharts::QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    chartView->setParent(ui->tableView);
    chartView->resize(ui->tableView->size());
    chartView->show();
}
void MainWindow::on_checkContracts_clicked()
{
    Sponsor sponsor;
    QSqlQuery query = sponsor.getSponsorsWithNonValideContract();

    QString message;
    while (query.next())
    {
        QString sponsor_nom = query.value(1).toString();
        message += "Sponsor '" + sponsor_nom + "' has a non valide contract.\n";
    }

    if (!message.isEmpty())
    {
        QMessageBox::information(this, "Non Valide Contracts", message);
    }
    else
    {
        QMessageBox::information(this, "Non Valide Contracts", "No sponsors with non valide contracts found.");
    }
}


