#include "chooseequipforqr.h"
#include "ui_chooseequipforqr.h"
#include "qrgeneratewindow.h"
#include "QrCodeGenerator.h"
#include <QDebug>

chooseEquipForQr::chooseEquipForQr(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::chooseEquipForQr)
{
    ui->setupUi(this);
}

chooseEquipForQr::~chooseEquipForQr()
{
    delete ui;
}

void chooseEquipForQr::on_pushButton_clicked()
{
    ui->tableView->setModel(Equipmp.showEquipement());

}

void chooseEquipForQr::on_tableView_activated(const QModelIndex &index)
{
    QString equipmentID = ui->tableView->model()->data(index.sibling(index.row(), 0)).toString();
    qDebug() << "ID is:" << equipmentID;

    // Fetch the equipment type from the table
    QString equipmentType = ui->tableView->model()->data(index.sibling(index.row(), 2)).toString();

    // Create a new QRGenerateWindow instance
    QRGenerateWindow *qrWindow = new QRGenerateWindow(this);

    // Generate QR code image based on the equipment type
    QrCodeGenerator generator;
    QString data;
    if (equipmentType == "camera") {
        data = "https://www.canon-europe.com/support/consumer/products/cameras/eos/";
    } else if (equipmentType == "mic") {
        data = "https://www.sony-asia.com/microsite/camera-microphones/";
    } else {
        // Handle unknown equipment type
        qDebug() << "Unknown equipment type:" << equipmentType;
        delete qrWindow; // Clean up the allocated memory
        return;
    }
    QImage qrCodeImage = generator.generateQr(data);

    // Set the QR code image to qrCodeLabel in QRGenerateWindow
    QLabel *qrCodeLabel = qrWindow->findChild<QLabel*>("qrCodeLabel");
    if (qrCodeLabel) {
        // Resize the QLabel to fit the QR code image
        qrCodeLabel->setPixmap(QPixmap::fromImage(qrCodeImage).scaled(qrCodeLabel->size(), Qt::KeepAspectRatio));

        // Resize the window to fit the QLabel and make it larger
        QSize newSize = qrCodeLabel->size() + QSize(100, 100); // Adjust the size as needed
        qrWindow->resize(newSize);

        qrWindow->show();
    } else {
        // Handle error: qrCodeLabel not found
        qDebug() << "QR code label not found.";
        delete qrWindow; // Clean up the allocated memory
    }
}
