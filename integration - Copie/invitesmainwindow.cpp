#include "invitesmainwindow.h"
#include "form.h"
#include "supp.h"
//#include "affi.h"
#include "ui_invitesmainwindow.h"
//#include "ui_form.h"
#include "invites.h"
#include <QString>
#include <QMessageBox>
#include <QtSql/QSqlError>
#include <QtCore>
//#include <openssl/ssl.h>
//#include <openssl/err.h>
#include "dialog.h"
#include <QPdfWriter>
#include<QPainter>
#include<QDate>
#include<QDesktopServices>
#include <QtCharts>
#include "calendrier.h"
#include "chat.h"
#include "ui_supp.h"
#include <QNetworkRequest>
#include <QProcess>
#include <QDebug>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QtSerialPort>
#include <QSerialPortInfo>
#include "Employeemainwindow.h"
#include "sponsormainwindow.h"
#include "equip_mainwindow.h"
#include "emissionmainwindow.h"


//#include <QWidget>
invitesMainWindow::invitesMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::invitesMainWindow)
{
    ui->setupUi(this);

/*int ret=A.connect_arduino();
switch(ret){
case(0):qDebug()<<"arduino is available and connected to : "<<A.getarduino_port_name();
    break;
case(1):qDebug() << "arduino is available but not connected to : "<<A.getarduino_port_name();
    break;
case(-1):qDebug() << "arduino is not available";
}
QObject::connect(A.getserial(),SIGNAL(readyRead()),this,SLOT(update_label()));
*/

    arduino_is_available = false;
        arduino_port_name = "";
    arduino = new QSerialPort;
    qDebug() << "Available ports:";
        foreach(const QSerialPortInfo &serialPortInfo, QSerialPortInfo::availablePorts()){
            qDebug() << "Port Name: " << serialPortInfo.portName();
        }
        foreach(const QSerialPortInfo &serialPortInfo, QSerialPortInfo::availablePorts()){
            if(serialPortInfo.hasVendorIdentifier() && serialPortInfo.hasProductIdentifier()){
                if(serialPortInfo.vendorIdentifier() == arduino_uno_vendor_id){
                    if(serialPortInfo.productIdentifier() == arduino_uno_product_id){
                        arduino_port_name = serialPortInfo.portName();
                        arduino_is_available = true;
                    }
                }
            }
        }
        if(arduino_is_available){
            // Open and configure the serial port
            arduino->setPortName(arduino_port_name);
            if (arduino->open(QSerialPort::ReadOnly)) {
                qDebug() << "Serial port opened successfully.";
                //QMessageBox::information(this, "Port success", "successful opening serial port: " );

            } else {
                qDebug() << "Error opening serial port:" << arduino->errorString();
                //QMessageBox::warning(this, "Port error", "Error opening serial port: " + arduino->errorString());
            }

            arduino->setBaudRate(QSerialPort::Baud9600);
            arduino->setDataBits(QSerialPort::Data8);
            arduino->setParity(QSerialPort::NoParity);
            arduino->setStopBits(QSerialPort::OneStop);
            arduino->setFlowControl(QSerialPort::NoFlowControl);
           // QObject::connect(arduino, SIGNAL(readyRead()), this, SLOT(readData()));
            QObject::connect(arduino, SIGNAL(readyRead()), this, SLOT(readFromSerial()));

               data=arduino->readAll();

//QMessageBox::information(this, "arduino data:", "data received \n " +data );

        } else {
            // Give error message if Arduino not available
            //QMessageBox::warning(this, "Port error", "Couldn't find the Arduino!");
        }






    // Connecter le clic sur le bouton "Ajouter" à notre slot
        connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(openForm()));
       //connect(ui->pushButton_6, SIGNAL(clicked()), this, SLOT(opensupp()));
       connect(ui->pushButton_up, SIGNAL(clicked()), this, SLOT(openUpdate()));
       connect(ui->pushButton_4, &QPushButton::clicked, this, &invitesMainWindow::refreshTable);
       //connect(ui->toolButton_3, SIGNAL(clicked()), this, SLOT(openStat()));

        ui->tableView->setModel(inv.afficher());

}

invitesMainWindow::~invitesMainWindow()
{
    delete ui;
}








bool invitesMainWindow::validateFormData()
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

void invitesMainWindow::on_pushButton_9_clicked()
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

void invitesMainWindow::on_pushButton_10_clicked()
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





















void invitesMainWindow::changeCursor() {
    // Implémentation de la fonction
}



void invitesMainWindow::openForm()
{
Form *form = new Form(this);

form->exec();
ui->tableView->setModel(inv.afficher());

}

void invitesMainWindow::opensupp() {
    supp *suppInterface = new supp(); // Crée une nouvelle instance de l'interface supp
    suppInterface->show(); // Affiche l'interface supp
    ui->tableView->setModel(inv.afficher());

}





void invitesMainWindow::openUpdate()
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



void invitesMainWindow::on_toolButton_clicked()
{
    QString searchTerm = ui->lineEdit_search->text();
        QSqlQueryModel* searchModel = inv.showSearch(searchTerm);
        ui->tableView->setModel(searchModel);
}











void invitesMainWindow::on_tableView_activated(const QModelIndex &index)
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













void invitesMainWindow::on_pushButton_up_clicked()
{
    Dialog m;
    //m.getinfo(ui->)
    m.exec();
}


void invitesMainWindow::refreshTable() {
    // Créer un modèle de tableau
        QSqlQueryModel *myTableModel = new QSqlQueryModel();

        // Appeler la méthode afficher() pour récupérer toutes les données à nouveau
        myTableModel = inv.afficher();

        // Afficher le modèle dans votre QTableView
        ui->tableView->setModel(myTableModel);
}


void invitesMainWindow::on_Generate_PDF_clicked()
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



void invitesMainWindow::on_toolButton_2_clicked()
{

     //ui->tableView->setModel(inv.afficher());
    ui->tableView->sortByColumn(0, Qt::AscendingOrder);

}

void invitesMainWindow::on_pushButton_6_clicked() {
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


   // QMainWindow *supp = new QMainWindow;
      //  supp->setWindowTitle("Stats");

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


        //supp->setCentralWidget(chartView);


       //QSize chartSize = chartView->size();
       // QSize windowSize(chartSize.width(), supp->size().height());
        //supp->resize(windowSize);


        //supp->show();

        chartView->setParent(ui->tableView_2);
                 chartView->resize(ui->tableView_2->size());
                 chartView->show();
}


void invitesMainWindow::on_pushButton_11_clicked()
{

        calendrier *myCalendrier = new calendrier(this);
        myCalendrier->show();
       ui->tableView->setModel(inv.afficher());

}



/*void invitesMainWindow::on_pushButton_list_clicked()
{
    chat *myChat = new chat(this); // Instancier votre widget chat

    myChat->exec();
     // Définir myChat comme widget central de la fenêtre principale

    //ui->tableView->setModel(inv.afficher());
     //notif esm el table


}*/
void invitesMainWindow::on_pushButton_list_clicked()
{
    chat myChat; // Instantiate your chat widget

    // Prepare notification data and populate the "notif" table view
    QVector<QString> notificationData = myChat.getNotificationFromFile();
    QStandardItemModel *model = new QStandardItemModel(notificationData.size(), 1, this);
    model->setHorizontalHeaderItem(0, new QStandardItem(QString("To do list")));
    for (int i = 0; i < notificationData.size(); i++) {
        QStandardItem *Row = new QStandardItem(notificationData[i]);
        model->setItem(i, Row);
    }
    ui->notif->setModel(model); // Assuming "notif" is the name of your table view

    ui->notif->resizeColumnsToContents(); // Resize columns to fit content
    ui->notif->horizontalHeader()->setStretchLastSection(true); // Expand the right side to fit content
}







void invitesMainWindow::on_pushButton_12_clicked()
{
    ui->id_lineEdit->clear();
    ui->nom_lineEdit_2->clear();
    ui->prenom_lineEdit_3->clear();
    ui->sexe_lineEdit_4->clear();
    ui->metier_lineEdit_5->clear();
    ui->date_lineEdit_6->clear();
    ui->num_lineEdit_7->clear();
}
/*
void MainWindow::on_pushButton_3_clicked()
{
    QString recipient = "96027492"; // Numéro de téléphone du destinataire
        QString message = "Votre message WhatsApp ici"; // Message à envoyer

        QNetworkAccessManager *manager = new QNetworkAccessManager(this);

        QUrl url("https://mmk3j9.api.infobip.com/omni/1/whatsapp");
        QNetworkRequest request(url);
        request.setRawHeader("Authorization", "App <0494b2a19ad04cc2d2c4c303bd9da375-77491f75-6f22-4d72-852c-cd5faee6cd32>");
        request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

        QJsonObject requestBody;
        requestBody["messages"] = QJsonArray::fromVariantList({
            QJsonObject {
                {"from", "whatsapp:<447860099299>"},
                {"destinations", QJsonArray::fromVariantList({
                    QJsonObject {
                        {"to", recipient}
                    }
                })},
                {"content", {
                    {"text", message}
                }}
            }
        });

        QJsonDocument doc(requestBody);
        QByteArray postData = doc.toJson();

        QNetworkReply *reply = manager->post(request, postData);
        connect(reply, &QNetworkReply::finished, this, [reply]() {
            if (reply->error() == QNetworkReply::NoError) {
                QByteArray responseData = reply->readAll();
                qDebug() << "Réponse reçue de l'API Infobip :" << responseData;
                // Traitement de la réponse si nécessaire
            } else {
                qDebug() << "Erreur lors de la réception de la réponse de l'API Infobip :" << reply->errorString();
                // Gérer l'erreur si nécessaire
            }
            reply->deleteLater();
        });
}*/
void invitesMainWindow::on_pushButton_3_clicked()
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

void invitesMainWindow::sendSMS(const QString& recipient, const QString& message)
{
    QNetworkAccessManager* manager = new QNetworkAccessManager(this);
    connect(manager, &QNetworkAccessManager::finished, this, &invitesMainWindow::onSMSRequestFinished);

    // Twilio API credentials
   // QString accountSid = "ACe05a2ca8367c07f8a0769b6165da0635";
    //QString authToken = "2f22a0063cf2c72cfd3e067e19acb84d";
     QString accountSid = "ACd25f435fa45075b1a05079c1b08200a2";
     QString authToken = "97989348834c400a4c239f6273f1cc63";

    QUrl url("https://api.twilio.com/2010-04-01/Accounts/" + accountSid + "/Messages.json");
    QNetworkRequest request(url);
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/x-www-form-urlencoded");

    // Construct request parameters
    QUrlQuery params;
    params.addQueryItem("To", recipient);
    //params.addQueryItem("From", "+12132045869");
    params.addQueryItem("From", "+ +12132960550");


    params.addQueryItem("Body", message);
    QByteArray postData = params.toString(QUrl::FullyEncoded).toUtf8();

    // Set Twilio API authentication header
    QString auth = accountSid + ":" + authToken;
    QByteArray authData = auth.toUtf8().toBase64();
    request.setRawHeader("Authorization", "Basic " + authData);

    // Send HTTP POST request to Twilio API
    manager->post(request, postData);
}

void invitesMainWindow::onSMSRequestFinished(QNetworkReply* reply)
{
    if (reply->error() == QNetworkReply::NoError) {
        QMessageBox::information(this, "SMS Sent", "The SMS message has been sent successfully.");
    } else {
        QMessageBox::critical(this, "Error", "Failed to send SMS message: " + reply->errorString());
    }
    reply->deleteLater();
}

void invitesMainWindow::on_pushButton_5_clicked()
{
//readFromSerial();

    /* // Open the serial port
    QSerialPort serial;
    //serial.setPortName("/dev/ttyUSB0"); // Replace with the appropriate port name
    serial.setPortName("COM4");
    serial.setBaudRate(QSerialPort::Baud9600);

    if (!serial.open(QIODevice::ReadWrite)) {
        QMessageBox::critical(this, tr("Error"), tr("Failed to open serial port."));
        return;
    }

    // Send a command to the Arduino to trigger RFID scanning
    QByteArray command = "READ_RFID\n"; // Customize this command based on your Arduino code
    serial.write(command);

    // Wait for a response from the Arduino
    if (!serial.waitForReadyRead(5000)) { // Wait for 5 seconds for a response
        QMessageBox::warning(this, tr("Warning"), tr("Timeout: No response from Arduino."));
        serial.close();
        return;
    }

    // Read the response from the Arduino
    QByteArray responseData = serial.readAll();
    // Display the response in a message box
    QMessageBox::information(this, tr("Arduino Response"), tr("Response from Arduino: ") + responseData);

    // Close the serial port
    serial.close();*/
}


/*void MainWindow::readData()
{
    static QString receivedData; // Static variable to store previously received data
    static bool flameDetected = false; // Flag to track if flame is detected

    // Read all available data from the serial port
    QByteArray newData = arduino->readAll();

    // Convert the QByteArray to QString and concatenate it with previously received data
    receivedData += QString::fromUtf8(newData);

    // Split the received data into lines
    QStringList lines = receivedData.split("\r\n", QString::SkipEmptyParts);

    // Process each line separately
    for (const QString& line : lines) {
        // Check if the line contains the "Flame Detected" message and the message box hasn't been shown yet
        if (!flameDetected && line.contains("flame detected")) {
            // Set the flag to true to indicate that the message has been shown
            flameDetected = true;
            // Show alert in Qt application
            QMessageBox::warning(this, "Flame Alert", "Flame Detected!");
        }
    }

    // Keep the remaining incomplete line for further processing
    if (!newData.endsWith("\r\n")) {
        receivedData = lines.last();
    } else {
        receivedData.clear(); // Clear the stored data if all lines are complete
    }
}
*/
/*void MainWindow::readFromSerial()
{
    // Lire les données depuis le port série
    data = A.read_from_arduino();

    // Vérifier si des données ont été lues
    if (!data.isEmpty()) {
        // Convertir QByteArray en QString
        QString arduinoData = QString::fromLatin1(data);

        // Traiter les données lues
        if (arduinoData.trimmed() == "1") {
            QMessageBox::information(this, "Arduino Message", "The ID matched!");
        } else if (arduinoData.trimmed() == "0") {
            QMessageBox::warning(this, "Arduino Message", "The ID did not match!");
        } else {
            QMessageBox::information(this, "Arduino Data", "Data received from Arduino: " + arduinoData);
        }
    }
}*/
/*void MainWindow::readFromSerial()
{
    // Lire les données depuis le port série
    data = A.read_from_arduino();

    // Vérifier si des données ont été lues
    if (!data.isEmpty()) {
        // Convertir QByteArray en QString
        QString arduinoData = QString::fromLatin1(data); // Utiliser fromUtf8() pour la conversion

        // Afficher les données reçues pour le débogage
        qDebug() << "Données reçues de l'Arduino : " << arduinoData;

        // Traiter les données lues
        if (arduinoData == '1') {
            QMessageBox::information(this, "Arduino Message", "The ID matched!");
        } else if (arduinoData == '0') {
            QMessageBox::warning(this, "Arduino Message", "The ID did not match!");
        } else {
            QMessageBox::information(this, "Arduino Data", "Data received from Arduino: " + arduinoData);
        }
    } else {
        // Afficher un message de débogage si aucune donnée n'a été lue
        qDebug() << "Aucune donnée reçue de l'Arduino";
    }



}*/

/*void MainWindow::readFromSerial()
{
    static QString receivedData; // Static variable to store previously received data
    static bool idDetected = false; // Flag to track if the ID is detected

    // Read all available data from the serial port
    QByteArray newData = arduino->readAll();

    // Convert the QByteArray to QString and concatenate it with previously received data
    receivedData += QString::fromUtf8(newData);

    // Split the received data into lines
    QStringList lines = receivedData.split("\r\n", QString::SkipEmptyParts);
    qDebug() << "Data from Arduino: " << lines;

    // Process each line separately
    for (const QString& line : lines) {
        // Check if the line contains the "id match" message and the message box hasn't been shown yet
        if (!idDetected && line.contains("id match")) {
            // Set the flag to true to indicate that the message has been shown
            idDetected = true;
            // Show alert in Qt application
            QMessageBox::warning(this, "ID Detected", "Correct ID!");
        } else if (!line.contains("id match")) {
            // Show alert in Qt application
            QMessageBox::information(this, "ID Alert", "Incorrect ID");
        }
    }

    // Keep the remaining incomplete line for further processing
    if (!newData.endsWith("\r\n")) {
        receivedData = lines.last();
    } else {
        receivedData.clear(); // Clear the stored data if all lines are complete
    }
}
*/

void invitesMainWindow::readFromSerial()
{
    static QString receivedData; // Static variable to store previously received data
    static bool idDetecded = false; // Flag to track if flame is detected

    // Read all available data from the serial port
    QByteArray newData = arduino->readAll();

    // Convert the QByteArray to QString and concatenate it with previously received data
    receivedData += QString::fromUtf8(newData);

    // Split the received data into lines
    QStringList lines = receivedData.split("\r\n", QString::SkipEmptyParts);
qDebug() << "Data from Arduino: " << lines;
    // Process each line separately
    for (const QString& line : lines) {
        // Check if the line contains the "flame detected" message and the message box hasn't been shown yet
        if (!idDetecded && line.contains("id match")) {
            // Set the flag to true to indicate that the message has been shown
            idDetecded = true;
            // Show alert in Qt application
            //QMessageBox::warning(this, "correct id detected", "correct!");
        } else if (!line.contains("id match")) {
            // Show alert in Qt application
            //QMessageBox::information(this, "id Alert", "incorrect");
        }
    }

    // Keep the remaining incomplete line for further processing
    if (!newData.endsWith("\r\n")) {
        receivedData = lines.last();
    } else {
        receivedData.clear(); // Clear the stored data if all lines are complete
    }
}





//OTHER BUTTONS



void invitesMainWindow::on_Sponsors_clicked(){

    this->close();

    SponsorMainWindow *chooseWindow = new SponsorMainWindow(this);

        chooseWindow->show();


}

void invitesMainWindow::on_equipement_clicked(){

    this->close();

    MainWindow *chooseWindow = new MainWindow(this);

        chooseWindow->show();


}



void invitesMainWindow::on_employees_clicked(){

    this->close();

    EmployeeMainWindow *chooseWindow = new EmployeeMainWindow(this);

        chooseWindow->show();


}

/*
void invitesMainWindow::on_guests_clicked(){

    this->close();

    invitesMainWindow *chooseWindow = new invitesMainWindow(this);

        chooseWindow->show();


}*/
void invitesMainWindow::on_shows_clicked()
{
    this->close();


    EmissionMainWindow * chooseWindow = new EmissionMainWindow(this);
    chooseWindow->show();
}

