#include "returnequipmentwindow.h"
#include "ui_returnequipmentwindow.h"

returnequipmentwindow::returnequipmentwindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::returnequipmentwindow)
{
    ui->setupUi(this);
}

returnequipmentwindow::~returnequipmentwindow()
{
    delete ui;
}

void returnequipmentwindow::on_list_clicked()
{
     ui->tableView->setModel(Equipmp.showEquipement());
}

void returnequipmentwindow::on_tableView_activated(const QModelIndex &index)
{
    QString equipmentID = ui->tableView->model()->data(index.sibling(index.row(), 0)).toString();

       // Retrieve the availability of the equipment from the table view
       QString availability = ui->tableView->model()->data(index.sibling(index.row(), 3)).toString();

       // Check if the equipment is in use
       if (availability == "IN USE") {
           // Ask for confirmation using QMessageBox
           QMessageBox::StandardButton reply;
           reply = QMessageBox::question(this, "Confirmation", "Do you want to return this equipment?", QMessageBox::Yes | QMessageBox::No);

           // Check user's response
           if (reply == QMessageBox::Yes) {
               // Update the availability in the database
               QSqlQuery query;
               query.prepare("UPDATE EQUIPEMENT SET EQUIPEMENT_AVAILABILITY = :availability WHERE EQUIPEMENT_ID = :id");
               query.bindValue(":availability", "AVAILABLE");
               query.bindValue(":id", equipmentID);

               if (query.exec()) {
                   // Log the date, time, and equipment ID into the notification.txt file
                   QString notification = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss") + " - Equipment ID " + equipmentID + " has been returned.\n";
                   QFile file("C:/Users/user/OneDrive/Documents/gen_UI/notification.txt");
                   if (file.open(QIODevice::Append | QIODevice::Text)) {
                       QTextStream out(&file);
                       out << notification;
                       file.close();
                   } else {
                       qDebug() << "Error opening file:" << file.errorString();
                   }

                   // Refresh the table view by reloading the data from the database
                   QSqlQueryModel* model = Equipmp.showEquipement();
                   ui->tableView->setModel(model);

                   // Notify the user about the equipment being returned
                   QMessageBox::information(this, "Success", "Equipment returned successfully.");
               } else {
                   QMessageBox::warning(this, "Error", "Failed to update equipment availability in the database.");
               }
           }
       } else {
           // Notify the user that the equipment cannot be returned as it is not in use
           QMessageBox::warning(this, "Warning", "This equipment is not currently in use.");
       }
}
