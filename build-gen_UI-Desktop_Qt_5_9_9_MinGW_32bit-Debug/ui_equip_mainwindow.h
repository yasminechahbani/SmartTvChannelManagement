/********************************************************************************
** Form generated from reading UI file 'equip_mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EQUIP_MAINWINDOW_H
#define UI_EQUIP_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QPushButton *pushButton;
    QLabel *label_10;
    QLabel *label_11;
    QFrame *frame_4;
    QLabel *label_5;
    QFrame *frame_3;
    QLabel *label_3;
    QToolButton *search_button;
    QLineEdit *search_lineEdit;
    QLabel *label_15;
    QPushButton *qr_button;
    QPushButton *Generate_PDF;
    QPushButton *stats_button;
    QLabel *label_16;
    QLabel *label_8;
    QLabel *label_18;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLineEdit *name_lineEdit;
    QLineEdit *id_lineEdit;
    QLineEdit *employee_id_lineEdit;
    QLineEdit *availability_lineEdit;
    QLineEdit *state_lineEdit;
    QLineEdit *currentholder_linedit;
    QLabel *label_19;
    QLabel *label_29;
    QLabel *label_30;
    QLabel *label_31;
    QLabel *label_32;
    QLabel *label_33;
    QLabel *label_34;
    QPushButton *ajouter;
    QPushButton *updatebutton;
    QPushButton *clear_fields_add;
    QComboBox *type_comboBox;
    QWidget *tab_3;
    QLineEdit *id_lineEdit_delete;
    QPushButton *delete_button;
    QLabel *label_36;
    QPushButton *sms;
    QPushButton *useEquipment;
    QPushButton *returnEquipment;
    QPushButton *notif;
    QComboBox *Sorting;
    QPushButton *Sort;
    QTableView *equip_tab;
    QPushButton *list_all_button;
    QPushButton *clear_all_in_table;
    QTableView *stat_tab;
    QLabel *label_14;
    QLabel *label_9;
    QLabel *label_2;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_17;
    QPushButton *pushButton_7;
    QLabel *label_13;
    QLabel *label;
    QLabel *label_22;
    QLabel *label_4;
    QPushButton *guests;
    QPushButton *shows;
    QPushButton *Sponsors;
    QPushButton *employees;
    QMenuBar *menubar;
    QMenu *menuCreate;
    QMenu *menuRead;
    QMenu *menuupdate;
    QMenu *menudelete;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1422, 939);
        MainWindow->setStyleSheet(QLatin1String("QMainWindow {\n"
"    background: white;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 10, 1401, 871));
        frame->setStyleSheet(QLatin1String("\n"
"   background: #032B43;\n"
"  border: 1px solid #032B43;\n"
"/*  background-color:white;*/\n"
"    color: white;\n"
"    border-radius: 50px;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 470, 361, 61));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QLatin1String("\n"
"QPushButton {\n"
"background-color: white;\n"
"border-radius: 30px;\n"
"padding: 5px 10px;\n"
"color: black;\n"
"border: 1px solid #3072B3;\n"
"font: 75 12pt \"8514oem\";\n"
"}\n"
"QPushButton:pressed {\n"
"  background-color: #3072B3;\n"
"  color: white;\n"
"}\n"
"QPushButton:hover {\n"
"  background-color: #F0F0F0;\n"
"  border: 1px solid #428BCA;\n"
"}\n"
"\n"
""));
        label_10 = new QLabel(frame);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(20, 384, 300, 60));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 0, 0));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush2(QColor(255, 255, 255, 128));
        brush2.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush3(QColor(255, 255, 255, 128));
        brush3.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        QBrush brush4(QColor(255, 255, 255, 128));
        brush4.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush4);
#endif
        label_10->setPalette(palette);
        label_10->setCursor(QCursor(Qt::ForbiddenCursor));
        label_10->setStyleSheet(QLatin1String("color:white;\n"
"border: 0px solid white;\n"
"background:transparent;\n"
" border-radius: 10px;\n"
"font: 75 12pt \"8514oem\";"));
        label_10->setFrameShape(QFrame::Panel);
        label_11 = new QLabel(frame);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(30, 220, 300, 60));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush5(QColor(255, 255, 255, 128));
        brush5.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush5);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush6(QColor(255, 255, 255, 128));
        brush6.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush6);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        QBrush brush7(QColor(255, 255, 255, 128));
        brush7.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        label_11->setPalette(palette1);
        label_11->setCursor(QCursor(Qt::ForbiddenCursor));
        label_11->setStyleSheet(QLatin1String("color:white;\n"
"font: 75 12pt \"8514oem\";\n"
"border: 0px solid white;\n"
"background:transparent;\n"
" border-radius: 10px;\n"
""));
        label_11->setFrameShape(QFrame::Panel);
        frame_4 = new QFrame(frame);
        frame_4->setObjectName(QStringLiteral("frame_4"));
        frame_4->setGeometry(QRect(20, 10, 401, 111));
        frame_4->setStyleSheet(QLatin1String("QFrame{\n"
"background:white;\n"
"border-radius:50px ;\n"
"border: 5px solid white;\n"
"}"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        label_5 = new QLabel(frame_4);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 10, 251, 81));
        label_5->setStyleSheet(QLatin1String("QLabel{\n"
"image: url(:/logo/417529624_1870268480077915_5802465082538659099_n.png);\n"
"background-color:transparent;\n"
"border:0px\n"
"}"));
        frame_3 = new QFrame(frame);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(290, 10, 1091, 841));
        frame_3->setStyleSheet(QLatin1String("\n"
" /*  background: #032B43;*/\n"
"  border: 0px ;\n"
"  /*background-color:#3F88C5;*/\n"
"background-color:white;\n"
"    color: white;\n"
"    border-radius: 50px;\n"
""));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        label_3 = new QLabel(frame_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(-240, 480, 56, 16));
        label_3->setStyleSheet(QLatin1String("image: url(:/Light_ones/icons8-microphone-2-50.png);\n"
"background:transparent;\n"
"border:0px;"));
        search_button = new QToolButton(frame_3);
        search_button->setObjectName(QStringLiteral("search_button"));
        search_button->setGeometry(QRect(990, 110, 51, 41));
        search_button->setStyleSheet(QLatin1String("\n"
"    QToolButton {\n"
"        background-color: #3F88C5;\n"
"        border: none;\n"
"        color: white;\n"
"        font-weight: bold;\n"
"        padding: 5px;\n"
"        width: 30px;\n"
"        height: 30px;\n"
"        border-radius: 20px;\n"
"		image:url(:/Dark_ones /magnifier.png);\n"
"    }\n"
"    QToolButton::menu-indicator {\n"
"        image:none;\n"
"    }\n"
""));
        search_lineEdit = new QLineEdit(frame_3);
        search_lineEdit->setObjectName(QStringLiteral("search_lineEdit"));
        search_lineEdit->setGeometry(QRect(780, 110, 251, 41));
        search_lineEdit->setStyleSheet(QLatin1String("border-radius:20px;\n"
"background:rgb(229, 229, 229);\n"
"color:#999999;\n"
"font: 8pt \"8514oem\";"));
        label_15 = new QLabel(frame_3);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(130, 630, 91, 41));
        label_15->setStyleSheet(QLatin1String("QLabel{\n"
"image:url(:/Dark_ones /pdf.png);\n"
"background:transparent;\n"
"}\n"
""));
        qr_button = new QPushButton(frame_3);
        qr_button->setObjectName(QStringLiteral("qr_button"));
        qr_button->setGeometry(QRect(610, 20, 261, 61));
        qr_button->setCursor(QCursor(Qt::PointingHandCursor));
        qr_button->setStyleSheet(QLatin1String("QPushButton{color: rgb(107, 189, 171);\n"
"border-radius:20px;\n"
"border:1px solid rgb(107, 189, 171);\n"
"font: 75 12pt \"8514oem\";\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"    background:rgb(107, 189, 171);\n"
"	color:white;\n"
"	\n"
"}"));
        Generate_PDF = new QPushButton(frame_3);
        Generate_PDF->setObjectName(QStringLiteral("Generate_PDF"));
        Generate_PDF->setGeometry(QRect(140, 620, 231, 61));
        Generate_PDF->setCursor(QCursor(Qt::PointingHandCursor));
        Generate_PDF->setStyleSheet(QLatin1String("QPushButton{color:#D00000;\n"
"border-radius:20px;\n"
"border: 1px solid #D00000;\n"
"font: 75 12pt \"8514oem\";\n"
"}\n"
"QPushButton:hover {\n"
"    background: #D00000;\n"
"	color:white;\n"
"	\n"
"	\n"
"}\n"
""));
        stats_button = new QPushButton(frame_3);
        stats_button->setObjectName(QStringLiteral("stats_button"));
        stats_button->setGeometry(QRect(640, 730, 281, 71));
        stats_button->setCursor(QCursor(Qt::PointingHandCursor));
        stats_button->setStyleSheet(QLatin1String("QPushButton{color: rgb(107, 189, 171);\n"
"border-radius:20px;\n"
"border: 1px solid rgb(107, 189, 171);\n"
"font: 75 12pt \"8514oem\";\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"    background: rgb(107, 189, 171);\n"
"	color:white;\n"
"	\n"
"}"));
        label_16 = new QLabel(frame_3);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(690, 750, 61, 31));
        label_16->setStyleSheet(QLatin1String("image:url(:/Dark_ones /stat.png);\n"
"background:transparent;"));
        label_8 = new QLabel(frame_3);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 190, 71, 31));
        label_8->setStyleSheet(QLatin1String("image:url(:/Light_ones/filter.png);\n"
"background:transparent;"));
        label_18 = new QLabel(frame_3);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(970, 20, 131, 61));
        label_18->setStyleSheet(QLatin1String("image:url(:/Dark_ones /profile_dark.png);\n"
"background:transparent;"));
        tabWidget = new QTabWidget(frame_3);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setGeometry(QRect(20, 110, 451, 421));
        tabWidget->setStyleSheet(QLatin1String("QTabWidget::pane {\n"
"    border-radius: 10px; /* Adjust the radius as needed */\n"
"    background-color: rgb(173, 216, 230); /* Set the background color to light blue */\n"
"}\n"
"\n"
"QTabBar::tab {\n"
"    background-color: rgb(90, 171, 227); /* Set the tab background color */\n"
"    color: white; /* Set the text color to white */\n"
"    border-top-left-radius: 5px; /* Adjust the radius as needed */\n"
"    border-top-right-radius: 5px; /* Adjust the radius as needed */\n"
"    padding: 5px 10px; /* Adjust padding as needed */\n"
"}\n"
"\n"
"QTabBar::tab:selected {\n"
"    background-color: rgb(30, 144, 255); /* Set the selected tab background color */\n"
"}"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        name_lineEdit = new QLineEdit(tab);
        name_lineEdit->setObjectName(QStringLiteral("name_lineEdit"));
        name_lineEdit->setGeometry(QRect(290, 20, 91, 41));
        name_lineEdit->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: #f0f0f0; /* Set a very light background color */\n"
"    border-radius: 5px; /* Adjust the radius as needed */\n"
"    padding: 5px; /* Adjust padding as needed */\n"
"    border: 1px solid #ccc; /* Add a border */\n"
"    color: #333333; /* Set the color of the text to dark */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #007bff;\n"
"    border-width: 2px;\n"
"}\n"
""));
        id_lineEdit = new QLineEdit(tab);
        id_lineEdit->setObjectName(QStringLiteral("id_lineEdit"));
        id_lineEdit->setGeometry(QRect(70, 20, 91, 41));
        id_lineEdit->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: #f0f0f0; /* Set a very light background color */\n"
"    border-radius: 5px; /* Adjust the radius as needed */\n"
"    padding: 5px; /* Adjust padding as needed */\n"
"    border: 1px solid #ccc; /* Add a border */\n"
"    color: #333333; /* Set the color of the text to dark */\n"
"}\n"
"QLineEdit:focus {\n"
"    border-color: #007bff;\n"
"    border-width: 2px;\n"
"}"));
        employee_id_lineEdit = new QLineEdit(tab);
        employee_id_lineEdit->setObjectName(QStringLiteral("employee_id_lineEdit"));
        employee_id_lineEdit->setGeometry(QRect(140, 220, 241, 41));
        employee_id_lineEdit->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: #f0f0f0; /* Set a very light background color */\n"
"    border-radius: 5px; /* Adjust the radius as needed */\n"
"    padding: 5px; /* Adjust padding as needed */\n"
"    border: 1px solid #ccc; /* Add a border */\n"
"    color: #333333; /* Set the color of the text to dark */\n"
"}\n"
"QLineEdit:focus {\n"
"    border-color: #007bff;\n"
"    border-width: 2px;\n"
"}"));
        availability_lineEdit = new QLineEdit(tab);
        availability_lineEdit->setObjectName(QStringLiteral("availability_lineEdit"));
        availability_lineEdit->setGeometry(QRect(290, 80, 91, 41));
        availability_lineEdit->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: #f0f0f0; /* Set a very light background color */\n"
"    border-radius: 5px; /* Adjust the radius as needed */\n"
"    padding: 5px; /* Adjust padding as needed */\n"
"    border: 1px solid #ccc; /* Add a border */\n"
"    color: #333333; /* Set the color of the text to dark */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #007bff;\n"
"    border-width: 2px;\n"
"}"));
        state_lineEdit = new QLineEdit(tab);
        state_lineEdit->setObjectName(QStringLiteral("state_lineEdit"));
        state_lineEdit->setGeometry(QRect(70, 150, 91, 41));
        state_lineEdit->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: #f0f0f0; /* Set a very light background color */\n"
"    border-radius: 5px; /* Adjust the radius as needed */\n"
"    padding: 5px; /* Adjust padding as needed */\n"
"    border: 1px solid #ccc; /* Add a border */\n"
"    color: #333333; /* Set the color of the text to dark */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #007bff;\n"
"    border-width: 2px;\n"
"}"));
        currentholder_linedit = new QLineEdit(tab);
        currentholder_linedit->setObjectName(QStringLiteral("currentholder_linedit"));
        currentholder_linedit->setGeometry(QRect(300, 150, 91, 41));
        currentholder_linedit->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: #f0f0f0; /* Set a very light background color */\n"
"    border-radius: 5px; /* Adjust the radius as needed */\n"
"    padding: 5px; /* Adjust padding as needed */\n"
"    border: 1px solid #ccc; /* Add a border */\n"
"    color: #333333; /* Set the color of the text to dark */\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #007bff;\n"
"    border-width: 2px;\n"
"}"));
        label_19 = new QLabel(tab);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(10, 30, 56, 16));
        label_19->setStyleSheet(QLatin1String("color:black;\n"
""));
        label_29 = new QLabel(tab);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(210, 30, 56, 16));
        label_29->setStyleSheet(QLatin1String("color:black;\n"
""));
        label_30 = new QLabel(tab);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(10, 90, 56, 16));
        label_30->setStyleSheet(QStringLiteral("color:black"));
        label_31 = new QLabel(tab);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(210, 90, 61, 16));
        label_31->setStyleSheet(QStringLiteral("color:black"));
        label_32 = new QLabel(tab);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(10, 160, 51, 16));
        label_32->setStyleSheet(QStringLiteral("color:black"));
        label_33 = new QLabel(tab);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setGeometry(QRect(210, 160, 81, 16));
        label_33->setStyleSheet(QStringLiteral("color:black"));
        label_34 = new QLabel(tab);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setGeometry(QRect(40, 230, 91, 16));
        label_34->setStyleSheet(QLatin1String("color:black\n"
""));
        ajouter = new QPushButton(tab);
        ajouter->setObjectName(QStringLiteral("ajouter"));
        ajouter->setGeometry(QRect(30, 280, 71, 51));
        ajouter->setStyleSheet(QLatin1String("/* QPushButton style */\n"
"\n"
"QPushButton {\n"
"    background-color: #3F88C5;\n"
"    border: none;\n"
"    color: white;\n"
"    font-weight: bold;\n"
"    padding: 5px;\n"
"    width: 30px;\n"
"    height: 30px;\n"
"    border-radius: 20px;\n"
"    font: 75 12pt \"8514oem\";\n"
"}\n"
"\n"
"QPushButton::menu-indicator {\n"
"    image: none;\n"
"}\n"
""));
        updatebutton = new QPushButton(tab);
        updatebutton->setObjectName(QStringLiteral("updatebutton"));
        updatebutton->setGeometry(QRect(170, 280, 71, 51));
        updatebutton->setStyleSheet(QLatin1String("QPushButton{color: rgb(107, 189, 171);\n"
"border-radius:20px;\n"
"border: 1px solid rgb(107, 189, 171);\n"
"font: 75 12pt \"8514oem\";\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"    background: rgb(107, 189, 171);\n"
"	color:white;\n"
"	\n"
"}"));
        clear_fields_add = new QPushButton(tab);
        clear_fields_add->setObjectName(QStringLiteral("clear_fields_add"));
        clear_fields_add->setGeometry(QRect(320, 280, 71, 51));
        clear_fields_add->setStyleSheet(QLatin1String("/* QPushButton style */\n"
"\n"
"QPushButton {\n"
"    background-color: #D00000;\n"
"    border: none;\n"
"    color: white;\n"
"    font-weight: bold;\n"
"    padding: 5px;\n"
"    width: 30px;\n"
"    height: 30px;\n"
"    border-radius: 20px;\n"
"    font: 75 12pt \"8514oem\";\n"
"}\n"
"\n"
"QPushButton::menu-indicator {\n"
"    image: none;\n"
"}\n"
""));
        type_comboBox = new QComboBox(tab);
        type_comboBox->setObjectName(QStringLiteral("type_comboBox"));
        type_comboBox->setGeometry(QRect(70, 80, 91, 41));
        type_comboBox->setStyleSheet(QLatin1String("QComboBox {\n"
"    background-color: #f0f0f0; /* Set a very light background color */\n"
"    border-radius: 5px; /* Adjust the radius as needed */\n"
"    padding: 5px; /* Adjust padding as needed */\n"
"    border: 1px solid #ccc; /* Add a border */\n"
"    color: #333333; /* Set the color of the text to dark */\n"
"\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    width: 20px;\n"
"    height: 20px; /* Adjust the height as needed */\n"
"    border: 1px solid transparent; /* Add a border to the drop-down arrow */\n"
"    border-top-right-radius: 5px; /* Match the border radius of the combobox */\n"
"    border-bottom-right-radius: 5px;\n"
"    background-color: #f8f9fa; /* Match the background color of the combobox */\n"
"}\n"
"\n"
"QComboBox::item {\n"
"    color: black; /* Set the color of the items to black */\n"
"}\n"
"\n"
"QComboBox::item:selected {\n"
"    background-color: #007bff; /* Set the background color of the selected item */\n"
"    color: black; /* Set the color of the selected item text */\n"
""
                        "}\n"
"\n"
"QComboBox:focus {\n"
"    border-color: #007bff;\n"
"    border-width: 2px;\n"
"}"));
        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        id_lineEdit_delete = new QLineEdit(tab_3);
        id_lineEdit_delete->setObjectName(QStringLiteral("id_lineEdit_delete"));
        id_lineEdit_delete->setGeometry(QRect(150, 130, 181, 41));
        id_lineEdit_delete->setStyleSheet(QLatin1String("QLineEdit {\n"
"    padding: 8px;\n"
"    border: 1px solid #ccc;\n"
"    border-radius: 5px;\n"
"    font-size: 14px;\n"
"    color: black;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    border-color: #007bff;\n"
"    border-width: 2px;\n"
"}"));
        delete_button = new QPushButton(tab_3);
        delete_button->setObjectName(QStringLiteral("delete_button"));
        delete_button->setGeometry(QRect(160, 200, 141, 41));
        delete_button->setStyleSheet(QLatin1String("/* QPushButton style */\n"
"\n"
"QPushButton {\n"
"    background-color: #D00000;\n"
"    border: none;\n"
"    color: white;\n"
"    font-weight: bold;\n"
"    padding: 5px;\n"
"    width: 30px;\n"
"    height: 30px;\n"
"    border-radius: 20px;\n"
"    font: 75 12pt \"8514oem\";\n"
"}\n"
"\n"
"QPushButton::menu-indicator {\n"
"    image: none;\n"
"}\n"
""));
        label_36 = new QLabel(tab_3);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setGeometry(QRect(80, 30, 341, 81));
        label_36->setStyleSheet(QLatin1String("color:black;\n"
"    font: 75 12pt \"8514oem\";\n"
""));
        tabWidget->addTab(tab_3, QString());
        sms = new QPushButton(frame_3);
        sms->setObjectName(QStringLiteral("sms"));
        sms->setGeometry(QRect(270, 690, 181, 61));
        sms->setStyleSheet(QLatin1String("QPushButton{color: rgb(107, 189, 171);\n"
"border-radius:20px;\n"
"border: 1px solid rgb(107, 189, 171);\n"
"font: 75 12pt \"8514oem\";\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"    background: rgb(107, 189, 171);\n"
"	color:white;\n"
"	\n"
"}\n"
""));
        useEquipment = new QPushButton(frame_3);
        useEquipment->setObjectName(QStringLiteral("useEquipment"));
        useEquipment->setGeometry(QRect(324, 20, 261, 61));
        useEquipment->setStyleSheet(QLatin1String("QPushButton{color: rgb(107, 189, 171);\n"
"border-radius:20px;\n"
"border: 1px solid rgb(107, 189, 171);\n"
"font: 75 12pt \"8514oem\";\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"    background:rgb(107, 189, 171);\n"
"	color:white;\n"
"	\n"
"}"));
        returnEquipment = new QPushButton(frame_3);
        returnEquipment->setObjectName(QStringLiteral("returnEquipment"));
        returnEquipment->setGeometry(QRect(40, 20, 261, 61));
        returnEquipment->setStyleSheet(QLatin1String("QPushButton{color: rgb(107, 189, 171);\n"
"border-radius:20px;\n"
"border:1px solid rgb(107, 189, 171);\n"
"font: 75 12pt \"8514oem\";\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"    background:rgb(107, 189, 171);\n"
"	color:white;\n"
"	\n"
"}"));
        notif = new QPushButton(frame_3);
        notif->setObjectName(QStringLiteral("notif"));
        notif->setGeometry(QRect(70, 690, 181, 61));
        notif->setStyleSheet(QLatin1String("QPushButton{color: rgb(107, 189, 171);\n"
"border-radius:20px;\n"
"border: 1px solid rgb(107, 189, 171);\n"
"font: 75 12pt \"8514oem\";\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"    background: rgb(107, 189, 171);\n"
"	color:white;\n"
"	\n"
"}\n"
""));
        Sorting = new QComboBox(frame_3);
        Sorting->setObjectName(QStringLiteral("Sorting"));
        Sorting->setGeometry(QRect(480, 110, 131, 41));
        Sorting->setStyleSheet(QLatin1String("QComboBox {\n"
"    padding: 8px;\n"
"    border: 1px solid #000; /* Set the border color to black */\n"
"    border-radius: 5px;\n"
"    font-size: 14px;\n"
"    color: black;\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"    width: 20px;\n"
"    height: 20px; /* Adjust the height as needed */\n"
"    border: 1px solid transparent; /* Add a border to the drop-down arrow */\n"
"    border-top-right-radius: 5px; /* Match the border radius of the combobox */\n"
"    border-bottom-right-radius: 5px;\n"
"    background-color: #f8f9fa; /* Match the background color of the combobox */\n"
"}\n"
"\n"
"QComboBox::item {\n"
"    color: black; /* Set the color of the items to black */\n"
"}\n"
"\n"
"QComboBox::item:selected {\n"
"    background-color: #007bff; /* Set the background color of the selected item */\n"
"    color: black; /* Set the color of the selected item text */\n"
"}\n"
"\n"
"QComboBox:focus {\n"
"    border-color: #007bff;\n"
"    border-width: 2px;\n"
"}"));
        Sort = new QPushButton(frame_3);
        Sort->setObjectName(QStringLiteral("Sort"));
        Sort->setGeometry(QRect(650, 110, 51, 41));
        Sort->setStyleSheet(QLatin1String("/* QPushButton style */\n"
"\n"
"QPushButton {\n"
"    background-color: #3F88C5;\n"
"    border: none;\n"
"    color: white;\n"
"    font-weight: bold;\n"
"    padding: 5px;\n"
"    width: 30px;\n"
"    height: 30px;\n"
"    border-radius: 20px;\n"
"    font: 75 12pt \"8514oem\";\n"
"}\n"
"\n"
"QPushButton::menu-indicator {\n"
"    image: none;\n"
"}\n"
""));
        equip_tab = new QTableView(frame_3);
        equip_tab->setObjectName(QStringLiteral("equip_tab"));
        equip_tab->setGeometry(QRect(480, 170, 581, 271));
        equip_tab->setStyleSheet(QLatin1String("color:black;\n"
" background-color: rgb(131, 179, 216);\n"
"\n"
""));
        list_all_button = new QPushButton(frame_3);
        list_all_button->setObjectName(QStringLiteral("list_all_button"));
        list_all_button->setGeometry(QRect(530, 400, 201, 71));
        list_all_button->setStyleSheet(QLatin1String("QPushButton{color: rgb(107, 189, 171);\n"
"border-radius:20px;\n"
"border: 1px solid rgb(107, 189, 171);\n"
"font: 75 12pt \"8514oem\";\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"    background: rgb(107, 189, 171);\n"
"	color:white;\n"
"	\n"
"}"));
        clear_all_in_table = new QPushButton(frame_3);
        clear_all_in_table->setObjectName(QStringLiteral("clear_all_in_table"));
        clear_all_in_table->setGeometry(QRect(790, 400, 201, 71));
        clear_all_in_table->setStyleSheet(QLatin1String("QPushButton{color: rgb(107, 189, 171);\n"
"border-radius:20px;\n"
"border:1px solid rgb(107, 189, 171);\n"
"font: 75 12pt \"8514oem\";\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"    background: rgb(107, 189, 171);\n"
"	color:white;\n"
"	\n"
"}"));
        stat_tab = new QTableView(frame_3);
        stat_tab->setObjectName(QStringLiteral("stat_tab"));
        stat_tab->setEnabled(true);
        stat_tab->setGeometry(QRect(480, 500, 581, 271));
        stat_tab->setStyleSheet(QLatin1String("color:black;\n"
" background-color: rgb(131, 179, 216);\n"
"\n"
""));
        label_14 = new QLabel(frame_3);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(520, 410, 111, 51));
        label_14->setStyleSheet(QLatin1String("image:url(:/Dark_ones /eye.png);\n"
"background:transparent;"));
        label_9 = new QLabel(frame_3);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(790, 420, 61, 31));
        label_9->setStyleSheet(QLatin1String("image:url(:/Dark_ones /poubelle.png);\n"
"background:transparent;"));
        equip_tab->raise();
        qr_button->raise();
        search_lineEdit->raise();
        label_3->raise();
        search_button->raise();
        Generate_PDF->raise();
        label_15->raise();
        label_8->raise();
        label_18->raise();
        tabWidget->raise();
        sms->raise();
        useEquipment->raise();
        returnEquipment->raise();
        notif->raise();
        Sorting->raise();
        Sort->raise();
        stat_tab->raise();
        stats_button->raise();
        label_16->raise();
        clear_all_in_table->raise();
        list_all_button->raise();
        label_14->raise();
        label_9->raise();
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 368, 171, 91));
        label_2->setStyleSheet(QLatin1String("image:url(:/Light_ones/un-salaire.png);\n"
"background:transparent;\n"
"border:0px;"));
        label_6 = new QLabel(frame);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(71, 228, 31, 41));
        label_6->setStyleSheet(QLatin1String("image:url(:/Light_ones/tv_light.png);\n"
"background:transparent;\n"
"border:0px;"));
        label_7 = new QLabel(frame);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(68, 143, 41, 51));
        label_7->setStyleSheet(QLatin1String("image:url(:/Light_ones/utli_light.png);\n"
"background:transparent;\n"
"border:0px;"));
        label_17 = new QLabel(frame);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(60, 720, 51, 31));
        label_17->setStyleSheet(QStringLiteral("image:url(:/Light_ones/logout.png)"));
        pushButton_7 = new QPushButton(frame);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(124, 720, 93, 28));
        pushButton_7->setStyleSheet(QLatin1String("color:white;\n"
"border: 0px solid white;\n"
"background:transparent;\n"
" border-radius: 10px;\n"
"font: 75 12pt \"8514oem\";"));
        label_13 = new QLabel(frame);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(130, 140, 300, 60));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush8(QColor(255, 255, 255, 128));
        brush8.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush8);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush9(QColor(255, 255, 255, 128));
        brush9.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush9);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        QBrush brush10(QColor(255, 255, 255, 128));
        brush10.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush10);
#endif
        label_13->setPalette(palette2);
        label_13->setCursor(QCursor(Qt::ForbiddenCursor));
        label_13->setStyleSheet(QLatin1String("color:white;\n"
"font: 75 12pt \"8514oem\";\n"
"border: 0px solid white;\n"
"background:transparent;\n"
" border-radius: 10px;\n"
""));
        label_13->setFrameShape(QFrame::Panel);
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 310, 71, 41));
        label->setStyleSheet(QStringLiteral("image:url(:/Light_ones/guest-star.png)"));
        label_22 = new QLabel(frame);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(130, 310, 300, 60));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush11(QColor(255, 255, 255, 128));
        brush11.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush11);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush12(QColor(255, 255, 255, 128));
        brush12.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush12);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        QBrush brush13(QColor(255, 255, 255, 128));
        brush13.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush13);
#endif
        label_22->setPalette(palette3);
        label_22->setCursor(QCursor(Qt::ForbiddenCursor));
        label_22->setStyleSheet(QLatin1String("color:white;\n"
"font: 75 12pt \"8514oem\";\n"
"border: 0px solid white;\n"
"background:transparent;\n"
" border-radius: 10px;\n"
""));
        label_22->setFrameShape(QFrame::Panel);
        label_4 = new QLabel(frame);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(80, 480, 51, 31));
        label_4->setStyleSheet(QLatin1String("image:url(:/Dark_ones /icons8-microphone-2-50 (1).png);\n"
"background: transparent;\n"
"border:0px;\n"
""));
        guests = new QPushButton(frame);
        guests->setObjectName(QStringLiteral("guests"));
        guests->setGeometry(QRect(0, 300, 281, 71));
        guests->setCursor(QCursor(Qt::PointingHandCursor));
        guests->setStyleSheet(QLatin1String("QPushButton{color: transparent;\n"
"background : transparent;\n"
"\n"
"}"));
        shows = new QPushButton(frame);
        shows->setObjectName(QStringLiteral("shows"));
        shows->setGeometry(QRect(0, 210, 281, 71));
        shows->setCursor(QCursor(Qt::PointingHandCursor));
        shows->setStyleSheet(QLatin1String("QPushButton{color: transparent;\n"
"background : transparent;\n"
"\n"
"}"));
        Sponsors = new QPushButton(frame);
        Sponsors->setObjectName(QStringLiteral("Sponsors"));
        Sponsors->setGeometry(QRect(0, 380, 281, 71));
        Sponsors->setCursor(QCursor(Qt::PointingHandCursor));
        Sponsors->setStyleSheet(QLatin1String("QPushButton{color: transparent;\n"
"background : transparent;\n"
"\n"
"}"));
        employees = new QPushButton(frame);
        employees->setObjectName(QStringLiteral("employees"));
        employees->setGeometry(QRect(0, 130, 281, 71));
        employees->setCursor(QCursor(Qt::PointingHandCursor));
        employees->setStyleSheet(QLatin1String("QPushButton{color: transparent;\n"
"background : transparent;\n"
"\n"
"}"));
        pushButton->raise();
        label_10->raise();
        label_11->raise();
        frame_4->raise();
        label_2->raise();
        label_6->raise();
        label_7->raise();
        frame_3->raise();
        label_17->raise();
        pushButton_7->raise();
        label_13->raise();
        label->raise();
        label_22->raise();
        label_4->raise();
        guests->raise();
        shows->raise();
        Sponsors->raise();
        employees->raise();
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1422, 26));
        menuCreate = new QMenu(menubar);
        menuCreate->setObjectName(QStringLiteral("menuCreate"));
        menuRead = new QMenu(menubar);
        menuRead->setObjectName(QStringLiteral("menuRead"));
        menuupdate = new QMenu(menubar);
        menuupdate->setObjectName(QStringLiteral("menuupdate"));
        menudelete = new QMenu(menubar);
        menudelete->setObjectName(QStringLiteral("menudelete"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuCreate->menuAction());
        menubar->addAction(menuRead->menuAction());
        menubar->addAction(menuupdate->menuAction());
        menubar->addAction(menudelete->menuAction());
        menudelete->addSeparator();
        menudelete->addSeparator();
        menudelete->addSeparator();

        retranslateUi(MainWindow);
        QObject::connect(search_button, SIGNAL(pressed()), search_button, SLOT(showMenu()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Equipment", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "           Sponsorships", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "          Shows", Q_NULLPTR));
        label_5->setText(QString());
        label_3->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        search_button->setText(QString());
        search_lineEdit->setText(QApplication::translate("MainWindow", " type in your search", Q_NULLPTR));
        label_15->setText(QString());
        qr_button->setText(QApplication::translate("MainWindow", " Equipment QR", Q_NULLPTR));
        Generate_PDF->setText(QApplication::translate("MainWindow", "   Generate PDF", Q_NULLPTR));
        stats_button->setText(QApplication::translate("MainWindow", "     Stats", Q_NULLPTR));
        label_16->setText(QString());
        label_8->setText(QString());
        label_18->setText(QString());
        name_lineEdit->setText(QApplication::translate("MainWindow", "canon", Q_NULLPTR));
        id_lineEdit->setText(QApplication::translate("MainWindow", "dfdhd", Q_NULLPTR));
        employee_id_lineEdit->setText(QApplication::translate("MainWindow", "021dd", Q_NULLPTR));
        availability_lineEdit->setText(QApplication::translate("MainWindow", "AVAILABLE", Q_NULLPTR));
        state_lineEdit->setText(QApplication::translate("MainWindow", "NEW", Q_NULLPTR));
        currentholder_linedit->setText(QApplication::translate("MainWindow", "NONE", Q_NULLPTR));
        label_19->setText(QApplication::translate("MainWindow", "ID", Q_NULLPTR));
        label_29->setText(QApplication::translate("MainWindow", "Name", Q_NULLPTR));
        label_30->setText(QApplication::translate("MainWindow", "type", Q_NULLPTR));
        label_31->setText(QApplication::translate("MainWindow", "availability", Q_NULLPTR));
        label_32->setText(QApplication::translate("MainWindow", "state", Q_NULLPTR));
        label_33->setText(QApplication::translate("MainWindow", "currentholder", Q_NULLPTR));
        label_34->setText(QApplication::translate("MainWindow", "employee_id", Q_NULLPTR));
        ajouter->setText(QApplication::translate("MainWindow", "Add", Q_NULLPTR));
        updatebutton->setText(QApplication::translate("MainWindow", "Update", Q_NULLPTR));
        clear_fields_add->setText(QApplication::translate("MainWindow", " Clear ", Q_NULLPTR));
        type_comboBox->clear();
        type_comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "camera", Q_NULLPTR)
         << QApplication::translate("MainWindow", "mic", Q_NULLPTR)
        );
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Add/Update", Q_NULLPTR));
        id_lineEdit_delete->setText(QApplication::translate("MainWindow", "01sDC", Q_NULLPTR));
        delete_button->setText(QApplication::translate("MainWindow", "Delete", Q_NULLPTR));
        label_36->setText(QApplication::translate("MainWindow", "type in the ID of the Equipement ", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Delete", Q_NULLPTR));
        sms->setText(QApplication::translate("MainWindow", "sms", Q_NULLPTR));
        useEquipment->setText(QApplication::translate("MainWindow", "use", Q_NULLPTR));
        returnEquipment->setText(QApplication::translate("MainWindow", " return ", Q_NULLPTR));
        notif->setText(QApplication::translate("MainWindow", "History ", Q_NULLPTR));
        Sorting->clear();
        Sorting->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Default", Q_NULLPTR)
         << QApplication::translate("MainWindow", "A-Z", Q_NULLPTR)
        );
        Sort->setText(QApplication::translate("MainWindow", "sort", Q_NULLPTR));
        list_all_button->setText(QApplication::translate("MainWindow", "      List all", Q_NULLPTR));
        clear_all_in_table->setText(QApplication::translate("MainWindow", "      Clear all", Q_NULLPTR));
        label_14->setText(QString());
        label_9->setText(QString());
        label_2->setText(QString());
        label_6->setText(QString());
        label_7->setText(QString());
        label_17->setText(QString());
        pushButton_7->setText(QApplication::translate("MainWindow", "Log Out", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "Employees", Q_NULLPTR));
        label->setText(QString());
        label_22->setText(QApplication::translate("MainWindow", "Guests", Q_NULLPTR));
        label_4->setText(QString());
        guests->setText(QApplication::translate("MainWindow", "     Add a show", Q_NULLPTR));
        shows->setText(QApplication::translate("MainWindow", "     Add a show", Q_NULLPTR));
        Sponsors->setText(QApplication::translate("MainWindow", "     Add a show", Q_NULLPTR));
        employees->setText(QApplication::translate("MainWindow", "     Add a show", Q_NULLPTR));
        menuCreate->setTitle(QApplication::translate("MainWindow", "Create ", Q_NULLPTR));
        menuRead->setTitle(QApplication::translate("MainWindow", "Read", Q_NULLPTR));
        menuupdate->setTitle(QApplication::translate("MainWindow", "Update", Q_NULLPTR));
        menudelete->setTitle(QApplication::translate("MainWindow", "Delete ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EQUIP_MAINWINDOW_H
