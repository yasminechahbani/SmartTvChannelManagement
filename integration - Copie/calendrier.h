#ifndef CALENDRIER_H
#define CALENDRIER_H

#include <QDialog>
#include <QDate>
#include <QCalendarWidget>
#include <QTextEdit>
//#include <QTextEdit>
//#include <QPushButton>




#include <QMap>
#include <QCheckBox>
#include <QVBoxLayout>
#include <QShortcut>
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
 void showNotes(const QDate &date);
 //void on_notesTextEdit_textChanged();
 void addCheckBox();

private:
    Ui::calendrier *ui;
    QCalendarWidget *calendarWidget;
       QTextEdit *notesTextEdit;
       QMap<QDate, QStringList> notesMap;
       QList<QString> notesList;

};

#endif // CALENDRIER_H
