#ifndef RETURNEQUIPMENTWINDOW_H
#define RETURNEQUIPMENTWINDOW_H

#include <QMainWindow>
#include "equipement.h"

namespace Ui {
class returnequipmentwindow;
}

class returnequipmentwindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit returnequipmentwindow(QWidget *parent = nullptr);
    ~returnequipmentwindow();

private slots:
    void on_list_clicked();

    void on_tableView_activated(const QModelIndex &index);

private:
    Ui::returnequipmentwindow *ui;
    EQUIPEMENT Equipmp;

};

#endif // RETURNEQUIPMENTWINDOW_H
