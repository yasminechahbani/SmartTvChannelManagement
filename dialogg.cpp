#include "dialogg.h"
#include "ui_dialogg.h"

Dialogg::Dialogg(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Dialogg)
{
    ui->setupUi(this);
}

Dialogg::~Dialogg()
{
    delete ui;
}

void Dialogg::on_updatebutton_clicked()
{

}
