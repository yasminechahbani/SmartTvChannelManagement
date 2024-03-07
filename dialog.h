#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

    void updateInviteDetails(const QString &id,const QString &nom, const QString &prenom, const QString &sexe, const QString &metier, const QString &date, const QString &tel);

private slots:
    void on_pushButton_clicked();
void saveChanges();
private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
