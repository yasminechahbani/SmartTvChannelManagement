/********************************************************************************
** Form generated from reading UI file 'sponsormainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPONSORMAINWINDOW_H
#define UI_SPONSORMAINWINDOW_H

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
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SponsorMainWindow
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QLabel *label_10;
    QLabel *label_12;
    QLabel *label_11;
    QFrame *frame_4;
    QLabel *label_5;
    QFrame *frame_3;
    QLabel *label_3;
    QToolButton *search;
    QLineEdit *search_lineEdit;
    QLabel *label_15;
    QPushButton *ajouter;
    QPushButton *Generate_PDF;
    QLabel *label_9;
    QPushButton *list_all_button;
    QPushButton *stat;
    QLabel *label_14;
    QLabel *label_16;
    QLabel *label_8;
    QLabel *label_18;
    QPushButton *sort;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label_34;
    QPushButton *clear_fields_add;
    QLineEdit *employee_id_lineEdit;
    QLabel *label_39;
    QLabel *label_40;
    QLineEdit *montant_lineEdit;
    QLineEdit *etatcontrat_lineEdit;
    QLineEdit *id_lineEdit;
    QLabel *label_57;
    QLineEdit *tempsaffichage_lineEdit;
    QLineEdit *nb_totalaffichage_lineEdit;
    QLineEdit *name_lineEdit;
    QLabel *label_58;
    QLabel *label_59;
    QLabel *label_60;
    QLabel *label_62;
    QLabel *label_63;
    QWidget *tab_4;
    QLineEdit *id_lineEdit_2;
    QLabel *label_48;
    QLabel *label_49;
    QLabel *label_50;
    QLabel *label_51;
    QLabel *label_52;
    QLabel *label_53;
    QLineEdit *name_lineEdit_2;
    QLineEdit *etatcontrat_lineEdit_2;
    QLineEdit *nb_totalaffichage_lineEdit_2;
    QLineEdit *tempsaffichage_lineEdit_2;
    QLineEdit *montant_lineEdit_2;
    QWidget *tab_3;
    QLineEdit *id_lineEdit_delete;
    QLabel *label_64;
    QComboBox *sortComboBox;
    QPushButton *dark_mode;
    QPushButton *excel;
    QPushButton *delete_button;
    QLabel *label_20;
    QPushButton *update;
    QLabel *qrcode;
    QTableView *tableView;
    QTableView *sponsor_tab;
    QPushButton *generateQRButton0;
    QPushButton *clear_all_in_table;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QPushButton *fr;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_17;
    QPushButton *pushButton_7;
    QLabel *label_13;
    QPushButton *employees;
    QPushButton *guests;
    QPushButton *equipement;
    QPushButton *shows;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SponsorMainWindow)
    {
        if (SponsorMainWindow->objectName().isEmpty())
            SponsorMainWindow->setObjectName(QStringLiteral("SponsorMainWindow"));
        SponsorMainWindow->resize(1422, 939);
        SponsorMainWindow->setStyleSheet(QLatin1String("QMainWindow {\n"
"    background: white;\n"
"}"));
        centralwidget = new QWidget(SponsorMainWindow);
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
        label_10 = new QLabel(frame);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(140, 220, 300, 60));
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
        label_10->setCursor(QCursor(Qt::PointingHandCursor));
        label_10->setFocusPolicy(Qt::StrongFocus);
        label_10->setStyleSheet(QLatin1String("color:white;\n"
"border: 0px solid white;\n"
"background:transparent;\n"
" border-radius: 10px;\n"
"font: 75 12pt \"8514oem\";"));
        label_10->setFrameShape(QFrame::Panel);
        label_12 = new QLabel(frame);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(60, 469, 300, 60));
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
        label_12->setPalette(palette1);
        label_12->setCursor(QCursor(Qt::ForbiddenCursor));
        label_12->setStyleSheet(QLatin1String("color:white;\n"
"border: 0px solid white;\n"
"background:transparent;\n"
" border-radius: 10px;\n"
"font: 75 12pt \"8514oem\";"));
        label_12->setFrameShape(QFrame::Panel);
        label_11 = new QLabel(frame);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(70, 310, 300, 60));
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
        label_11->setPalette(palette2);
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
        frame_3->setGeometry(QRect(299, 10, 1081, 841));
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
        search = new QToolButton(frame_3);
        search->setObjectName(QStringLiteral("search"));
        search->setGeometry(QRect(1030, 110, 41, 41));
        search->setStyleSheet(QLatin1String("\n"
"    QToolButton {\n"
"        background-color: #3F88C5;\n"
"        border: none;\n"
"        color: white;\n"
"        font-weight: bold;\n"
"        padding: 5px;\n"
"        width: 30px;\n"
"        height: 30px;\n"
"        border-radius: 20px;\n"
"                image:url(:/Dark_ones /magnifier.png);\n"
"    }\n"
"    QToolButton::menu-indicator {\n"
"        image:none;\n"
"    }\n"
""));
        search_lineEdit = new QLineEdit(frame_3);
        search_lineEdit->setObjectName(QStringLiteral("search_lineEdit"));
        search_lineEdit->setGeometry(QRect(770, 110, 301, 41));
        search_lineEdit->setStyleSheet(QLatin1String("border-radius:20px;\n"
"background:rgb(229, 229, 229);\n"
"color:#999999;\n"
"font: 8pt \"8514oem\";"));
        search_lineEdit->setReadOnly(false);
        label_15 = new QLabel(frame_3);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(290, 510, 91, 41));
        label_15->setStyleSheet(QLatin1String("QLabel{\n"
"image:url(:/Dark_ones /pdf.png);\n"
"background:transparent;\n"
"}\n"
""));
        ajouter = new QPushButton(frame_3);
        ajouter->setObjectName(QStringLiteral("ajouter"));
        ajouter->setGeometry(QRect(40, 20, 281, 71));
        ajouter->setCursor(QCursor(Qt::PointingHandCursor));
        ajouter->setStyleSheet(QLatin1String("QPushButton{color: rgb(107, 189, 171);\n"
"border-radius:20px;\n"
"border: 1px solid rgb(107, 189, 171);\n"
"font: 75 12pt \"8514oem\";\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"    background:rgb(107, 189, 171);\n"
"        color:white;\n"
"\n"
"}"));
        Generate_PDF = new QPushButton(frame_3);
        Generate_PDF->setObjectName(QStringLiteral("Generate_PDF"));
        Generate_PDF->setGeometry(QRect(290, 500, 231, 71));
        Generate_PDF->setCursor(QCursor(Qt::PointingHandCursor));
        Generate_PDF->setStyleSheet(QLatin1String("QPushButton{color:#D00000;\n"
"border-radius:20px;\n"
"border: 1px solid #D00000;\n"
"font: 75 12pt \"8514oem\";\n"
"}\n"
"QPushButton:hover {\n"
"    background: #D00000;\n"
"        color:white;\n"
"\n"
"\n"
"}\n"
""));
        label_9 = new QLabel(frame_3);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(60, 20, 61, 61));
        label_9->setStyleSheet(QLatin1String("image:url(:/Dark_ones /plus.png);\n"
"background:transparent;"));
        list_all_button = new QPushButton(frame_3);
        list_all_button->setObjectName(QStringLiteral("list_all_button"));
        list_all_button->setEnabled(true);
        list_all_button->setGeometry(QRect(550, 420, 221, 71));
        list_all_button->setCursor(QCursor(Qt::PointingHandCursor));
        list_all_button->setStyleSheet(QLatin1String("QPushButton{color: rgb(107, 189, 171);\n"
"border-radius:20px;\n"
"border: 1px solid rgb(107, 189, 171);\n"
"font: 75 12pt \"8514oem\";\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"    background:rgb(107, 189, 171);\n"
"        color:white;\n"
"\n"
"}"));
        stat = new QPushButton(frame_3);
        stat->setObjectName(QStringLiteral("stat"));
        stat->setGeometry(QRect(660, 760, 291, 71));
        stat->setCursor(QCursor(Qt::PointingHandCursor));
        stat->setStyleSheet(QLatin1String("QPushButton{color: rgb(107, 189, 171);\n"
"border-radius:20px;\n"
"border: 1px solid rgb(107, 189, 171);\n"
"font: 75 12pt \"8514oem\";\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"    background: rgb(107, 189, 171);\n"
"        color:white;\n"
"\n"
"}"));
        label_14 = new QLabel(frame_3);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(540, 430, 111, 51));
        label_14->setStyleSheet(QLatin1String("image:url(:/Dark_ones /eye.png);\n"
"background:transparent;"));
        label_16 = new QLabel(frame_3);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(710, 780, 81, 31));
        label_16->setStyleSheet(QLatin1String("image:url(:/Dark_ones /stat.png);\n"
"background:transparent;"));
        label_8 = new QLabel(frame_3);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(30, 200, 71, 31));
        label_8->setStyleSheet(QLatin1String("image:url(:/Light_ones/filter.png);\n"
"background:transparent;"));
        label_18 = new QLabel(frame_3);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(970, 20, 131, 61));
        label_18->setStyleSheet(QLatin1String("image:url(:/Dark_ones /profile_dark.png);\n"
"background:transparent;"));
        sort = new QPushButton(frame_3);
        sort->setObjectName(QStringLiteral("sort"));
        sort->setGeometry(QRect(520, 110, 131, 51));
        sort->setCursor(QCursor(Qt::PointingHandCursor));
        sort->setStyleSheet(QLatin1String("\n"
"    QPushButton {\n"
"        background-color: #3F88C5;\n"
"        border: none;\n"
"        color: white;\n"
"        font-weight: bold;\n"
"        padding: 5px;\n"
"        width: 30px;\n"
"        height: 30px;\n"
"        border-radius: 20px;\n"
"font: 75 12pt \"8514oem\";\n"
"\n"
"    }\n"
"    QPushButton::menu-indicator {\n"
"        image: none;\n"
"    }"));
        tabWidget = new QTabWidget(frame_3);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(30, 130, 471, 341));
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
"}\n"
""));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        label_34 = new QLabel(tab);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setGeometry(QRect(40, 460, 91, 16));
        clear_fields_add = new QPushButton(tab);
        clear_fields_add->setObjectName(QStringLiteral("clear_fields_add"));
        clear_fields_add->setGeometry(QRect(730, 360, 93, 28));
        employee_id_lineEdit = new QLineEdit(tab);
        employee_id_lineEdit->setObjectName(QStringLiteral("employee_id_lineEdit"));
        employee_id_lineEdit->setGeometry(QRect(160, 460, 291, 21));
        label_39 = new QLabel(tab);
        label_39->setObjectName(QStringLiteral("label_39"));
        label_39->setGeometry(QRect(-30, 30, 56, 16));
        label_40 = new QLabel(tab);
        label_40->setObjectName(QStringLiteral("label_40"));
        label_40->setGeometry(QRect(-40, 70, 56, 16));
        montant_lineEdit = new QLineEdit(tab);
        montant_lineEdit->setObjectName(QStringLiteral("montant_lineEdit"));
        montant_lineEdit->setGeometry(QRect(120, 150, 91, 31));
        montant_lineEdit->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: #f0f0f0; /* Set a very light background color */\n"
"    border-radius: 5px; /* Adjust the radius as needed */\n"
"    padding: 5px; /* Adjust padding as needed */\n"
"    border: 1px solid #ccc; /* Add a border */\n"
"    color: #333333; /* Set the color of the text to dark */\n"
"}\n"
""));
        etatcontrat_lineEdit = new QLineEdit(tab);
        etatcontrat_lineEdit->setObjectName(QStringLiteral("etatcontrat_lineEdit"));
        etatcontrat_lineEdit->setGeometry(QRect(340, 100, 91, 31));
        etatcontrat_lineEdit->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: #f0f0f0; /* Set a very light background color */\n"
"    border-radius: 5px; /* Adjust the radius as needed */\n"
"    padding: 5px; /* Adjust padding as needed */\n"
"    border: 1px solid #ccc; /* Add a border */\n"
"    color: #333333; /* Set the color of the text to dark */\n"
"}\n"
""));
        id_lineEdit = new QLineEdit(tab);
        id_lineEdit->setObjectName(QStringLiteral("id_lineEdit"));
        id_lineEdit->setGeometry(QRect(120, 50, 91, 31));
        id_lineEdit->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: #f0f0f0; /* Set a very light background color */\n"
"    border-radius: 5px; /* Adjust the radius as needed */\n"
"    padding: 5px; /* Adjust padding as needed */\n"
"    border: 1px solid #ccc; /* Add a border */\n"
"    color: #333333; /* Set the color of the text to dark */\n"
"}\n"
""));
        label_57 = new QLabel(tab);
        label_57->setObjectName(QStringLiteral("label_57"));
        label_57->setGeometry(QRect(20, 200, 91, 31));
        label_57->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: rgb(217, 237, 255); /* Set the background color */\n"
"    border-radius: 3px; /* Adjust the radius as needed */\n"
"    padding: 3px; /* Adjust padding as needed */\n"
"color:rgb(3, 43, 67);\n"
"}\n"
""));
        tempsaffichage_lineEdit = new QLineEdit(tab);
        tempsaffichage_lineEdit->setObjectName(QStringLiteral("tempsaffichage_lineEdit"));
        tempsaffichage_lineEdit->setGeometry(QRect(120, 200, 91, 31));
        tempsaffichage_lineEdit->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: #f0f0f0; /* Set a very light background color */\n"
"    border-radius: 5px; /* Adjust the radius as needed */\n"
"    padding: 5px; /* Adjust padding as needed */\n"
"    border: 1px solid #ccc; /* Add a border */\n"
"    color: #333333; /* Set the color of the text to dark */\n"
"}\n"
""));
        nb_totalaffichage_lineEdit = new QLineEdit(tab);
        nb_totalaffichage_lineEdit->setObjectName(QStringLiteral("nb_totalaffichage_lineEdit"));
        nb_totalaffichage_lineEdit->setGeometry(QRect(340, 50, 91, 31));
        nb_totalaffichage_lineEdit->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: #f0f0f0; /* Set a very light background color */\n"
"    border-radius: 5px; /* Adjust the radius as needed */\n"
"    padding: 5px; /* Adjust padding as needed */\n"
"    border: 1px solid #ccc; /* Add a border */\n"
"    color: #333333; /* Set the color of the text to dark */\n"
"}\n"
""));
        name_lineEdit = new QLineEdit(tab);
        name_lineEdit->setObjectName(QStringLiteral("name_lineEdit"));
        name_lineEdit->setGeometry(QRect(120, 100, 91, 31));
        name_lineEdit->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: #f0f0f0; /* Set a very light background color */\n"
"    border-radius: 5px; /* Adjust the radius as needed */\n"
"    padding: 5px; /* Adjust padding as needed */\n"
"    border: 1px solid #ccc; /* Add a border */\n"
"    color: #333333; /* Set the color of the text to dark */\n"
"}\n"
""));
        label_58 = new QLabel(tab);
        label_58->setObjectName(QStringLiteral("label_58"));
        label_58->setGeometry(QRect(20, 100, 91, 31));
        label_58->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: rgb(217, 237, 255); /* Set the background color */\n"
"    border-radius: 3px; /* Adjust the radius as needed */\n"
"    padding: 3px; /* Adjust padding as needed */\n"
"color:rgb(3, 43, 67);\n"
"}\n"
""));
        label_59 = new QLabel(tab);
        label_59->setObjectName(QStringLiteral("label_59"));
        label_59->setGeometry(QRect(20, 150, 91, 31));
        label_59->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: rgb(217, 237, 255); /* Set the background color */\n"
"    border-radius: 3px; /* Adjust the radius as needed */\n"
"    padding: 3px; /* Adjust padding as needed */\n"
"color:rgb(3, 43, 67);\n"
"}\n"
""));
        label_60 = new QLabel(tab);
        label_60->setObjectName(QStringLiteral("label_60"));
        label_60->setGeometry(QRect(230, 50, 91, 31));
        label_60->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: rgb(217, 237, 255); /* Set the background color */\n"
"    border-radius: 3px; /* Adjust the radius as needed */\n"
"    padding: 3px; /* Adjust padding as needed */\n"
"color:rgb(3, 43, 67);\n"
"}\n"
""));
        label_62 = new QLabel(tab);
        label_62->setObjectName(QStringLiteral("label_62"));
        label_62->setGeometry(QRect(20, 50, 91, 31));
        label_62->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: rgb(217, 237, 255); /* Set the background color */\n"
"    border-radius: 3px; /* Adjust the radius as needed */\n"
"    padding: 3px; /* Adjust padding as needed */\n"
"color:rgb(3, 43, 67);\n"
"}\n"
""));
        label_63 = new QLabel(tab);
        label_63->setObjectName(QStringLiteral("label_63"));
        label_63->setGeometry(QRect(230, 100, 91, 31));
        label_63->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: rgb(217, 237, 255); /* Set the background color */\n"
"    border-radius: 3px; /* Adjust the radius as needed */\n"
"    padding: 3px; /* Adjust padding as needed */\n"
"color:rgb(3, 43, 67);\n"
"}\n"
""));
        tabWidget->addTab(tab, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        id_lineEdit_2 = new QLineEdit(tab_4);
        id_lineEdit_2->setObjectName(QStringLiteral("id_lineEdit_2"));
        id_lineEdit_2->setGeometry(QRect(110, 50, 91, 31));
        id_lineEdit_2->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: #f0f0f0; /* Set a very light background color */\n"
"    border-radius: 5px; /* Adjust the radius as needed */\n"
"    padding: 5px; /* Adjust padding as needed */\n"
"    border: 1px solid #ccc; /* Add a border */\n"
"    color: #333333; /* Set the color of the text to dark */\n"
"}\n"
""));
        label_48 = new QLabel(tab_4);
        label_48->setObjectName(QStringLiteral("label_48"));
        label_48->setGeometry(QRect(10, 150, 91, 31));
        label_48->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: rgb(217, 237, 255); /* Set the background color */\n"
"    border-radius: 3px; /* Adjust the radius as needed */\n"
"    padding: 3px; /* Adjust padding as needed */\n"
"color:rgb(3, 43, 67);\n"
"}\n"
""));
        label_49 = new QLabel(tab_4);
        label_49->setObjectName(QStringLiteral("label_49"));
        label_49->setGeometry(QRect(10, 50, 91, 31));
        label_49->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: rgb(217, 237, 255); /* Set the background color */\n"
"    border-radius: 3px; /* Adjust the radius as needed */\n"
"    padding: 3px; /* Adjust padding as needed */\n"
"color:rgb(3, 43, 67);\n"
"}\n"
""));
        label_50 = new QLabel(tab_4);
        label_50->setObjectName(QStringLiteral("label_50"));
        label_50->setGeometry(QRect(10, 100, 91, 31));
        label_50->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: rgb(217, 237, 255); /* Set the background color */\n"
"    border-radius: 3px; /* Adjust the radius as needed */\n"
"    padding: 3px; /* Adjust padding as needed */\n"
"color:rgb(3, 43, 67);\n"
"}\n"
""));
        label_51 = new QLabel(tab_4);
        label_51->setObjectName(QStringLiteral("label_51"));
        label_51->setGeometry(QRect(10, 200, 91, 31));
        label_51->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: rgb(217, 237, 255); /* Set the background color */\n"
"    border-radius: 3px; /* Adjust the radius as needed */\n"
"    padding: 3px; /* Adjust padding as needed */\n"
"color:rgb(3, 43, 67);\n"
"}\n"
""));
        label_52 = new QLabel(tab_4);
        label_52->setObjectName(QStringLiteral("label_52"));
        label_52->setGeometry(QRect(220, 50, 91, 31));
        label_52->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: rgb(217, 237, 255); /* Set the background color */\n"
"    border-radius: 3px; /* Adjust the radius as needed */\n"
"    padding: 3px; /* Adjust padding as needed */\n"
"color:rgb(3, 43, 67);\n"
"}\n"
""));
        label_53 = new QLabel(tab_4);
        label_53->setObjectName(QStringLiteral("label_53"));
        label_53->setGeometry(QRect(220, 100, 91, 31));
        label_53->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: rgb(217, 237, 255); /* Set the background color */\n"
"    border-radius: 3px; /* Adjust the radius as needed */\n"
"    padding: 3px; /* Adjust padding as needed */\n"
"color:rgb(3, 43, 67);\n"
"}\n"
""));
        name_lineEdit_2 = new QLineEdit(tab_4);
        name_lineEdit_2->setObjectName(QStringLiteral("name_lineEdit_2"));
        name_lineEdit_2->setGeometry(QRect(110, 100, 91, 31));
        name_lineEdit_2->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: #f0f0f0; /* Set a very light background color */\n"
"    border-radius: 5px; /* Adjust the radius as needed */\n"
"    padding: 5px; /* Adjust padding as needed */\n"
"    border: 1px solid #ccc; /* Add a border */\n"
"    color: #333333; /* Set the color of the text to dark */\n"
"}\n"
""));
        etatcontrat_lineEdit_2 = new QLineEdit(tab_4);
        etatcontrat_lineEdit_2->setObjectName(QStringLiteral("etatcontrat_lineEdit_2"));
        etatcontrat_lineEdit_2->setGeometry(QRect(330, 100, 91, 31));
        etatcontrat_lineEdit_2->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: #f0f0f0; /* Set a very light background color */\n"
"    border-radius: 5px; /* Adjust the radius as needed */\n"
"    padding: 5px; /* Adjust padding as needed */\n"
"    border: 1px solid #ccc; /* Add a border */\n"
"    color: #333333; /* Set the color of the text to dark */\n"
"}\n"
""));
        nb_totalaffichage_lineEdit_2 = new QLineEdit(tab_4);
        nb_totalaffichage_lineEdit_2->setObjectName(QStringLiteral("nb_totalaffichage_lineEdit_2"));
        nb_totalaffichage_lineEdit_2->setGeometry(QRect(330, 50, 91, 31));
        nb_totalaffichage_lineEdit_2->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: #f0f0f0; /* Set a very light background color */\n"
"    border-radius: 5px; /* Adjust the radius as needed */\n"
"    padding: 5px; /* Adjust padding as needed */\n"
"    border: 1px solid #ccc; /* Add a border */\n"
"    color: #333333; /* Set the color of the text to dark */\n"
"}\n"
""));
        tempsaffichage_lineEdit_2 = new QLineEdit(tab_4);
        tempsaffichage_lineEdit_2->setObjectName(QStringLiteral("tempsaffichage_lineEdit_2"));
        tempsaffichage_lineEdit_2->setGeometry(QRect(110, 200, 91, 31));
        tempsaffichage_lineEdit_2->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: #f0f0f0; /* Set a very light background color */\n"
"    border-radius: 5px; /* Adjust the radius as needed */\n"
"    padding: 5px; /* Adjust padding as needed */\n"
"    border: 1px solid #ccc; /* Add a border */\n"
"    color: #333333; /* Set the color of the text to dark */\n"
"}\n"
""));
        montant_lineEdit_2 = new QLineEdit(tab_4);
        montant_lineEdit_2->setObjectName(QStringLiteral("montant_lineEdit_2"));
        montant_lineEdit_2->setGeometry(QRect(110, 150, 91, 31));
        montant_lineEdit_2->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: #f0f0f0; /* Set a very light background color */\n"
"    border-radius: 5px; /* Adjust the radius as needed */\n"
"    padding: 5px; /* Adjust padding as needed */\n"
"    border: 1px solid #ccc; /* Add a border */\n"
"    color: #333333; /* Set the color of the text to dark */\n"
"}\n"
""));
        tabWidget->addTab(tab_4, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        id_lineEdit_delete = new QLineEdit(tab_3);
        id_lineEdit_delete->setObjectName(QStringLiteral("id_lineEdit_delete"));
        id_lineEdit_delete->setGeometry(QRect(240, 140, 91, 31));
        id_lineEdit_delete->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: #f0f0f0; /* Set a very light background color */\n"
"    border-radius: 5px; /* Adjust the radius as needed */\n"
"    padding: 5px; /* Adjust padding as needed */\n"
"    border: 1px solid #ccc; /* Add a border */\n"
"    color: #333333; /* Set the color of the text to dark */\n"
"}\n"
""));
        label_64 = new QLabel(tab_3);
        label_64->setObjectName(QStringLiteral("label_64"));
        label_64->setGeometry(QRect(140, 140, 91, 31));
        label_64->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: rgb(217, 237, 255); /* Set the background color */\n"
"    border-radius: 3px; /* Adjust the radius as needed */\n"
"    padding: 3px; /* Adjust padding as needed */\n"
"color:rgb(3, 43, 67);\n"
"}\n"
""));
        tabWidget->addTab(tab_3, QString());
        sortComboBox = new QComboBox(frame_3);
        sortComboBox->setObjectName(QStringLiteral("sortComboBox"));
        sortComboBox->setGeometry(QRect(670, 120, 73, 22));
        sortComboBox->setStyleSheet(QLatin1String("color:rgb(63, 136, 197);\n"
""));
        dark_mode = new QPushButton(frame_3);
        dark_mode->setObjectName(QStringLiteral("dark_mode"));
        dark_mode->setGeometry(QRect(290, 660, 231, 71));
        dark_mode->setCursor(QCursor(Qt::PointingHandCursor));
        dark_mode->setStyleSheet(QLatin1String("QPushButton{color:#D00000;\n"
"border-radius:20px;\n"
"border: 1px solid #D00000;\n"
"font: 75 12pt \"8514oem\";\n"
"}\n"
"QPushButton:hover {\n"
"    background: #D00000;\n"
"        color:white;\n"
"\n"
"\n"
"}\n"
""));
        excel = new QPushButton(frame_3);
        excel->setObjectName(QStringLiteral("excel"));
        excel->setGeometry(QRect(290, 580, 231, 71));
        excel->setCursor(QCursor(Qt::PointingHandCursor));
        excel->setStyleSheet(QLatin1String("QPushButton{color:#D00000;\n"
"border-radius:20px;\n"
"border: 1px solid #D00000;\n"
"font: 75 12pt \"8514oem\";\n"
"}\n"
"QPushButton:hover {\n"
"    background: #D00000;\n"
"        color:white;\n"
"\n"
"\n"
"}\n"
""));
        delete_button = new QPushButton(frame_3);
        delete_button->setObjectName(QStringLiteral("delete_button"));
        delete_button->setGeometry(QRect(360, 20, 281, 71));
        delete_button->setCursor(QCursor(Qt::PointingHandCursor));
        delete_button->setStyleSheet(QLatin1String("QPushButton{color: rgb(107, 189, 171);\n"
"border-radius:20px;\n"
"border: 1px solid rgb(107, 189, 171);\n"
"font: 75 12pt \"8514oem\";\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"    background:rgb(107, 189, 171);\n"
"        color:white;\n"
"\n"
"}"));
        label_20 = new QLabel(frame_3);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(390, 40, 31, 31));
        label_20->setStyleSheet(QLatin1String("image:url(:/Dark_ones /minus-sign.png);\n"
"background:transparent;"));
        update = new QPushButton(frame_3);
        update->setObjectName(QStringLiteral("update"));
        update->setGeometry(QRect(690, 20, 281, 71));
        update->setCursor(QCursor(Qt::PointingHandCursor));
        update->setStyleSheet(QLatin1String("QPushButton{color: rgb(107, 189, 171);\n"
"border-radius:20px;\n"
"border: 1px solid rgb(107, 189, 171);\n"
"font: 75 12pt \"8514oem\";\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"    background:rgb(107, 189, 171);\n"
"        color:white;\n"
"\n"
"}"));
        qrcode = new QLabel(frame_3);
        qrcode->setObjectName(QStringLiteral("qrcode"));
        qrcode->setGeometry(QRect(20, 480, 261, 251));
        qrcode->setAutoFillBackground(false);
        qrcode->setStyleSheet(QLatin1String("background:rgb(217, 237, 255);\n"
"QLabel {\n"
"    border: 1px solid black; /* Example border */\n"
"}\n"
"\n"
"QLabel::pixmap {\n"
"    margin: auto;\n"
"}\n"
""));
        qrcode->setScaledContents(true);
        tableView = new QTableView(frame_3);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(540, 500, 521, 311));
        tableView->setStyleSheet(QStringLiteral("background:rgb(3, 43, 67);"));
        sponsor_tab = new QTableView(frame_3);
        sponsor_tab->setObjectName(QStringLiteral("sponsor_tab"));
        sponsor_tab->setGeometry(QRect(520, 170, 541, 271));
        sponsor_tab->setStyleSheet(QLatin1String("background:rgb(131, 179, 216);\n"
"color:black;"));
        generateQRButton0 = new QPushButton(frame_3);
        generateQRButton0->setObjectName(QStringLiteral("generateQRButton0"));
        generateQRButton0->setGeometry(QRect(570, 560, 201, 81));
        generateQRButton0->setStyleSheet(QStringLiteral("color:rgb(75, 255, 10)"));
        clear_all_in_table = new QPushButton(frame_3);
        clear_all_in_table->setObjectName(QStringLiteral("clear_all_in_table"));
        clear_all_in_table->setEnabled(true);
        clear_all_in_table->setGeometry(QRect(810, 420, 221, 71));
        clear_all_in_table->setCursor(QCursor(Qt::PointingHandCursor));
        clear_all_in_table->setStyleSheet(QLatin1String("QPushButton{color: rgb(107, 189, 171);\n"
"border-radius:20px;\n"
"border: 1px solid rgb(107, 189, 171);\n"
"font: 75 12pt \"8514oem\";\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"    background:rgb(107, 189, 171);\n"
"        color:white;\n"
"\n"
"}"));
        label_21 = new QLabel(frame_3);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(720, 30, 31, 51));
        label_21->setStyleSheet(QLatin1String("image:url(:/Dark_ones /ajour.png);\n"
"background:transparent;"));
        label_22 = new QLabel(frame_3);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(840, 430, 31, 51));
        label_22->setStyleSheet(QLatin1String("image:url(:/Dark_ones /poubelle.png);\n"
"background:transparent;"));
        label_23 = new QLabel(frame_3);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(290, 660, 71, 41));
        label_23->setStyleSheet(QLatin1String("image:url(:/Dark_ones /excel.png);\n"
"background:transparent;"));
        label_24 = new QLabel(frame_3);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(290, 760, 71, 41));
        label_24->setStyleSheet(QLatin1String("image:url(:/Dark_ones /printer.png);\n"
"background:transparent;"));
        label_25 = new QLabel(frame_3);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(290, 500, 71, 41));
        label_25->setStyleSheet(QLatin1String("image:url(:/Dark_ones /qr-code.png);\n"
"background:transparent;"));
        label_26 = new QLabel(frame_3);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(40, 750, 71, 51));
        label_26->setStyleSheet(QLatin1String("image:url(:/Dark_ones /night-mode.png);\n"
"background:transparent;"));
        fr = new QPushButton(frame_3);
        fr->setObjectName(QStringLiteral("fr"));
        fr->setGeometry(QRect(380, 110, 131, 51));
        fr->setCursor(QCursor(Qt::PointingHandCursor));
        fr->setStyleSheet(QLatin1String("\n"
"    QPushButton {\n"
"        background-color: #3F88C5;\n"
"        border: none;\n"
"        color: white;\n"
"        font-weight: bold;\n"
"        padding: 5px;\n"
"        width: 30px;\n"
"        height: 30px;\n"
"        border-radius: 20px;\n"
"font: 75 12pt \"8514oem\";\n"
"\n"
"    }\n"
"    QPushButton::menu-indicator {\n"
"        image: none;\n"
"    }"));
        generateQRButton0->raise();
        ajouter->raise();
        search_lineEdit->raise();
        label_3->raise();
        search->raise();
        Generate_PDF->raise();
        label_15->raise();
        label_9->raise();
        label_8->raise();
        label_18->raise();
        sort->raise();
        tabWidget->raise();
        sortComboBox->raise();
        dark_mode->raise();
        excel->raise();
        delete_button->raise();
        label_20->raise();
        update->raise();
        qrcode->raise();
        tableView->raise();
        sponsor_tab->raise();
        list_all_button->raise();
        label_14->raise();
        stat->raise();
        label_16->raise();
        clear_all_in_table->raise();
        label_21->raise();
        label_22->raise();
        label_23->raise();
        label_24->raise();
        label_25->raise();
        label_26->raise();
        fr->raise();
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 320, 61, 41));
        label->setStyleSheet(QLatin1String("image:url(:/Light_ones/guest-star.png);\n"
"background:transparent;\n"
"border:0px;"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 210, 171, 91));
        label_2->setStyleSheet(QLatin1String("image:url(:/Light_ones/tv_light.png);\n"
"background:transparent;\n"
"border:0px;"));
        label_4 = new QLabel(frame);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(68, 475, 31, 41));
        label_4->setStyleSheet(QLatin1String("\n"
"image:url(:/Light_ones/icons8-microphone-2-50.png);\n"
"background:transparent;\n"
"border:0px;"));
        label_6 = new QLabel(frame);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(110, 228, 31, 41));
        label_6->setStyleSheet(QLatin1String("image:url(:/Dark_ones /tv_dark.png);\n"
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
        label_13->setGeometry(QRect(150, 140, 141, 60));
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
        label_13->setPalette(palette3);
        label_13->setCursor(QCursor(Qt::ForbiddenCursor));
        label_13->setStyleSheet(QLatin1String("color:white;\n"
"font: 75 12pt \"8514oem\";\n"
"border: 0px solid white;\n"
"background:transparent;\n"
" border-radius: 10px;\n"
""));
        label_13->setFrameShape(QFrame::Panel);
        employees = new QPushButton(frame);
        employees->setObjectName(QStringLiteral("employees"));
        employees->setGeometry(QRect(10, 140, 281, 71));
        employees->setCursor(QCursor(Qt::PointingHandCursor));
        employees->setStyleSheet(QLatin1String("QPushButton{color: transparent;\n"
"background : transparent;\n"
"\n"
"}"));
        guests = new QPushButton(frame);
        guests->setObjectName(QStringLiteral("guests"));
        guests->setGeometry(QRect(10, 310, 281, 71));
        guests->setCursor(QCursor(Qt::PointingHandCursor));
        guests->setStyleSheet(QLatin1String("QPushButton{color: transparent;\n"
"background : transparent;\n"
"\n"
"}"));
        equipement = new QPushButton(frame);
        equipement->setObjectName(QStringLiteral("equipement"));
        equipement->setGeometry(QRect(10, 460, 281, 71));
        equipement->setCursor(QCursor(Qt::PointingHandCursor));
        equipement->setStyleSheet(QLatin1String("QPushButton{color: transparent;\n"
"background : transparent;\n"
"\n"
"}"));
        shows = new QPushButton(frame);
        shows->setObjectName(QStringLiteral("shows"));
        shows->setGeometry(QRect(-10, 390, 321, 61));
        shows->setCursor(QCursor(Qt::PointingHandCursor));
        shows->setStyleSheet(QLatin1String("\n"
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
        label_10->raise();
        label_12->raise();
        label_11->raise();
        frame_4->raise();
        label->raise();
        label_4->raise();
        label_6->raise();
        label_7->raise();
        frame_3->raise();
        label_17->raise();
        pushButton_7->raise();
        label_13->raise();
        employees->raise();
        guests->raise();
        equipement->raise();
        shows->raise();
        label_2->raise();
        SponsorMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SponsorMainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1422, 26));
        SponsorMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(SponsorMainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        SponsorMainWindow->setStatusBar(statusbar);

        retranslateUi(SponsorMainWindow);
        QObject::connect(search, SIGNAL(pressed()), search, SLOT(showMenu()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SponsorMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *SponsorMainWindow)
    {
        SponsorMainWindow->setWindowTitle(QApplication::translate("SponsorMainWindow", "SponsorMainWindow", Q_NULLPTR));
        label_10->setText(QApplication::translate("SponsorMainWindow", "Shows", Q_NULLPTR));
        label_12->setText(QApplication::translate("SponsorMainWindow", "          Equipement", Q_NULLPTR));
        label_11->setText(QApplication::translate("SponsorMainWindow", "         Guests", Q_NULLPTR));
        label_5->setText(QString());
        label_3->setText(QApplication::translate("SponsorMainWindow", "TextLabel", Q_NULLPTR));
        search->setText(QString());
        search_lineEdit->setText(QString());
        search_lineEdit->setPlaceholderText(QApplication::translate("SponsorMainWindow", " type in your search", Q_NULLPTR));
        label_15->setText(QString());
        ajouter->setText(QApplication::translate("SponsorMainWindow", "Add Sponsor", Q_NULLPTR));
        Generate_PDF->setText(QApplication::translate("SponsorMainWindow", "   Generate PDF", Q_NULLPTR));
        label_9->setText(QString());
        list_all_button->setText(QApplication::translate("SponsorMainWindow", "    Show List", Q_NULLPTR));
        stat->setText(QApplication::translate("SponsorMainWindow", "   Stats", Q_NULLPTR));
        label_14->setText(QString());
        label_16->setText(QString());
        label_8->setText(QString());
        label_18->setText(QString());
        sort->setText(QApplication::translate("SponsorMainWindow", "sort by ", Q_NULLPTR));
        label_34->setText(QApplication::translate("SponsorMainWindow", "employee_id", Q_NULLPTR));
        clear_fields_add->setText(QString());
        employee_id_lineEdit->setText(QApplication::translate("SponsorMainWindow", "021dd", Q_NULLPTR));
        label_39->setText(QApplication::translate("SponsorMainWindow", "ID", Q_NULLPTR));
        label_40->setText(QApplication::translate("SponsorMainWindow", "name", Q_NULLPTR));
        montant_lineEdit->setText(QString());
        montant_lineEdit->setPlaceholderText(QApplication::translate("SponsorMainWindow", "...........", Q_NULLPTR));
        etatcontrat_lineEdit->setText(QString());
        etatcontrat_lineEdit->setPlaceholderText(QApplication::translate("SponsorMainWindow", "...........", Q_NULLPTR));
        id_lineEdit->setText(QString());
        id_lineEdit->setPlaceholderText(QApplication::translate("SponsorMainWindow", "...........", Q_NULLPTR));
        label_57->setText(QApplication::translate("SponsorMainWindow", "view Time", Q_NULLPTR));
        tempsaffichage_lineEdit->setText(QString());
        tempsaffichage_lineEdit->setPlaceholderText(QApplication::translate("SponsorMainWindow", "...........", Q_NULLPTR));
        nb_totalaffichage_lineEdit->setText(QString());
        nb_totalaffichage_lineEdit->setPlaceholderText(QApplication::translate("SponsorMainWindow", "...........", Q_NULLPTR));
        name_lineEdit->setText(QString());
        name_lineEdit->setPlaceholderText(QApplication::translate("SponsorMainWindow", "...........", Q_NULLPTR));
        label_58->setText(QApplication::translate("SponsorMainWindow", "Sponsor Name", Q_NULLPTR));
        label_59->setText(QApplication::translate("SponsorMainWindow", "T.Ammount", Q_NULLPTR));
        label_60->setText(QApplication::translate("SponsorMainWindow", "total views", Q_NULLPTR));
        label_62->setText(QApplication::translate("SponsorMainWindow", "ID", Q_NULLPTR));
        label_63->setText(QApplication::translate("SponsorMainWindow", "Contract State", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("SponsorMainWindow", "add", Q_NULLPTR));
        id_lineEdit_2->setText(QString());
        id_lineEdit_2->setPlaceholderText(QApplication::translate("SponsorMainWindow", "...........", Q_NULLPTR));
        label_48->setText(QApplication::translate("SponsorMainWindow", "T.ammount", Q_NULLPTR));
        label_49->setText(QApplication::translate("SponsorMainWindow", "ID", Q_NULLPTR));
        label_50->setText(QApplication::translate("SponsorMainWindow", "Sponsor Name", Q_NULLPTR));
        label_51->setText(QApplication::translate("SponsorMainWindow", "view time", Q_NULLPTR));
        label_52->setText(QApplication::translate("SponsorMainWindow", "total views", Q_NULLPTR));
        label_53->setText(QApplication::translate("SponsorMainWindow", "contract state", Q_NULLPTR));
        name_lineEdit_2->setText(QString());
        name_lineEdit_2->setPlaceholderText(QApplication::translate("SponsorMainWindow", "...........", Q_NULLPTR));
        etatcontrat_lineEdit_2->setText(QString());
        etatcontrat_lineEdit_2->setPlaceholderText(QApplication::translate("SponsorMainWindow", "...........", Q_NULLPTR));
        nb_totalaffichage_lineEdit_2->setText(QString());
        nb_totalaffichage_lineEdit_2->setPlaceholderText(QApplication::translate("SponsorMainWindow", "...........", Q_NULLPTR));
        tempsaffichage_lineEdit_2->setText(QString());
        tempsaffichage_lineEdit_2->setPlaceholderText(QApplication::translate("SponsorMainWindow", "...........", Q_NULLPTR));
        montant_lineEdit_2->setText(QString());
        montant_lineEdit_2->setPlaceholderText(QApplication::translate("SponsorMainWindow", "...........", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("SponsorMainWindow", "update", Q_NULLPTR));
        id_lineEdit_delete->setText(QString());
        id_lineEdit_delete->setPlaceholderText(QApplication::translate("SponsorMainWindow", "...........", Q_NULLPTR));
        label_64->setText(QApplication::translate("SponsorMainWindow", "Identifiant :", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("SponsorMainWindow", "Delete", Q_NULLPTR));
        sortComboBox->clear();
        sortComboBox->insertItems(0, QStringList()
         << QApplication::translate("SponsorMainWindow", "default", Q_NULLPTR)
         << QApplication::translate("SponsorMainWindow", "A-Z ", Q_NULLPTR)
        );
        dark_mode->setText(QApplication::translate("SponsorMainWindow", "dark mode", Q_NULLPTR));
        excel->setText(QApplication::translate("SponsorMainWindow", "     Export to Excel", Q_NULLPTR));
        delete_button->setText(QApplication::translate("SponsorMainWindow", "Delete Sponsor", Q_NULLPTR));
        label_20->setText(QString());
        update->setText(QApplication::translate("SponsorMainWindow", "Update Sponsor", Q_NULLPTR));
        qrcode->setText(QString());
        generateQRButton0->setText(QApplication::translate("SponsorMainWindow", "generate qr code", Q_NULLPTR));
        clear_all_in_table->setText(QApplication::translate("SponsorMainWindow", "    Clear List", Q_NULLPTR));
        label_21->setText(QString());
        label_22->setText(QString());
        label_23->setText(QString());
        label_24->setText(QString());
        label_25->setText(QString());
        label_26->setText(QString());
        fr->setText(QApplication::translate("SponsorMainWindow", "FR", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QString());
        label_4->setText(QString());
        label_6->setText(QString());
        label_7->setText(QString());
        label_17->setText(QString());
        pushButton_7->setText(QApplication::translate("SponsorMainWindow", "Log Out", Q_NULLPTR));
        label_13->setText(QApplication::translate("SponsorMainWindow", "Employees", Q_NULLPTR));
        employees->setText(QApplication::translate("SponsorMainWindow", "     Add a show", Q_NULLPTR));
        guests->setText(QApplication::translate("SponsorMainWindow", "     Add a show", Q_NULLPTR));
        equipement->setText(QApplication::translate("SponsorMainWindow", "     Add a show", Q_NULLPTR));
        shows->setText(QApplication::translate("SponsorMainWindow", "           Sponsorships", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SponsorMainWindow: public Ui_SponsorMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPONSORMAINWINDOW_H
