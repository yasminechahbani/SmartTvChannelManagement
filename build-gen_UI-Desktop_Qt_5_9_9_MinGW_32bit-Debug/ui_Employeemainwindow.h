/********************************************************************************
** Form generated from reading UI file 'Employeemainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPLOYEEMAINWINDOW_H
#define UI_EMPLOYEEMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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

class Ui_EmployeeMainWindow
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
    QLineEdit *search_lineEdit;
    QLabel *label_15;
    QPushButton *add_button;
    QPushButton *Generate_PDF;
    QLabel *label_9;
    QPushButton *pushButton_2;
    QLabel *label_14;
    QLabel *label_8;
    QLabel *label_18;
    QToolButton *sort_button;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label_19;
    QLabel *label_29;
    QLabel *label_30;
    QLabel *label_31;
    QLabel *label_32;
    QLabel *label_34;
    QPushButton *ajouter;
    QPushButton *updatebutton;
    QPushButton *clear_fields_add;
    QLabel *label_36;
    QLineEdit *date_embauche_lineEdit;
    QLineEdit *id_lineEdit;
    QLineEdit *mail_lineEdit;
    QLineEdit *employee_id_lineEdit;
    QLineEdit *role_lineEdit;
    QLineEdit *prenom_lineEdit;
    QLineEdit *datenaissance_lineEdit;
    QLineEdit *tel_lineEdit;
    QLabel *label_37;
    QLabel *label_33;
    QLineEdit *passwordlineEdit;
    QWidget *tab_3;
    QLabel *label_35;
    QLineEdit *id_lineEdit_delete;
    QLabel *label_38;
    QPushButton *delete_button;
    QWidget *tabb_2;
    QPushButton *list_all_button;
    QPushButton *clear_all_in_table;
    QLabel *label_49;
    QLabel *label_50;
    QLabel *label_48;
    QLabel *label_51;
    QLineEdit *id_lineEdit_2;
    QLabel *label_52;
    QLineEdit *genre_lineEdit_2;
    QLineEdit *name_lineEdit_2;
    QLabel *label_53;
    QLineEdit *type_lineEdit_2;
    QLineEdit *date_lineEdit_2;
    QLabel *label_54;
    QLineEdit *duree_lineEdit_2;
    QLabel *label_55;
    QLineEdit *host_lineEdit_2;
    QLineEdit *nbviews_lineEdit_2;
    QPushButton *update_button;
    QPushButton *stat;
    QTableView *tableView_3;
    QPushButton *clear_list;
    QLabel *label_16;
    QTableView *tabb;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_17;
    QPushButton *logout;
    QLabel *label_13;
    QPushButton *shows;
    QPushButton *Sponsors;
    QPushButton *guests;
    QPushButton *equipement;
    QMenuBar *menubar;
    QMenu *menuCreate;
    QMenu *menuRead;
    QMenu *menuupdate;
    QMenu *menudelete;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *EmployeeMainWindow)
    {
        if (EmployeeMainWindow->objectName().isEmpty())
            EmployeeMainWindow->setObjectName(QStringLiteral("EmployeeMainWindow"));
        EmployeeMainWindow->resize(1422, 939);
        EmployeeMainWindow->setStyleSheet(QLatin1String("QMainWindow {\n"
"    background: white;\n"
"}"));
        centralwidget = new QWidget(EmployeeMainWindow);
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
        pushButton->setGeometry(QRect(20, 176, 361, 61));
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
        label_10->setGeometry(QRect(40, 420, 300, 60));
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
        label_12 = new QLabel(frame);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(60, 505, 300, 60));
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
        label_11->setGeometry(QRect(70, 346, 300, 60));
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
        frame_4->setGeometry(QRect(20, 46, 401, 111));
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
        frame_3->setGeometry(QRect(310, 46, 1071, 801));
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
        search_button->setGeometry(QRect(970, 120, 51, 41));
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
        search_lineEdit = new QLineEdit(frame_3);
        search_lineEdit->setObjectName(QStringLiteral("search_lineEdit"));
        search_lineEdit->setGeometry(QRect(760, 120, 251, 41));
        search_lineEdit->setStyleSheet(QLatin1String("border-radius:20px;\n"
"background:rgb(229, 229, 229);\n"
"color:#999999;\n"
"font: 8pt \"8514oem\";"));
        label_15 = new QLabel(frame_3);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(160, 640, 91, 41));
        label_15->setStyleSheet(QLatin1String("QLabel{\n"
"image:url(:/Dark_ones /pdf.png);\n"
"background:transparent;\n"
"}\n"
""));
        add_button = new QPushButton(frame_3);
        add_button->setObjectName(QStringLiteral("add_button"));
        add_button->setGeometry(QRect(340, 20, 281, 71));
        add_button->setCursor(QCursor(Qt::PointingHandCursor));
        add_button->setStyleSheet(QLatin1String("QPushButton{color: rgb(107, 189, 171);\n"
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
        Generate_PDF->setGeometry(QRect(170, 630, 231, 71));
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
        label_9->setGeometry(QRect(360, 30, 61, 61));
        label_9->setStyleSheet(QLatin1String("image:url(:/Dark_ones /plus.png);\n"
"background:transparent;"));
        pushButton_2 = new QPushButton(frame_3);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(590, 420, 201, 71));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QLatin1String("QPushButton{color: rgb(107, 189, 171);\n"
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
        label_14 = new QLabel(frame_3);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(570, 430, 111, 51));
        label_14->setStyleSheet(QLatin1String("image:url(:/Dark_ones /eye.png);\n"
"background:transparent;"));
        label_8 = new QLabel(frame_3);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(30, 200, 71, 31));
        label_8->setStyleSheet(QLatin1String("image:url(:/Light_ones/filter.png);\n"
"background:transparent;"));
        label_18 = new QLabel(frame_3);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(930, 30, 131, 61));
        label_18->setStyleSheet(QLatin1String("image:url(:/Dark_ones /profile_dark.png);\n"
"background:transparent;"));
        sort_button = new QToolButton(frame_3);
        sort_button->setObjectName(QStringLiteral("sort_button"));
        sort_button->setGeometry(QRect(570, 130, 131, 51));
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
        tabWidget->setGeometry(QRect(10, 180, 521, 391));
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
        tab->setEnabled(true);
        label_19 = new QLabel(tab);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(0, 40, 81, 31));
        label_19->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: rgb(217, 237, 255); /* Set the background color */\n"
"    border-radius: 3px; /* Adjust the radius as needed */\n"
"    padding: 3px; /* Adjust padding as needed */\n"
"color:rgb(3, 43, 67);\n"
"}\n"
""));
        label_29 = new QLabel(tab);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(260, 40, 91, 31));
        label_29->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: rgb(217, 237, 255); /* Set the background color */\n"
"    border-radius: 3px; /* Adjust the radius as needed */\n"
"    padding: 3px; /* Adjust padding as needed */\n"
"color:rgb(3, 43, 67);\n"
"}\n"
""));
        label_30 = new QLabel(tab);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(0, 100, 81, 31));
        label_30->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: rgb(217, 237, 255); /* Set the background color */\n"
"    border-radius: 3px; /* Adjust the radius as needed */\n"
"    padding: 3px; /* Adjust padding as needed */\n"
"color:rgb(3, 43, 67);\n"
"}\n"
""));
        label_31 = new QLabel(tab);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(260, 100, 91, 31));
        label_31->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: rgb(217, 237, 255); /* Set the background color */\n"
"    border-radius: 3px; /* Adjust the radius as needed */\n"
"    padding: 3px; /* Adjust padding as needed */\n"
"color:rgb(3, 43, 67);\n"
"}\n"
""));
        label_32 = new QLabel(tab);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(260, 160, 91, 31));
        label_32->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: rgb(217, 237, 255); /* Set the background color */\n"
"    border-radius: 3px; /* Adjust the radius as needed */\n"
"    padding: 3px; /* Adjust padding as needed */\n"
"color:rgb(3, 43, 67);\n"
"}\n"
""));
        label_34 = new QLabel(tab);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setGeometry(QRect(40, 460, 91, 16));
        ajouter = new QPushButton(tab);
        ajouter->setObjectName(QStringLiteral("ajouter"));
        ajouter->setGeometry(QRect(210, 280, 91, 51));
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
        updatebutton = new QPushButton(tab);
        updatebutton->setObjectName(QStringLiteral("updatebutton"));
        updatebutton->setGeometry(QRect(740, 310, 93, 28));
        clear_fields_add = new QPushButton(tab);
        clear_fields_add->setObjectName(QStringLiteral("clear_fields_add"));
        clear_fields_add->setGeometry(QRect(730, 360, 93, 28));
        label_36 = new QLabel(tab);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setGeometry(QRect(0, 220, 81, 31));
        label_36->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: rgb(217, 237, 255); /* Set the background color */\n"
"    border-radius: 3px; /* Adjust the radius as needed */\n"
"    padding: 3px; /* Adjust padding as needed */\n"
"color:rgb(3, 43, 67);\n"
"}\n"
""));
        date_embauche_lineEdit = new QLineEdit(tab);
        date_embauche_lineEdit->setObjectName(QStringLiteral("date_embauche_lineEdit"));
        date_embauche_lineEdit->setGeometry(QRect(360, 160, 151, 31));
        date_embauche_lineEdit->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: #f0f0f0; /* Set a very light background color */\n"
"    border-radius: 5px; /* Adjust the radius as needed */\n"
"    padding: 5px; /* Adjust padding as needed */\n"
"    border: 1px solid #ccc; /* Add a border */\n"
"    color: #333333; /* Set the color of the text to dark */\n"
"}\n"
""));
        id_lineEdit = new QLineEdit(tab);
        id_lineEdit->setObjectName(QStringLiteral("id_lineEdit"));
        id_lineEdit->setGeometry(QRect(90, 40, 151, 31));
        id_lineEdit->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: #f0f0f0; /* Set a very light background color */\n"
"    border-radius: 5px; /* Adjust the radius as needed */\n"
"    padding: 5px; /* Adjust padding as needed */\n"
"    border: 1px solid #ccc; /* Add a border */\n"
"    color: #333333; /* Set the color of the text to dark */\n"
"}\n"
""));
        mail_lineEdit = new QLineEdit(tab);
        mail_lineEdit->setObjectName(QStringLiteral("mail_lineEdit"));
        mail_lineEdit->setGeometry(QRect(90, 100, 151, 31));
        mail_lineEdit->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: #f0f0f0; /* Set a very light background color */\n"
"    border-radius: 5px; /* Adjust the radius as needed */\n"
"    padding: 5px; /* Adjust padding as needed */\n"
"    border: 1px solid #ccc; /* Add a border */\n"
"    color: #333333; /* Set the color of the text to dark */\n"
"}\n"
""));
        employee_id_lineEdit = new QLineEdit(tab);
        employee_id_lineEdit->setObjectName(QStringLiteral("employee_id_lineEdit"));
        employee_id_lineEdit->setGeometry(QRect(240, 460, 291, 21));
        role_lineEdit = new QLineEdit(tab);
        role_lineEdit->setObjectName(QStringLiteral("role_lineEdit"));
        role_lineEdit->setGeometry(QRect(360, 100, 151, 31));
        role_lineEdit->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: #f0f0f0; /* Set a very light background color */\n"
"    border-radius: 5px; /* Adjust the radius as needed */\n"
"    padding: 5px; /* Adjust padding as needed */\n"
"    border: 1px solid #ccc; /* Add a border */\n"
"    color: #333333; /* Set the color of the text to dark */\n"
"}\n"
""));
        prenom_lineEdit = new QLineEdit(tab);
        prenom_lineEdit->setObjectName(QStringLiteral("prenom_lineEdit"));
        prenom_lineEdit->setGeometry(QRect(360, 40, 151, 31));
        prenom_lineEdit->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: #f0f0f0; /* Set a very light background color */\n"
"    border-radius: 5px; /* Adjust the radius as needed */\n"
"    padding: 5px; /* Adjust padding as needed */\n"
"    border: 1px solid #ccc; /* Add a border */\n"
"    color: #333333; /* Set the color of the text to dark */\n"
"}\n"
"\n"
""));
        datenaissance_lineEdit = new QLineEdit(tab);
        datenaissance_lineEdit->setObjectName(QStringLiteral("datenaissance_lineEdit"));
        datenaissance_lineEdit->setGeometry(QRect(90, 220, 151, 31));
        datenaissance_lineEdit->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: #f0f0f0; /* Set a very light background color */\n"
"    border-radius: 5px; /* Adjust the radius as needed */\n"
"    padding: 5px; /* Adjust padding as needed */\n"
"    border: 1px solid #ccc; /* Add a border */\n"
"    color: #333333; /* Set the color of the text to dark */\n"
"}\n"
""));
        tel_lineEdit = new QLineEdit(tab);
        tel_lineEdit->setObjectName(QStringLiteral("tel_lineEdit"));
        tel_lineEdit->setGeometry(QRect(90, 160, 151, 31));
        tel_lineEdit->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: #f0f0f0; /* Set a very light background color */\n"
"    border-radius: 5px; /* Adjust the radius as needed */\n"
"    padding: 5px; /* Adjust padding as needed */\n"
"    border: 1px solid #ccc; /* Add a border */\n"
"    color: #333333; /* Set the color of the text to dark */\n"
"}\n"
""));
        label_37 = new QLabel(tab);
        label_37->setObjectName(QStringLiteral("label_37"));
        label_37->setGeometry(QRect(0, 160, 81, 31));
        label_37->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: rgb(217, 237, 255); /* Set the background color */\n"
"    border-radius: 3px; /* Adjust the radius as needed */\n"
"    padding: 3px; /* Adjust padding as needed */\n"
"color:rgb(3, 43, 67);\n"
"}\n"
""));
        label_33 = new QLabel(tab);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setGeometry(QRect(260, 220, 91, 31));
        label_33->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: rgb(217, 237, 255); /* Set the background color */\n"
"    border-radius: 3px; /* Adjust the radius as needed */\n"
"    padding: 3px; /* Adjust padding as needed */\n"
"color:rgb(3, 43, 67);\n"
"}\n"
""));
        passwordlineEdit = new QLineEdit(tab);
        passwordlineEdit->setObjectName(QStringLiteral("passwordlineEdit"));
        passwordlineEdit->setGeometry(QRect(360, 220, 151, 31));
        passwordlineEdit->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: #f0f0f0; /* Set a very light background color */\n"
"    border-radius: 5px; /* Adjust the radius as needed */\n"
"    padding: 5px; /* Adjust padding as needed */\n"
"    border: 1px solid #ccc; /* Add a border */\n"
"    color: #333333; /* Set the color of the text to dark */\n"
"}\n"
""));
        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        label_35 = new QLabel(tab_3);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setGeometry(QRect(100, 60, 56, 16));
        id_lineEdit_delete = new QLineEdit(tab_3);
        id_lineEdit_delete->setObjectName(QStringLiteral("id_lineEdit_delete"));
        id_lineEdit_delete->setGeometry(QRect(150, 70, 291, 41));
        id_lineEdit_delete->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: #f0f0f0; /* Set a very light background color */\n"
"    border-radius: 5px; /* Adjust the radius as needed */\n"
"    padding: 5px; /* Adjust padding as needed */\n"
"    border: 1px solid #ccc; /* Add a border */\n"
"    color: #333333; /* Set the color of the text to dark */\n"
"}\n"
""));
        label_38 = new QLabel(tab_3);
        label_38->setObjectName(QStringLiteral("label_38"));
        label_38->setGeometry(QRect(80, 70, 51, 41));
        label_38->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: rgb(217, 237, 255); /* Set the background color */\n"
"    border-radius: 3px; /* Adjust the radius as needed */\n"
"    padding: 3px; /* Adjust padding as needed */\n"
"color:rgb(3, 43, 67);\n"
"}\n"
""));
        delete_button = new QPushButton(tab_3);
        delete_button->setObjectName(QStringLiteral("delete_button"));
        delete_button->setGeometry(QRect(170, 200, 161, 41));
        delete_button->setCursor(QCursor(Qt::PointingHandCursor));
        delete_button->setStyleSheet(QLatin1String("QPushButton{color:#D00000;\n"
"border-radius:20px;\n"
"border: 1px solid #D00000;\n"
"font: 75 12pt \"8514oem\";\n"
"}\n"
"QPushButton:hover {\n"
"    background: #D00000;\n"
"        color:white;\n"
"\n"
"\n"
"}"));
        tabWidget->addTab(tab_3, QString());
        tabb_2 = new QWidget();
        tabb_2->setObjectName(QStringLiteral("tabb_2"));
        list_all_button = new QPushButton(tabb_2);
        list_all_button->setObjectName(QStringLiteral("list_all_button"));
        list_all_button->setGeometry(QRect(530, 360, 231, 28));
        list_all_button->setStyleSheet(QStringLiteral("color:rgb(19, 11, 255)"));
        clear_all_in_table = new QPushButton(tabb_2);
        clear_all_in_table->setObjectName(QStringLiteral("clear_all_in_table"));
        clear_all_in_table->setGeometry(QRect(180, 360, 231, 28));
        clear_all_in_table->setStyleSheet(QStringLiteral("color:rgb(255, 0, 4)"));
        label_49 = new QLabel(tabb_2);
        label_49->setObjectName(QStringLiteral("label_49"));
        label_49->setGeometry(QRect(30, 50, 71, 31));
        label_49->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: rgb(217, 237, 255); /* Set the background color */\n"
"    border-radius: 3px; /* Adjust the radius as needed */\n"
"    padding: 3px; /* Adjust padding as needed */\n"
"color:rgb(3, 43, 67);\n"
"}\n"
""));
        label_50 = new QLabel(tabb_2);
        label_50->setObjectName(QStringLiteral("label_50"));
        label_50->setGeometry(QRect(30, 110, 71, 31));
        label_50->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: rgb(217, 237, 255); /* Set the background color */\n"
"    border-radius: 3px; /* Adjust the radius as needed */\n"
"    padding: 3px; /* Adjust padding as needed */\n"
"color:rgb(3, 43, 67);\n"
"}\n"
""));
        label_48 = new QLabel(tabb_2);
        label_48->setObjectName(QStringLiteral("label_48"));
        label_48->setGeometry(QRect(30, 160, 71, 31));
        label_48->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: rgb(217, 237, 255); /* Set the background color */\n"
"    border-radius: 3px; /* Adjust the radius as needed */\n"
"    padding: 3px; /* Adjust padding as needed */\n"
"color:rgb(3, 43, 67);\n"
"}\n"
""));
        label_51 = new QLabel(tabb_2);
        label_51->setObjectName(QStringLiteral("label_51"));
        label_51->setGeometry(QRect(30, 220, 71, 31));
        label_51->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: rgb(217, 237, 255); /* Set the background color */\n"
"    border-radius: 3px; /* Adjust the radius as needed */\n"
"    padding: 3px; /* Adjust padding as needed */\n"
"color:rgb(3, 43, 67);\n"
"}\n"
""));
        id_lineEdit_2 = new QLineEdit(tabb_2);
        id_lineEdit_2->setObjectName(QStringLiteral("id_lineEdit_2"));
        id_lineEdit_2->setGeometry(QRect(140, 50, 91, 31));
        id_lineEdit_2->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: #f0f0f0; /* Set a very light background color */\n"
"    border-radius: 5px; /* Adjust the radius as needed */\n"
"    padding: 5px; /* Adjust padding as needed */\n"
"    border: 1px solid #ccc; /* Add a border */\n"
"    color: #333333; /* Set the color of the text to dark */\n"
"}\n"
""));
        label_52 = new QLabel(tabb_2);
        label_52->setObjectName(QStringLiteral("label_52"));
        label_52->setGeometry(QRect(290, 60, 61, 31));
        label_52->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: rgb(217, 237, 255); /* Set the background color */\n"
"    border-radius: 3px; /* Adjust the radius as needed */\n"
"    padding: 3px; /* Adjust padding as needed */\n"
"color:rgb(3, 43, 67);\n"
"}\n"
""));
        genre_lineEdit_2 = new QLineEdit(tabb_2);
        genre_lineEdit_2->setObjectName(QStringLiteral("genre_lineEdit_2"));
        genre_lineEdit_2->setGeometry(QRect(400, 60, 91, 31));
        genre_lineEdit_2->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: #f0f0f0; /* Set a very light background color */\n"
"    border-radius: 5px; /* Adjust the radius as needed */\n"
"    padding: 5px; /* Adjust padding as needed */\n"
"    border: 1px solid #ccc; /* Add a border */\n"
"    color: #333333; /* Set the color of the text to dark */\n"
"}\n"
""));
        name_lineEdit_2 = new QLineEdit(tabb_2);
        name_lineEdit_2->setObjectName(QStringLiteral("name_lineEdit_2"));
        name_lineEdit_2->setGeometry(QRect(140, 110, 91, 31));
        name_lineEdit_2->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: #f0f0f0; /* Set a very light background color */\n"
"    border-radius: 5px; /* Adjust the radius as needed */\n"
"    padding: 5px; /* Adjust padding as needed */\n"
"    border: 1px solid #ccc; /* Add a border */\n"
"    color: #333333; /* Set the color of the text to dark */\n"
"}\n"
""));
        label_53 = new QLabel(tabb_2);
        label_53->setObjectName(QStringLiteral("label_53"));
        label_53->setGeometry(QRect(280, 120, 101, 31));
        label_53->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: rgb(217, 237, 255); /* Set the background color */\n"
"    border-radius: 3px; /* Adjust the radius as needed */\n"
"    padding: 3px; /* Adjust padding as needed */\n"
"color:rgb(3, 43, 67);\n"
"}\n"
""));
        type_lineEdit_2 = new QLineEdit(tabb_2);
        type_lineEdit_2->setObjectName(QStringLiteral("type_lineEdit_2"));
        type_lineEdit_2->setGeometry(QRect(400, 120, 91, 31));
        type_lineEdit_2->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: #f0f0f0; /* Set a very light background color */\n"
"    border-radius: 5px; /* Adjust the radius as needed */\n"
"    padding: 5px; /* Adjust padding as needed */\n"
"    border: 1px solid #ccc; /* Add a border */\n"
"    color: #333333; /* Set the color of the text to dark */\n"
"}\n"
""));
        date_lineEdit_2 = new QLineEdit(tabb_2);
        date_lineEdit_2->setObjectName(QStringLiteral("date_lineEdit_2"));
        date_lineEdit_2->setGeometry(QRect(400, 170, 91, 31));
        date_lineEdit_2->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: #f0f0f0; /* Set a very light background color */\n"
"    border-radius: 5px; /* Adjust the radius as needed */\n"
"    padding: 5px; /* Adjust padding as needed */\n"
"    border: 1px solid #ccc; /* Add a border */\n"
"    color: #333333; /* Set the color of the text to dark */\n"
"}\n"
""));
        label_54 = new QLabel(tabb_2);
        label_54->setObjectName(QStringLiteral("label_54"));
        label_54->setGeometry(QRect(280, 170, 61, 31));
        label_54->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: rgb(217, 237, 255); /* Set the background color */\n"
"    border-radius: 3px; /* Adjust the radius as needed */\n"
"    padding: 3px; /* Adjust padding as needed */\n"
"color:rgb(3, 43, 67);\n"
"}\n"
""));
        duree_lineEdit_2 = new QLineEdit(tabb_2);
        duree_lineEdit_2->setObjectName(QStringLiteral("duree_lineEdit_2"));
        duree_lineEdit_2->setGeometry(QRect(400, 220, 91, 31));
        duree_lineEdit_2->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: #f0f0f0; /* Set a very light background color */\n"
"    border-radius: 5px; /* Adjust the radius as needed */\n"
"    padding: 5px; /* Adjust padding as needed */\n"
"    border: 1px solid #ccc; /* Add a border */\n"
"    color: #333333; /* Set the color of the text to dark */\n"
"}\n"
""));
        label_55 = new QLabel(tabb_2);
        label_55->setObjectName(QStringLiteral("label_55"));
        label_55->setGeometry(QRect(280, 220, 81, 31));
        label_55->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: rgb(217, 237, 255); /* Set the background color */\n"
"    border-radius: 3px; /* Adjust the radius as needed */\n"
"    padding: 3px; /* Adjust padding as needed */\n"
"color:rgb(3, 43, 67);\n"
"}\n"
""));
        host_lineEdit_2 = new QLineEdit(tabb_2);
        host_lineEdit_2->setObjectName(QStringLiteral("host_lineEdit_2"));
        host_lineEdit_2->setGeometry(QRect(140, 170, 91, 31));
        host_lineEdit_2->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: #f0f0f0; /* Set a very light background color */\n"
"    border-radius: 5px; /* Adjust the radius as needed */\n"
"    padding: 5px; /* Adjust padding as needed */\n"
"    border: 1px solid #ccc; /* Add a border */\n"
"    color: #333333; /* Set the color of the text to dark */\n"
"}\n"
""));
        nbviews_lineEdit_2 = new QLineEdit(tabb_2);
        nbviews_lineEdit_2->setObjectName(QStringLiteral("nbviews_lineEdit_2"));
        nbviews_lineEdit_2->setGeometry(QRect(140, 220, 91, 31));
        nbviews_lineEdit_2->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: #f0f0f0; /* Set a very light background color */\n"
"    border-radius: 5px; /* Adjust the radius as needed */\n"
"    padding: 5px; /* Adjust padding as needed */\n"
"    border: 1px solid #ccc; /* Add a border */\n"
"    color: #333333; /* Set the color of the text to dark */\n"
"}\n"
""));
        update_button = new QPushButton(tabb_2);
        update_button->setObjectName(QStringLiteral("update_button"));
        update_button->setGeometry(QRect(180, 290, 171, 41));
        update_button->setCursor(QCursor(Qt::PointingHandCursor));
        update_button->setStyleSheet(QLatin1String("QPushButton{color: rgb(107, 189, 171);\n"
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
        tabWidget->addTab(tabb_2, QString());
        stat = new QPushButton(frame_3);
        stat->setObjectName(QStringLiteral("stat"));
        stat->setGeometry(QRect(650, 720, 291, 71));
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
        tableView_3 = new QTableView(frame_3);
        tableView_3->setObjectName(QStringLiteral("tableView_3"));
        tableView_3->setGeometry(QRect(550, 510, 491, 271));
        tableView_3->setStyleSheet(QStringLiteral("background:rgb(3, 43, 67);"));
        clear_list = new QPushButton(frame_3);
        clear_list->setObjectName(QStringLiteral("clear_list"));
        clear_list->setGeometry(QRect(810, 420, 201, 71));
        clear_list->setCursor(QCursor(Qt::PointingHandCursor));
        clear_list->setStyleSheet(QLatin1String("QPushButton{color: rgb(107, 189, 171);\n"
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
        label_16 = new QLabel(frame_3);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(690, 740, 61, 31));
        label_16->setStyleSheet(QLatin1String("image:url(:/Dark_ones /stat.png);\n"
"background:transparent;"));
        tabb = new QTableView(frame_3);
        tabb->setObjectName(QStringLiteral("tabb"));
        tabb->setGeometry(QRect(550, 190, 491, 271));
        tabb->setStyleSheet(QLatin1String("background:rgb(131, 179, 216);\n"
"color:black;"));
        add_button->raise();
        search_lineEdit->raise();
        label_3->raise();
        search_button->raise();
        Generate_PDF->raise();
        label_15->raise();
        label_9->raise();
        label_8->raise();
        label_18->raise();
        sort_button->raise();
        tabWidget->raise();
        tableView_3->raise();
        stat->raise();
        label_16->raise();
        tabb->raise();
        pushButton_2->raise();
        label_14->raise();
        clear_list->raise();
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 356, 61, 41));
        label->setStyleSheet(QLatin1String("image:url(:/Light_ones/guest-star.png);\n"
"background:transparent;\n"
"border:0px;"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 404, 171, 91));
        label_2->setStyleSheet(QLatin1String("image:url(:/Light_ones/un-salaire.png);\n"
"background:transparent;\n"
"border:0px;"));
        label_4 = new QLabel(frame);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(68, 511, 31, 41));
        label_4->setStyleSheet(QLatin1String("\n"
"image:url(:/Light_ones/icons8-microphone-2-50.png);\n"
"background:transparent;\n"
"border:0px;"));
        label_6 = new QLabel(frame);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(70, 264, 31, 41));
        label_6->setStyleSheet(QLatin1String("image:url(:/Light_ones/tv_light.png);\n"
"background:transparent;\n"
"border:0px;"));
        label_7 = new QLabel(frame);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(68, 179, 41, 51));
        label_7->setStyleSheet(QLatin1String("image:url(:/Light_ones/utli_light.png);\n"
"background:transparent;\n"
"border:0px;"));
        label_17 = new QLabel(frame);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(60, 756, 51, 31));
        label_17->setStyleSheet(QStringLiteral("image:url(:/Light_ones/logout.png)"));
        logout = new QPushButton(frame);
        logout->setObjectName(QStringLiteral("logout"));
        logout->setGeometry(QRect(124, 756, 93, 28));
        logout->setStyleSheet(QLatin1String("color:white;\n"
"border: 0px solid white;\n"
"background:transparent;\n"
" border-radius: 10px;\n"
"font: 75 12pt \"8514oem\";"));
        label_13 = new QLabel(frame);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setEnabled(false);
        label_13->setGeometry(QRect(170, 256, 91, 60));
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
        shows = new QPushButton(frame);
        shows->setObjectName(QStringLiteral("shows"));
        shows->setGeometry(QRect(20, 256, 281, 71));
        shows->setCursor(QCursor(Qt::PointingHandCursor));
        shows->setStyleSheet(QLatin1String("QPushButton{color: transparent;\n"
"background : transparent;\n"
"\n"
"}"));
        Sponsors = new QPushButton(frame);
        Sponsors->setObjectName(QStringLiteral("Sponsors"));
        Sponsors->setGeometry(QRect(20, 416, 281, 71));
        Sponsors->setCursor(QCursor(Qt::PointingHandCursor));
        Sponsors->setStyleSheet(QLatin1String("QPushButton{color: transparent;\n"
"background : transparent;\n"
"\n"
"}"));
        guests = new QPushButton(frame);
        guests->setObjectName(QStringLiteral("guests"));
        guests->setGeometry(QRect(20, 336, 281, 71));
        guests->setCursor(QCursor(Qt::PointingHandCursor));
        guests->setStyleSheet(QLatin1String("QPushButton{color: transparent;\n"
"background : transparent;\n"
"\n"
"}"));
        equipement = new QPushButton(frame);
        equipement->setObjectName(QStringLiteral("equipement"));
        equipement->setGeometry(QRect(20, 506, 281, 71));
        equipement->setCursor(QCursor(Qt::PointingHandCursor));
        equipement->setStyleSheet(QLatin1String("QPushButton{color: transparent;\n"
"background : transparent;\n"
"\n"
"}"));
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
        label_17->raise();
        logout->raise();
        label_13->raise();
        shows->raise();
        Sponsors->raise();
        guests->raise();
        equipement->raise();
        EmployeeMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(EmployeeMainWindow);
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
        EmployeeMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(EmployeeMainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        EmployeeMainWindow->setStatusBar(statusbar);

        menubar->addAction(menuCreate->menuAction());
        menubar->addAction(menuRead->menuAction());
        menubar->addAction(menuupdate->menuAction());
        menubar->addAction(menudelete->menuAction());
        menudelete->addSeparator();
        menudelete->addSeparator();
        menudelete->addSeparator();

        retranslateUi(EmployeeMainWindow);
        QObject::connect(search_button, SIGNAL(pressed()), search_button, SLOT(showMenu()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(EmployeeMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *EmployeeMainWindow)
    {
        EmployeeMainWindow->setWindowTitle(QApplication::translate("EmployeeMainWindow", "MainWindow", Q_NULLPTR));
        pushButton->setText(QApplication::translate("EmployeeMainWindow", "Employees", Q_NULLPTR));
        label_10->setText(QApplication::translate("EmployeeMainWindow", "           Sponsorships", Q_NULLPTR));
        label_12->setText(QApplication::translate("EmployeeMainWindow", "          Equipement", Q_NULLPTR));
        label_11->setText(QApplication::translate("EmployeeMainWindow", "         Guests", Q_NULLPTR));
        label_5->setText(QString());
        label_3->setText(QApplication::translate("EmployeeMainWindow", "TextLabel", Q_NULLPTR));
        search_button->setText(QString());
        search_lineEdit->setText(QApplication::translate("EmployeeMainWindow", " type in your search", Q_NULLPTR));
        label_15->setText(QString());
        add_button->setText(QApplication::translate("EmployeeMainWindow", "     Add an employee", Q_NULLPTR));
        Generate_PDF->setText(QApplication::translate("EmployeeMainWindow", "   Generate PDF", Q_NULLPTR));
        label_9->setText(QString());
        pushButton_2->setText(QApplication::translate("EmployeeMainWindow", "    Show List", Q_NULLPTR));
        label_14->setText(QString());
        label_8->setText(QString());
        label_18->setText(QString());
        sort_button->setText(QApplication::translate("EmployeeMainWindow", "sort by ", Q_NULLPTR));
        label_19->setText(QApplication::translate("EmployeeMainWindow", "        ID", Q_NULLPTR));
        label_29->setText(QApplication::translate("EmployeeMainWindow", "    prenom", Q_NULLPTR));
        label_30->setText(QApplication::translate("EmployeeMainWindow", "       mail", Q_NULLPTR));
        label_31->setText(QApplication::translate("EmployeeMainWindow", "       role", Q_NULLPTR));
        label_32->setText(QApplication::translate("EmployeeMainWindow", "date_emb", Q_NULLPTR));
        label_34->setText(QApplication::translate("EmployeeMainWindow", "employee_id", Q_NULLPTR));
        ajouter->setText(QApplication::translate("EmployeeMainWindow", "Add", Q_NULLPTR));
        updatebutton->setText(QString());
        clear_fields_add->setText(QString());
        label_36->setText(QApplication::translate("EmployeeMainWindow", "datenai", Q_NULLPTR));
        date_embauche_lineEdit->setText(QString());
        id_lineEdit->setText(QString());
        mail_lineEdit->setText(QString());
        employee_id_lineEdit->setText(QApplication::translate("EmployeeMainWindow", "021dd", Q_NULLPTR));
        role_lineEdit->setText(QString());
        prenom_lineEdit->setText(QString());
        datenaissance_lineEdit->setText(QString());
        tel_lineEdit->setText(QString());
        label_37->setText(QApplication::translate("EmployeeMainWindow", "        tel", Q_NULLPTR));
        label_33->setText(QApplication::translate("EmployeeMainWindow", "password", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("EmployeeMainWindow", "add", Q_NULLPTR));
        label_35->setText(QApplication::translate("EmployeeMainWindow", "ID", Q_NULLPTR));
        id_lineEdit_delete->setText(QApplication::translate("EmployeeMainWindow", "......", Q_NULLPTR));
        label_38->setText(QApplication::translate("EmployeeMainWindow", "ID", Q_NULLPTR));
        delete_button->setText(QApplication::translate("EmployeeMainWindow", "Delete", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("EmployeeMainWindow", "Delete", Q_NULLPTR));
        list_all_button->setText(QApplication::translate("EmployeeMainWindow", "afficher tous les employes", Q_NULLPTR));
        clear_all_in_table->setText(QApplication::translate("EmployeeMainWindow", "supprimer tous les employes", Q_NULLPTR));
        label_49->setText(QApplication::translate("EmployeeMainWindow", "ID", Q_NULLPTR));
        label_50->setText(QApplication::translate("EmployeeMainWindow", "prenom", Q_NULLPTR));
        label_48->setText(QApplication::translate("EmployeeMainWindow", "    mail", Q_NULLPTR));
        label_51->setText(QApplication::translate("EmployeeMainWindow", "     Role", Q_NULLPTR));
        id_lineEdit_2->setText(QString());
        id_lineEdit_2->setPlaceholderText(QApplication::translate("EmployeeMainWindow", "...........", Q_NULLPTR));
        label_52->setText(QApplication::translate("EmployeeMainWindow", "  Tel", Q_NULLPTR));
        genre_lineEdit_2->setText(QString());
        genre_lineEdit_2->setPlaceholderText(QApplication::translate("EmployeeMainWindow", "...........", Q_NULLPTR));
        name_lineEdit_2->setText(QString());
        name_lineEdit_2->setPlaceholderText(QApplication::translate("EmployeeMainWindow", "...........", Q_NULLPTR));
        label_53->setText(QApplication::translate("EmployeeMainWindow", "Date of Recrut", Q_NULLPTR));
        type_lineEdit_2->setText(QString());
        type_lineEdit_2->setPlaceholderText(QApplication::translate("EmployeeMainWindow", "...........", Q_NULLPTR));
        date_lineEdit_2->setText(QString());
        date_lineEdit_2->setPlaceholderText(QApplication::translate("EmployeeMainWindow", "...........", Q_NULLPTR));
        label_54->setText(QApplication::translate("EmployeeMainWindow", "DOB", Q_NULLPTR));
        duree_lineEdit_2->setText(QString());
        duree_lineEdit_2->setPlaceholderText(QApplication::translate("EmployeeMainWindow", "...........", Q_NULLPTR));
        label_55->setText(QApplication::translate("EmployeeMainWindow", "password", Q_NULLPTR));
        host_lineEdit_2->setText(QString());
        host_lineEdit_2->setPlaceholderText(QApplication::translate("EmployeeMainWindow", "...........", Q_NULLPTR));
        nbviews_lineEdit_2->setText(QString());
        nbviews_lineEdit_2->setPlaceholderText(QApplication::translate("EmployeeMainWindow", "...........", Q_NULLPTR));
        update_button->setText(QApplication::translate("EmployeeMainWindow", "Update", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tabb_2), QApplication::translate("EmployeeMainWindow", "Update", Q_NULLPTR));
        stat->setText(QApplication::translate("EmployeeMainWindow", "stat", Q_NULLPTR));
        clear_list->setText(QApplication::translate("EmployeeMainWindow", "clear list", Q_NULLPTR));
        label_16->setText(QString());
        label->setText(QString());
        label_2->setText(QString());
        label_4->setText(QString());
        label_6->setText(QString());
        label_7->setText(QString());
        label_17->setText(QString());
        logout->setText(QApplication::translate("EmployeeMainWindow", "Log Out", Q_NULLPTR));
        label_13->setText(QApplication::translate("EmployeeMainWindow", "Shows", Q_NULLPTR));
        shows->setText(QApplication::translate("EmployeeMainWindow", "     Add a show", Q_NULLPTR));
        Sponsors->setText(QApplication::translate("EmployeeMainWindow", "     Add a show", Q_NULLPTR));
        guests->setText(QApplication::translate("EmployeeMainWindow", "     Add a show", Q_NULLPTR));
        equipement->setText(QApplication::translate("EmployeeMainWindow", "     Add a show", Q_NULLPTR));
        menuCreate->setTitle(QApplication::translate("EmployeeMainWindow", "Create ", Q_NULLPTR));
        menuRead->setTitle(QApplication::translate("EmployeeMainWindow", "Read", Q_NULLPTR));
        menuupdate->setTitle(QApplication::translate("EmployeeMainWindow", "Update", Q_NULLPTR));
        menudelete->setTitle(QApplication::translate("EmployeeMainWindow", "Delete ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class EmployeeMainWindow: public Ui_EmployeeMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPLOYEEMAINWINDOW_H
