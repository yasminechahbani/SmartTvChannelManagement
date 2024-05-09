#ifndef CHOOSEEQUIPFORQR_H
#define CHOOSEEQUIPFORQR_H

#include <QMainWindow>
#include "equipement.h"
namespace Ui {
class chooseEquipForQr;
}

class chooseEquipForQr : public QMainWindow
{
    Q_OBJECT

public:
    explicit chooseEquipForQr(QWidget *parent = nullptr);
    ~chooseEquipForQr();

private slots:
    void on_pushButton_clicked();

    void on_tableView_activated(const QModelIndex &index);

private:
    Ui::chooseEquipForQr *ui;
    EQUIPEMENT Equipmp;

};

#endif // CHOOSEEQUIPFORQR_H
