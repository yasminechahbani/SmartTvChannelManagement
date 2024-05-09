#include "equip_mainwindow.h"
//#include "ui_mainwindow.h"
#include "ui_equip_mainwindow.h"
#include "equipement.h"
#include "qrgeneratewindow.h"
#include "returnequipmentwindow.h"
#include "chooseequipforqr.h"
#include "QrCodeGenerator.h"
#include "chatequip.h"
#include <QMessageBox>
#include <QSqlError>
#include<QDebug>
#include <QPdfWriter>
#include<QHttpPart>
#include<QPainter>
#include<QDate>
#include<QDesktopServices>
#include<QUrl>
#include <QtCharts>
#include <QtCore>
//#include <C:\Users\user\OneDrive\Documents\SmtpClient-for-Qt-2.0\src\SmtpMime>
#include <QCoreApplication>
#include "SmtpMime"
//#include <openssl/ssl.h>
//#include <openssl/err.h>
#include <QInputDialog>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QUrlQuery>
//MESSAGE INCLUDES
/*#include <QMessageManager>
#include <QMessage>
#include <QMessageAddress>*/
#include <QProcess>
#include <QStringList>
#include <QJsonDocument>
#include <QJsonObject>
#include "useequipmentwindow.h"
#include "Employeemainwindow.h"
#include "sponsormainwindow.h"
#include "emissionmainwindow.h"
#include "invitesmainwindow.h"




MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::changeCursor);
    //show el statwindow
     connect(ui->stats_button, &QPushButton::clicked, this, &MainWindow::on_stats_button_clicked);

    //
    ui->equip_tab->setModel(Equipmp.showEquipement());
}

MainWindow::~MainWindow()
{
    delete ui;
}
////validate form////
bool MainWindow::validateFormData()
{
    QString EQUIPEMENT_ID = ui->id_lineEdit->text();
    QString EQUIPEMENT_NAME = ui->name_lineEdit->text();
    //QString EQUIPEMENT_TYPE = ui->type_lineEdit->text();
    QString EQUIPEMENT_AVAILABILITY = ui->availability_lineEdit->text();
    QString EQUIPEMENT_STATE = ui->state_lineEdit->text();
    QString EQUIPEMENT_CURRENTHOLDER = ui->currentholder_linedit->text();
    QString EMPLOYEE_ID = ui->employee_id_lineEdit->text();

    if (EQUIPEMENT_ID.isEmpty()) {
        QMessageBox::critical(this, "Error", "EQUIPEMENT_ID cannot be empty.");
        return false;
    }

    if (EQUIPEMENT_NAME.isEmpty()) {
        QMessageBox::critical(this, "Error", "EQUIPEMENT_NAME cannot be empty.");
        return false;
    }

    /*    // bel linedit
     * if (EQUIPEMENT_TYPE.isEmpty()) {
        QMessageBox::critical(this, "Error", "EQUIPEMENT_TYPE cannot be empty.");
        return false;
    }*/
    //bel combo bow
    if (ui->type_comboBox->currentText().isEmpty()) {
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


    return true;
}


////crud/////

//create
void MainWindow::on_ajouter_clicked()
{
    QString EQUIPEMENT_ID = ui->id_lineEdit->text();
        QString EQUIPEMENT_NAME = ui->name_lineEdit->text();
        //linedit
        //QString EQUIPEMENT_TYPE = ui->type_lineEdit->text();
        //type combobox
        QString EQUIPEMENT_TYPE = ui->type_comboBox->currentText(); // Read from the combo box

        QString EQUIPEMENT_AVAILABILITY = ui->availability_lineEdit->text();
        QString EQUIPEMENT_STATE = ui->state_lineEdit->text();
        QString EQUIPEMENT_CURRENTHOLDER = ui->currentholder_linedit->text();
        int EMPLOYEE_ID = ui->employee_id_lineEdit->text().toInt();


 EQUIPEMENT Equip(EQUIPEMENT_ID,EQUIPEMENT_NAME,EQUIPEMENT_TYPE,EQUIPEMENT_AVAILABILITY,EQUIPEMENT_STATE,EQUIPEMENT_CURRENTHOLDER,EMPLOYEE_ID);
 bool test=Equip.addEquipement();
 if (!validateFormData()) {
        return;
    }
 if(test){
     ui->equip_tab->setModel(Equipmp.showEquipement());

 }


}

//delete

    void MainWindow::on_delete_button_clicked()
    {
        QString E_ID = ui->id_lineEdit_delete->text().trimmed();



        Equipmp.deleteEquipement(E_ID);


            ui->equip_tab->setModel(Equipmp.showEquipement());

    }



//update

void MainWindow::on_updatebutton_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Confirmation", "Voulez-vous modifier?", QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {
        QString EQUIPEMENT_ID = ui->id_lineEdit->text();
            QString EQUIPEMENT_NAME = ui->name_lineEdit->text();
            //line edit
            //QString EQUIPEMENT_TYPE = ui->type_lineEdit->text();
            //combo box
            QString EQUIPEMENT_TYPE = ui->type_comboBox->currentText(); // Read from the combo box

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
            //linedit
            //ui->type_lineEdit->setText(qry.value(2).toString());
            //combo bow
            // Set the selected value in the combo box
            ui->type_comboBox->setCurrentText(qry.value(2).toString());
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
       //ui->type_lineEdit->clear();
       ui->type_comboBox->setCurrentIndex(-1); // Clear the selected item in the combo box

       ui->availability_lineEdit->clear();
       ui->state_lineEdit->clear();
       ui->currentholder_linedit->clear();
       ui->employee_id_lineEdit->clear();
       ui->id_lineEdit->setReadOnly(false);

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

    QPdfWriter pdf("C:/Users/USER/Desktop/official_projectCPP_folder/integration finale/bien/integration - Copie/EQUIPEMENT.pdf");

           QPainter painter(&pdf);
           int i = 4100;
           const QImage image("C:/Users/USER/Desktop/official_projectCPP_folder/integration finale/bien/integration - Copie/417529624_1870268480077915_5802465082538659099_n.png");
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
                  painter.drawText(2000, 3600, "NAME");
                  painter.drawText(3000, 3600, "TYPE");
                  painter.drawText(4000, 3600, "AVAILABILITY");
                  painter.drawText(5000, 3600, "STATE");
                  painter.drawText(6000, 3600, "CURRENTHOLDER");
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
                      QDesktopServices::openUrl( QUrl ::fromLocalFile("C:/Users/USER/Desktop/official_projectCPP_folder/integration finale/bien/integration - Copie/EQUIPEMENT.pdf"));
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
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NAME"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("TYPE"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("AVAILABILITY"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("STATE"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("CURRENTHOLDER"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("EMPLOYEE_ID"));

    return model;
}

///////
void MainWindow::on_search_button_clicked()
{
    QString searchTerm = ui->search_lineEdit->text();
    QSqlQueryModel* searchModel = Equipmp.showSearch(searchTerm);
    ui->equip_tab->setModel(searchModel);

}
///////////

void MainWindow::on_stats_button_clicked()
{

    QMainWindow *statsWindow = new QMainWindow;
    statsWindow->setWindowTitle("Stats");

    EQUIPEMENT equ;
    QSqlQuery query = equ.getStatByType();

    QtCharts::QPieSeries *series = new QtCharts::QPieSeries();
    while (query.next()) {
        QString type = query.value(0).toString();
        int count = query.value(1).toInt();
        QtCharts::QPieSlice *slice = new QtCharts::QPieSlice(type, count);
        series->append(slice);
    }

    QtCharts::QChart *chart = new QtCharts::QChart();
    chart->addSeries(series);
    chart->setTitle("Types of Equipment");
    chart->setAnimationOptions(QtCharts::QChart::SeriesAnimations);

    QtCharts::QChartView *chartView = new QtCharts::QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);


    statsWindow->setCentralWidget(chartView);


    QSize chartSize = chartView->size();
    QSize windowSize(chartSize.width(), statsWindow->size().height());
    statsWindow->resize(windowSize);


    //statsWindow->show();
    chartView->setParent(ui->stat_tab);
    chartView->resize(ui->stat_tab->size());
    chartView->show();

}

void MainWindow::on_qr_button_clicked()
{

    chooseEquipForQr *chooseWindow = new chooseEquipForQr(this);
    chooseWindow->show();
 /*QRGenerateWindow *qrWindow = new QRGenerateWindow(this);
    // Set equipment data to QRGenerateWindow
    //qrWindow->setEquipmentData(Equipmp.showEquipement());

    // Generate QR code image
    QrCodeGenerator generator;
    QString data = "https://github.com/zxing-cpp/zxing-cpp";
    QImage qrCodeImage = generator.generateQr(data);

    // Set the QR code image to qrCodeLabel in QRGenerateWindow
    QLabel *qrCodeLabel = qrWindow->findChild<QLabel*>("qrCodeLabel");
    if (qrCodeLabel) {
        // Resize the QLabel to fit the QR code image
        qrCodeLabel->setPixmap(QPixmap::fromImage(qrCodeImage).scaled(qrCodeLabel->size(), Qt::KeepAspectRatio));

        // Resize the window to fit the QLabel and make it larger
        QSize newSize = qrCodeLabel->size() + QSize(100, 100); // Adjust the size as needed
        qrWindow->resize(newSize);

        qrWindow->show();

    } else {
        // Handle error: qrCodeLabel not found
        delete qrWindow; // Clean up the allocated memory
    }*/

}


////////////////////////////////

///SMS
///
/// workss (twilio api) but issue is that its limited

void MainWindow::on_sms_clicked()
{
    // Prompt the user to enter the recipient's phone number and the message
    QString recipient = QInputDialog::getText(this, "Enter Recipient", "Enter the recipient's phone number:");
    if (recipient.isEmpty()) {
        // User cancelled or left the recipient field empty
        QMessageBox::warning(this, "Error", "SMS sending cancelled. Please enter the recipient's phone number.");
        return;
    }

    QString message = QInputDialog::getText(this, "Enter Message", "Enter the message to send:");
    if (message.isEmpty()) {
        // User cancelled or left the message field empty
        QMessageBox::warning(this, "Error", "SMS sending cancelled. Please enter the message to send.");
        return;
    }

    // Send the SMS message using the sendSMS function
    sendSMS(recipient, message);
}

void MainWindow::sendSMS(const QString& recipient, const QString& message)
{
    QNetworkAccessManager* manager = new QNetworkAccessManager(this);
    connect(manager, &QNetworkAccessManager::finished, this, &MainWindow::onSMSRequestFinished);

    // Twilio API credentials

     QString accountSid = "ACc4e0e1d307fcab357fa13b55....";
     QString authToken = "c3fc5436f92a7a9da560dac1acb.....";

    QUrl url("https://api.twilio.com/2010-04-01/Accounts/" + accountSid + "/Messages.json");
    QNetworkRequest request(url);
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/x-www-form-urlencoded");

    // Construct request parameters
    QUrlQuery params;
    params.addQueryItem("To", recipient);
    //params.addQueryItem("From", "+12132045869");
    params.addQueryItem("From", "+ +12403123881");


    params.addQueryItem("Body", message);
    QByteArray postData = params.toString(QUrl::FullyEncoded).toUtf8();

    // Set Twilio API authentication header
    QString auth = accountSid + ":" + authToken;
    QByteArray authData = auth.toUtf8().toBase64();
    request.setRawHeader("Authorization", "Basic " + authData);

    // Send HTTP POST request to Twilio API
    manager->post(request, postData);
}

void MainWindow::onSMSRequestFinished(QNetworkReply* reply)
{
    if (reply->error() == QNetworkReply::NoError) {
        QMessageBox::information(this, "SMS Sent", "The SMS message has been sent successfully.");
    } else {
        QMessageBox::critical(this, "Error", "Failed to send SMS message: " + reply->errorString());
    }
    reply->deleteLater();
}




/////////////////////////////////////////////////infobip/////////////////////////
// bel name , pass : infobip   //Connected to SMTP server ✅
void MainWindow::sendEmail(const QString& recipient, const QString& subject, const QString& body)
{
    // Set up Infobip API details
    QString authToken = "5609830a95e4a56e5e6cd1cae191177f-02ef3452-6d3f-40df-88d4-066ff97a9207";
    QString url = "https://qy9wy3.api.infobip.com/email/3/send";

    // Set up email content
    QString from = "Yasmine Chahbani <yasmine.chahbani@esprit.tn>";

    // Create form data
    QHttpMultiPart *multiPart = new QHttpMultiPart(QHttpMultiPart::FormDataType);

    // Add form fields
    QHttpPart fromPart;
    fromPart.setHeader(QNetworkRequest::ContentDispositionHeader, QVariant("form-data; name=\"from\""));
    fromPart.setBody(from.toUtf8());

    QHttpPart toPart;
    toPart.setHeader(QNetworkRequest::ContentDispositionHeader, QVariant("form-data; name=\"to\""));
    toPart.setBody(recipient.toUtf8());

    QHttpPart subjectPart;
    subjectPart.setHeader(QNetworkRequest::ContentDispositionHeader, QVariant("form-data; name=\"subject\""));
    subjectPart.setBody(subject.toUtf8());

    QHttpPart bodyPart;
    bodyPart.setHeader(QNetworkRequest::ContentDispositionHeader, QVariant("form-data; name=\"text\""));
    bodyPart.setBody(body.toUtf8());

    // Add parts to the multiPart
    multiPart->append(fromPart);
    multiPart->append(toPart);
    multiPart->append(subjectPart);
    multiPart->append(bodyPart);

    // Create network access manager
    QNetworkAccessManager* manager = new QNetworkAccessManager(this);

    // Connect signals and slots for request handling
    connect(manager, &QNetworkAccessManager::finished, this, [=](QNetworkReply *reply){
        if (reply->error() == QNetworkReply::NoError) {
            qDebug() << "Email sent successfully";
        } else {
            qDebug() << "Error sending email:" << reply->errorString();
        }
        reply->deleteLater();
    });

    // Create network request
    QNetworkRequest request(url);
    request.setRawHeader("Authorization", "App " + authToken.toUtf8());

    // Send POST request
    manager->post(request, multiPart);
}


void MainWindow::on_use_return_clicked()
{
    // Example usage of sendEmail function
    sendEmail("chahbaniyesmine@gmail.com", "equipment notification", "you have successfully rented the equipement");


}

/*void onEmailRequestFinished(QNetworkReply *reply) {
    if (reply->error() == QNetworkReply::NoError) {
        qDebug() << "Email sent successfully!";
    } else {
        qDebug() << "Failed to send email:" << reply->errorString();
    }
    reply->deleteLater();
}*/
/////////////////////////private mail api/////////////////////////




void MainWindow::on_useEquipment_clicked()
{
    useequipmentwindow *use = new useequipmentwindow(this);
       use->setAttribute(Qt::WA_DeleteOnClose); // Ensure that the instance is deleted when closed
       use->show();
       //use->ui->equip_tab(Equipmp.showEquipement());
       ui->equip_tab->setModel(Equipmp.showEquipement());




}
// Return equipment
void MainWindow::on_returnEquipment_clicked()
{
    returnequipmentwindow *use = new returnequipmentwindow(this);
       use->setAttribute(Qt::WA_DeleteOnClose); // Ensure that the instance is deleted when closed
       use->show();
       //use->ui->equip_tab(Equipmp.showEquipement());
       ui->equip_tab->setModel(Equipmp.showEquipement());

}



void MainWindow::on_notif_clicked()
{ chatequip *use = new chatequip(this);


    use->setAttribute(Qt::WA_DeleteOnClose);

    // Show the chat window
    use->show();
}


void MainWindow::on_Sort_clicked()
{
    int i = ui->Sorting->currentIndex();

    if (i == 0) {
        // Show the unsorted list
        ui->equip_tab->setModel(Equipmp.showEquipement());
    } else if (i == 1) {
        // Show the sorted list alphabetically
        ui->equip_tab->setModel(Equipmp.getAllEQUIPSorted());
    }
}



//other buttonns





void MainWindow::on_Sponsors_clicked(){

    this->close();

    SponsorMainWindow *chooseWindow = new SponsorMainWindow(this);

        chooseWindow->show();


}
/*
void invitesMainWindow::on_equipement_clicked(){

    this->close();

    MainWindow *chooseWindow = new MainWindow(this);

        chooseWindow->show();


}*/



void MainWindow::on_employees_clicked(){

    this->close();

    EmployeeMainWindow *chooseWindow = new EmployeeMainWindow(this);

        chooseWindow->show();


}

void MainWindow::on_guests_clicked(){

    this->close();

    invitesMainWindow *chooseWindow = new invitesMainWindow(this);

        chooseWindow->show();

}
void MainWindow::on_shows_clicked()
{
    this->close();


    EmissionMainWindow * chooseWindow = new EmissionMainWindow(this);
    chooseWindow->show();
}


