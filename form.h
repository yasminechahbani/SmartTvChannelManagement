#ifndef FORM_H
#define FORM_H
#include "invites.h"

#include <QDialog>

namespace Ui {
class Form;
}

class Form : public QDialog
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = nullptr);
    void setInvites(invites i);
    ~Form();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();
 bool validateFormData();
private:
    Ui::Form *ui;
};

#endif // FORM_H
