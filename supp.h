#ifndef SUPP_H
#define SUPP_H
#include "invites.h"
#include <QWidget>

namespace Ui {
class supp;
}

class supp : public QWidget
{
    Q_OBJECT

public:
    explicit supp(QWidget *parent = nullptr);
    ~supp();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_supp_clicked();

private:
    Ui::supp *ui;
    invites inv;
};

#endif // SUPP_H
