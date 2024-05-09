#include "mainwindow.h"
#include "ui_login.h"
#include "Employeemainwindow.h"
#include "employee.h"
#include "ui_Employeemainwindow.h"

#include <QMessageBox>

LoginMainWindow::LoginMainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginMainWindow)
{
    ui->setupUi(this);

    // Connect the login button to the appropriate slot
    connect(ui->loginButton, &QPushButton::clicked, this, &LoginMainWindow::on_loginButton_clicked);
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
