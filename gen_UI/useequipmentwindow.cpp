#include "useequipmentwindow.h"
#include "ui_useequipmentwindow.h"
#include "equipement.h"
#include "mainwindow.h"


useequipmentwindow::useequipmentwindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::useequipmentwindow)
{
    ui->setupUi(this);
}

useequipmentwindow::~useequipmentwindow()
{
    delete ui;
}

void useequipmentwindow::on_list_clicked()
{     ui->tableView->setModel(Equipmp.showEquipement());


}

///
///
///
///
///
///
///
///
///
///
/*void useequipmentwindow::sendWhatsAppMessage(const QString& recipient, const QString& message)
{
    QString accountSid = "AC09bc536f4fdf41cd9a4d1ac5ad9e36fe";
       QString authToken = "0d13b6af8a725faa1d4ec46b458f9347";
       QString fromNumber = "whatsapp:+14155238886";

       QNetworkAccessManager* manager = new QNetworkAccessManager(this);
      connect(manager, &QNetworkAccessManager::finished, this, &useequipmentwindow::onWhatsAppRequestFinished);

       QUrl url("https://api.twilio.com/2010-04-01/Accounts/AC09bc536f4fdf41cd9a4d1ac5ad9e36fe/Messages.json");
       QNetworkRequest request(url);
       request.setHeader(QNetworkRequest::ContentTypeHeader, "application/x-www-form-urlencoded");

       QUrlQuery params;
       params.addQueryItem("To", "whatsapp:" + recipient);
       params.addQueryItem("From", fromNumber);
       params.addQueryItem("Body", message);
       QByteArray postData = params.toString(QUrl::FullyEncoded).toUtf8();

       QString auth = accountSid + ":" + authToken;
       QByteArray authData = auth.toUtf8().toBase64();
       request.setRawHeader("Authorization", "Basic " + authData);

       manager->post(request, postData);
}
void useequipmentwindow::onWhatsAppRequestFinished(QNetworkReply* reply)
{
    if (reply->error() == QNetworkReply::NoError) {
        QMessageBox::information(this, "WhatsApp Message Sent", "The WhatsApp message has been sent successfully.");
    } else {
        QMessageBox::critical(this, "Error", "Failed to send WhatsApp message: " + reply->errorString());
    }
    reply->deleteLater();
}

*/

//host requires auth//
void useequipmentwindow::sendWhatsAppMessage(const QString& recipient, const QString& message)
{
  // Replace with your Infobip API key or access token
  QString authToken = "5609830a95e4a56e5e6cd1cae191177f-02ef3452-6d3f-40df-88d4-066ff97a9207";

  // Infobip API endpoint URL (replace with the actual URL for sending messages)
  QUrl url("https://qy9wy3.api.infobip.com/whatsapp/1/message/template");  // Replace with actual URL

  QNetworkAccessManager* manager = new QNetworkAccessManager(this);
  connect(manager, &QNetworkAccessManager::finished, this, &useequipmentwindow::onWhatsAppRequestFinished);

  QNetworkRequest request(url);
  request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

  // JSON message body (replace with Infobip's required format)
  QJsonObject messageBody;
  messageBody["from"] = "447860099299";  // Replace with your Infobip sender ID
 // messageBody["to"] = "whatsapp:" + recipient;
   messageBody["to"] = "21629423403";

  messageBody["text"] = message;

  QByteArray postData = QJsonDocument(messageBody).toJson(QJsonDocument::Compact);

  request.setRawHeader("Authorization", "App" + authToken.toUtf8());

  manager->post(request, postData);
}

void useequipmentwindow::onWhatsAppRequestFinished(QNetworkReply* reply)
{
  if (reply->error() == QNetworkReply::NoError) {
    // Parse the Infobip API response (replace with specific parsing logic based on their response format)
    QJsonDocument response = QJsonDocument::fromJson(reply->readAll());
    if (response.isObject() && response.object().contains("messages")) {
      QMessageBox::information(this, "WhatsApp Message Sent", "The WhatsApp message has been sent successfully.");
    } else {
      // Handle potential errors in the response (replace with more specific checks)
      QMessageBox::critical(this, "Error", "Failed to send WhatsApp message: Unexpected response format.");
    }
  } else {
    QMessageBox::critical(this, "Error", "Failed to send WhatsApp message: " + reply->errorString());
  }
  reply->deleteLater();
}
////mail////





void useequipmentwindow::sendEmail(const QString& recipient, const QString& subject, const QString& body)
{
    // Set up Infobip API details
    QString authToken = "5609830a95e4a56e5e6cd1cae191177f-02ef3452-6d3f-40df-88d4-066ff97a9207";
    QString url = "https://qy9wy3.api.infobip.com/email/3/send";

    // Set up email content
    QString from = "Yasmine Chahbani <yasmine.chahbani@esprit.tn>";

    // Create form data
    QHttpMultiPart *multiPart = new QHttpMultiPart(QHttpMultiPart::FormDataType);

    // Add form fields
    QHttpPart fromPart;
    fromPart.setHeader(QNetworkRequest::ContentDispositionHeader, QVariant("form-data; name=\"from\""));
    fromPart.setBody(from.toUtf8());

    QHttpPart toPart;
    toPart.setHeader(QNetworkRequest::ContentDispositionHeader, QVariant("form-data; name=\"to\""));
    toPart.setBody(recipient.toUtf8());

    QHttpPart subjectPart;
    subjectPart.setHeader(QNetworkRequest::ContentDispositionHeader, QVariant("form-data; name=\"subject\""));
    subjectPart.setBody(subject.toUtf8());

    QHttpPart bodyPart;
    bodyPart.setHeader(QNetworkRequest::ContentDispositionHeader, QVariant("form-data; name=\"text\""));
    bodyPart.setBody(body.toUtf8());

    // Add parts to the multiPart
    multiPart->append(fromPart);
    multiPart->append(toPart);
    multiPart->append(subjectPart);
    multiPart->append(bodyPart);

    // Create network access manager
    QNetworkAccessManager* manager = new QNetworkAccessManager(this);

    // Connect signals and slots for request handling
    connect(manager, &QNetworkAccessManager::finished, this, [=](QNetworkReply *reply){
        if (reply->error() == QNetworkReply::NoError) {
            qDebug() << "Email sent successfully";
        } else {
            qDebug() << "Error sending email:" << reply->errorString();
        }
        reply->deleteLater();
    });

    // Create network request
    QNetworkRequest request(url);
    request.setRawHeader("Authorization", "App " + authToken.toUtf8());

    // Send POST request
    manager->post(request, multiPart);
}


void useequipmentwindow::on_use_return_clicked()
{
    // Example usage of sendEmail function
    sendEmail("chahbaniyesmine@gmail.com", "equipment notification", "you have successfully rented the equipement");


}

/////////////////////////////////////////////////
void useequipmentwindow::on_tableView_activated(const QModelIndex &index)
{
    QString equipmentID = ui->tableView->model()->data(index.sibling(index.row(), 0)).toString();

    // Retrieve the availability of the equipment from the table view
    QString availability = ui->tableView->model()->data(index.sibling(index.row(), 3)).toString();

    // Check if the equipment is available
    if (availability == "AVAILABLE") {
        // Ask for confirmation using QMessageBox
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "Confirmation", "Do you want to use this equipment?", QMessageBox::Yes | QMessageBox::No);

        // Check user's response
        if (reply == QMessageBox::Yes) {
            // Update the availability in the database
            QSqlQuery query;
            query.prepare("UPDATE EQUIPEMENT SET EQUIPEMENT_AVAILABILITY = :availability WHERE EQUIPEMENT_ID = :id");
            query.bindValue(":availability", "IN USE");
            query.bindValue(":id", equipmentID);

            if (query.exec()) {
                // Log the date, time, and equipment ID into the notification.txt file
                QString notification = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss") + " - Equipment ID " + equipmentID + " is now in use.\n";
                QFile file("C:/Users/user/OneDrive/Documents/gen_UI/notification.txt");
                if (file.open(QIODevice::Append | QIODevice::Text)) {
                    QTextStream out(&file);
                    out << notification;
                    file.close();
                    sendEmail("chahbaniyesmine@gmail.com", "Equipment Notification", "Equipment ID " + equipmentID + " is now in use.");

                                   // Notify the user about the email sent and equipment being used
                                   QMessageBox::information(this, "Success", "Equipment used successfully.\nAn email has been sent to you regarding Equipment ID " + equipmentID + ".");
                } else {
                    qDebug() << "Error opening file:" << file.errorString();
                }

                // Send WhatsApp message
                QString recipient = QInputDialog::getText(this, "Enter Recipient", "Enter the recipient's phone number:");
                // Check if the user canceled or left the recipient field empty
                if (recipient.isEmpty()) {
                    QMessageBox::warning(this, "Error", "WhatsApp message sending canceled. Please enter the recipient's phone number.");
                    return;
                }
                // Now you have the recipient's phone number, proceed to send the WhatsApp message
                QString message = "Your equipment with ID " + equipmentID + " is now in use.";
                //sendWhatsAppMessage(recipient, message);

                ui->tableView->model()->setData(index.sibling(index.row(), 3), "IN USE");

                // Refresh the table view by reloading the data from the database
                QSqlQueryModel* model = Equipmp.showEquipement();
                ui->tableView->setModel(model);

                // Notify the user about the equipment being used
                QMessageBox::information(this, "Success", "Equipment used successfully.");
            } else {
                QMessageBox::warning(this, "Error", "Failed to update equipment availability in the database.");
            }
        }
    } else {
        // Notify the user that the equipment is not available for use
        QMessageBox::warning(this, "Warning", "This equipment is not available for use.");
    }
}
