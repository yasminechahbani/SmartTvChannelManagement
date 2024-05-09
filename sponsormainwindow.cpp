#include "sponsormainwindow_fr.h"
#include "sponsormainwindow.h"
#include "ui_sponsormainwindow_fr.h"
#include "ui_sponsormainwindow.h"
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
#include <QProcess>
#include <QStringList>
#include <QJsonDocument>
#include <QJsonObject>
#include <QInputDialog>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QUrlQuery>
#include<QUrl>
#include<QHttpPart>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QUrl>
#include <QJsonDocument>
#include <QJsonObject>
#include <QByteArray>
#include <QCryptographicHash>
#include "Employeemainwindow.h"
#include "equip_mainwindow.h"
#include "emissionmainwindow.h"
#include "invitesmainwindow.h"
#include <QtSerialPort>
#include <QSerialPortInfo>

#include <QPropertyAnimation>



SponsorMainWindow::SponsorMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::SponsorMainWindow)
{
    ui->setupUi(this);
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
                if (arduino->open(QSerialPort::ReadWrite)) {
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
                QObject::connect(arduino, SIGNAL(readyRead()), this, SLOT(readData()));

            } else {
                // Give error message if Arduino not available
                //QMessageBox::warning(this, "Port error", "Couldn't find the Arduino!");
            }
     /*connect(ui->sendButton, SIGNAL(clicked()), this, SLOT(on_sendButton_clicked()));
    connect(ui->sponsor_tab->horizontalHeader(), &QHeaderView::sectionClicked, this, &MainWindow::on_tableHeader_clicked);
    ui->sponsor_tab->setModel(sponsor.showSponsor());
    ui->sponsor_tab->setSortingEnabled(true);
    connect(ui->sponsor_tab->horizontalHeader(), SIGNAL(sectionClicked(int)), this, SLOT(on_tableHeader_clicked(int)));
    connect(ui->StartTimeEdit, &QTimeEdit::timeChanged, this, &MainWindow::onStartTimeChanged);
    connect(ui->EndTimeEdit, &QTimeEdit::timeChanged, this, &MainWindow::onEndTimeChanged);
    connect(ui->sendSMSButton, &QPushButton::clicked, this, &MainWindow::onSendSMSButtonClicked);

*/

    //added rn





}

void SponsorMainWindow::on_tableHeader_clicked(int index)
{
    // Sort the table based on the clicked column
    ui->sponsor_tab->sortByColumn(index, Qt::AscendingOrder);
}


SponsorMainWindow::~SponsorMainWindow()
{
    delete ui;
}

// Validate form function remains the same if form fields are common

// Other functions remain unchanged
void SponsorMainWindow::on_ajouter_clicked()
{
    QString sponsor_id = ui->id_lineEdit->text();
    QString sponsor_nom = ui->name_lineEdit->text();
    QString sponsor_montant = ui->montant_lineEdit->text();
    QString sponsor_tempsaffichage = ui->tempsaffichage_lineEdit->text();
    QString sponsor_nb_totalaffichage = ui->nb_totalaffichage_lineEdit->text();
    QString sponsor_etatcontrat = ui->etatcontrat_lineEdit->text();

    Sponsor sponsor(sponsor_id, sponsor_nom, sponsor_montant, sponsor_tempsaffichage, sponsor_nb_totalaffichage, sponsor_etatcontrat);

    if (!sponsor.addSponsor()) {
        //QMessageBox::critical(nullptr, "Error", "Failed to add sponsor.");
        return;
    }
else
    ui->sponsor_tab->setModel(sponsor.showSponsor());

}


 void SponsorMainWindow::on_delete_button_clicked()
{
    QString sponsor_id = ui->id_lineEdit_delete->text();
    if (!sponsor.deleteSponsor(sponsor_id)) {
        //QMessageBox::critical(nullptr, "Error", "Failed to delete sponsor.");
        return;
    }

    ui->sponsor_tab->setModel(sponsor.showSponsor());
    //QMessageBox::information(nullptr, "Success", "Sponsor deleted successfully.");
}


 void SponsorMainWindow::on_list_all_button_clicked()
{
      //with search
      ui->sponsor_tab->setModel(sponsor.showSponsor());

}

 void SponsorMainWindow::on_search_clicked()
{
    //ui->sponsor_tab->setModel(sponsor.showSponsor());
    QString searchName = ui->search_lineEdit->text();
      //no search
      //ui->sponsor_tab->setModel(sponsor.Readsponsor());
      //with search
      ui->sponsor_tab->setModel(sponsor.searchsponsorByName(searchName));

}

 void SponsorMainWindow::on_clear_fields_add_clicked()
{
    ui->id_lineEdit->clear();
    ui->name_lineEdit->clear();
    ui->montant_lineEdit->clear();
    ui->tempsaffichage_lineEdit->clear();
    ui->nb_totalaffichage_lineEdit->clear();
    ui->etatcontrat_lineEdit->clear();
}

 void SponsorMainWindow::on_clear_all_in_table_clicked()
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
 void SponsorMainWindow::on_update_clicked()
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
        //QMessageBox::information(nullptr, "Success", "Sponsor edited successfully.");
    }

    ui->sponsor_tab->setModel(sponsor.showSponsor());
}
 void SponsorMainWindow::on_Generate_PDF_clicked()
{
    QPdfWriter pdf("C:/Users/USER/Desktop/official_projectCPP_folder/integration finale/bien/integration - Copie/SPONSOR.pdf");
    QPainter painter(&pdf);
    int i = 4100;
    const QImage image("C:/Users/USER/Desktop/official_projectCPP_folder/integration finale/bien/integration - Copie/logo.qrc");
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
        QDesktopServices::openUrl(QUrl::fromLocalFile("C:/Users/USER/Desktop/official_projectCPP_folder/integration finale/bien/integration - Copie/SPONSOR.pdf"));
        painter.end();
    }
    else
    {
        painter.end();
    }
}
 void SponsorMainWindow::on_stat_clicked()
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
 void SponsorMainWindow::on_Sponsor_tabHeader_clicked(int index)
{
    // Sort the table based on the clicked column
    ui->sponsor_tab->sortByColumn(index, Qt::AscendingOrder);
}



 void SponsorMainWindow::on_fr_clicked()
{
this->close();
    SponsorMainWindowFr *newwindow= new SponsorMainWindowFr(this);
    newwindow->show();

}






 void SponsorMainWindow::on_use_return_clicked()
{
    // Example usage of sendEmail function
    //sendEmail("khayati.mohamedaziz@esprit.com", "yo yo ", "khedmet");


}
 void SponsorMainWindow::on_excel_clicked() {
    QString fileName = QFileDialog::getSaveFileName(this, tr("Export Excel"), QString(), "*.csv");
    if (fileName.isEmpty()) {
        return; // User canceled save
    }

    QFile file(fileName);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QMessageBox::critical(this, "Error", "Cannot create file");
        return;
    }

    QTextStream stream(&file);

    // Write headers
    stream << "sponsor_id        ,        sponsor_nom         ,       sponsor_montant         , sponsor_tempsaffichage      ,        sponsor_nb_totalaffichage        ,      sponsor_etatcontrat     ";

    QSqlQueryModel* model = sponsor.Readsponsor();
    const int rowCount = model->rowCount();
    const int columnCount = model->columnCount();

    // Write data
    for (int i = 0; i < rowCount; ++i) {
        for (int j = 0; j < columnCount; ++j) {
            QString data = model->data(model->index(i, j)).toString();
            stream << '"' << data.replace("\"", "\"\"") << '"';
            if (j < columnCount - 1) {
                stream << "         ,         ";
            } else {
                // Write newline after each row's data
                stream << "\n";
            }
        }
    }

    file.close();

    int response = QMessageBox::question(this, "Export Successful", "Data exported to CSV file successfully. Do you want to open it?", QMessageBox::Yes | QMessageBox::No);
    if (response == QMessageBox::Yes) {
        QDesktopServices::openUrl(QUrl::fromLocalFile(fileName));
    }
}
 void SponsorMainWindow::on_sort_clicked()
{
    int i = ui->sortComboBox->currentIndex();

    if (i == 0) {
        // Show the unsorted list
        ui->sponsor_tab->setModel(sponsor.Readsponsor());
    } else if (i == 1) {
        // Show the sorted list alphabetically
        ui->sponsor_tab->setModel(sponsor.getAllSponsorsSorted());
    }
}






 //OTHER BUTTONS


 /*
 void SponsorMainWindow::on_Sponsors_clicked(){

     this->close();

     SponsorMainWindow *chooseWindow = new SponsorMainWindow(this);

         chooseWindow->show();


 }*/

 void SponsorMainWindow::on_equipement_clicked(){

     this->close();

     MainWindow *chooseWindow = new MainWindow(this);

         chooseWindow->show();


 }



 void SponsorMainWindow::on_employees_clicked(){

     this->close();

     EmployeeMainWindow *chooseWindow = new EmployeeMainWindow(this);

         chooseWindow->show();


 }


 void SponsorMainWindow::on_guests_clicked(){

     this->close();

     invitesMainWindow *chooseWindow = new invitesMainWindow(this);

         chooseWindow->show();




 }
 void SponsorMainWindow::on_shows_clicked()
 {
     this->close();

     EmissionMainWindow * chooseWindow = new EmissionMainWindow(this);
     chooseWindow->show();
 }
 void SponsorMainWindow::readData()
 {
     // Read all available data from the serial port
     QByteArray newData = arduino->readAll();
     bool alertShown =false  ;

     // Convert the QByteArray to QString and concatenate it with previously received data

     if (newData.contains("on")) {
         if (!alertShown) { // Check if the alert has not been shown yet
             // Set the flag to true to indicate that the message has been shown
             alertShown = true;

             // Show alert in Qt application
             QMessageBox msgBox;
             msgBox.setWindowTitle("Movement Alert");
             msgBox.setText("Movement Detected!");
             msgBox.exec();

             // Check if the OK button was clicked
         }
     } else {
         alertShown = false; // Reset the flag if the condition is not met
     }
 }

