//aziz
#include "sponsormainwindow_fr.h"
#include "sponsormainwindow.h"
#include "ui_sponsormainwindow_fr.h"
#include "ui_sponsormainwindow.h"
#include "sponsor.h"

//oumayma
#include "emissionmainwindow.h"
#include "emissionmainwindowdarkmode.h"
#include "ui_emissionmainwindow.h"
#include "ui_emissionmainwindowdarkmode.h"
#include "emission.h"

//intissar
#include "Employeemainwindow.h"
#include "ui_Employeemainwindow.h"
#include "employee.h"

//emna
#include "invitesmainwindow.h"
#include "ui_invitesmainwindow.h"
#include "invites.h"

//yasmine
#include "equip_mainwindow.h"
//#include "ui_mainwindow.h"
#include "ui_equip_mainwindow.h"
#include "equipement.h"
#include "qrgeneratewindow.h"
#include "returnequipmentwindow.h"
#include "chooseequipforqr.h"
#include "QrCodeGenerator.h"
#include "chatequip.h"
#include "useequipmentwindow.h"

//end include////////////////////////////////////////////////////////////////
#include <QMessageBox>
#include <QPushButton>
#include <QSqlError>
#include<QDebug>
#include <QPdfWriter>
#include<QPainter>
#include<QDate>
#include<QDesktopServices>
#include<QUrl>
#include <QtCharts>
#include <QPrinter>
#include <QPrintDialog>
#include <QPainter>
#include <QComboBox>
#include <QSqlQueryModel>
#include <QFileDialog>
#include <QTextDocument>
#include <QTextStream>
#include <QStringListModel>
#include <QApplication>
#include <QMenuBar>
#include <QSettings>
#include <QUiLoader>
#include <QFile>
#include "QrCodeGenerator.h"
#include <QtSerialPort>
#include <QSerialPortInfo>



using namespace qrcodegen;


EmissionMainWindow::EmissionMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::EmissionMainWindow)
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
            QMessageBox::information(this, "Port success" , "successful opening serial port: " );

        } else {
            qDebug() << "Error opening serial port:" << arduino->errorString();
            QMessageBox::warning(this, "Port error", "Error opening serial port: " + arduino->errorString());
        }

        arduino->setBaudRate(QSerialPort::Baud9600);
        arduino->setDataBits(QSerialPort::Data8);
        arduino->setParity(QSerialPort::NoParity);
        arduino->setStopBits(QSerialPort::OneStop);
        arduino->setFlowControl(QSerialPort::NoFlowControl);
        QObject::connect(arduino, SIGNAL(readyRead()), this, SLOT(readData()));

    } else {
        // Give error message if Arduino not available
        QMessageBox::warning(this, "Port error", "Couldn't find the Arduino!");
    }
    // Connect dark mode button signal to slot
    connect(ui->sortComboBox, QOverload<const QString &>::of(&QComboBox::currentIndexChanged), this, &EmissionMainWindow::on_Sort_clicked);
}




void EmissionMainWindow::writeData(const char *data)
{
    if (arduino->isOpen()) {
        //arduino->write(data);
        if(arduino->isWritable()){
            arduino->write(data);
        }else{
            qDebug() << "Couldn't write to serial!";
        }
    } else {
        QMessageBox::warning(this, "Port error", "Serial port is not open!");
    }
}



EmissionMainWindow::~EmissionMainWindow()
{
    if(arduino->isOpen()){
        arduino->close();
    }
    delete ui;
}


void EmissionMainWindow::readData()
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
            QMessageBox msgBox;
            msgBox.setWindowTitle("Flame Alert");
            msgBox.setText("Flame Detected!");
            QPushButton *okButton = msgBox.addButton(tr("OK"), QMessageBox::ActionRole);
            msgBox.exec();

            // Check if the OK button was clicked
            if (msgBox.clickedButton() == okButton) {
                // Stop the buzzer here
                // Add your code to stop the buzzer
                writeData("s");


            }
        }
    }

    // Keep the remaining incomplete line for further processing
    if (!newData.endsWith("\r\n")) {
        receivedData = lines.last();
    } else {
        receivedData.clear(); // Clear the stored data if all lines are complete
    }
}
















// Slot for dark mode button clicked

void EmissionMainWindow::on_Sponsors_clicked(){

    this->close();

    SponsorMainWindow *chooseWindow = new SponsorMainWindow(this);

        chooseWindow->show();


}

void EmissionMainWindow::on_equipement_clicked(){

    this->close();

    MainWindow *chooseWindow = new MainWindow(this);

        chooseWindow->show();


}




void EmissionMainWindow::on_employees_clicked(){

    this->close();

    EmployeeMainWindow *chooseWindow = new EmployeeMainWindow(this);

        chooseWindow->show();


}


void EmissionMainWindow::on_guests_clicked(){

    this->close();

    invitesMainWindow *chooseWindow = new invitesMainWindow(this);

        chooseWindow->show();


}


void EmissionMainWindow::on_dark_mode_clicked()
{
    this->close();

    EmissionMainWindowDarkMode *chooseWindow = new EmissionMainWindowDarkMode(this);

        chooseWindow->show();


}









// Validate form function remains the same if form fields are common

void EmissionMainWindow::on_ajouter_clicked()
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

void EmissionMainWindow::on_delete_button_clicked()
{
    QString emission_id = ui->id_lineEdit_delete->text();
    if (!Emission.deleteEmission(emission_id)) {
        QMessageBox::critical(nullptr, "Error", "Failed to delete emission.");
        return;
    }

    ui->tabb->setModel(Emission.ReadEmission());
    QMessageBox::information(nullptr, "Success", "Emission deleted successfully.");
}


//void EmissionMainWindow::on_list_all_button_clicked()
//{
//    ui->tabb->setModel(Emission.ReadEmission());
//}


void EmissionMainWindow::on_list_all_button_clicked()
{
    QString searchName = ui->search_name_lineEdit->text();

    ui->tabb->setModel(Emission.searchEmissionByName(searchName));
}




void EmissionMainWindow::on_clear_all_in_table_clicked()
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





void EmissionMainWindow::on_update_clicked()
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



//chartssssssssssss


void EmissionMainWindow::on_stat_clicked()
{
    EMISSION emission;
         QSqlQuery query = emission.getStatBynbviews();

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
         chartView->setParent(ui->tableView);
         chartView->resize(ui->tableView->size());
         chartView->show();

}

//pdf//////////////////
void EmissionMainWindow::on_Generate_PDF_clicked()
{
    QPdfWriter pdf("C:/Users/USER/Desktop/official_projectCPP_folder/print - 2/EMISSION.pdf");
    QPainter painter(&pdf);
    int i = 4100;
    const QImage image("C:/Users/USER/Desktop/official_projectCPP_folder/pdf/417529624_1870268480077915_5802465082538659099_n.png");
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
    painter.drawText(3000,2700,"EMISSION LIST");

    painter.setPen(Qt::black);
    painter.setFont(QFont("Time New Roman", 15));
    painter.drawRect(100,3300,9400,500);

    painter.setFont(QFont("Montserrat SemiBold", 10));
    painter.drawText(1000, 3600, "EMISSION_ID");
    painter.drawText(2000, 3600, "NAME");
    painter.drawText(3000, 3600, "HOST");
    painter.drawText(4000, 3600, "NBVIEWERS");
    painter.drawText(5000, 3600, "GENRE");
    painter.drawText(6000, 3600, "TYPE");
    painter.drawText(7000, 3600, "DATE");
    painter.drawText(8000, 3600, "DUREE");

    painter.setFont(QFont("Montserrat", 10));
    painter.drawRect(100,3300,9400,9000);

    EMISSION emission;
    QSqlQuery query = emission.getEMISSIONData();
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
        painter.drawText(7000,i,query.value(6).toString());
        painter.drawText(8000,i,query.value(7).toString());

        i = i + 500;
    }

    int reponse = QMessageBox::question(this, "Generate PDF", "PDF Saved. Do you want to open it?", QMessageBox::Yes | QMessageBox::No);
    if (reponse == QMessageBox::Yes)
    {
        QDesktopServices::openUrl(QUrl::fromLocalFile("C:/Users/USER/Desktop/official_projectCPP_folder/pdf/EMISSION.pdf"));
        painter.end();
    }
    else
    {
        painter.end();
    }
}


//printtttttttttttttttttt////////

/*
void EmissionMainWindow::on_printEmissions_clicked()
{
    // Create a QPrinter object for high-resolution printing
    QPrinter printer(QPrinter::HighResolution);
    printer.setPageSize(QPrinter::A4); // Set page size to A4
    printer.setOrientation(QPrinter::Landscape); // Set orientation to landscape
    printer.setFullPage(false); // Do not print the full page

    // Create a print dialog for the printer
    QPrintDialog printDialog(&printer, this);

    // Open the print dialog, wait for user input
    if (printDialog.exec() == QDialog::Accepted) {
        // If the user accepts, create a QPainter object to paint on the printer
        QPainter painter(&printer);

        // Get the printable area of the page
        QRect printArea = printer.pageRect();

        // Get the size of the content you want to print (assuming it's a table view)
        QSize tableViewSize = ui->tabb->sizeHint(); // Assuming your table view is named 'tabb'

        // Scale the content to fit within the print area
        double xscale = printArea.width() / double(tableViewSize.width());
        double yscale = printArea.height() / double(tableViewSize.height());
        double scale = qMin(xscale, yscale);

        // Translate the painter to start drawing from the top left of the print area
        painter.translate(printArea.topLeft());

        // Apply the scale to fit the content within the print area
        painter.scale(scale, scale);

        // Render the table view onto the painter
        ui->tabb->render(&painter); // Assuming your table view is named 'tabb'
    }
}

*/
void EmissionMainWindow::on_printEmissions_clicked()
{
    // Path to the image file
    QString imagePath = "C:/Users/USER/Desktop/official_projectCPP_folder/dark-mode2/EMISSION.png";

    // Load the image from file
    QImage image(imagePath);

    // Check if the image is valid
    if (image.isNull()) {
        qDebug() << "Failed to load image:" << imagePath;
        return;
    }

    // Create a QPrinter for printing
    QPrinter printer(QPrinter::HighResolution);
    printer.setPageSize(QPrinter::A4);
    printer.setOutputFormat(QPrinter::NativeFormat);
    printer.setOutputFileName("PrintedImage.pdf");

    // Create a QPainter for the printer
    QPainter painter(&printer);

    // Calculate the scaling factor to fit the image on the page
    double scaleX = printer.pageRect().width() / double(image.width());
    double scaleY = printer.pageRect().height() / double(image.height());
    double scale = qMin(scaleX, scaleY);

    // Scale the image to fit the page
    QImage scaledImage = image.scaled(image.width() * scale, image.height() * scale, Qt::KeepAspectRatio);

    // Draw the scaled image onto the painter
    painter.drawImage(QPointF(0, 0), scaledImage);

    // End painting
    painter.end();
}




//tri//////////////





//excel///////////:::
void EmissionMainWindow::on_excel_clicked() {
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
    stream << "ID         ,         Name         ,         Host         ,Viewers         ,         Genre         ,         Type         ,         Date         ,         Duration\n";

    // Fetch data from the EMISSION model
    QSqlQueryModel* model = Emission.ReadEmission();
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


QStringList EmissionMainWindow::readEmissionForExcel(const QSqlQueryModel* model, int row) {
    QStringList rowData;
    const int columnCount = model->columnCount();

    // Read data for the given row
    for (int j = 0; j < columnCount; ++j) {
        QString data = model->data(model->index(row, j)).toString();
        rowData.append(data);
    }

    return rowData;
}




//qrcodeeeeeeeee//////////////






void EmissionMainWindow::on_Sort_clicked()
{
    int i = ui->sortComboBox->currentIndex();

    if (i == 0) {
        // Show the unsorted list
        ui->tabb->setModel(Emission.ReadEmission());
    } else if (i == 1) {
        // Show the sorted list alphabetically
        ui->tabb->setModel(Emission.getAllEmissionsSorted());
    }
}


void EmissionMainWindow::on_generateQRButton_clicked()
{
    // PDF download link
    QString downloadLink = "https://heyzine.com/flip-book/846a16e811.html";

    // Create a QrCodeGenerator instance
    QrCodeGenerator qrGenerator;

    // Generate QR code image from the PDF download link
    QImage qrCodeImage = qrGenerator.generateQr(downloadLink);

    // Display the QR code image in the QLabel named qrcode
    ui->qrcode->setPixmap(QPixmap::fromImage(qrCodeImage));
}




