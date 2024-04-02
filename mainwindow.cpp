#include "mainwindow.h"
#include "form.h"
#include "supp.h"
//#include "affi.h"
#include "ui_mainwindow.h"
//#include "ui_form.h"
#include "invites.h"
#include <QString>
#include <QMessageBox>
#include <QtSql/QSqlError>

#include "dialog.h"
#include <QPdfWriter>
#include<QPainter>
#include<QDate>
#include<QDesktopServices>
#include <QtCharts>
#include "calendrier.h"
#include "chat.h"
#include "ui_supp.h"
//#include <QWidget>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);





    // Connecter le clic sur le bouton "Ajouter" à notre slot
        connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(openForm()));
       connect(ui->pushButton_6, SIGNAL(clicked()), this, SLOT(opensupp()));
       connect(ui->pushButton_up, SIGNAL(clicked()), this, SLOT(openUpdate()));
       connect(ui->pushButton_4, &QPushButton::clicked, this, &MainWindow::refreshTable);
       //connect(ui->toolButton_3, SIGNAL(clicked()), this, SLOT(openStat()));

        ui->tableView->setModel(inv.afficher());

}

MainWindow::~MainWindow()
{
    delete ui;
}








bool MainWindow::validateFormData()
{
    // Retrieve data from UI
    QString ID_INV=ui->id_lineEdit->text();
    QString NOM_INV=ui->nom_lineEdit_2->text();
    QString PRENOM_INV=ui->prenom_lineEdit_3->text();
    QString SEXE_INV=ui->sexe_lineEdit_4->text();
    QString METIER_INV=ui->metier_lineEdit_5->text();
    QString DATEN_INV=ui->date_lineEdit_6->text();
    QString TEL_INV=ui->num_lineEdit_7->text();

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




//crud
//ajout

void MainWindow::on_pushButton_9_clicked()
{
    QString id_inv=ui->id_lineEdit->text();
    QString nom_inv=ui->nom_lineEdit_2->text();
    QString prenom_inv=ui->prenom_lineEdit_3->text();
    QString sexe_inv=ui->sexe_lineEdit_4->text();
    QString metier_inv=ui->metier_lineEdit_5->text();
    QString dateN_inv=ui->date_lineEdit_6->text();
    QString tel_inv=ui->num_lineEdit_7->text();
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



//suppression

void MainWindow::on_pushButton_10_clicked()
{
    QString id_inv = ui->supp_lineEdit->text();
    bool test = inv.supprimer(id_inv);
    if (test) {
        // Mise à jour de l'affichage si nécessaire
        // ui->equip_tab->setModel(inv.afficher());

        QMessageBox::information(nullptr, QObject::tr("OK"), QObject::tr("Suppression effectuée"), QMessageBox::Cancel);
    } else {
        QMessageBox::critical(nullptr, QObject::tr("Erreur"), QObject::tr("Suppression non effectuée"), QMessageBox::Cancel);
    }
}





















void MainWindow::changeCursor() {
    // Implémentation de la fonction
}



void MainWindow::openForm()
{
Form *form = new Form(this);

form->exec();
ui->tableView->setModel(inv.afficher());

}

void MainWindow::opensupp() {
    supp *suppInterface = new supp(); // Crée une nouvelle instance de l'interface supp
    suppInterface->show(); // Affiche l'interface supp
    ui->tableView->setModel(inv.afficher());

}





void MainWindow::openUpdate()
{

}




QSqlQueryModel* invites::showSearch(const QString &searchTerm)
{
    QSqlQueryModel* model = new QSqlQueryModel();

    QString queryString = "SELECT id_inv, nom_inv, prenom_inv, sexe_inv, metier_inv, dateN_inv, tel_inv, id_em FROM invites";

    if (!searchTerm.isEmpty()) {
        // Modifier la condition WHERE en fonction des attributs que vous voulez rechercher
        queryString += QString(" WHERE LOWER(nom_inv) LIKE LOWER('%%1%')").arg(searchTerm);
        // Vous pouvez également ajouter des conditions pour d'autres attributs si nécessaire
    }

    model->setQuery(queryString);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Prénom"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Sexe"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Métier"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Date de Naissance"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("Téléphone"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("ID Employé"));

    return model;
}



void MainWindow::on_toolButton_clicked()
{
    QString searchTerm = ui->lineEdit_search->text();
        QSqlQueryModel* searchModel = inv.showSearch(searchTerm);
        ui->tableView->setModel(searchModel);
}











void MainWindow::on_tableView_activated(const QModelIndex &index)
{
    QString val = ui->tableView->model()->data(index).toString();

    QSqlQuery qry;
    qry.prepare("SELECT * FROM invites WHERE ID_INV = :val");
    qry.bindValue(":val", val);

    if (qry.exec())
    {
        if (qry.next())
        {
            Dialog dialog;
            dialog.updateInviteDetails(qry.value(0).toString(), qry.value(1).toString(), qry.value(2).toString(), qry.value(3).toString(), qry.value(4).toString(), qry.value(5).toString(),qry.value(6).toString());
            dialog.exec();
        }
    }
    else
    {
        QMessageBox::critical(this, tr("Error"), qry.lastError().text());
    }
}













void MainWindow::on_pushButton_up_clicked()
{
    Dialog m;
    //m.getinfo(ui->)
    m.exec();
}


void MainWindow::refreshTable() {
    // Créer un modèle de tableau
        QSqlQueryModel *myTableModel = new QSqlQueryModel();

        // Appeler la méthode afficher() pour récupérer toutes les données à nouveau
        myTableModel = inv.afficher();

        // Afficher le modèle dans votre QTableView
        ui->tableView->setModel(myTableModel);
}


void MainWindow::on_Generate_PDF_clicked()
{

    QPdfWriter pdf("C:/Users/emnaa/Desktop/gen_UI/invites.pdf");

           QPainter painter(&pdf);
           int i = 4100;
           const QImage image("C:/Users/emnaa/Desktop/gen_UI/417529624_1870268480077915_5802465082538659099_n.png");
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

                  painter.drawText(3000,2700,"GUEST LIST");

                  painter.setPen(Qt::black);
                  painter.setFont(QFont("Time New Roman", 15));
                  painter.drawRect(100,3300,9400,500);

                  painter.setFont(QFont("Montserrat SemiBold", 10));
                  painter.drawText(1000, 3600, "GUEST_ID");
                  painter.drawText(2000, 3600, "GUEST_FIRSTNAME");
                  painter.drawText(3000, 3600, "GUEST_LASTNAME");
                  painter.drawText(4000, 3600, "GUEST_SEXE");
                  painter.drawText(5000, 3600, "GUEST_JOB");
                  painter.drawText(6000, 3600, "GUEST_DOB");
                  painter.drawText(7000, 3600, "GUEST_TEL");

                  painter.setFont(QFont("Montserrat", 10));
                  painter.drawRect(100,3300,9400,9000);


                  invites inv;
                  QSqlQuery query = inv.getInvitesData();
                  int y=4300;
                  while (query.next())
                  {
                      painter.drawLine(100,y,9490,y);
                      y+=500;
                      painter.drawText(200,i,query.value(0).toString());
                          painter.drawText(2000,i,query.value(1).toString());
                          painter.drawText(3000,i,query.value(2).toString());
                          painter.drawText(4000,i,query.value(3).toString());
                          painter.drawText(5000,i,query.value(5).toString());
                          painter.drawText(6000,i,query.value(6).toString());

                     i = i + 500;
                  }

                  int reponse = QMessageBox::question(this, "Génerer PDF", "PDF Enregistré.\nVous voulez l'affichez ?", QMessageBox::Yes |  QMessageBox::No);
                  if (reponse == QMessageBox::Yes)
                  {
                      QDesktopServices::openUrl( QUrl ::fromLocalFile("C:/Users/emnaa/Desktop/gen_UI/invites.pdf"));
                      painter.end();
                  }
                  else
                  {
                      painter.end();
                  }
}



void MainWindow::on_toolButton_2_clicked()
{

     //ui->tableView->setModel(inv.afficher());
    ui->tableView->sortByColumn(0, Qt::AscendingOrder);

}

void MainWindow::on_pushButton_6_clicked() {
    /*invites invi;
    QSqlQuery query = invi.getStatByType();

    QtCharts::QPieSeries *series = new QtCharts::QPieSeries();
    while (query.next()) {
        QString type = query.value(0).toString();
        int count = query.value(1).toInt();
        QtCharts::QPieSlice *slice = new QtCharts::QPieSlice(type, count);
        series->append(slice);
    }

    QtCharts::QChart *chart = new QtCharts::QChart();
    chart->addSeries(series);
    chart->setTitle("Statistiques");
    chart->setAnimationOptions(QtCharts::QChart::SeriesAnimations);

    QtCharts::QChartView *chartView = new QtCharts::QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    // Ajoutons chartView au layout du central widget
    QVBoxLayout *centralLayout = new QVBoxLayout(ui->centralwidget); // Assurez-vous que centralwidget est le widget central de votre MainWindow
    centralLayout->addWidget(chartView);*/


    QMainWindow *supp = new QMainWindow;
        supp->setWindowTitle("Stats");

        invites invi;
        QSqlQuery query = invi.getStatByType();

        QtCharts::QPieSeries *series = new QtCharts::QPieSeries();
        while (query.next()) {
            QString type = query.value(0).toString();
            int count = query.value(1).toInt();
            QtCharts::QPieSlice *slice = new QtCharts::QPieSlice(type, count);
            series->append(slice);
        }

        QtCharts::QChart *chart = new QtCharts::QChart();
        chart->addSeries(series);
        chart->setTitle("statistiques");
        chart->setAnimationOptions(QtCharts::QChart::SeriesAnimations);

        QtCharts::QChartView *chartView = new QtCharts::QChartView(chart);
        chartView->setRenderHint(QPainter::Antialiasing);


        supp->setCentralWidget(chartView);


        QSize chartSize = chartView->size();
        QSize windowSize(chartSize.width(), supp->size().height());
        supp->resize(windowSize);


        supp->show();
}


void MainWindow::on_pushButton_11_clicked()
{
    calendrier *myCalendrier = new calendrier(this); // Instancier votre widget calendrier

            myCalendrier->show(); // Afficher le widget calendrier
            ui->tableView->setModel(inv.afficher());
}

// Fonction de gestion de la sélection de date
void MainWindow::handleDateSelection(const QDate &selectedDate)
{
    // Afficher la date sélectionnée
    QMessageBox::information(this, "Date sélectionnée", "Vous avez sélectionné la date : " + selectedDate.toString());
}


void MainWindow::on_pushButton_list_clicked()
{
    chat *myChat = new chat(this); // Instancier votre widget chat

    myChat->exec();
     // Définir myChat comme widget central de la fenêtre principale

    ui->tableView->setModel(inv.afficher());






}





void MainWindow::on_pushButton_12_clicked()
{
    ui->id_lineEdit->clear();
    ui->nom_lineEdit_2->clear();
    ui->prenom_lineEdit_3->clear();
    ui->sexe_lineEdit_4->clear();
    ui->metier_lineEdit_5->clear();
    ui->date_lineEdit_6->clear();
    ui->num_lineEdit_7->clear();
}
