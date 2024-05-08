#include "supp.h"
#include "ui_supp.h"
#include "invites.h"
#include <QString>
#include <QMessageBox>
#include <QtCharts>

supp::supp(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::supp)
{
     ui->setupUi(this);
}

supp::~supp()
{
    delete ui;
}

