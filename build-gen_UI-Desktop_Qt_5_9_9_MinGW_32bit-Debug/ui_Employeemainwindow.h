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
    QToolButton *toolButton_2;
    QLabel *label_15;
    QPushButton *add_button;
    QPushButton *Generate_PDF;
    QLabel *label_9;
    QPushButton *pushButton_2;
    QLabel *label_14;
    QLabel *label_16;
    QLabel *label_8;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_27;
    QLabel *label_28;
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
    QLabel *label_39;
    QLabel *label_40;
    QLabel *label_33;
    QLineEdit *passwordlineEdit;
    QWidget *tab_3;
    QLabel *label_35;
    QLineEdit *id_lineEdit_delete;
    QPushButton *delete_button;
    QLabel *label_38;
    QTableView *tableView;
    QWidget *tab_2;
    QTableView *tabb;
    QPushButton *list_all_button;
    QPushButton *clear_all_in_table;
    QPushButton *stat;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_17;
    QPushButton *pushButton_7;
    QLabel *label_13;
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
        EmployeeMainWindow->resize(1753, 969);
        EmployeeMainWindow->setStyleSheet(QLatin1String("QMainWindow {\n"
"    background: white;\n"
"}"));
        centralwidget = new QWidget(EmployeeMainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(210, 150, 1321, 821));
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
        pushButton->setGeometry(QRect(50, 140, 361, 61));
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
        label_10->setGeometry(QRect(40, 384, 300, 60));
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
        frame_3->setGeometry(QRect(299, 10, 991, 781));
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
        search_button->setGeometry(QRect(890, 190, 51, 41));
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
        search_lineEdit->setGeometry(QRect(680, 190, 251, 41));
        search_lineEdit->setStyleSheet(QLatin1String("border-radius:20px;\n"
"background:rgb(229, 229, 229);\n"
"color:#999999;\n"
"font: 8pt \"8514oem\";"));
        toolButton_2 = new QToolButton(frame_3);
        toolButton_2->setObjectName(QStringLiteral("toolButton_2"));
        toolButton_2->setGeometry(QRect(40, 190, 131, 51));
        toolButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        toolButton_2->setStyleSheet(QLatin1String("\n"
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
        label_15 = new QLabel(frame_3);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(390, 700, 91, 41));
        label_15->setStyleSheet(QLatin1String("QLabel{\n"
"image:url(:/Dark_ones /pdf.png);\n"
"background:transparent;\n"
"}\n"
""));
        add_button = new QPushButton(frame_3);
        add_button->setObjectName(QStringLiteral("add_button"));
        add_button->setGeometry(QRect(300, 20, 281, 71));
        add_button->setCursor(QCursor(Qt::PointingHandCursor));
        add_button->setStyleSheet(QLatin1String("QPushButton{color: rgb(107, 189, 171);\n"
"border-radius:20px;\n"
"border: 0px solid #ffba08;\n"
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
        Generate_PDF->setGeometry(QRect(400, 690, 231, 71));
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
        label_9->setGeometry(QRect(300, 20, 61, 61));
        label_9->setStyleSheet(QLatin1String("image:url(:/Dark_ones /plus.png);\n"
"background:transparent;"));
        pushButton_2 = new QPushButton(frame_3);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(0, 20, 291, 71));
        pushButton_2->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton_2->setStyleSheet(QLatin1String("QPushButton{\n"
"border-radius:20px;\n"
"border: 1px solid rgb(107, 189, 171);\n"
"font: 75 12pt \"8514oem\";\n"
"  background: rgb(107, 189, 171);\n"
"        color:white;\n"
"\n"
"}\n"
""));
        label_14 = new QLabel(frame_3);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(-10, 30, 111, 51));
        label_14->setStyleSheet(QLatin1String("image:url(:/Dark_ones /eye.png);\n"
"background:transparent;"));
        label_16 = new QLabel(frame_3);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(609, 40, 61, 31));
        label_16->setStyleSheet(QLatin1String("image:url(:/Dark_ones /stat.png);\n"
"background:transparent;"));
        label_8 = new QLabel(frame_3);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(30, 200, 71, 31));
        label_8->setStyleSheet(QLatin1String("image:url(:/Light_ones/filter.png);\n"
"background:transparent;"));
        label_20 = new QLabel(frame_3);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(850, 330, 161, 31));
        label_20->setStyleSheet(QLatin1String("image:url(:/Dark_ones /poubelle.png);\n"
"background:transparent;"));
        label_21 = new QLabel(frame_3);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(850, 330, 91, 31));
        label_21->setStyleSheet(QLatin1String("image:url(:/Dark_ones /ajour.png);\n"
"background:transparent;"));
        label_22 = new QLabel(frame_3);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(850, 390, 161, 31));
        label_22->setStyleSheet(QLatin1String("image:url(:/Dark_ones /poubelle.png);\n"
"background:transparent;"));
        label_23 = new QLabel(frame_3);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(850, 390, 91, 31));
        label_23->setStyleSheet(QLatin1String("image:url(:/Dark_ones /ajour.png);\n"
"background:transparent;"));
        label_24 = new QLabel(frame_3);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(850, 460, 161, 31));
        label_24->setStyleSheet(QLatin1String("image:url(:/Dark_ones /poubelle.png);\n"
"background:transparent;"));
        label_25 = new QLabel(frame_3);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(850, 460, 91, 31));
        label_25->setStyleSheet(QLatin1String("image:url(:/Dark_ones /ajour.png);\n"
"background:transparent;"));
        label_26 = new QLabel(frame_3);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(850, 530, 161, 31));
        label_26->setStyleSheet(QLatin1String("image:url(:/Dark_ones /poubelle.png);\n"
"background:transparent;"));
        label_27 = new QLabel(frame_3);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(850, 530, 91, 31));
        label_27->setStyleSheet(QLatin1String("image:url(:/Dark_ones /ajour.png);\n"
"background:transparent;"));
        label_28 = new QLabel(frame_3);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(870, 610, 81, 51));
        label_28->setStyleSheet(QLatin1String("image:url(:/Dark_ones /refresh.png);\n"
"background:transparent;"));
        label_18 = new QLabel(frame_3);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(870, 10, 131, 61));
        label_18->setStyleSheet(QLatin1String("image:url(:/Dark_ones /profile_dark.png);\n"
"background:transparent;"));
        sort_button = new QToolButton(frame_3);
        sort_button->setObjectName(QStringLiteral("sort_button"));
        sort_button->setGeometry(QRect(180, 190, 131, 51));
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
        tabWidget->setGeometry(QRect(10, 250, 851, 421));
        tabWidget->setStyleSheet(QLatin1String("color:black;\n"
"background:rgb(246, 194, 255);"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tab->setEnabled(true);
        label_19 = new QLabel(tab);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(100, 30, 56, 16));
        label_29 = new QLabel(tab);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(90, 90, 56, 16));
        label_30 = new QLabel(tab);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(90, 140, 56, 16));
        label_31 = new QLabel(tab);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(90, 200, 91, 16));
        label_32 = new QLabel(tab);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(370, 100, 111, 20));
        label_34 = new QLabel(tab);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setGeometry(QRect(40, 460, 91, 16));
        ajouter = new QPushButton(tab);
        ajouter->setObjectName(QStringLiteral("ajouter"));
        ajouter->setGeometry(QRect(140, 300, 201, 81));
        ajouter->setStyleSheet(QStringLiteral("color:rgb(75, 255, 10)"));
        updatebutton = new QPushButton(tab);
        updatebutton->setObjectName(QStringLiteral("updatebutton"));
        updatebutton->setGeometry(QRect(740, 310, 93, 28));
        clear_fields_add = new QPushButton(tab);
        clear_fields_add->setObjectName(QStringLiteral("clear_fields_add"));
        clear_fields_add->setGeometry(QRect(730, 360, 93, 28));
        label_36 = new QLabel(tab);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setGeometry(QRect(390, 160, 91, 16));
        date_embauche_lineEdit = new QLineEdit(tab);
        date_embauche_lineEdit->setObjectName(QStringLiteral("date_embauche_lineEdit"));
        date_embauche_lineEdit->setGeometry(QRect(540, 90, 151, 21));
        id_lineEdit = new QLineEdit(tab);
        id_lineEdit->setObjectName(QStringLiteral("id_lineEdit"));
        id_lineEdit->setGeometry(QRect(200, 30, 151, 21));
        id_lineEdit->setStyleSheet(QStringLiteral(""));
        mail_lineEdit = new QLineEdit(tab);
        mail_lineEdit->setObjectName(QStringLiteral("mail_lineEdit"));
        mail_lineEdit->setGeometry(QRect(190, 140, 141, 21));
        employee_id_lineEdit = new QLineEdit(tab);
        employee_id_lineEdit->setObjectName(QStringLiteral("employee_id_lineEdit"));
        employee_id_lineEdit->setGeometry(QRect(240, 460, 291, 21));
        role_lineEdit = new QLineEdit(tab);
        role_lineEdit->setObjectName(QStringLiteral("role_lineEdit"));
        role_lineEdit->setGeometry(QRect(170, 190, 121, 21));
        prenom_lineEdit = new QLineEdit(tab);
        prenom_lineEdit->setObjectName(QStringLiteral("prenom_lineEdit"));
        prenom_lineEdit->setGeometry(QRect(190, 80, 291, 21));
        datenaissance_lineEdit = new QLineEdit(tab);
        datenaissance_lineEdit->setObjectName(QStringLiteral("datenaissance_lineEdit"));
        datenaissance_lineEdit->setGeometry(QRect(530, 150, 291, 21));
        tel_lineEdit = new QLineEdit(tab);
        tel_lineEdit->setObjectName(QStringLiteral("tel_lineEdit"));
        tel_lineEdit->setGeometry(QRect(530, 30, 291, 21));
        label_37 = new QLabel(tab);
        label_37->setObjectName(QStringLiteral("label_37"));
        label_37->setGeometry(QRect(400, 40, 91, 16));
        label_39 = new QLabel(tab);
        label_39->setObjectName(QStringLiteral("label_39"));
        label_39->setGeometry(QRect(-30, 30, 56, 16));
        label_40 = new QLabel(tab);
        label_40->setObjectName(QStringLiteral("label_40"));
        label_40->setGeometry(QRect(-40, 70, 56, 16));
        label_33 = new QLabel(tab);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setGeometry(QRect(405, 206, 101, 20));
        passwordlineEdit = new QLineEdit(tab);
        passwordlineEdit->setObjectName(QStringLiteral("passwordlineEdit"));
        passwordlineEdit->setGeometry(QRect(540, 200, 113, 22));
        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        label_35 = new QLabel(tab_3);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setGeometry(QRect(100, 60, 56, 16));
        id_lineEdit_delete = new QLineEdit(tab_3);
        id_lineEdit_delete->setObjectName(QStringLiteral("id_lineEdit_delete"));
        id_lineEdit_delete->setGeometry(QRect(170, 60, 291, 21));
        id_lineEdit_delete->setStyleSheet(QStringLiteral(""));
        delete_button = new QPushButton(tab_3);
        delete_button->setObjectName(QStringLiteral("delete_button"));
        delete_button->setGeometry(QRect(560, 50, 93, 28));
        delete_button->setStyleSheet(QStringLiteral("color:rgb(255, 7, 19)"));
        label_38 = new QLabel(tab_3);
        label_38->setObjectName(QStringLiteral("label_38"));
        label_38->setGeometry(QRect(70, 30, 121, 16));
        tableView = new QTableView(tab_3);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(430, 100, 381, 281));
        tableView->setStyleSheet(QStringLiteral("background:rgb(3, 43, 67);"));
        tabWidget->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabb = new QTableView(tab_2);
        tabb->setObjectName(QStringLiteral("tabb"));
        tabb->setGeometry(QRect(70, 10, 731, 331));
        tabb->setStyleSheet(QStringLiteral("colour:rgb(131, 179, 216);"));
        list_all_button = new QPushButton(tab_2);
        list_all_button->setObjectName(QStringLiteral("list_all_button"));
        list_all_button->setGeometry(QRect(530, 360, 231, 28));
        list_all_button->setStyleSheet(QStringLiteral("color:rgb(19, 11, 255)"));
        clear_all_in_table = new QPushButton(tab_2);
        clear_all_in_table->setObjectName(QStringLiteral("clear_all_in_table"));
        clear_all_in_table->setGeometry(QRect(180, 360, 231, 28));
        clear_all_in_table->setStyleSheet(QStringLiteral("color:rgb(255, 0, 4)"));
        tabWidget->addTab(tab_2, QString());
        stat = new QPushButton(frame_3);
        stat->setObjectName(QStringLiteral("stat"));
        stat->setGeometry(QRect(150, 690, 231, 71));
        stat->setCursor(QCursor(Qt::PointingHandCursor));
        stat->setStyleSheet(QLatin1String("QPushButton{color:#D00000;\n"
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
        pushButton_2->raise();
        add_button->raise();
        search_lineEdit->raise();
        label_3->raise();
        search_button->raise();
        toolButton_2->raise();
        Generate_PDF->raise();
        label_15->raise();
        label_9->raise();
        label_14->raise();
        label_16->raise();
        label_8->raise();
        label_20->raise();
        label_21->raise();
        label_22->raise();
        label_23->raise();
        label_24->raise();
        label_25->raise();
        label_26->raise();
        label_27->raise();
        label_28->raise();
        label_18->raise();
        sort_button->raise();
        tabWidget->raise();
        stat->raise();
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 320, 61, 41));
        label->setStyleSheet(QLatin1String("image:url(:/Light_ones/guest-star.png);\n"
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
        label_6->setGeometry(QRect(70, 228, 31, 41));
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
        label_13->setEnabled(false);
        label_13->setGeometry(QRect(170, 220, 91, 60));
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
        pushButton_7->raise();
        label_13->raise();
        EmployeeMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(EmployeeMainWindow);
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
        toolButton_2->setText(QApplication::translate("EmployeeMainWindow", "    Filter", Q_NULLPTR));
        label_15->setText(QString());
        add_button->setText(QApplication::translate("EmployeeMainWindow", "     Add a employee", Q_NULLPTR));
        Generate_PDF->setText(QApplication::translate("EmployeeMainWindow", "   Generate PDF", Q_NULLPTR));
        label_9->setText(QString());
        pushButton_2->setText(QApplication::translate("EmployeeMainWindow", "    Show List", Q_NULLPTR));
        label_14->setText(QString());
        label_16->setText(QString());
        label_8->setText(QString());
        label_20->setText(QApplication::translate("EmployeeMainWindow", "TextLabel", Q_NULLPTR));
        label_21->setText(QString());
        label_22->setText(QApplication::translate("EmployeeMainWindow", "TextLabel", Q_NULLPTR));
        label_23->setText(QString());
        label_24->setText(QApplication::translate("EmployeeMainWindow", "TextLabel", Q_NULLPTR));
        label_25->setText(QString());
        label_26->setText(QApplication::translate("EmployeeMainWindow", "TextLabel", Q_NULLPTR));
        label_27->setText(QString());
        label_28->setText(QString());
        label_18->setText(QString());
        sort_button->setText(QApplication::translate("EmployeeMainWindow", "sort by ", Q_NULLPTR));
        label_19->setText(QApplication::translate("EmployeeMainWindow", "ID", Q_NULLPTR));
        label_29->setText(QApplication::translate("EmployeeMainWindow", "prenom", Q_NULLPTR));
        label_30->setText(QApplication::translate("EmployeeMainWindow", "mail", Q_NULLPTR));
        label_31->setText(QApplication::translate("EmployeeMainWindow", "role", Q_NULLPTR));
        label_32->setText(QApplication::translate("EmployeeMainWindow", "date_embauche", Q_NULLPTR));
        label_34->setText(QApplication::translate("EmployeeMainWindow", "employee_id", Q_NULLPTR));
        ajouter->setText(QApplication::translate("EmployeeMainWindow", "ajouter", Q_NULLPTR));
        updatebutton->setText(QString());
        clear_fields_add->setText(QString());
        label_36->setText(QApplication::translate("EmployeeMainWindow", "datenaissance", Q_NULLPTR));
        date_embauche_lineEdit->setText(QString());
        id_lineEdit->setText(QString());
        mail_lineEdit->setText(QString());
        employee_id_lineEdit->setText(QApplication::translate("EmployeeMainWindow", "021dd", Q_NULLPTR));
        role_lineEdit->setText(QString());
        prenom_lineEdit->setText(QString());
        datenaissance_lineEdit->setText(QString());
        tel_lineEdit->setText(QString());
        label_37->setText(QApplication::translate("EmployeeMainWindow", "tel", Q_NULLPTR));
        label_39->setText(QApplication::translate("EmployeeMainWindow", "ID", Q_NULLPTR));
        label_40->setText(QApplication::translate("EmployeeMainWindow", "name", Q_NULLPTR));
        label_33->setText(QApplication::translate("EmployeeMainWindow", "password", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("EmployeeMainWindow", "add", Q_NULLPTR));
        label_35->setText(QApplication::translate("EmployeeMainWindow", "ID", Q_NULLPTR));
        id_lineEdit_delete->setText(QApplication::translate("EmployeeMainWindow", "......", Q_NULLPTR));
        delete_button->setText(QApplication::translate("EmployeeMainWindow", "Delete", Q_NULLPTR));
        label_38->setText(QApplication::translate("EmployeeMainWindow", "enter l'id", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("EmployeeMainWindow", "Delete", Q_NULLPTR));
        list_all_button->setText(QApplication::translate("EmployeeMainWindow", "afficher tous les employes", Q_NULLPTR));
        clear_all_in_table->setText(QApplication::translate("EmployeeMainWindow", "supprimer tous les employes", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("EmployeeMainWindow", "affichage", Q_NULLPTR));
        stat->setText(QApplication::translate("EmployeeMainWindow", "stat", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QString());
        label_4->setText(QString());
        label_6->setText(QString());
        label_7->setText(QString());
        label_17->setText(QString());
        pushButton_7->setText(QApplication::translate("EmployeeMainWindow", "Log Out", Q_NULLPTR));
        label_13->setText(QApplication::translate("EmployeeMainWindow", "Shows", Q_NULLPTR));
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
