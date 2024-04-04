#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "emission.h" // Include the emission header file
#include <QMessageBox>
#include <QSqlError>
#include<QDebug>
#include <QPdfWriter>
#include<QPainter>
#include<QDate>
#include<QDesktopServices>
#include<QUrl>
#include <QtCharts>
#include <QPrinter>
#include <QPrintDialog>
#include <QPainter>
#include <QComboBox>
#include <QSqlQueryModel>
#include <QFileDialog>
#include <QTextDocument>
#include <QTextStream>
#include <QStringListModel>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // Connect signals and slots here if needed
    ui->tabb->setModel(Emission.ReadEmission()); // Update to use the EMISSION class

}


MainWindow::~MainWindow()
{
    delete ui;
}





/*void MainWindow::on_dark_mode_clicked()
{
    static bool isDarkModeEnabled = false;

    // Toggle the dark mode flag
    isDarkModeEnabled = !isDarkModeEnabled;

    if (isDarkModeEnabled) {
        // Load the dark mode UI
        delete ui;
        ui = new Ui::MainWindow;
        ui->setupUi(this);
        QFile file(":/darkmode.qss"); // Load the dark mode stylesheet
        file.open(QFile::ReadOnly);
        QString styleSheet = QLatin1String(file.readAll());
        this->setStyleSheet(styleSheet);
    } else {
        // Load the default UI
        delete ui;
        ui = new Ui::MainWindow;
        ui->setupUi(this);
        this->setStyleSheet(""); // Clear any stylesheet
    }
}*/





// Validate form function remains the same if form fields are common

void MainWindow::on_ajouter_clicked()
{
    QString emission_id = ui->id_lineEdit->text();
    QString emission_nom = ui->name_lineEdit->text();
    QString emission_host = ui->host_lineEdit->text();
    int emission_nbviewers = ui->nbviews_lineEdit->text().toInt();
    QString emission_genre = ui->genre_lineEdit->text();
    QString emission_type = ui->type_lineEdit->text();
    QString emission_date = ui->date_lineEdit->text();
    QString emission_duree = ui->duree_lineEdit->text();

    EMISSION Emission(emission_id, emission_nom, emission_host, emission_nbviewers, emission_genre, emission_type, emission_date, emission_duree);

    if (!Emission.CreateEmission()) {
        QMessageBox::critical(nullptr, "Error", "Failed to add emission.");
        return;
    }

    ui->tabb->setModel(Emission.ReadEmission());
    QMessageBox::information(nullptr, "Success", "Emission added successfully.");
}

void MainWindow::on_delete_button_clicked()
{
    QString emission_id = ui->id_lineEdit_delete->text();
    if (!Emission.deleteEmission(emission_id)) {
        QMessageBox::critical(nullptr, "Error", "Failed to delete emission.");
        return;
    }

    ui->tabb->setModel(Emission.ReadEmission());
    QMessageBox::information(nullptr, "Success", "Emission deleted successfully.");
}


//void MainWindow::on_list_all_button_clicked()
//{
//    ui->tabb->setModel(Emission.ReadEmission());
//}


void MainWindow::on_list_all_button_clicked()
{
    QString searchName = ui->search_name_lineEdit->text();

    ui->tabb->setModel(Emission.searchEmissionByName(searchName));
}




void MainWindow::on_clear_all_in_table_clicked()
{
    int reply = QMessageBox::question(this, "Confirmation", "Are you sure you want to clear all lines in the table?", QMessageBox::Yes | QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        QSqlQuery query;
        query.prepare("DELETE FROM emissions");
        if (!query.exec()) {
            QMessageBox::critical(this, "Error", "Failed to clear table.");
            return;
        }
        ui->tabb->setModel(Emission.ReadEmission());
    }
}





void MainWindow::on_update_clicked()
{
    QString emission_id = ui->id_lineEdit_2->text();
    QString emission_nom = ui->name_lineEdit_2->text();
    QString emission_host = ui->host_lineEdit_2->text();
    int emission_nbviewers = ui->nbviews_lineEdit_2->text().toInt();
    QString emission_genre = ui->genre_lineEdit_2->text();
    QString emission_type = ui->type_lineEdit_2->text();
    QString emission_date = ui->date_lineEdit_2->text();
    QString emission_duree = ui->duree_lineEdit_2->text();

    EMISSION Emission(emission_id, emission_nom, emission_host, emission_nbviewers, emission_genre, emission_type, emission_date, emission_duree);

    if (!Emission.updateEmission(emission_id)) {
        QMessageBox::critical(nullptr, "Error", "Failed to update emission.");
        return;
    }
    else
        QMessageBox::information(nullptr, "Success", "Emission edited successfully.");


    ui->tabb->setModel(Emission.ReadEmission());
    QMessageBox::information(nullptr, "Success", "Emission updated successfully.");
}



//chartssssssssssss


void MainWindow::on_stat_clicked()
{
    EMISSION emission;
         QSqlQuery query = emission.getStatBynbviews();

         QtCharts::QPieSeries *series = new QtCharts::QPieSeries();
         while (query.next()) {
             QString type = query.value(0).toString();
             int count = query.value(1).toInt();
             QtCharts::QPieSlice *slice = new QtCharts::QPieSlice(type, count);
             series->append(slice);
         }

         QtCharts::QChart *chart = new QtCharts::QChart();
         chart->addSeries(series);
         chart->setTitle("Statistiques");
         chart->setAnimationOptions(QtCharts::QChart::SeriesAnimations);

         QtCharts::QChartView *chartView = new QtCharts::QChartView(chart);
         chartView->setRenderHint(QPainter::Antialiasing);
         chartView->setParent(ui->tableView);
         chartView->resize(ui->tableView->size());
         chartView->show();
}

//pdf//////////////////
void MainWindow::on_Generate_PDF_clicked()
{
    QPdfWriter pdf("C:/Users/USER/Desktop/official_projectCPP_folder/print - 2/EMISSION.pdf");
    QPainter painter(&pdf);
    int i = 4100;
    const QImage image("C:/Users/USER/Desktop/official_projectCPP_folder/pdf/417529624_1870268480077915_5802465082538659099_n.png");
    const QPoint imageCoordinates(155,0);
    int width1 = 2000;
    int height1 = 2000;
    QImage img=image.scaled(width1,height1);
    painter.drawImage(imageCoordinates, img );

    QColor dateColor(0x4a5bcf);
    painter.setPen(dateColor);
    painter.setFont(QFont("Montserrat SemiBold", 11));
    QDate cd = QDate::currentDate();
    painter.drawText(7700,250,cd.toString("Ariana, El Ghazela"));
    painter.drawText(8100,500,cd.toString("dd/MM/yyyy"));

    QColor titleColor(0x341763);
    painter.setPen(titleColor);
    painter.setFont(QFont("Montserrat SemiBold", 25));
    painter.drawText(3000,2700,"EMISSION LIST");

    painter.setPen(Qt::black);
    painter.setFont(QFont("Time New Roman", 15));
    painter.drawRect(100,3300,9400,500);

    painter.setFont(QFont("Montserrat SemiBold", 10));
    painter.drawText(1000, 3600, "EMISSION_ID");
    painter.drawText(2000, 3600, "NAME");
    painter.drawText(3000, 3600, "HOST");
    painter.drawText(4000, 3600, "NBVIEWERS");
    painter.drawText(5000, 3600, "GENRE");
    painter.drawText(6000, 3600, "TYPE");
    painter.drawText(7000, 3600, "DATE");
    painter.drawText(8000, 3600, "DUREE");

    painter.setFont(QFont("Montserrat", 10));
    painter.drawRect(100,3300,9400,9000);

    EMISSION emission;
    QSqlQuery query = emission.getEMISSIONData();
    int y=4300;
    while (query.next())
    {
        painter.drawLine(100,y,9490,y);
        y+=500;
        painter.drawText(200,i,query.value(0).toString());
        painter.drawText(2000,i,query.value(1).toString());
        painter.drawText(3000,i,query.value(2).toString());
        painter.drawText(4000,i,query.value(3).toString());
        painter.drawText(5000,i,query.value(4).toString());
        painter.drawText(6000,i,query.value(5).toString());
        painter.drawText(7000,i,query.value(6).toString());
        painter.drawText(8000,i,query.value(7).toString());

        i = i + 500;
    }

    int reponse = QMessageBox::question(this, "Generate PDF", "PDF Saved. Do you want to open it?", QMessageBox::Yes | QMessageBox::No);
    if (reponse == QMessageBox::Yes)
    {
        QDesktopServices::openUrl(QUrl::fromLocalFile("C:/Users/USER/Desktop/official_projectCPP_folder/pdf/EMISSION.pdf"));
        painter.end();
    }
    else
    {
        painter.end();
    }
}


//printtttttttttttttttttt////////

/*
void MainWindow::on_printEmissions_clicked()
{
    // Create a QPrinter object for high-resolution printing
    QPrinter printer(QPrinter::HighResolution);
    printer.setPageSize(QPrinter::A4); // Set page size to A4
    printer.setOrientation(QPrinter::Landscape); // Set orientation to landscape
    printer.setFullPage(false); // Do not print the full page

    // Create a print dialog for the printer
    QPrintDialog printDialog(&printer, this);

    // Open the print dialog, wait for user input
    if (printDialog.exec() == QDialog::Accepted) {
        // If the user accepts, create a QPainter object to paint on the printer
        QPainter painter(&printer);

        // Get the printable area of the page
        QRect printArea = printer.pageRect();

        // Get the size of the content you want to print (assuming it's a table view)
        QSize tableViewSize = ui->tabb->sizeHint(); // Assuming your table view is named 'tabb'

        // Scale the content to fit within the print area
        double xscale = printArea.width() / double(tableViewSize.width());
        double yscale = printArea.height() / double(tableViewSize.height());
        double scale = qMin(xscale, yscale);

        // Translate the painter to start drawing from the top left of the print area
        painter.translate(printArea.topLeft());

        // Apply the scale to fit the content within the print area
        painter.scale(scale, scale);

        // Render the table view onto the painter
        ui->tabb->render(&painter); // Assuming your table view is named 'tabb'
    }
}

*/
void MainWindow::on_printEmissions_clicked()
{
#ifdef Q_OS_WIN
    // Load the existing PDF file
    QString pdfFilePath = "C:/Users/USER/Desktop/official_projectCPP_folder/print - 2/EMISSION.pdf";

    // Create a QProcess to invoke the default PDF viewer and print the file
    QProcess process;
    process.start("cmd", QStringList() << "/c" << "start" << "/min" << "AcroRd32.exe" << "/t" << pdfFilePath);
    process.waitForFinished(-1);

    if (process.exitCode() != 0) {
        QMessageBox::critical(this, "Error", "Failed to print PDF file.");
        qDebug() << "Failed to print PDF file:" << pdfFilePath;
    }
#else
    QMessageBox::critical(this, "Error", "Printing PDF files directly is not supported on this platform.");
#endif
}




//tri//////////////





//excel///////////:::
void MainWindow::on_excel_clicked() {
    QString fileName = QFileDialog::getSaveFileName(this, tr("Export Excel"), QString(), "*.csv");
    if (fileName.isEmpty()) {
        return; // User canceled save
    }

    QFile file(fileName);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QMessageBox::critical(this, "Error", "Cannot create file");
        return;
    }

    QTextStream stream(&file);

    // Write headers
    stream << "ID         ,         Name         ,         Host         ,Viewers         ,         Genre         ,         Type         ,         Date         ,         Duration\n";

    // Fetch data from the EMISSION model
    QSqlQueryModel* model = Emission.ReadEmission();
    const int rowCount = model->rowCount();
    const int columnCount = model->columnCount();

    // Write data
    for (int i = 0; i < rowCount; ++i) {
        for (int j = 0; j < columnCount; ++j) {
            QString data = model->data(model->index(i, j)).toString();
            stream << '"' << data.replace("\"", "\"\"") << '"';
            if (j < columnCount - 1) {
                stream << "         ,         ";
            } else {
                stream << "\n";
            }
        }
    }

    file.close();

    int response = QMessageBox::question(this, "Export Successful", "Data exported to CSV file successfully. Do you want to open it?", QMessageBox::Yes | QMessageBox::No);
    if (response == QMessageBox::Yes) {
        QDesktopServices::openUrl(QUrl::fromLocalFile(fileName));
    }
}


QStringList MainWindow::readEmissionForExcel(const QSqlQueryModel* model, int row) {
    QStringList rowData;
    const int columnCount = model->columnCount();

    // Read data for the given row
    for (int j = 0; j < columnCount; ++j) {
        QString data = model->data(model->index(row, j)).toString();
        rowData.append(data);
    }

    return rowData;
}



