#include "formstat.h"
#include "ui_formstat.h"

FormStat::FormStat(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FormStat)
{
    ui->setupUi(this);
}

FormStat::~FormStat()
{
    delete ui;
}
/*QTableView* FormStat::getTableView() const
{
    return ui->tableView;
}
Ui::FormStat* FormStat::getUi() const
{
    return ui;
}
*/
