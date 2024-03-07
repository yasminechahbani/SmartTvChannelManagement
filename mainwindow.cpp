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
//#include <QWidget>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->tableView->setModel(inv.afficher());



    // Connecter le clic sur le bouton "Ajouter" à notre slot
        connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(openForm()));
       connect(ui->pushButton_6, SIGNAL(clicked()), this, SLOT(opensupp()));
       connect(ui->pushButton_up, SIGNAL(clicked()), this, SLOT(openUpdate()));
       connect(ui->pushButton_4, &QPushButton::clicked, this, &MainWindow::refreshTable);

}

MainWindow::~MainWindow()
{
    delete ui;
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


