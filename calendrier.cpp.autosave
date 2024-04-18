
#include "calendrier.h"
#include "ui_calendrier.h"
#include <QShortcut>
#include <QKeySequence>
#include <QListWidgetItem>
#include <QCheckBox>
#include <QComboBox>
#include <QMessageBox>
calendrier::calendrier(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::calendrier)
{
    ui->setupUi(this);

    // Créer un raccourci clavier pour détecter la touche "Entrée"
    QShortcut *shortcut = new QShortcut(QKeySequence(Qt::Key_Return), ui->notesTextEdit);

    // Connecter le raccourci clavier à une fonction pour ajouter une nouvelle case à cocher
    connect(shortcut, &QShortcut::activated, this, &calendrier::addCheckBox);

    connect(ui->calendarWidget, &QCalendarWidget::clicked, this, &calendrier::showNotes);

    // Ajouter des catégories prédéfinies à la liste déroulante
    ui->categoryComboBox->addItems({"Travail", "Personnel", "Études", "Autre"});
}

void calendrier::addCheckBox()
{
    // Récupérer la date sélectionnée
    QDate selectedDate = ui->calendarWidget->selectedDate();

    // Récupérer le texte et la catégorie de la zone de texte et de la liste déroulante
    QString noteText = ui->notesTextEdit->toPlainText();
    QString category = ui->categoryComboBox->currentText();

    // Vérifier si la catégorie est vide
    if (category.isEmpty()) {
        QMessageBox::warning(this, "Attention", "Veuillez sélectionner une catégorie.");
        return;
    }

    // Ajouter la note et la catégorie à la liste des notes pour cette date
    notesMap[selectedDate].append(category + ": " + noteText);

    // Effacer le texte de la zone de texte
    ui->notesTextEdit->clear();

    // Mettre à jour l'affichage des notes pour la date sélectionnée
    showNotes(selectedDate);

    // Afficher un message spécifique en fonction de la catégorie sélectionnée
    QString message;
    if (category == "Travail") {
        message = "Notez vos tâches professionnelles importantes.";
    } else if (category == "Personnel") {
        message = "Ajoutez des notes personnelles ici.";
    } else if (category == "Études") {
        message = "Enregistrez vos devoirs ou études importantes.";
    } else if (category == "Autre") {
        message = "Ajoutez des notes supplémentaires ici.";
    }



    if (!message.isEmpty()) {
                QMessageBox msgBox;
                msgBox.setWindowTitle("Catégorie sélectionnée");
                msgBox.setText(message);
                msgBox.setStyleSheet("QLabel { font-size: 16pt; }"); // Définir la taille de la police
                msgBox.exec();
            }

    }


void calendrier::showNotes(const QDate &date)
{
    // Effacer les notes précédentes affichées
   // ui->notesTextEdit->clear();


/*
    // Create a QDateTime object with the selected date
      QDateTime selectedDateTime(date);

      // Get the text of the notes from the text edit
      QString notesText = ui->notesTextEdit->toPlainText();

      // Save the notes in the notesList
      notesList.append(notesText);

      // Set the text in the text edit
      QFont font;
      font.setPointSize(14);
      ui->notesTextEdit->setFont(font);
      ui->notesTextEdit->setText(QString("Notes for %1:").arg(date.toString()));
*/


    // Vérifier si des notes existent pour cette date
    if (notesMap.contains(date)) {
        // Afficher les notes pour cette date
        QStringList notesList = notesMap.value(date);
        for (const QString &note : notesList) {
            ui->notesTextEdit->append(note);




        }
    }

}

void calendrier::on_pushButton_11_clicked()
{
    // Insérez ici le code à exécuter lorsque le bouton pushButton_11 est cliqué
    QMessageBox::information(this, "Bouton cliqué", "Le bouton pushButton_11 a été cliqué !");
}


calendrier::~calendrier()
{
    delete ui;
}
