#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::changeCursor);
}

MainWindow::~MainWindow()
{
    delete ui;
}
//added code to change the cursor to pointing hand upon click
void MainWindow::changeCursor()
{
    // Set the cursor to PointingHandCursor
    QApplication::setOverrideCursor(Qt::PointingHandCursor);
}

//////////////////////////////////////
//#include "mainwindow.h"
//#include "ui_mainwindow.h"
//#include <QPushButton>

//MainWindow::MainWindow(QWidget *parent)
//    : QMainWindow(parent)
//    , ui(new Ui::MainWindow)
//{
//    ui->setupUi(this);

//    // Create and customize the first button
//    QPushButton* button1 = new QPushButton("Button 1", this);
//    button1->setStyleSheet("background-color: red;");
//    button1->setGeometry(50, 50, 100, 50);

//    // Create and customize the second button
//    QPushButton* button2 = new QPushButton("Button 2", this);
//    button2->setStyleSheet("background-color: green;");
//    button2->setGeometry(200, 50, 100, 50);

//    // Create and customize the third button
//    QPushButton* button3 = new QPushButton("Button 3", this);
//    button3->setStyleSheet("background-color: blue;");
//    button3->setGeometry(50, 150, 100, 50);

//    // Create and customize the fourth button
//    QPushButton* button4 = new QPushButton("Button 4", this);
//    button4->setStyleSheet("background-color: yellow;");
//    button4->setGeometry(200, 150, 100, 50);
//}

//MainWindow::~MainWindow()
//{
//    delete ui;
//}

