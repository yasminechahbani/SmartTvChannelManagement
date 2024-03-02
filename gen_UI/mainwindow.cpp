#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "equipement.h"
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
    //connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::changeCursor);
    ui->equip_tab->setModel(Equipmp.showEquipement());
}

MainWindow::~MainWindow()
{
    delete ui;
}
//added code to change the cursor to pointing hand upon click
////validate form////
bool MainWindow::validateFormData()
{
    // Retrieve data from UI
    QString EQUIPEMENT_ID = ui->id_lineEdit->text();
    QString EQUIPEMENT_NAME = ui->name_lineEdit->text();
    QString EQUIPEMENT_TYPE = ui->type_lineEdit->text();
    QString EQUIPEMENT_AVAILABILITY = ui->availability_lineEdit->text();
    QString EQUIPEMENT_STATE = ui->state_lineEdit->text();
    QString EQUIPEMENT_CURRENTHOLDER = ui->currentholder_linedit->text();
    QString EMPLOYEE_ID = ui->employee_id_lineEdit->text();

    // Check constraints for each field
    if (EQUIPEMENT_ID.isEmpty()) {
        QMessageBox::critical(this, "Error", "EQUIPEMENT_ID cannot be empty.");
        return false;
    }

    if (EQUIPEMENT_NAME.isEmpty()) {
        QMessageBox::critical(this, "Error", "EQUIPEMENT_NAME cannot be empty.");
        return false;
    }

    if (EQUIPEMENT_TYPE.isEmpty()) {
        QMessageBox::critical(this, "Error", "EQUIPEMENT_TYPE cannot be empty.");
        return false;
    }

    if (EQUIPEMENT_AVAILABILITY.isEmpty()) {
        QMessageBox::critical(this, "Error", "EQUIPEMENT_AVAILABILITY cannot be empty.");
        return false;
    }

    if (EQUIPEMENT_STATE.isEmpty()) {
        QMessageBox::critical(this, "Error", "EQUIPEMENT_STATE cannot be empty.");
        return false;
    }

    if (EQUIPEMENT_CURRENTHOLDER.isEmpty()) {
        QMessageBox::critical(this, "Error", "EQUIPEMENT_CURRENTHOLDER cannot be empty.");
        return false;
    }

    if (EMPLOYEE_ID.isEmpty()) {
        QMessageBox::critical(this, "Error", "EMPLOYEE_ID cannot be empty.");
        return false;
    }

    // Add more checks for other fields if needed

    return true; // All checks passed
}


////crud/////

//create
void MainWindow::on_ajouter_clicked()
{
    QString EQUIPEMENT_ID = ui->id_lineEdit->text();
        QString EQUIPEMENT_NAME = ui->name_lineEdit->text();
        QString EQUIPEMENT_TYPE = ui->type_lineEdit->text();
        QString EQUIPEMENT_AVAILABILITY = ui->availability_lineEdit->text();
        QString EQUIPEMENT_STATE = ui->state_lineEdit->text();
        QString EQUIPEMENT_CURRENTHOLDER = ui->currentholder_linedit->text();
        int EMPLOYEE_ID = ui->employee_id_lineEdit->text().toInt();
 EQUIPEMENT Equip(EQUIPEMENT_ID,EQUIPEMENT_NAME,EQUIPEMENT_TYPE,EQUIPEMENT_AVAILABILITY,EQUIPEMENT_STATE,EQUIPEMENT_CURRENTHOLDER,EMPLOYEE_ID);
 bool test=Equip.addEquipement();
 if (!validateFormData()) {
        return; // Stop further processing if validation fails
    }
 if(test){
     ui->equip_tab->setModel(Equipmp.showEquipement());

     QMessageBox::information(nullptr,QObject::tr("ok"),QObject::tr("ajout effectué\n"),QMessageBox::Cancel);
 }
 else{
     QMessageBox::critical(nullptr,QObject::tr("not ok"),QObject::tr("ajout non effectué\n"),QMessageBox::Cancel);


 }

}

//delete
void MainWindow::on_delete_button_clicked()
{
    QString E_ID =ui->id_lineEdit_delete->text();
    bool test=Equipmp.deleteEquipement(E_ID);
    if (test){
        ui->equip_tab->setModel(Equipmp.showEquipement());

        QMessageBox::information(nullptr,QObject::tr("ok"),QObject::tr("deletion done\n"),QMessageBox::Cancel);
    }
    else {
        QMessageBox::critical(nullptr,QObject::tr("not ok"),QObject::tr("deletion not done\n"),QMessageBox::Cancel);


    }

}
//update

void MainWindow::on_updatebutton_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Confirmation", "Voulez-vous modifier?", QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {
        QString EQUIPEMENT_ID = ui->id_lineEdit->text();
            QString EQUIPEMENT_NAME = ui->name_lineEdit->text();
            QString EQUIPEMENT_TYPE = ui->type_lineEdit->text();
            QString EQUIPEMENT_AVAILABILITY = ui->availability_lineEdit->text();
            QString EQUIPEMENT_STATE = ui->state_lineEdit->text();
            QString EQUIPEMENT_CURRENTHOLDER = ui->currentholder_linedit->text();
            int EMPLOYEE_ID = ui->employee_id_lineEdit->text().toInt();

            EQUIPEMENT Equip(EQUIPEMENT_ID,EQUIPEMENT_NAME,EQUIPEMENT_TYPE,EQUIPEMENT_AVAILABILITY,EQUIPEMENT_STATE,EQUIPEMENT_CURRENTHOLDER,EMPLOYEE_ID);


            QSqlQuery query;
query.prepare("UPDATE EQUIPEMENT SET EQUIPEMENT_ID = :equipement_id, EQUIPEMENT_NAME = :equipement_name, EQUIPEMENT_TYPE = :equipement_type, EQUIPEMENT_AVAILABILITY = :equipement_availability, EQUIPEMENT_STATE = :equipement_state, EQUIPEMENT_CURRENTHOLDER = :equipement_currentholder, EMPLOYEE_ID = :employee_id where EQUIPEMENT_ID=:equipement_id");
            query.bindValue(":equipement_id", EQUIPEMENT_ID);
            query.bindValue(":equipement_name", EQUIPEMENT_NAME);
            query.bindValue(":equipement_type", EQUIPEMENT_TYPE);
            query.bindValue(":equipement_availability", EQUIPEMENT_AVAILABILITY);
            query.bindValue(":equipement_state", EQUIPEMENT_STATE);
            query.bindValue(":equipement_currentholder", EQUIPEMENT_CURRENTHOLDER);
            query.bindValue(":employee_id", EMPLOYEE_ID);
            if(query.exec())
                ui->equip_tab->setModel(Equipmp.showEquipement());

}

}




void MainWindow::on_equip_tab_activated(const QModelIndex &index)
{

    QString val = ui->equip_tab->model()->data(index).toString();

    QSqlQuery qry;
    qry.prepare("SELECT * FROM EQUIPEMENT WHERE EQUIPEMENT_ID = :val");
    qry.bindValue(":val", val);

    if (qry.exec())
    {
        if (qry.next())
        {
           // ui->id_lineEdit->setText(qry.value(0).toString());
            ui->id_lineEdit->setReadOnly(true);  // Make the ID field read-only
            ui->id_lineEdit->setText(qry.value(0).toString());
            //ui->id_lineEdit->setReadOnly(false);

            ui->name_lineEdit->setText(qry.value(1).toString());
            ui->type_lineEdit->setText(qry.value(2).toString());
            ui->availability_lineEdit->setText(qry.value(3).toString());
            ui->state_lineEdit->setText(qry.value(4).toString());
            ui->currentholder_linedit->setText(qry.value(5).toString());
            ui->employee_id_lineEdit->setText(qry.value(6).toString());
        }
    }
    else
    {
        QMessageBox::critical(this, tr("Error"), qry.lastError().text());
    }
}


void MainWindow::on_list_all_button_clicked()
{
    ui->equip_tab->setModel(Equipmp.showEquipement());


}

void MainWindow::on_clear_fields_add_clicked()
{
    ui->id_lineEdit->clear();
       ui->name_lineEdit->clear();
       ui->type_lineEdit->clear();
       ui->availability_lineEdit->clear();
       ui->state_lineEdit->clear();
       ui->currentholder_linedit->clear();
       ui->employee_id_lineEdit->clear();
}

void MainWindow::on_clear_all_in_table_clicked()
{
    QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "Confirmation", "Are you sure you want to clear all lines in the table?", QMessageBox::Yes | QMessageBox::No);

        if (reply == QMessageBox::Yes) {
            QSqlQuery query;
            query.prepare("DELETE FROM EQUIPEMENT");
            if (query.exec()) {
                ui->equip_tab->setModel(Equipmp.showEquipement());

            } else {
                qDebug() << "Error executing delete query:" << query.lastError().text();
            }
        }

}

void MainWindow::on_Generate_PDF_clicked()
{

    QPdfWriter pdf("C:/Users/user/OneDrive/Documents/gen_UI/EQUIPEMENT.pdf");

           QPainter painter(&pdf);
           int i = 4100;
           const QImage image("C:/Users/user/OneDrive/Documents/gen_UI/417529624_1870268480077915_5802465082538659099_n.png");
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

                  painter.drawText(3000,2700,"EQUIPEMENT LIST");

                  painter.setPen(Qt::black);
                  painter.setFont(QFont("Time New Roman", 15));
                  painter.drawRect(100,3300,9400,500);

                  painter.setFont(QFont("Montserrat SemiBold", 10));
                  painter.drawText(1000, 3600, "EQUIPEMENT_ID");
                  painter.drawText(2000, 3600, "EQUIPEMENT_NAME");
                  painter.drawText(3000, 3600, "EQUIPEMENT_TYPE");
                  painter.drawText(4000, 3600, "EQUIPEMENT_AVAILABILITY");
                  painter.drawText(5000, 3600, "EQUIPEMENT_STATE");
                  painter.drawText(6000, 3600, "EQUIPEMENT_CURRENTHOLDER");
                  painter.drawText(7000, 3600, "EMPLOYEE_ID");

                  painter.setFont(QFont("Montserrat", 10));
                  painter.drawRect(100,3300,9400,9000);


                  EQUIPEMENT EQUIP;
                  QSqlQuery query = EQUIP.getEQUIPEMENTData();
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
                      QDesktopServices::openUrl( QUrl ::fromLocalFile("C:/Users/user/OneDrive/Documents/gen_UI/EQUIPEMENT.pdf"));
                      painter.end();
                  }
                  else
                  {
                      painter.end();
                  }
}
////sort/////

//////
///  search
///
///

QSqlQueryModel* EQUIPEMENT::showSearch(const QString &searchTerm)
{
    QSqlQueryModel* model = new QSqlQueryModel();

    QString queryString = "SELECT * FROM EQUIPEMENT";

    if (!searchTerm.isEmpty()) {
        queryString += QString(" WHERE LOWER(EQUIPEMENT_NAME) LIKE LOWER('%%1%')").arg(searchTerm);
    }

    model->setQuery(queryString);
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("EQUIPEMENT_ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("EQUIPEMENT_NAME"));

    return model;
}


void MainWindow::on_search_button_clicked()
{
    QString searchTerm = ui->search_lineEdit->text();
    QSqlQueryModel* searchModel = Equipmp.showSearch(searchTerm);
    ui->equip_tab->setModel(searchModel);

}

