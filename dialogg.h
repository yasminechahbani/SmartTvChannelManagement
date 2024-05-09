#ifndef DIALOGG_H
#define DIALOGG_H

#include <QMainWindow>

namespace Ui {
class Dialogg;
}

class Dialogg : public QMainWindow
{
    Q_OBJECT

public:
    explicit Dialogg(QWidget *parent = nullptr);
    ~Dialogg();

private slots:
    void on_updatebutton_clicked();

private:
    Ui::Dialogg *ui;
};

#endif // DIALOGG_H
