/********************************************************************************
** Form generated from reading UI file 'emissionmainwindowdarkmode.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMISSIONMAINWINDOWDARKMODE_H
#define UI_EMISSIONMAINWINDOWDARKMODE_H

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

class Ui_EmissionMainWindowDarkMode
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QPushButton *pushButton;
    QLabel *label_10;
    QLabel *label_12;
    QLabel *label_11;
    QFrame *frame_4;
    QLabel *label_5;
    QFrame *frame_3;
    QLabel *label_3;
    QToolButton *search_button;
    QLineEdit *search_name_lineEdit;
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
    QToolButton *sort_button;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label_34;
    QPushButton *clear_fields_add;
    QLineEdit *employee_id_lineEdit;
    QLabel *label_39;
    QLabel *label_40;
    QLineEdit *host_lineEdit;
    QLineEdit *type_lineEdit;
    QLabel *label_56;
    QLineEdit *id_lineEdit;
    QLabel *label_57;
    QLineEdit *nbviews_lineEdit;
    QLineEdit *genre_lineEdit;
    QLineEdit *name_lineEdit;
    QLabel *label_58;
    QLabel *label_59;
    QLineEdit *duree_lineEdit;
    QLineEdit *date_lineEdit;
    QLabel *label_60;
    QLabel *label_61;
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
    QLabel *label_54;
    QLabel *label_55;
    QLineEdit *name_lineEdit_2;
    QLineEdit *duree_lineEdit_2;
    QLineEdit *date_lineEdit_2;
    QLineEdit *type_lineEdit_2;
    QLineEdit *genre_lineEdit_2;
    QLineEdit *nbviews_lineEdit_2;
    QLineEdit *host_lineEdit_2;
    QWidget *tab_3;
    QLineEdit *id_lineEdit_delete;
    QLabel *label_64;
    QPushButton *printEmissions;
    QComboBox *sortComboBox;
    QPushButton *dark_mode;
    QPushButton *excel;
    QPushButton *delete_button;
    QLabel *label_20;
    QPushButton *update;
    QLabel *qrcode;
    QTableView *tableView;
    QTableView *tabb;
    QPushButton *generateQRButton0;
    QPushButton *generateQRButton;
    QPushButton *clear_all_in_table;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *pushButton_7;
    QLabel *label_13;
    QLabel *label_19;
    QMenuBar *menubar;
    QMenu *menuCreate;
    QMenu *menuRead;
    QMenu *menuupdate;
    QMenu *menudelete;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *EmissionMainWindowDarkMode)
    {
        if (EmissionMainWindowDarkMode->objectName().isEmpty())
            EmissionMainWindowDarkMode->setObjectName(QStringLiteral("EmissionMainWindowDarkMode"));
        EmissionMainWindowDarkMode->resize(1753, 969);
        EmissionMainWindowDarkMode->setStyleSheet(QLatin1String("QMainWindow {\n"
"    background: white;\n"
"}"));
        centralwidget = new QWidget(EmissionMainWindowDarkMode);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 10, 1401, 871));
        frame->setStyleSheet(QLatin1String("\n"
"   background: rgb(189, 206, 222);\n"
"  border: 1px solid #032B43;\n"
"/*  background-color:white;*/\n"
"    color: white;\n"
"    border-radius: 50px;"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(50, 220, 361, 61));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QLatin1String("\n"
"QPushButton {\n"
"background-color:rgb(3, 43, 67);\n"
"border-radius: 30px;\n"
"padding: 5px 10px;\n"
"color: white\n"
";\n"
"border: 1px solid #3072B3;\n"
"font: 75 12pt \"8514oem\";\n"
"}\n"
"QPushButton:pressed {\n"
"  background-color: rgb(3, 43, 67);\n"
"  color: white;\n"
"}\n"
"QPushButton:hover {\n"
"  background-color: rgb(3, 43, 67);\n"
"  border: 1px solid #428BCA;\n"
"}\n"
"\n"
""));
        label_10 = new QLabel(frame);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(40, 384, 300, 60));
        QPalette palette;
        QBrush brush(QColor(3, 43, 67, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(0, 0, 0, 0));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush2(QColor(3, 43, 67, 128));
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
        QBrush brush3(QColor(3, 43, 67, 128));
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
        QBrush brush4(QColor(3, 43, 67, 128));
        brush4.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush4);
#endif
        label_10->setPalette(palette);
        label_10->setCursor(QCursor(Qt::ForbiddenCursor));
        label_10->setStyleSheet(QLatin1String("color:rgb(3, 43, 67);\n"
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
        QBrush brush5(QColor(3, 43, 67, 128));
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
        QBrush brush6(QColor(3, 43, 67, 128));
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
        QBrush brush7(QColor(3, 43, 67, 128));
        brush7.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        label_12->setPalette(palette1);
        label_12->setCursor(QCursor(Qt::ForbiddenCursor));
        label_12->setStyleSheet(QLatin1String("color:rgb(3, 43, 67);\n"
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
        QBrush brush8(QColor(3, 43, 67, 128));
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
        QBrush brush9(QColor(3, 43, 67, 128));
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
        QBrush brush10(QColor(3, 43, 67, 128));
        brush10.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush10);
#endif
        label_11->setPalette(palette2);
        label_11->setCursor(QCursor(Qt::ForbiddenCursor));
        label_11->setStyleSheet(QLatin1String("color:rgb(3, 43, 67);\n"
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
"background:rgb(189, 206, 222);\n"
"border-radius:50px ;\n"
"border: 5px solid rgb(189, 206, 222);\n"
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
"background-color:rgb(3, 43, 67);\n"
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
        search_button->setGeometry(QRect(1030, 110, 41, 41));
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
"                image:url(:/Dark_ones /magnifier.png);\n"
"    }\n"
"    QToolButton::menu-indicator {\n"
"        image:none;\n"
"    }\n"
""));
        search_name_lineEdit = new QLineEdit(frame_3);
        search_name_lineEdit->setObjectName(QStringLiteral("search_name_lineEdit"));
        search_name_lineEdit->setGeometry(QRect(770, 110, 301, 41));
        search_name_lineEdit->setStyleSheet(QLatin1String("border-radius:20px;\n"
"background:rgb(229, 229, 229);\n"
"color:#999999;\n"
"font: 8pt \"8514oem\";"));
        search_name_lineEdit->setReadOnly(false);
        label_15 = new QLabel(frame_3);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(280, 580, 91, 41));
        label_15->setStyleSheet(QLatin1String("QLabel{\n"
"image:url(:/Dark_ones /pdf.png);\n"
"background:transparent;\n"
"}\n"
""));
        ajouter = new QPushButton(frame_3);
        ajouter->setObjectName(QStringLiteral("ajouter"));
        ajouter->setGeometry(QRect(40, 20, 281, 71));
        ajouter->setCursor(QCursor(Qt::PointingHandCursor));
        ajouter->setStyleSheet(QLatin1String("QPushButton{color: white;\n"
"border-radius:20px;\n"
"border: 1px solid rgb(107, 189, 171);\n"
"font: 75 12pt \"8514oem\";\n"
"    background:rgb(187, 202, 218);\n"
"\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"    background:rgb(107, 189, 171);\n"
"        color:white;\n"
"\n"
"}"));
        Generate_PDF = new QPushButton(frame_3);
        Generate_PDF->setObjectName(QStringLiteral("Generate_PDF"));
        Generate_PDF->setGeometry(QRect(290, 570, 231, 71));
        Generate_PDF->setCursor(QCursor(Qt::PointingHandCursor));
        Generate_PDF->setStyleSheet(QLatin1String("QPushButton{color:white;\n"
"border-radius:20px;\n"
"border: 1px solid #D00000;\n"
"font: 75 12pt \"8514oem\";\n"
"    background:rgb(187, 202, 218);\n"
"\n"
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
        list_all_button->setStyleSheet(QLatin1String("QPushButton{color: white;\n"
"border-radius:20px;\n"
"border: 1px solid rgb(107, 189, 171);\n"
"font: 75 12pt \"8514oem\";\n"
"    background:rgb(187, 202, 218);\n"
"\n"
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
        stat->setStyleSheet(QLatin1String("QPushButton{color: white;\n"
"border-radius:20px;\n"
"border: 1px solid rgb(107, 189, 171);\n"
"font: 75 12pt \"8514oem\";\n"
"    background:rgb(187, 202, 218);\n"
"\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"    background:rgb(107, 189, 171);\n"
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
        sort_button = new QToolButton(frame_3);
        sort_button->setObjectName(QStringLiteral("sort_button"));
        sort_button->setGeometry(QRect(520, 110, 131, 51));
        sort_button->setCursor(QCursor(Qt::PointingHandCursor));
        sort_button->setStyleSheet(QLatin1String("\n"
"    QToolButton {\n"
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
"    QToolButton::menu-indicator {\n"
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
        host_lineEdit = new QLineEdit(tab);
        host_lineEdit->setObjectName(QStringLiteral("host_lineEdit"));
        host_lineEdit->setGeometry(QRect(120, 150, 91, 31));
        host_lineEdit->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: #f0f0f0; /* Set a very light background color */\n"
"    border-radius: 5px; /* Adjust the radius as needed */\n"
"    padding: 5px; /* Adjust padding as needed */\n"
"    border: 1px solid #ccc; /* Add a border */\n"
"    color: #333333; /* Set the color of the text to dark */\n"
"}\n"
""));
        type_lineEdit = new QLineEdit(tab);
        type_lineEdit->setObjectName(QStringLiteral("type_lineEdit"));
        type_lineEdit->setGeometry(QRect(340, 100, 91, 31));
        type_lineEdit->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: #f0f0f0; /* Set a very light background color */\n"
"    border-radius: 5px; /* Adjust the radius as needed */\n"
"    padding: 5px; /* Adjust padding as needed */\n"
"    border: 1px solid #ccc; /* Add a border */\n"
"    color: #333333; /* Set the color of the text to dark */\n"
"}\n"
""));
        label_56 = new QLabel(tab);
        label_56->setObjectName(QStringLiteral("label_56"));
        label_56->setGeometry(QRect(230, 200, 91, 31));
        label_56->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: rgb(217, 237, 255); /* Set the background color */\n"
"    border-radius: 3px; /* Adjust the radius as needed */\n"
"    padding: 3px; /* Adjust padding as needed */\n"
"color:rgb(3, 43, 67);\n"
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
        nbviews_lineEdit = new QLineEdit(tab);
        nbviews_lineEdit->setObjectName(QStringLiteral("nbviews_lineEdit"));
        nbviews_lineEdit->setGeometry(QRect(120, 200, 91, 31));
        nbviews_lineEdit->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: #f0f0f0; /* Set a very light background color */\n"
"    border-radius: 5px; /* Adjust the radius as needed */\n"
"    padding: 5px; /* Adjust padding as needed */\n"
"    border: 1px solid #ccc; /* Add a border */\n"
"    color: #333333; /* Set the color of the text to dark */\n"
"}\n"
""));
        genre_lineEdit = new QLineEdit(tab);
        genre_lineEdit->setObjectName(QStringLiteral("genre_lineEdit"));
        genre_lineEdit->setGeometry(QRect(340, 50, 91, 31));
        genre_lineEdit->setStyleSheet(QLatin1String("QLineEdit {\n"
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
        duree_lineEdit = new QLineEdit(tab);
        duree_lineEdit->setObjectName(QStringLiteral("duree_lineEdit"));
        duree_lineEdit->setGeometry(QRect(340, 200, 91, 31));
        duree_lineEdit->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: #f0f0f0; /* Set a very light background color */\n"
"    border-radius: 5px; /* Adjust the radius as needed */\n"
"    padding: 5px; /* Adjust padding as needed */\n"
"    border: 1px solid #ccc; /* Add a border */\n"
"    color: #333333; /* Set the color of the text to dark */\n"
"}\n"
""));
        date_lineEdit = new QLineEdit(tab);
        date_lineEdit->setObjectName(QStringLiteral("date_lineEdit"));
        date_lineEdit->setGeometry(QRect(340, 150, 91, 31));
        date_lineEdit->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: #f0f0f0; /* Set a very light background color */\n"
"    border-radius: 5px; /* Adjust the radius as needed */\n"
"    padding: 5px; /* Adjust padding as needed */\n"
"    border: 1px solid #ccc; /* Add a border */\n"
"    color: #333333; /* Set the color of the text to dark */\n"
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
        label_61 = new QLabel(tab);
        label_61->setObjectName(QStringLiteral("label_61"));
        label_61->setGeometry(QRect(230, 150, 91, 31));
        label_61->setStyleSheet(QLatin1String("QLabel {\n"
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
        label_54 = new QLabel(tab_4);
        label_54->setObjectName(QStringLiteral("label_54"));
        label_54->setGeometry(QRect(220, 150, 91, 31));
        label_54->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: rgb(217, 237, 255); /* Set the background color */\n"
"    border-radius: 3px; /* Adjust the radius as needed */\n"
"    padding: 3px; /* Adjust padding as needed */\n"
"color:rgb(3, 43, 67);\n"
"}\n"
""));
        label_55 = new QLabel(tab_4);
        label_55->setObjectName(QStringLiteral("label_55"));
        label_55->setGeometry(QRect(220, 200, 91, 31));
        label_55->setStyleSheet(QLatin1String("QLabel {\n"
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
        duree_lineEdit_2 = new QLineEdit(tab_4);
        duree_lineEdit_2->setObjectName(QStringLiteral("duree_lineEdit_2"));
        duree_lineEdit_2->setGeometry(QRect(330, 200, 91, 31));
        duree_lineEdit_2->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: #f0f0f0; /* Set a very light background color */\n"
"    border-radius: 5px; /* Adjust the radius as needed */\n"
"    padding: 5px; /* Adjust padding as needed */\n"
"    border: 1px solid #ccc; /* Add a border */\n"
"    color: #333333; /* Set the color of the text to dark */\n"
"}\n"
""));
        date_lineEdit_2 = new QLineEdit(tab_4);
        date_lineEdit_2->setObjectName(QStringLiteral("date_lineEdit_2"));
        date_lineEdit_2->setGeometry(QRect(330, 150, 91, 31));
        date_lineEdit_2->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: #f0f0f0; /* Set a very light background color */\n"
"    border-radius: 5px; /* Adjust the radius as needed */\n"
"    padding: 5px; /* Adjust padding as needed */\n"
"    border: 1px solid #ccc; /* Add a border */\n"
"    color: #333333; /* Set the color of the text to dark */\n"
"}\n"
""));
        type_lineEdit_2 = new QLineEdit(tab_4);
        type_lineEdit_2->setObjectName(QStringLiteral("type_lineEdit_2"));
        type_lineEdit_2->setGeometry(QRect(330, 100, 91, 31));
        type_lineEdit_2->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: #f0f0f0; /* Set a very light background color */\n"
"    border-radius: 5px; /* Adjust the radius as needed */\n"
"    padding: 5px; /* Adjust padding as needed */\n"
"    border: 1px solid #ccc; /* Add a border */\n"
"    color: #333333; /* Set the color of the text to dark */\n"
"}\n"
""));
        genre_lineEdit_2 = new QLineEdit(tab_4);
        genre_lineEdit_2->setObjectName(QStringLiteral("genre_lineEdit_2"));
        genre_lineEdit_2->setGeometry(QRect(330, 50, 91, 31));
        genre_lineEdit_2->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: #f0f0f0; /* Set a very light background color */\n"
"    border-radius: 5px; /* Adjust the radius as needed */\n"
"    padding: 5px; /* Adjust padding as needed */\n"
"    border: 1px solid #ccc; /* Add a border */\n"
"    color: #333333; /* Set the color of the text to dark */\n"
"}\n"
""));
        nbviews_lineEdit_2 = new QLineEdit(tab_4);
        nbviews_lineEdit_2->setObjectName(QStringLiteral("nbviews_lineEdit_2"));
        nbviews_lineEdit_2->setGeometry(QRect(110, 200, 91, 31));
        nbviews_lineEdit_2->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: #f0f0f0; /* Set a very light background color */\n"
"    border-radius: 5px; /* Adjust the radius as needed */\n"
"    padding: 5px; /* Adjust padding as needed */\n"
"    border: 1px solid #ccc; /* Add a border */\n"
"    color: #333333; /* Set the color of the text to dark */\n"
"}\n"
""));
        host_lineEdit_2 = new QLineEdit(tab_4);
        host_lineEdit_2->setObjectName(QStringLiteral("host_lineEdit_2"));
        host_lineEdit_2->setGeometry(QRect(110, 150, 91, 31));
        host_lineEdit_2->setStyleSheet(QLatin1String("QLineEdit {\n"
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
        printEmissions = new QPushButton(frame_3);
        printEmissions->setObjectName(QStringLiteral("printEmissions"));
        printEmissions->setGeometry(QRect(290, 740, 231, 71));
        printEmissions->setCursor(QCursor(Qt::PointingHandCursor));
        printEmissions->setStyleSheet(QLatin1String("QPushButton{color:white;\n"
"border-radius:20px;\n"
"border: 1px solid #D00000;\n"
"font: 75 12pt \"8514oem\";\n"
"    background:rgb(187, 202, 218);\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"    background: #D00000;\n"
"        color:white;\n"
"\n"
"\n"
"}\n"
""));
        sortComboBox = new QComboBox(frame_3);
        sortComboBox->setObjectName(QStringLiteral("sortComboBox"));
        sortComboBox->setGeometry(QRect(670, 120, 73, 22));
        sortComboBox->setStyleSheet(QLatin1String("color:white\n"
";\n"
""));
        dark_mode = new QPushButton(frame_3);
        dark_mode->setObjectName(QStringLiteral("dark_mode"));
        dark_mode->setGeometry(QRect(40, 740, 231, 71));
        dark_mode->setCursor(QCursor(Qt::PointingHandCursor));
        dark_mode->setStyleSheet(QLatin1String("QPushButton{color:white;\n"
"border-radius:20px;\n"
"border: 1px solid #D00000;\n"
"font: 75 12pt \"8514oem\";\n"
"    background:rgb(187, 202, 218);\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"    background: #D00000;\n"
"        color:white;\n"
"\n"
"\n"
"}\n"
"\n"
""));
        excel = new QPushButton(frame_3);
        excel->setObjectName(QStringLiteral("excel"));
        excel->setGeometry(QRect(290, 650, 231, 71));
        excel->setCursor(QCursor(Qt::PointingHandCursor));
        excel->setStyleSheet(QLatin1String("QPushButton{color:white;\n"
"border-radius:20px;\n"
"border: 1px solid #D00000;\n"
"font: 75 12pt \"8514oem\";\n"
"    background:rgb(187, 202, 218);\n"
"\n"
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
        delete_button->setStyleSheet(QLatin1String("QPushButton{color: white;\n"
"border-radius:20px;\n"
"border: 1px solid rgb(107, 189, 171);\n"
"font: 75 12pt \"8514oem\";\n"
"    background:rgb(187, 202, 218);\n"
"\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"    background:rgb(107, 189, 171);\n"
"        color:white;\n"
"\n"
"}\n"
""));
        label_20 = new QLabel(frame_3);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(390, 40, 31, 31));
        label_20->setStyleSheet(QLatin1String("image:url(:/Dark_ones /minus-sign.png);\n"
"background:transparent;"));
        update = new QPushButton(frame_3);
        update->setObjectName(QStringLiteral("update"));
        update->setGeometry(QRect(690, 20, 281, 71));
        update->setCursor(QCursor(Qt::PointingHandCursor));
        update->setStyleSheet(QLatin1String("QPushButton{color: white;\n"
"border-radius:20px;\n"
"border: 1px solid rgb(107, 189, 171);\n"
"font: 75 12pt \"8514oem\";\n"
"    background:rgb(187, 202, 218);\n"
"\n"
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
        tableView->setStyleSheet(QStringLiteral("background:rgb(5, 76, 117);"));
        tabb = new QTableView(frame_3);
        tabb->setObjectName(QStringLiteral("tabb"));
        tabb->setGeometry(QRect(520, 170, 541, 271));
        tabb->setStyleSheet(QLatin1String("background:rgb(131, 179, 216);\n"
"color:black;"));
        generateQRButton0 = new QPushButton(frame_3);
        generateQRButton0->setObjectName(QStringLiteral("generateQRButton0"));
        generateQRButton0->setGeometry(QRect(570, 560, 201, 81));
        generateQRButton0->setStyleSheet(QStringLiteral("color:rgb(75, 255, 10)"));
        generateQRButton = new QPushButton(frame_3);
        generateQRButton->setObjectName(QStringLiteral("generateQRButton"));
        generateQRButton->setGeometry(QRect(290, 490, 231, 71));
        generateQRButton->setCursor(QCursor(Qt::PointingHandCursor));
        generateQRButton->setStyleSheet(QLatin1String("QPushButton{color:white;\n"
"border-radius:20px;\n"
"border: 1px solid #D00000;\n"
"font: 75 12pt \"8514oem\";\n"
"    background:rgb(187, 202, 218);\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"    background: #D00000;\n"
"        color:white;\n"
"\n"
"\n"
"}\n"
""));
        clear_all_in_table = new QPushButton(frame_3);
        clear_all_in_table->setObjectName(QStringLiteral("clear_all_in_table"));
        clear_all_in_table->setEnabled(true);
        clear_all_in_table->setGeometry(QRect(810, 420, 221, 71));
        clear_all_in_table->setCursor(QCursor(Qt::PointingHandCursor));
        clear_all_in_table->setStyleSheet(QLatin1String("QPushButton{color: white;\n"
"border-radius:20px;\n"
"border: 1px solid rgb(107, 189, 171);\n"
"font: 75 12pt \"8514oem\";\n"
"    background:rgb(187, 202, 218);\n"
"\n"
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
        generateQRButton0->raise();
        ajouter->raise();
        search_name_lineEdit->raise();
        label_3->raise();
        search_button->raise();
        Generate_PDF->raise();
        label_15->raise();
        label_9->raise();
        label_8->raise();
        label_18->raise();
        sort_button->raise();
        tabWidget->raise();
        printEmissions->raise();
        sortComboBox->raise();
        dark_mode->raise();
        excel->raise();
        delete_button->raise();
        label_20->raise();
        update->raise();
        qrcode->raise();
        tableView->raise();
        tabb->raise();
        list_all_button->raise();
        label_14->raise();
        stat->raise();
        label_16->raise();
        generateQRButton->raise();
        clear_all_in_table->raise();
        label_21->raise();
        label_22->raise();
        label_23->raise();
        label_24->raise();
        label_25->raise();
        label_26->raise();
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 320, 61, 41));
        label->setStyleSheet(QLatin1String("image:url(:/Dark_ones /guest-star (1).png);\n"
"background:transparent;\n"
"border:0px;"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 368, 171, 91));
        label_2->setStyleSheet(QLatin1String("image:url(:/Dark_ones /un-salaire (1).png);\n"
"background:transparent;\n"
"border:0px;"));
        label_4 = new QLabel(frame);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(68, 475, 31, 41));
        label_4->setStyleSheet(QLatin1String("\n"
"image:url(:/Dark_ones /icons8-microphone-2-50 (1).png)\n"
";\n"
"background:transparent;\n"
"border:0px;"));
        label_6 = new QLabel(frame);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(110, 228, 31, 41));
        label_6->setStyleSheet(QLatin1String("image:url(:/Light_ones/tv_light.png);\n"
"background:transparent;\n"
"border:0px;"));
        label_7 = new QLabel(frame);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(68, 143, 41, 51));
        label_7->setStyleSheet(QLatin1String("image:url(:/Dark_ones /util.png);\n"
"background:transparent;\n"
"border:0px;"));
        pushButton_7 = new QPushButton(frame);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(124, 720, 93, 28));
        pushButton_7->setStyleSheet(QLatin1String("color:rgb(3, 43, 67);\n"
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
        QBrush brush11(QColor(3, 43, 67, 128));
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
        QBrush brush12(QColor(3, 43, 67, 128));
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
        QBrush brush13(QColor(3, 43, 67, 128));
        brush13.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush13);
#endif
        label_13->setPalette(palette3);
        label_13->setCursor(QCursor(Qt::ForbiddenCursor));
        label_13->setStyleSheet(QLatin1String("color:rgb(3, 43, 67);\n"
"font: 75 12pt \"8514oem\";\n"
"border: 0px solid white;\n"
"background:transparent;\n"
" border-radius: 10px;\n"
""));
        label_13->setFrameShape(QFrame::Panel);
        label_19 = new QLabel(frame);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(60, 720, 51, 31));
        label_19->setStyleSheet(QLatin1String("image:url(:/Light_ones/logout.png);\n"
"border:rgb(189, 206, 222);\n"
"\n"
""));
        pushButton->raise();
        label_10->raise();
        label_12->raise();
        label_11->raise();
        frame_4->raise();
        label->raise();
        label_2->raise();
        label_4->raise();
        label_6->raise();
        label_7->raise();
        frame_3->raise();
        pushButton_7->raise();
        label_13->raise();
        label_19->raise();
        EmissionMainWindowDarkMode->setCentralWidget(centralwidget);
        menubar = new QMenuBar(EmissionMainWindowDarkMode);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1753, 26));
        menuCreate = new QMenu(menubar);
        menuCreate->setObjectName(QStringLiteral("menuCreate"));
        menuRead = new QMenu(menubar);
        menuRead->setObjectName(QStringLiteral("menuRead"));
        menuupdate = new QMenu(menubar);
        menuupdate->setObjectName(QStringLiteral("menuupdate"));
        menudelete = new QMenu(menubar);
        menudelete->setObjectName(QStringLiteral("menudelete"));
        EmissionMainWindowDarkMode->setMenuBar(menubar);
        statusbar = new QStatusBar(EmissionMainWindowDarkMode);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        EmissionMainWindowDarkMode->setStatusBar(statusbar);

        menubar->addAction(menuCreate->menuAction());
        menubar->addAction(menuRead->menuAction());
        menubar->addAction(menuupdate->menuAction());
        menubar->addAction(menudelete->menuAction());
        menudelete->addSeparator();
        menudelete->addSeparator();
        menudelete->addSeparator();

        retranslateUi(EmissionMainWindowDarkMode);
        QObject::connect(search_button, SIGNAL(pressed()), search_button, SLOT(showMenu()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(EmissionMainWindowDarkMode);
    } // setupUi

    void retranslateUi(QMainWindow *EmissionMainWindowDarkMode)
    {
        EmissionMainWindowDarkMode->setWindowTitle(QApplication::translate("EmissionMainWindowDarkMode", "MainWindow", Q_NULLPTR));
        pushButton->setText(QApplication::translate("EmissionMainWindowDarkMode", "Shows", Q_NULLPTR));
        label_10->setText(QApplication::translate("EmissionMainWindowDarkMode", "           Sponsorships", Q_NULLPTR));
        label_12->setText(QApplication::translate("EmissionMainWindowDarkMode", "          Equipement", Q_NULLPTR));
        label_11->setText(QApplication::translate("EmissionMainWindowDarkMode", "         Guests", Q_NULLPTR));
        label_5->setText(QString());
        label_3->setText(QApplication::translate("EmissionMainWindowDarkMode", "TextLabel", Q_NULLPTR));
        search_button->setText(QString());
        search_name_lineEdit->setText(QString());
        search_name_lineEdit->setPlaceholderText(QApplication::translate("EmissionMainWindowDarkMode", " type in your search", Q_NULLPTR));
        label_15->setText(QString());
        ajouter->setText(QApplication::translate("EmissionMainWindowDarkMode", "     Add a show", Q_NULLPTR));
        Generate_PDF->setText(QApplication::translate("EmissionMainWindowDarkMode", "   Generate PDF", Q_NULLPTR));
        label_9->setText(QString());
        list_all_button->setText(QApplication::translate("EmissionMainWindowDarkMode", "    Show List", Q_NULLPTR));
        stat->setText(QApplication::translate("EmissionMainWindowDarkMode", "   Stats", Q_NULLPTR));
        label_14->setText(QString());
        label_16->setText(QString());
        label_8->setText(QString());
        label_18->setText(QString());
        sort_button->setText(QApplication::translate("EmissionMainWindowDarkMode", "sort by ", Q_NULLPTR));
        label_34->setText(QApplication::translate("EmissionMainWindowDarkMode", "employee_id", Q_NULLPTR));
        clear_fields_add->setText(QString());
        employee_id_lineEdit->setText(QApplication::translate("EmissionMainWindowDarkMode", "021dd", Q_NULLPTR));
        label_39->setText(QApplication::translate("EmissionMainWindowDarkMode", "ID", Q_NULLPTR));
        label_40->setText(QApplication::translate("EmissionMainWindowDarkMode", "name", Q_NULLPTR));
        host_lineEdit->setText(QString());
        host_lineEdit->setPlaceholderText(QApplication::translate("EmissionMainWindowDarkMode", "...........", Q_NULLPTR));
        type_lineEdit->setText(QString());
        type_lineEdit->setPlaceholderText(QApplication::translate("EmissionMainWindowDarkMode", "...........", Q_NULLPTR));
        label_56->setText(QApplication::translate("EmissionMainWindowDarkMode", "duration :", Q_NULLPTR));
        id_lineEdit->setText(QString());
        id_lineEdit->setPlaceholderText(QApplication::translate("EmissionMainWindowDarkMode", "...........", Q_NULLPTR));
        label_57->setText(QApplication::translate("EmissionMainWindowDarkMode", "nb views :", Q_NULLPTR));
        nbviews_lineEdit->setText(QString());
        nbviews_lineEdit->setPlaceholderText(QApplication::translate("EmissionMainWindowDarkMode", "...........", Q_NULLPTR));
        genre_lineEdit->setText(QString());
        genre_lineEdit->setPlaceholderText(QApplication::translate("EmissionMainWindowDarkMode", "...........", Q_NULLPTR));
        name_lineEdit->setText(QString());
        name_lineEdit->setPlaceholderText(QApplication::translate("EmissionMainWindowDarkMode", "...........", Q_NULLPTR));
        label_58->setText(QApplication::translate("EmissionMainWindowDarkMode", "show name :", Q_NULLPTR));
        label_59->setText(QApplication::translate("EmissionMainWindowDarkMode", "host name :", Q_NULLPTR));
        duree_lineEdit->setText(QString());
        duree_lineEdit->setPlaceholderText(QApplication::translate("EmissionMainWindowDarkMode", "...........", Q_NULLPTR));
        date_lineEdit->setText(QString());
        date_lineEdit->setPlaceholderText(QApplication::translate("EmissionMainWindowDarkMode", "...........", Q_NULLPTR));
        label_60->setText(QApplication::translate("EmissionMainWindowDarkMode", "genre :", Q_NULLPTR));
        label_61->setText(QApplication::translate("EmissionMainWindowDarkMode", "date :", Q_NULLPTR));
        label_62->setText(QApplication::translate("EmissionMainWindowDarkMode", "Identifiant :", Q_NULLPTR));
        label_63->setText(QApplication::translate("EmissionMainWindowDarkMode", "type :", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("EmissionMainWindowDarkMode", "add", Q_NULLPTR));
        id_lineEdit_2->setText(QString());
        id_lineEdit_2->setPlaceholderText(QApplication::translate("EmissionMainWindowDarkMode", "...........", Q_NULLPTR));
        label_48->setText(QApplication::translate("EmissionMainWindowDarkMode", "host name :", Q_NULLPTR));
        label_49->setText(QApplication::translate("EmissionMainWindowDarkMode", "Identifiant :", Q_NULLPTR));
        label_50->setText(QApplication::translate("EmissionMainWindowDarkMode", "show name :", Q_NULLPTR));
        label_51->setText(QApplication::translate("EmissionMainWindowDarkMode", "nb views :", Q_NULLPTR));
        label_52->setText(QApplication::translate("EmissionMainWindowDarkMode", "genre :", Q_NULLPTR));
        label_53->setText(QApplication::translate("EmissionMainWindowDarkMode", "type :", Q_NULLPTR));
        label_54->setText(QApplication::translate("EmissionMainWindowDarkMode", "date :", Q_NULLPTR));
        label_55->setText(QApplication::translate("EmissionMainWindowDarkMode", "duration :", Q_NULLPTR));
        name_lineEdit_2->setText(QString());
        name_lineEdit_2->setPlaceholderText(QApplication::translate("EmissionMainWindowDarkMode", "...........", Q_NULLPTR));
        duree_lineEdit_2->setText(QString());
        duree_lineEdit_2->setPlaceholderText(QApplication::translate("EmissionMainWindowDarkMode", "...........", Q_NULLPTR));
        date_lineEdit_2->setText(QString());
        date_lineEdit_2->setPlaceholderText(QApplication::translate("EmissionMainWindowDarkMode", "...........", Q_NULLPTR));
        type_lineEdit_2->setText(QString());
        type_lineEdit_2->setPlaceholderText(QApplication::translate("EmissionMainWindowDarkMode", "...........", Q_NULLPTR));
        genre_lineEdit_2->setText(QString());
        genre_lineEdit_2->setPlaceholderText(QApplication::translate("EmissionMainWindowDarkMode", "...........", Q_NULLPTR));
        nbviews_lineEdit_2->setText(QString());
        nbviews_lineEdit_2->setPlaceholderText(QApplication::translate("EmissionMainWindowDarkMode", "...........", Q_NULLPTR));
        host_lineEdit_2->setText(QString());
        host_lineEdit_2->setPlaceholderText(QApplication::translate("EmissionMainWindowDarkMode", "...........", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("EmissionMainWindowDarkMode", "update", Q_NULLPTR));
        id_lineEdit_delete->setText(QString());
        id_lineEdit_delete->setPlaceholderText(QApplication::translate("EmissionMainWindowDarkMode", "...........", Q_NULLPTR));
        label_64->setText(QApplication::translate("EmissionMainWindowDarkMode", "Identifiant :", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("EmissionMainWindowDarkMode", "Delete", Q_NULLPTR));
        printEmissions->setText(QApplication::translate("EmissionMainWindowDarkMode", "Print", Q_NULLPTR));
        sortComboBox->clear();
        sortComboBox->insertItems(0, QStringList()
         << QApplication::translate("EmissionMainWindowDarkMode", "A-Z ", Q_NULLPTR)
         << QApplication::translate("EmissionMainWindowDarkMode", "default", Q_NULLPTR)
         << QApplication::translate("EmissionMainWindowDarkMode", "tri 3", Q_NULLPTR)
        );
        dark_mode->setText(QApplication::translate("EmissionMainWindowDarkMode", "   dark mode", Q_NULLPTR));
        excel->setText(QApplication::translate("EmissionMainWindowDarkMode", "     Export to Excel", Q_NULLPTR));
        delete_button->setText(QApplication::translate("EmissionMainWindowDarkMode", "     Delete a show", Q_NULLPTR));
        label_20->setText(QString());
        update->setText(QApplication::translate("EmissionMainWindowDarkMode", "     Update a show", Q_NULLPTR));
        qrcode->setText(QString());
        generateQRButton0->setText(QApplication::translate("EmissionMainWindowDarkMode", "generate qr code", Q_NULLPTR));
        generateQRButton->setText(QApplication::translate("EmissionMainWindowDarkMode", "  QR Code", Q_NULLPTR));
        clear_all_in_table->setText(QApplication::translate("EmissionMainWindowDarkMode", "    Clear List", Q_NULLPTR));
        label_21->setText(QString());
        label_22->setText(QString());
        label_23->setText(QString());
        label_24->setText(QString());
        label_25->setText(QString());
        label_26->setText(QString());
        label->setText(QString());
        label_2->setText(QString());
        label_4->setText(QString());
        label_6->setText(QString());
        label_7->setText(QString());
        pushButton_7->setText(QApplication::translate("EmissionMainWindowDarkMode", "Log Out", Q_NULLPTR));
        label_13->setText(QApplication::translate("EmissionMainWindowDarkMode", "Employees", Q_NULLPTR));
        label_19->setText(QString());
        menuCreate->setTitle(QApplication::translate("EmissionMainWindowDarkMode", "Create ", Q_NULLPTR));
        menuRead->setTitle(QApplication::translate("EmissionMainWindowDarkMode", "Read", Q_NULLPTR));
        menuupdate->setTitle(QApplication::translate("EmissionMainWindowDarkMode", "Update", Q_NULLPTR));
        menudelete->setTitle(QApplication::translate("EmissionMainWindowDarkMode", "Delete ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class EmissionMainWindowDarkMode: public Ui_EmissionMainWindowDarkMode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMISSIONMAINWINDOWDARKMODE_H
