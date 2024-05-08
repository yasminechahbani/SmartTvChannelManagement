// QRGenerateWindow.h
#ifndef QRGENERATEWINDOW_H
#define QRGENERATEWINDOW_H

#include <QMainWindow>
#include <QAbstractItemModel>

namespace Ui {
class QRGenerateWindow;
}

class QRGenerateWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit QRGenerateWindow(QWidget *parent = nullptr);
    ~QRGenerateWindow();

    void setEquipmentData(QAbstractItemModel *model); // Method to set equipment data

private slots:
    void on_equip_tab_clicked(const QModelIndex &index); // Slot to handle item click

private:
    Ui::QRGenerateWindow *ui; // UI for QRGenerateWindow
};

#endif // QRGENERATEWINDOW_H
