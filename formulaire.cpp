#include "formulaire.h"
#include "ui_formulaire.h"

formulaire::formulaire(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::formulaire)
{
    ui->setupUi(this);
    //connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::changeCursor);
}

formulaire::~formulaire()
{
    delete ui;
}
