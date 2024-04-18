// QRGenerateWindow.cpp
#include "qrgeneratewindow.h"
#include "ui_qrgeneratewindow.h"
#include <QrCodeGenerator.h>

QRGenerateWindow::QRGenerateWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::QRGenerateWindow)
{
    ui->setupUi(this);
}

QRGenerateWindow::~QRGenerateWindow()
{
    delete ui;
}

void QRGenerateWindow::setEquipmentData(QAbstractItemModel *model)
{
    // Set equipment data to the table
    ui->tableView->setModel(model);
}

void QRGenerateWindow::on_equip_tab_clicked(const QModelIndex &index)
{
    if (!index.isValid())
        return;

    // Retrieve data of the selected item from the model
    QString equipmentInfo = index.data(Qt::DisplayRole).toString();

    // Generate QR code for the selected equipment item
    QrCodeGenerator qrGenerator;
    //QImage qrCodeImage = qrGenerator.generateQr(equipmentInfo, 200, 2); // Example: Size 200x200 with border size 2
    QrCodeGenerator generator;
    QString data = "https://www.example.com";
    QImage qrCodeImage = generator.generateQr(data);
    // Display the generated QR code image in a QLabel
   /* QLabel *qrCodeLabel = new QLabel();
    qrCodeLabel->setPixmap(QPixmap::fromImage(qrCodeImage));
    qrCodeLabel->show();*/
}

