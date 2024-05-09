#include "Employeemainwindow.h"
#include "sponsormainwindow.h"
#include "emissionmainwindow.h"
#include "invitesmainwindow.h"
#include "equip_mainwindow.h"
#include "ui_Employeemainwindow.h"
#include "employee.h"
#include <QMessageBox>
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
//arduino
#include <QNetworkRequest>
#include <QProcess>
#include <QDebug>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QtSerialPort>
#include <QSerialPortInfo>
#include "arduino.h"

EmployeeMainWindow::EmployeeMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::EmployeeMainWindow)
{
    ui->setupUi(this);
    ui->tabb->setModel(Employee.ReadEmployee());



    //******************************arduinoo
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







   //*********************************arduino




}

EmployeeMainWindow::~EmployeeMainWindow()
{
    delete this;
}

void EmployeeMainWindow::on_ajouter_clicked()
{
    QString employee_id = ui->id_lineEdit->text();
    QString employee_prenom = ui->prenom_lineEdit->text();
    QString employee_mail = ui->mail_lineEdit->text();
    QString employee_role = ui->role_lineEdit->text();
    QString employee_tel = ui->tel_lineEdit->text();
    QString employee_date_embauche = ui->date_embauche_lineEdit->text();
    QString employee_datenaissance = ui->datenaissance_lineEdit->text();
    QString employee_password = ui->passwordlineEdit->text();


    EMPLOYEE Employee(employee_id, employee_prenom, employee_mail, employee_role, employee_tel, employee_date_embauche, employee_datenaissance, employee_password);

    if (!Employee.CreateEmployee()) {
        QMessageBox::critical(nullptr, "Error", "Failed to add employee.");
        return;
    }

    ui->tabb->setModel(Employee.ReadEmployee());
    QMessageBox::information(nullptr, "Success", "Employee added successfully.");

}

void EmployeeMainWindow::on_delete_button_clicked()
{
    QString employee_id = ui->id_lineEdit_delete->text();
    if (!Employee.deleteEmployee(employee_id)) {
        QMessageBox::critical(nullptr, "Error", "Failed to delete employee.");
        return;
    }

    ui->tabb->setModel(Employee.ReadEmployee());
    QMessageBox::information(nullptr, "Success", "Employee deleted successfully.");
}
// In the constructor of EmployeeMainWindow


void EmployeeMainWindow::on_list_all_button_clicked()
{
    //ui->tabb->setModel(Employee.ReadEmployee());
    QString searchName = ui->search_lineEdit->text();

    ui->tabb->setModel(Employee.searchEmployeebyName(searchName));
}

void EmployeeMainWindow::on_clear_all_button_clicked()
{
    int reply = QMessageBox::question(this, "Confirmation", "Are you sure you want to clear all lines in the table?", QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        QSqlQuery query;
        query.prepare("DELETE FROM EMPLOYEE");
        if (!query.exec()) {
            QMessageBox::critical(this, "Error", "Failed to clear table.");
            return;
        }
        ui->tabb->setModel(Employee.ReadEmployee());
    }
}



void EmployeeMainWindow::on_Generate_PDF_clicked()
{
    QPdfWriter pdf("C:/Users/USER/Desktop/QtProjects/SmartTvChannelManagement-gestion_materiels (3)/SmartTvChannelManagement-gestion_materiels/employee.pdf");
    QPainter painter(&pdf);
    int i = 4100;
    const QImage image("C:/Users/USER/Desktop/QtProjects/SmartTvChannelManagement-gestion_materiels (3)/SmartTvChannelManagement-gestion_materiels/417529624_1870268480077915_5802465082538659099_n.png");
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
    painter.drawText(3000,2700,"EMPLOYEE LIST");

    painter.setPen(Qt::black);
    painter.setFont(QFont("Time New Roman", 15));
    painter.drawRect(100,3300,9400,500);

    painter.setFont(QFont("Montserrat SemiBold", 10));
    painter.drawText(1000, 3600, "EMPLOYEE_ID");
    painter.drawText(2000, 3600, "NAME");
    painter.drawText(3000, 3600, "MAIL");
    painter.drawText(4000, 3600, "ROLE");
    painter.drawText(5000, 3600, "TEL");
    painter.drawText(6000, 3600, "DATE EMB");
    painter.drawText(7000, 3600, "DATE NAISS");

    painter.setFont(QFont("Montserrat", 10));
    painter.drawRect(100,3300,9400,9000);

EMPLOYEE Employee;
QSqlQuery query = Employee.getEmployeeData();
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

        i = i + 500;
    }

    int reponse = QMessageBox::question(this, "Generate PDF", "PDF Saved. Do you want to open it?", QMessageBox::Yes | QMessageBox::No);
    if (reponse == QMessageBox::Yes)
    {
        QDesktopServices::openUrl(QUrl::fromLocalFile("C:/Users/USER/Desktop/QtProjects/SmartTvChannelManagement-gestion_materiels (3)/SmartTvChannelManagement-gestion_materiels/employee.pdf"));
        painter.end();
    }
    else
    {
        painter.end();
    }
}


void EmployeeMainWindow::on_stat_clicked()
{
    EMPLOYEE employee;
    QSqlQuery query = employee.getStatByroles();

    QtCharts::QPieSeries *series = new QtCharts::QPieSeries();
    while (query.next()) {
        QString role = query.value(0).toString();
        int count = query.value(1).toInt();
        QtCharts::QPieSlice *slice = new QtCharts::QPieSlice(role, count);
        series->append(slice);
    }

    QtCharts::QChart *chart = new QtCharts::QChart();
    chart->addSeries(series);
    chart->setTitle("Statistiques des employés par rôle");
    chart->setAnimationOptions(QtCharts::QChart::SeriesAnimations);

    QtCharts::QChartView *chartView = new QtCharts::QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    chartView->setParent(ui->tableView_3);
    chartView->resize(ui->tableView_3->size());
    chartView->show();
}




//OTHER BUTTONS



void EmployeeMainWindow::on_Sponsors_clicked(){

    this->close();

    SponsorMainWindow *chooseWindow = new SponsorMainWindow(this);

        chooseWindow->show();


}

void EmployeeMainWindow::on_equipement_clicked(){

    this->close();

    MainWindow *chooseWindow = new MainWindow(this);

        chooseWindow->show();


}


/*

void EmployeeMainWindow::on_employees_clicked(){

    this->close();

    EmployeeMainWindow *chooseWindow = new EmployeeMainWindow(this);

        chooseWindow->show();


}*/


void EmployeeMainWindow::on_guests_clicked(){

    this->close();

    invitesMainWindow *chooseWindow = new invitesMainWindow(this);

        chooseWindow->show();


}
void EmployeeMainWindow::on_shows_clicked()
{
    this->close();

    EmissionMainWindow * chooseWindow = new EmissionMainWindow(this);
    chooseWindow->show();
}
