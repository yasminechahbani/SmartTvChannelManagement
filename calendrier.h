#ifndef CALENDRIER_H
#define CALENDRIER_H

#include <QDialog>
#include <QDate>
//#include <QTextEdit>
//#include <QPushButton>

namespace Ui {
class calendrier;
}

class calendrier : public QDialog
{
    Q_OBJECT

public:
    explicit calendrier(QWidget *parent = nullptr);
    ~calendrier();

signals:
    // Déclaration du signal dateSelected avec un objet QDate en paramètre
    void dateSelected(const QDate &selectedDate);
    void noteAdded(const QDate &date, const QString &note);


private slots:
    void on_pushButton_11_clicked();
    //void dateSelected(const QDate &selectedDate);



private:
    Ui::calendrier *ui;

};

#endif // CALENDRIER_H
