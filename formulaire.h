#ifndef FORMULAIRE_H
#define FORMULAIRE_H
#include <QMainWindow>
#include <QPushButton>
#include <QHoverEvent>

QT_BEGIN_NAMESPACE
namespace Ui { class formulaire; }
QT_END_NAMESPACE

class formulaire : public QMainWindow
{
    Q_OBJECT

public:
     formulaire(QWidget *parent = nullptr);
    ~formulaire(){};
private:
    Ui::formulaire *ui;
};






#endif // FORMULAIRE_H
