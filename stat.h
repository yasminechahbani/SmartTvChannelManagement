#ifndef STAT_H
#define STAT_H

#include <QWidget>

namespace Ui {
class stat;
}

class Stat : public QWidget
{
    Q_OBJECT

public:
    explicit Stat(QWidget *parent = nullptr);
    ~Stat();

private:
    Ui::stat *ui;
};

#endif // STAT_H
