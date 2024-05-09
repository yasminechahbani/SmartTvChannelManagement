/********************************************************************************
** Form generated from reading UI file 'invitesmainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INVITESMAINWINDOW_H
#define UI_INVITESMAINWINDOW_H

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

class Ui_invitesMainWindow
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QPushButton *pushButton;
    QLabel *label_10;
    QLabel *label_12;
    QLabel *label_11;
    QLabel *label_13;
    QFrame *frame_4;
    QLabel *label_5;
    QFrame *frame_3;
    QLabel *label_3;
    QLabel *label_15;
    QPushButton *Generate_PDF;
    QPushButton *pushButton_list;
    QPushButton *pushButton_6;
    QLabel *label_14;
    QLabel *label_16;
    QLabel *label_18;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTableView *tableView;
    QLineEdit *lineEdit_search;
    QToolButton *toolButton;
    QWidget *tab_2;
    QLabel *label_27;
    QLineEdit *id_lineEdit;
    QLabel *label_30;
    QLineEdit *nom_lineEdit_2;
    QLabel *label_31;
    QLineEdit *prenom_lineEdit_3;
    QLabel *label_32;
    QLineEdit *sexe_lineEdit_4;
    QLabel *label_33;
    QLineEdit *metier_lineEdit_5;
    QLabel *label_34;
    QLabel *label_35;
    QLineEdit *date_lineEdit_6;
    QLineEdit *num_lineEdit_7;
    QComboBox *comboBox;
    QPushButton *pushButton_12;
    QWidget *tab_5;
    QLineEdit *supp_lineEdit;
    QLabel *label_28;
    QPushButton *pushButton_11;
    QPushButton *pushButton_3;
    QTableView *tableView_2;
    QTableView *notif;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_4;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_17;
    QPushButton *pushButton_7;
    QPushButton *employees;
    QPushButton *shows;
    QPushButton *Sponsors;
    QPushButton *equipement;
    QMenuBar *menubar;
    QMenu *menuCreate;
    QMenu *menuRead;
    QMenu *menuupdate;
    QMenu *menudelete;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *invitesMainWindow)
    {
        if (invitesMainWindow->objectName().isEmpty())
            invitesMainWindow->setObjectName(QStringLiteral("invitesMainWindow"));
        invitesMainWindow->resize(1422, 939);
        invitesMainWindow->setStyleSheet(QLatin1String("QMainWindow {\n"
"    background: white;\n"
"}"));
        centralwidget = new QWidget(invitesMainWindow);
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
        pushButton->setGeometry(QRect(20, 300, 361, 61));
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
        label_10->setGeometry(QRect(18, 384, 300, 60));
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
        label_12->setGeometry(QRect(28, 469, 300, 60));
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
        label_11->setGeometry(QRect(30, 220, 300, 60));
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
        label_13 = new QLabel(frame);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(20, 140, 300, 60));
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
"border: 0px solid white;\n"
"background:transparent;\n"
"/*background:#D9D9D9;*/\n"
"\n"
" border-radius: 10px;\n"
"\n"
"font: 75 20pt \"8514oem\";"));
        label_13->setFrameShape(QFrame::Panel);
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
        frame_3->setGeometry(QRect(310, 20, 991, 781));
        frame_3->setStyleSheet(QString::fromUtf8("/* background: #032B43; */\n"
"border: 0px;\n"
"/* background-color:#3F88C5; */\n"
"background-color: white;\n"
"color: black; /* Changer la couleur de l'\303\251criture en noir */\n"
"border-radius: 50px;\n"
""));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        label_3 = new QLabel(frame_3);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(-240, 480, 56, 16));
        label_3->setStyleSheet(QLatin1String("image: url(:/Light_ones/icons8-microphone-2-50.png);\n"
"background:transparent;\n"
"border:0px;"));
        label_15 = new QLabel(frame_3);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(30, 670, 91, 41));
        label_15->setStyleSheet(QLatin1String("QLabel{\n"
"image:url(:/Dark_ones /pdf.png);\n"
"background:transparent;\n"
"}\n"
""));
        Generate_PDF = new QPushButton(frame_3);
        Generate_PDF->setObjectName(QStringLiteral("Generate_PDF"));
        Generate_PDF->setGeometry(QRect(40, 660, 231, 71));
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
        pushButton_list = new QPushButton(frame_3);
        pushButton_list->setObjectName(QStringLiteral("pushButton_list"));
        pushButton_list->setGeometry(QRect(630, 400, 291, 71));
        pushButton_list->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_list->setStyleSheet(QLatin1String("QPushButton{color: rgb(107, 189, 171);\n"
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
        pushButton_6 = new QPushButton(frame_3);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(631, 700, 301, 71));
        pushButton_6->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_6->setStyleSheet(QLatin1String("QPushButton{color: rgb(107, 189, 171);\n"
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
        label_14 = new QLabel(frame_3);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(610, 410, 111, 51));
        label_14->setStyleSheet(QLatin1String("image:url(:/Dark_ones /eye.png);\n"
"background:transparent;"));
        label_16 = new QLabel(frame_3);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(650, 720, 61, 31));
        label_16->setStyleSheet(QLatin1String("image:url(:/Dark_ones /stat.png);\n"
"background:transparent;"));
        label_18 = new QLabel(frame_3);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(870, 10, 131, 61));
        label_18->setStyleSheet(QLatin1String("image:url(:/Dark_ones /profile_dark.png);\n"
"background:transparent;"));
        tabWidget = new QTabWidget(frame_3);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(40, 120, 531, 411));
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
        tableView = new QTableView(tab);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(20, 80, 471, 261));
        tableView->setStyleSheet(QLatin1String("background:rgb(131, 179, 216);\n"
"color:black;"));
        lineEdit_search = new QLineEdit(tab);
        lineEdit_search->setObjectName(QStringLiteral("lineEdit_search"));
        lineEdit_search->setGeometry(QRect(170, 20, 251, 41));
        lineEdit_search->setStyleSheet(QLatin1String("border-radius:20px;\n"
"background:rgb(229, 229, 229);\n"
"color:#999999;\n"
"font: 8pt \"8514oem\";"));
        toolButton = new QToolButton(tab);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setGeometry(QRect(400, 20, 51, 41));
        toolButton->setStyleSheet(QLatin1String("\n"
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
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        label_27 = new QLabel(tab_2);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(10, 30, 51, 31));
        label_27->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: rgb(217, 237, 255); /* Set the background color */\n"
"    border-radius: 3px; /* Adjust the radius as needed */\n"
"    padding: 3px; /* Adjust padding as needed */\n"
"color:rgb(3, 43, 67);\n"
"}"));
        id_lineEdit = new QLineEdit(tab_2);
        id_lineEdit->setObjectName(QStringLiteral("id_lineEdit"));
        id_lineEdit->setGeometry(QRect(80, 30, 161, 31));
        id_lineEdit->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: #f0f0f0; /* Set a very light background color */\n"
"    border-radius: 5px; /* Adjust the radius as needed */\n"
"    padding: 5px; /* Adjust padding as needed */\n"
"    border: 1px solid #ccc; /* Add a border */\n"
"    color: #333333; /* Set the color of the text to dark */\n"
"}\n"
""));
        label_30 = new QLabel(tab_2);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(280, 30, 51, 31));
        label_30->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: rgb(217, 237, 255); /* Set the background color */\n"
"    border-radius: 3px; /* Adjust the radius as needed */\n"
"    padding: 3px; /* Adjust padding as needed */\n"
"color:rgb(3, 43, 67);\n"
"}"));
        nom_lineEdit_2 = new QLineEdit(tab_2);
        nom_lineEdit_2->setObjectName(QStringLiteral("nom_lineEdit_2"));
        nom_lineEdit_2->setGeometry(QRect(350, 30, 161, 31));
        nom_lineEdit_2->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: #f0f0f0; /* Set a very light background color */\n"
"    border-radius: 5px; /* Adjust the radius as needed */\n"
"    padding: 5px; /* Adjust padding as needed */\n"
"    border: 1px solid #ccc; /* Add a border */\n"
"    color: #333333; /* Set the color of the text to dark */\n"
"}\n"
""));
        label_31 = new QLabel(tab_2);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(10, 100, 56, 31));
        label_31->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: rgb(217, 237, 255); /* Set the background color */\n"
"    border-radius: 3px; /* Adjust the radius as needed */\n"
"    padding: 3px; /* Adjust padding as needed */\n"
"color:rgb(3, 43, 67);\n"
"}"));
        prenom_lineEdit_3 = new QLineEdit(tab_2);
        prenom_lineEdit_3->setObjectName(QStringLiteral("prenom_lineEdit_3"));
        prenom_lineEdit_3->setGeometry(QRect(80, 100, 161, 31));
        prenom_lineEdit_3->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: #f0f0f0; /* Set a very light background color */\n"
"    border-radius: 5px; /* Adjust the radius as needed */\n"
"    padding: 5px; /* Adjust padding as needed */\n"
"    border: 1px solid #ccc; /* Add a border */\n"
"    color: #333333; /* Set the color of the text to dark */\n"
"}\n"
""));
        label_32 = new QLabel(tab_2);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(280, 100, 51, 31));
        label_32->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: rgb(217, 237, 255); /* Set the background color */\n"
"    border-radius: 3px; /* Adjust the radius as needed */\n"
"    padding: 3px; /* Adjust padding as needed */\n"
"color:rgb(3, 43, 67);\n"
"}"));
        sexe_lineEdit_4 = new QLineEdit(tab_2);
        sexe_lineEdit_4->setObjectName(QStringLiteral("sexe_lineEdit_4"));
        sexe_lineEdit_4->setGeometry(QRect(350, 100, 161, 31));
        sexe_lineEdit_4->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: #f0f0f0; /* Set a very light background color */\n"
"    border-radius: 5px; /* Adjust the radius as needed */\n"
"    padding: 5px; /* Adjust padding as needed */\n"
"    border: 1px solid #ccc; /* Add a border */\n"
"    color: #333333; /* Set the color of the text to dark */\n"
"}\n"
""));
        label_33 = new QLabel(tab_2);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setGeometry(QRect(10, 180, 56, 31));
        label_33->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: rgb(217, 237, 255); /* Set the background color */\n"
"    border-radius: 3px; /* Adjust the radius as needed */\n"
"    padding: 3px; /* Adjust padding as needed */\n"
"color:rgb(3, 43, 67);\n"
"}"));
        metier_lineEdit_5 = new QLineEdit(tab_2);
        metier_lineEdit_5->setObjectName(QStringLiteral("metier_lineEdit_5"));
        metier_lineEdit_5->setGeometry(QRect(80, 180, 161, 31));
        metier_lineEdit_5->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: #f0f0f0; /* Set a very light background color */\n"
"    border-radius: 5px; /* Adjust the radius as needed */\n"
"    padding: 5px; /* Adjust padding as needed */\n"
"    border: 1px solid #ccc; /* Add a border */\n"
"    color: #333333; /* Set the color of the text to dark */\n"
"}\n"
""));
        label_34 = new QLabel(tab_2);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setGeometry(QRect(280, 180, 56, 31));
        label_34->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: rgb(217, 237, 255); /* Set the background color */\n"
"    border-radius: 3px; /* Adjust the radius as needed */\n"
"    padding: 3px; /* Adjust padding as needed */\n"
"color:rgb(3, 43, 67);\n"
"}"));
        label_35 = new QLabel(tab_2);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setGeometry(QRect(120, 270, 56, 31));
        label_35->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: rgb(217, 237, 255); /* Set the background color */\n"
"    border-radius: 3px; /* Adjust the radius as needed */\n"
"    padding: 3px; /* Adjust padding as needed */\n"
"color:rgb(3, 43, 67);\n"
"}"));
        date_lineEdit_6 = new QLineEdit(tab_2);
        date_lineEdit_6->setObjectName(QStringLiteral("date_lineEdit_6"));
        date_lineEdit_6->setGeometry(QRect(350, 180, 161, 31));
        date_lineEdit_6->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: #f0f0f0; /* Set a very light background color */\n"
"    border-radius: 5px; /* Adjust the radius as needed */\n"
"    padding: 5px; /* Adjust padding as needed */\n"
"    border: 1px solid #ccc; /* Add a border */\n"
"    color: #333333; /* Set the color of the text to dark */\n"
"}\n"
""));
        num_lineEdit_7 = new QLineEdit(tab_2);
        num_lineEdit_7->setObjectName(QStringLiteral("num_lineEdit_7"));
        num_lineEdit_7->setGeometry(QRect(200, 270, 161, 31));
        num_lineEdit_7->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: #f0f0f0; /* Set a very light background color */\n"
"    border-radius: 5px; /* Adjust the radius as needed */\n"
"    padding: 5px; /* Adjust padding as needed */\n"
"    border: 1px solid #ccc; /* Add a border */\n"
"    color: #333333; /* Set the color of the text to dark */\n"
"}\n"
""));
        comboBox = new QComboBox(tab_2);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(830, 50, 81, 51));
        pushButton_12 = new QPushButton(tab_2);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setGeometry(QRect(210, 320, 121, 51));
        pushButton_12->setStyleSheet(QLatin1String("/* QPushButton style */\n"
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
        tabWidget->addTab(tab_2, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        supp_lineEdit = new QLineEdit(tab_5);
        supp_lineEdit->setObjectName(QStringLiteral("supp_lineEdit"));
        supp_lineEdit->setGeometry(QRect(170, 140, 221, 31));
        supp_lineEdit->setStyleSheet(QLatin1String("QLineEdit {\n"
"    background-color: #f0f0f0; /* Set a very light background color */\n"
"    border-radius: 5px; /* Adjust the radius as needed */\n"
"    padding: 5px; /* Adjust padding as needed */\n"
"    border: 1px solid #ccc; /* Add a border */\n"
"    color: #333333; /* Set the color of the text to dark */\n"
"}\n"
""));
        label_28 = new QLabel(tab_5);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(90, 140, 51, 31));
        label_28->setStyleSheet(QLatin1String("QLabel {\n"
"    background-color: rgb(217, 237, 255); /* Set the background color */\n"
"    border-radius: 3px; /* Adjust the radius as needed */\n"
"    padding: 3px; /* Adjust padding as needed */\n"
"color:rgb(3, 43, 67);\n"
"}"));
        tabWidget->addTab(tab_5, QString());
        pushButton_11 = new QPushButton(frame_3);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setGeometry(QRect(170, 570, 231, 71));
        pushButton_11->setStyleSheet(QLatin1String("QPushButton{color:#D00000;\n"
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
        pushButton_3 = new QPushButton(frame_3);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(310, 660, 231, 71));
        pushButton_3->setStyleSheet(QLatin1String("QPushButton{color:#D00000;\n"
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
        tableView_2 = new QTableView(frame_3);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setGeometry(QRect(580, 480, 391, 261));
        tableView_2->setStyleSheet(QStringLiteral("background:rgb(3,43,67);"));
        notif = new QTableView(frame_3);
        notif->setObjectName(QStringLiteral("notif"));
        notif->setGeometry(QRect(590, 150, 371, 301));
        notif->setStyleSheet(QStringLiteral("   background-color: rgb(217, 237, 255);"));
        notif->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        notif->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        pushButton_9 = new QPushButton(frame_3);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(340, 30, 261, 61));
        pushButton_9->setStyleSheet(QLatin1String("QPushButton{color: rgb(107, 189, 171);\n"
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
        pushButton_10 = new QPushButton(frame_3);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(630, 30, 261, 61));
        pushButton_10->setStyleSheet(QLatin1String("QPushButton{color: rgb(107, 189, 171);\n"
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
        pushButton_4 = new QPushButton(frame_3);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(40, 30, 261, 61));
        pushButton_4->setStyleSheet(QLatin1String("QPushButton{color: rgb(107, 189, 171);\n"
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
        notif->raise();
        tableView_2->raise();
        pushButton_6->raise();
        pushButton_list->raise();
        label_3->raise();
        Generate_PDF->raise();
        label_15->raise();
        label_14->raise();
        label_16->raise();
        label_18->raise();
        tabWidget->raise();
        pushButton_11->raise();
        pushButton_3->raise();
        pushButton_9->raise();
        pushButton_10->raise();
        pushButton_4->raise();
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 308, 61, 41));
        label->setStyleSheet(QLatin1String("image:url(:/Dark_ones /guest-star (1).png);\n"
"background:transparent;\n"
"border:0px;"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(0, 368, 171, 91));
        label_2->setStyleSheet(QLatin1String("image:url(:/Light_ones/un-salaire.png);\n"
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
        employees = new QPushButton(frame);
        employees->setObjectName(QStringLiteral("employees"));
        employees->setGeometry(QRect(20, 130, 281, 71));
        employees->setCursor(QCursor(Qt::PointingHandCursor));
        employees->setStyleSheet(QLatin1String("QPushButton{color: transparent;\n"
"background : transparent;\n"
"\n"
"}"));
        shows = new QPushButton(frame);
        shows->setObjectName(QStringLiteral("shows"));
        shows->setGeometry(QRect(20, 220, 281, 71));
        shows->setCursor(QCursor(Qt::PointingHandCursor));
        shows->setStyleSheet(QLatin1String("QPushButton{color: transparent;\n"
"background : transparent;\n"
"\n"
"}"));
        Sponsors = new QPushButton(frame);
        Sponsors->setObjectName(QStringLiteral("Sponsors"));
        Sponsors->setGeometry(QRect(20, 410, 281, 71));
        Sponsors->setCursor(QCursor(Qt::PointingHandCursor));
        Sponsors->setStyleSheet(QLatin1String("QPushButton{color: transparent;\n"
"background : transparent;\n"
"\n"
"}"));
        equipement = new QPushButton(frame);
        equipement->setObjectName(QStringLiteral("equipement"));
        equipement->setGeometry(QRect(20, 470, 281, 71));
        equipement->setCursor(QCursor(Qt::PointingHandCursor));
        equipement->setStyleSheet(QLatin1String("QPushButton{color: transparent;\n"
"background : transparent;\n"
"\n"
"}"));
        pushButton->raise();
        label_10->raise();
        label_12->raise();
        label_11->raise();
        label_13->raise();
        frame_4->raise();
        label->raise();
        label_2->raise();
        label_4->raise();
        label_6->raise();
        label_7->raise();
        frame_3->raise();
        label_17->raise();
        pushButton_7->raise();
        employees->raise();
        shows->raise();
        Sponsors->raise();
        equipement->raise();
        invitesMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(invitesMainWindow);
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
        invitesMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(invitesMainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        invitesMainWindow->setStatusBar(statusbar);

        menubar->addAction(menuCreate->menuAction());
        menubar->addAction(menuRead->menuAction());
        menubar->addAction(menuupdate->menuAction());
        menubar->addAction(menudelete->menuAction());
        menudelete->addSeparator();
        menudelete->addSeparator();
        menudelete->addSeparator();

        retranslateUi(invitesMainWindow);
        QObject::connect(toolButton, SIGNAL(pressed()), toolButton, SLOT(showMenu()));

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(invitesMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *invitesMainWindow)
    {
        invitesMainWindow->setWindowTitle(QApplication::translate("invitesMainWindow", "MainWindow", Q_NULLPTR));
        pushButton->setText(QApplication::translate("invitesMainWindow", "Guests", Q_NULLPTR));
        label_10->setText(QApplication::translate("invitesMainWindow", "           Sponsorships", Q_NULLPTR));
        label_12->setText(QApplication::translate("invitesMainWindow", "          Equipement", Q_NULLPTR));
        label_11->setText(QApplication::translate("invitesMainWindow", "          Shows", Q_NULLPTR));
        label_13->setText(QApplication::translate("invitesMainWindow", "           Employees ", Q_NULLPTR));
        label_5->setText(QString());
        label_3->setText(QApplication::translate("invitesMainWindow", "TextLabel", Q_NULLPTR));
        label_15->setText(QString());
        Generate_PDF->setText(QApplication::translate("invitesMainWindow", "   Generate PDF", Q_NULLPTR));
        pushButton_list->setText(QApplication::translate("invitesMainWindow", "notifications", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("invitesMainWindow", "stat", Q_NULLPTR));
        label_14->setText(QString());
        label_16->setText(QString());
        label_18->setText(QString());
        lineEdit_search->setText(QApplication::translate("invitesMainWindow", " type in your search", Q_NULLPTR));
        toolButton->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("invitesMainWindow", "afficher", Q_NULLPTR));
        label_27->setText(QApplication::translate("invitesMainWindow", "Id", Q_NULLPTR));
        label_30->setText(QApplication::translate("invitesMainWindow", "nom", Q_NULLPTR));
        label_31->setText(QApplication::translate("invitesMainWindow", "prenom", Q_NULLPTR));
        label_32->setText(QApplication::translate("invitesMainWindow", "sexe", Q_NULLPTR));
        label_33->setText(QApplication::translate("invitesMainWindow", "metier", Q_NULLPTR));
        label_34->setText(QApplication::translate("invitesMainWindow", "date", Q_NULLPTR));
        label_35->setText(QApplication::translate("invitesMainWindow", "num", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("invitesMainWindow", "femme", Q_NULLPTR)
         << QApplication::translate("invitesMainWindow", "homme", Q_NULLPTR)
        );
        pushButton_12->setText(QApplication::translate("invitesMainWindow", "clear", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("invitesMainWindow", "ajout", Q_NULLPTR));
        label_28->setText(QApplication::translate("invitesMainWindow", "Id", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("invitesMainWindow", "suppression", Q_NULLPTR));
        pushButton_11->setText(QApplication::translate("invitesMainWindow", "Calendrier", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("invitesMainWindow", "SMS", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("invitesMainWindow", "ajouter", Q_NULLPTR));
        pushButton_10->setText(QApplication::translate("invitesMainWindow", "supprimer", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("invitesMainWindow", "actualiser", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QString());
        label_4->setText(QString());
        label_6->setText(QString());
        label_7->setText(QString());
        label_17->setText(QString());
        pushButton_7->setText(QApplication::translate("invitesMainWindow", "Log Out", Q_NULLPTR));
        employees->setText(QApplication::translate("invitesMainWindow", "     Add a show", Q_NULLPTR));
        shows->setText(QApplication::translate("invitesMainWindow", "     Add a show", Q_NULLPTR));
        Sponsors->setText(QApplication::translate("invitesMainWindow", "     Add a show", Q_NULLPTR));
        equipement->setText(QApplication::translate("invitesMainWindow", "     Add a show", Q_NULLPTR));
        menuCreate->setTitle(QApplication::translate("invitesMainWindow", "Create ", Q_NULLPTR));
        menuRead->setTitle(QApplication::translate("invitesMainWindow", "Read", Q_NULLPTR));
        menuupdate->setTitle(QApplication::translate("invitesMainWindow", "Update", Q_NULLPTR));
        menudelete->setTitle(QApplication::translate("invitesMainWindow", "Delete ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class invitesMainWindow: public Ui_invitesMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INVITESMAINWINDOW_H
