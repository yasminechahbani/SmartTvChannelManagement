#include "mainwindow.h"
#include "ui_login.h"
#include "Employeemainwindow.h"
#include "employee.h"
#include "ui_Employeemainwindow.h"
#include <QNetworkRequest>
#include <QProcess>
#include <QDebug>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QtSerialPort>
#include <QString>
#include <QSerialPortInfo>
#include "arduino.h"
#include <QMessageBox>

LoginMainWindow::LoginMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginMainWindow)
{
    ui->setupUi(this);


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
            QObject::connect(arduino, SIGNAL(readyRead()), this, SLOT(compareIDCard()));

               data=arduino->readAll();

//QMessageBox::information(this, "arduino data:", "data received \n " +data );

        } else {
            // Give error message if Arduino not available
            //QMessageBox::warning(this, "Port error", "Couldn't find the Arduino!");
        }


    // Connect the login button to the appropriate slot
    //connect(ui->loginButton, &QPushButton::clicked, this, &LoginMainWindow::on_loginButton_clicked);
}

LoginMainWindow::~LoginMainWindow()
{
    delete ui;
}

void LoginMainWindow::on_loginButton_clicked()
{
    // Retrieve username and password from the input fields
    username = ui->employeeIdLineEdit->text();
    password = ui->passwordLineEdit->text();

    // Validate the credentials
    if (validateCredentials(username, password)) {
openMainInterface();
    }
}
bool LoginMainWindow::validateCredentials(const QString &id, const QString &password)
{
    // Perform validation here, e.g., check against a database or hardcoded values
    // For demonstration, let's assume a hardcoded ID and password
    QString expectedId = "admin";
    QString expectedPassword = "admin";

    if (id.isEmpty()) {
        QMessageBox::critical(this, "Login Failed", "Please enter an ID");
        return false;
    }

    if (password.isEmpty()) {
        QMessageBox::critical(this, "Login Failed", "Please enter a password");
        return false;
    }

    if (id != expectedId) {
        QMessageBox::critical(this, "Login Failed", "Invalid ID");
        return false;
    }

    if (password != expectedPassword) {
        QMessageBox::critical(this, "Login Failed", "Invalid password");
        return false;
    }

    // If both ID and password are correct, show a success message
    QMessageBox::information(this, "Login Success", "Login successful");


    return true;

}


/*bool MainWindow::validateCredentials(const QString &username, const QString &password)
{
    // Perform validation here, e.g., check against a database or hardcoded values
    // For demonstration, let's assume a hardcoded username and password
    return (username == "admin" && password == "admin");
}*/

void LoginMainWindow::openMainInterface()
{
    this->close();

    EmployeeMainWindow *chooseWindow = new EmployeeMainWindow(this);

        chooseWindow->show();
}
//**************************arduino***cart****login
QString LoginMainWindow::searchEmployeeById(QString id)
{
    QSqlQuery query;
    query.prepare("SELECT employee_prenom FROM EMPLOYEE WHERE employee_id = :id");
    query.bindValue(":id", id);
    if(query.exec() && query.next()) {
        qDebug() << "id:"<<query.value(0).toString();
        return query.value(0).toString(); // Return employee name if ID exists
    } else {
        return ""; // Return empty string if ID doesn't exist
    }



}

bool LoginMainWindow::compareIDCard()
{
    QString idCard = "866C6225"; // Assuming this is the ID card to compare
    QString employeeName = searchEmployeeById(idCard);
    qDebug() << "employeeName:"<<employeeName;

    if ((!employeeName.isEmpty())&&(readFromSerial()))
    {

        QMessageBox::information(this, "Login Success", "Welcome, " + employeeName);
        openMainInterface();
        return true; // Indicate successful login
    }
    else
    {
        QMessageBox::warning(this, "Login Failed", "Invalid ID Card");
        return false; // Indicate failed login
    }
}


bool LoginMainWindow::readFromSerial()
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

    return idDetecded;
}


