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
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
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

class Ui_SponsorMainWindow
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
    QPushButton *search;
    QLineEdit *search_lineEdit;
    QToolButton *toolButton_2;
    QLabel *label_15;
    QPushButton *add_button;
    QPushButton *Generate_PDF;
    QLabel *label_9;
    QPushButton *pushButton_2;
    QPushButton *stat;
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
    QPushButton *sort;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label_19;
    QLabel *label_29;
    QLabel *label_30;
    QLabel *label_31;
    QLabel *label_32;
    QLabel *label_34;
    QPushButton *ajouter;
    QPushButton *clear_fields_add;
    QLineEdit *name_lineEdit;
    QLineEdit *id_lineEdit;
    QLineEdit *montant_lineEdit;
    QLineEdit *employee_id_lineEdit;
    QLineEdit *tempsaffichage_lineEdit;
    QLineEdit *etatcontrat_lineEdit;
    QLineEdit *nb_totalaffichage_lineEdit;
    QLabel *label_37;
    QWidget *tab_5;
    QLineEdit *emailLineEdit;
    QLineEdit *passwordLineEdit;
    QLabel *label_43;
    QLabel *label_44;
    QLabel *label_45;
    QLabel *label_46;
    QLineEdit *recipientLineEdit;
    QLineEdit *contentTextEdit;
    QLabel *label_47;
    QLineEdit *subjectLineEdit;
    QPushButton *sendButton;
    QWidget *tab_4;
    QPushButton *update;
    QLineEdit *etatcontrat_lineEdit_2;
    QLabel *label_33;
    QLabel *label_39;
    QLabel *label_36;
    QLineEdit *montant_lineEdit_2;
    QLabel *label_40;
    QLabel *label_41;
    QLineEdit *tempsaffichage_lineEdit_2;
    QLineEdit *name_lineEdit_2;
    QLabel *label_42;
    QLineEdit *nb_totalaffichage_lineEdit_2;
    QLineEdit *id_lineEdit_2;
    QPushButton *ajouter_2;
    QWidget *tab_3;
    QLabel *label_35;
    QLineEdit *id_lineEdit_delete;
    QPushButton *delete_button;
    QLabel *label_38;
    QTableView *tableView;
    QWidget *tab_2;
    QTableView *sponsor_tab;
    QPushButton *clear_all_in_table;
    QPushButton *list_all_button;
    QWidget *tab_16;
    QCalendarWidget *calendarWidget;
    QLabel *label_48;
    QLabel *label_49;
    QPushButton *SendButton;
    QDateTimeEdit *StartTimeEdit;
    QDateTimeEdit *EndTimeEdit;
    QPushButton *jgcugedu;
    QPushButton *sms;
    QPushButton *excel;
    QComboBox *sortComboBox;
    QPushButton *fr;
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

    void setupUi(QMainWindow *SponsorMainWindow)
    {
        if (SponsorMainWindow->objectName().isEmpty())
            SponsorMainWindow->setObjectName(QStringLiteral("SponsorMainWindow"));
        SponsorMainWindow->resize(1753, 969);
        SponsorMainWindow->setStyleSheet(QLatin1String("QMainWindow {\n"
"    background: white;\n"
"}"));
        centralwidget = new QWidget(SponsorMainWindow);
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
        pushButton->setGeometry(QRect(40, 380, 361, 61));
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
        label_10->setGeometry(QRect(40, 230, 300, 60));
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
        search = new QPushButton(frame_3);
        search->setObjectName(QStringLiteral("search"));
        search->setGeometry(QRect(890, 190, 51, 41));
        search->setStyleSheet(QLatin1String("\n"
"    QPushButton {\n"
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
"    QPushButton::menu-indicator {\n"
"        image:none;\n"
"    }\n"
""));
        search_lineEdit = new QLineEdit(frame_3);
        search_lineEdit->setObjectName(QStringLiteral("search_lineEdit"));
        search_lineEdit->setEnabled(true);
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
        label_15->setGeometry(QRect(280, 700, 91, 41));
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
        Generate_PDF->setGeometry(QRect(280, 690, 231, 71));
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
        stat = new QPushButton(frame_3);
        stat->setObjectName(QStringLiteral("stat"));
        stat->setGeometry(QRect(590, 20, 301, 71));
        stat->setCursor(QCursor(Qt::PointingHandCursor));
        stat->setStyleSheet(QLatin1String("QPushButton{color: rgb(107, 189, 171);\n"
"border-radius:20px;\n"
"border: 0px solid #ffba08;\n"
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
        sort = new QPushButton(frame_3);
        sort->setObjectName(QStringLiteral("sort"));
        sort->setGeometry(QRect(180, 190, 131, 51));
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
        tabWidget->setEnabled(true);
        tabWidget->setGeometry(QRect(0, 260, 851, 431));
        tabWidget->setStyleSheet(QLatin1String("color:black;\n"
"background:transparent;"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        label_19 = new QLabel(tab);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(50, 30, 56, 16));
        label_29 = new QLabel(tab);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(40, 70, 56, 16));
        label_30 = new QLabel(tab);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(40, 110, 56, 16));
        label_31 = new QLabel(tab);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(20, 150, 111, 20));
        label_32 = new QLabel(tab);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(30, 230, 91, 16));
        label_34 = new QLabel(tab);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setGeometry(QRect(40, 460, 91, 16));
        ajouter = new QPushButton(tab);
        ajouter->setObjectName(QStringLiteral("ajouter"));
        ajouter->setGeometry(QRect(450, 140, 93, 28));
        clear_fields_add = new QPushButton(tab);
        clear_fields_add->setObjectName(QStringLiteral("clear_fields_add"));
        clear_fields_add->setGeometry(QRect(450, 70, 93, 28));
        name_lineEdit = new QLineEdit(tab);
        name_lineEdit->setObjectName(QStringLiteral("name_lineEdit"));
        name_lineEdit->setGeometry(QRect(160, 70, 291, 21));
        id_lineEdit = new QLineEdit(tab);
        id_lineEdit->setObjectName(QStringLiteral("id_lineEdit"));
        id_lineEdit->setGeometry(QRect(160, 30, 291, 21));
        id_lineEdit->setStyleSheet(QStringLiteral(""));
        montant_lineEdit = new QLineEdit(tab);
        montant_lineEdit->setObjectName(QStringLiteral("montant_lineEdit"));
        montant_lineEdit->setGeometry(QRect(160, 110, 291, 21));
        employee_id_lineEdit = new QLineEdit(tab);
        employee_id_lineEdit->setObjectName(QStringLiteral("employee_id_lineEdit"));
        employee_id_lineEdit->setGeometry(QRect(160, 460, 291, 21));
        tempsaffichage_lineEdit = new QLineEdit(tab);
        tempsaffichage_lineEdit->setObjectName(QStringLiteral("tempsaffichage_lineEdit"));
        tempsaffichage_lineEdit->setGeometry(QRect(160, 150, 291, 21));
        etatcontrat_lineEdit = new QLineEdit(tab);
        etatcontrat_lineEdit->setObjectName(QStringLiteral("etatcontrat_lineEdit"));
        etatcontrat_lineEdit->setGeometry(QRect(160, 230, 291, 21));
        nb_totalaffichage_lineEdit = new QLineEdit(tab);
        nb_totalaffichage_lineEdit->setObjectName(QStringLiteral("nb_totalaffichage_lineEdit"));
        nb_totalaffichage_lineEdit->setGeometry(QRect(160, 190, 291, 21));
        label_37 = new QLabel(tab);
        label_37->setObjectName(QStringLiteral("label_37"));
        label_37->setGeometry(QRect(30, 190, 101, 20));
        tabWidget->addTab(tab, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        emailLineEdit = new QLineEdit(tab_5);
        emailLineEdit->setObjectName(QStringLiteral("emailLineEdit"));
        emailLineEdit->setGeometry(QRect(30, 70, 291, 21));
        emailLineEdit->setStyleSheet(QStringLiteral(""));
        passwordLineEdit = new QLineEdit(tab_5);
        passwordLineEdit->setObjectName(QStringLiteral("passwordLineEdit"));
        passwordLineEdit->setGeometry(QRect(30, 130, 291, 21));
        label_43 = new QLabel(tab_5);
        label_43->setObjectName(QStringLiteral("label_43"));
        label_43->setGeometry(QRect(40, 40, 56, 16));
        label_44 = new QLabel(tab_5);
        label_44->setObjectName(QStringLiteral("label_44"));
        label_44->setGeometry(QRect(40, 100, 56, 16));
        label_45 = new QLabel(tab_5);
        label_45->setObjectName(QStringLiteral("label_45"));
        label_45->setGeometry(QRect(40, 160, 56, 16));
        label_46 = new QLabel(tab_5);
        label_46->setObjectName(QStringLiteral("label_46"));
        label_46->setGeometry(QRect(40, 240, 56, 16));
        recipientLineEdit = new QLineEdit(tab_5);
        recipientLineEdit->setObjectName(QStringLiteral("recipientLineEdit"));
        recipientLineEdit->setGeometry(QRect(30, 190, 291, 21));
        contentTextEdit = new QLineEdit(tab_5);
        contentTextEdit->setObjectName(QStringLiteral("contentTextEdit"));
        contentTextEdit->setGeometry(QRect(20, 270, 291, 21));
        label_47 = new QLabel(tab_5);
        label_47->setObjectName(QStringLiteral("label_47"));
        label_47->setGeometry(QRect(40, 310, 56, 16));
        subjectLineEdit = new QLineEdit(tab_5);
        subjectLineEdit->setObjectName(QStringLiteral("subjectLineEdit"));
        subjectLineEdit->setGeometry(QRect(10, 340, 291, 21));
        sendButton = new QPushButton(tab_5);
        sendButton->setObjectName(QStringLiteral("sendButton"));
        sendButton->setGeometry(QRect(230, 160, 93, 28));
        tabWidget->addTab(tab_5, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        update = new QPushButton(tab_4);
        update->setObjectName(QStringLiteral("update"));
        update->setGeometry(QRect(410, 200, 93, 28));
        etatcontrat_lineEdit_2 = new QLineEdit(tab_4);
        etatcontrat_lineEdit_2->setObjectName(QStringLiteral("etatcontrat_lineEdit_2"));
        etatcontrat_lineEdit_2->setGeometry(QRect(160, 240, 291, 21));
        label_33 = new QLabel(tab_4);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setGeometry(QRect(20, 160, 111, 20));
        label_39 = new QLabel(tab_4);
        label_39->setObjectName(QStringLiteral("label_39"));
        label_39->setGeometry(QRect(30, 200, 101, 20));
        label_36 = new QLabel(tab_4);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setGeometry(QRect(50, 40, 56, 16));
        montant_lineEdit_2 = new QLineEdit(tab_4);
        montant_lineEdit_2->setObjectName(QStringLiteral("montant_lineEdit_2"));
        montant_lineEdit_2->setGeometry(QRect(160, 120, 291, 21));
        label_40 = new QLabel(tab_4);
        label_40->setObjectName(QStringLiteral("label_40"));
        label_40->setGeometry(QRect(30, 240, 91, 16));
        label_41 = new QLabel(tab_4);
        label_41->setObjectName(QStringLiteral("label_41"));
        label_41->setGeometry(QRect(40, 80, 56, 16));
        tempsaffichage_lineEdit_2 = new QLineEdit(tab_4);
        tempsaffichage_lineEdit_2->setObjectName(QStringLiteral("tempsaffichage_lineEdit_2"));
        tempsaffichage_lineEdit_2->setGeometry(QRect(160, 160, 291, 21));
        name_lineEdit_2 = new QLineEdit(tab_4);
        name_lineEdit_2->setObjectName(QStringLiteral("name_lineEdit_2"));
        name_lineEdit_2->setGeometry(QRect(160, 80, 291, 21));
        label_42 = new QLabel(tab_4);
        label_42->setObjectName(QStringLiteral("label_42"));
        label_42->setGeometry(QRect(40, 120, 56, 16));
        nb_totalaffichage_lineEdit_2 = new QLineEdit(tab_4);
        nb_totalaffichage_lineEdit_2->setObjectName(QStringLiteral("nb_totalaffichage_lineEdit_2"));
        nb_totalaffichage_lineEdit_2->setGeometry(QRect(160, 200, 291, 21));
        id_lineEdit_2 = new QLineEdit(tab_4);
        id_lineEdit_2->setObjectName(QStringLiteral("id_lineEdit_2"));
        id_lineEdit_2->setGeometry(QRect(160, 40, 291, 21));
        id_lineEdit_2->setStyleSheet(QStringLiteral(""));
        ajouter_2 = new QPushButton(tab_4);
        ajouter_2->setObjectName(QStringLiteral("ajouter_2"));
        ajouter_2->setGeometry(QRect(420, 160, 93, 28));
        tabWidget->addTab(tab_4, QString());
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
        delete_button->setGeometry(QRect(510, 60, 93, 28));
        label_38 = new QLabel(tab_3);
        label_38->setObjectName(QStringLiteral("label_38"));
        label_38->setGeometry(QRect(70, 30, 121, 16));
        tableView = new QTableView(tab_3);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(400, 0, 431, 391));
        tableView->setStyleSheet(QStringLiteral("background:rgb(3, 43, 67);"));
        tabWidget->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        sponsor_tab = new QTableView(tab_2);
        sponsor_tab->setObjectName(QStringLiteral("sponsor_tab"));
        sponsor_tab->setGeometry(QRect(70, 10, 731, 331));
        sponsor_tab->setStyleSheet(QLatin1String("\n"
"colour:rgb(131, 179, 216);\n"
""));
        clear_all_in_table = new QPushButton(tab_2);
        clear_all_in_table->setObjectName(QStringLiteral("clear_all_in_table"));
        clear_all_in_table->setGeometry(QRect(180, 360, 231, 28));
        list_all_button = new QPushButton(tab_2);
        list_all_button->setObjectName(QStringLiteral("list_all_button"));
        list_all_button->setGeometry(QRect(540, 360, 93, 28));
        tabWidget->addTab(tab_2, QString());
        tab_16 = new QWidget();
        tab_16->setObjectName(QStringLiteral("tab_16"));
        calendarWidget = new QCalendarWidget(tab_16);
        calendarWidget->setObjectName(QStringLiteral("calendarWidget"));
        calendarWidget->setGeometry(QRect(250, 30, 581, 371));
        label_48 = new QLabel(tab_16);
        label_48->setObjectName(QStringLiteral("label_48"));
        label_48->setGeometry(QRect(50, 90, 41, 20));
        label_49 = new QLabel(tab_16);
        label_49->setObjectName(QStringLiteral("label_49"));
        label_49->setGeometry(QRect(60, 130, 41, 20));
        SendButton = new QPushButton(tab_16);
        SendButton->setObjectName(QStringLiteral("SendButton"));
        SendButton->setGeometry(QRect(60, 190, 101, 61));
        SendButton->setCursor(QCursor(Qt::PointingHandCursor));
        SendButton->setStyleSheet(QLatin1String("QPushButton{\n"
"border-radius:20px;\n"
"border: 1px solid rgb(107, 189, 171);\n"
"font: 75 12pt \"8514oem\";\n"
"  background: rgb(107, 189, 171);\n"
"        color:white;\n"
"\n"
"}\n"
""));
        StartTimeEdit = new QDateTimeEdit(tab_16);
        StartTimeEdit->setObjectName(QStringLiteral("StartTimeEdit"));
        StartTimeEdit->setGeometry(QRect(100, 90, 194, 22));
        EndTimeEdit = new QDateTimeEdit(tab_16);
        EndTimeEdit->setObjectName(QStringLiteral("EndTimeEdit"));
        EndTimeEdit->setGeometry(QRect(100, 130, 194, 22));
        tabWidget->addTab(tab_16, QString());
        jgcugedu = new QPushButton(frame_3);
        jgcugedu->setObjectName(QStringLiteral("jgcugedu"));
        jgcugedu->setGeometry(QRect(760, 690, 251, 71));
        jgcugedu->setCursor(QCursor(Qt::PointingHandCursor));
        jgcugedu->setStyleSheet(QLatin1String("QPushButton{\n"
"border-radius:20px;\n"
"border: 1px solid rgb(107, 189, 171);\n"
"font: 75 12pt \"8514oem\";\n"
"  background: rgb(107, 189, 171);\n"
"        color:white;\n"
"\n"
"}\n"
""));
        sms = new QPushButton(frame_3);
        sms->setObjectName(QStringLiteral("sms"));
        sms->setGeometry(QRect(30, 690, 221, 61));
        sms->setCursor(QCursor(Qt::PointingHandCursor));
        sms->setStyleSheet(QLatin1String("QPushButton{\n"
"border-radius:20px;\n"
"border: 1px solid rgb(107, 189, 171);\n"
"font: 75 12pt \"8514oem\";\n"
"  background: rgb(107, 189, 171);\n"
"        color:white;\n"
"\n"
"}\n"
""));
        excel = new QPushButton(frame_3);
        excel->setObjectName(QStringLiteral("excel"));
        excel->setGeometry(QRect(520, 690, 231, 71));
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
        sortComboBox = new QComboBox(frame_3);
        sortComboBox->setObjectName(QStringLiteral("sortComboBox"));
        sortComboBox->setGeometry(QRect(350, 200, 73, 22));
        sortComboBox->setStyleSheet(QLatin1String("color :black;\n"
""));
        fr = new QPushButton(frame_3);
        fr->setObjectName(QStringLiteral("fr"));
        fr->setGeometry(QRect(520, 190, 131, 51));
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
        stat->raise();
        pushButton_2->raise();
        add_button->raise();
        search_lineEdit->raise();
        label_3->raise();
        search->raise();
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
        sort->raise();
        tabWidget->raise();
        jgcugedu->raise();
        sms->raise();
        excel->raise();
        sortComboBox->raise();
        fr->raise();
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 320, 61, 41));
        label->setStyleSheet(QLatin1String("image:url(:/Light_ones/guest-star.png);\n"
"background:transparent;\n"
"border:0px;"));
        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 370, 171, 91));
        label_2->setStyleSheet(QLatin1String("image:url(:/Dark_ones /un-salaire (1).png);\n"
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
        label_6->setGeometry(QRect(70, 240, 31, 41));
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
        label_13->setGeometry(QRect(150, 140, 300, 60));
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
        SponsorMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SponsorMainWindow);
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
        SponsorMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(SponsorMainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        SponsorMainWindow->setStatusBar(statusbar);

        menubar->addAction(menuCreate->menuAction());
        menubar->addAction(menuRead->menuAction());
        menubar->addAction(menuupdate->menuAction());
        menubar->addAction(menudelete->menuAction());
        menudelete->addSeparator();
        menudelete->addSeparator();
        menudelete->addSeparator();

        retranslateUi(SponsorMainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(SponsorMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *SponsorMainWindow)
    {
        SponsorMainWindow->setWindowTitle(QApplication::translate("SponsorMainWindow", "MainWindow", Q_NULLPTR));
        pushButton->setText(QApplication::translate("SponsorMainWindow", "Sponsors", Q_NULLPTR));
        label_10->setText(QApplication::translate("SponsorMainWindow", "           Shows", Q_NULLPTR));
        label_12->setText(QApplication::translate("SponsorMainWindow", "          Equipement", Q_NULLPTR));
        label_11->setText(QApplication::translate("SponsorMainWindow", "         Guests", Q_NULLPTR));
        label_5->setText(QString());
        label_3->setText(QApplication::translate("SponsorMainWindow", "TextLabel", Q_NULLPTR));
        search->setText(QString());
        search_lineEdit->setText(QString());
        search_lineEdit->setPlaceholderText(QApplication::translate("SponsorMainWindow", " type in your search", Q_NULLPTR));
        toolButton_2->setText(QApplication::translate("SponsorMainWindow", "    Filter", Q_NULLPTR));
        label_15->setText(QString());
        add_button->setText(QApplication::translate("SponsorMainWindow", "     Add a sponsor", Q_NULLPTR));
        Generate_PDF->setText(QApplication::translate("SponsorMainWindow", "   Generate PDF", Q_NULLPTR));
        label_9->setText(QString());
        pushButton_2->setText(QApplication::translate("SponsorMainWindow", "    Sponsor list", Q_NULLPTR));
        stat->setText(QApplication::translate("SponsorMainWindow", "Stats", Q_NULLPTR));
        label_14->setText(QString());
        label_16->setText(QString());
        label_8->setText(QString());
        label_20->setText(QApplication::translate("SponsorMainWindow", "TextLabel", Q_NULLPTR));
        label_21->setText(QString());
        label_22->setText(QApplication::translate("SponsorMainWindow", "TextLabel", Q_NULLPTR));
        label_23->setText(QString());
        label_24->setText(QApplication::translate("SponsorMainWindow", "TextLabel", Q_NULLPTR));
        label_25->setText(QString());
        label_26->setText(QApplication::translate("SponsorMainWindow", "TextLabel", Q_NULLPTR));
        label_27->setText(QString());
        label_28->setText(QString());
        label_18->setText(QString());
        sort->setText(QApplication::translate("SponsorMainWindow", "sort by ", Q_NULLPTR));
        label_19->setText(QApplication::translate("SponsorMainWindow", "ID", Q_NULLPTR));
        label_29->setText(QApplication::translate("SponsorMainWindow", "name", Q_NULLPTR));
        label_30->setText(QApplication::translate("SponsorMainWindow", "price", Q_NULLPTR));
        label_31->setText(QApplication::translate("SponsorMainWindow", "viewing time ", Q_NULLPTR));
        label_32->setText(QApplication::translate("SponsorMainWindow", "contract state", Q_NULLPTR));
        label_34->setText(QApplication::translate("SponsorMainWindow", "employee_id", Q_NULLPTR));
        ajouter->setText(QApplication::translate("SponsorMainWindow", "add", Q_NULLPTR));
        clear_fields_add->setText(QApplication::translate("SponsorMainWindow", "clear", Q_NULLPTR));
        name_lineEdit->setText(QString());
        name_lineEdit->setPlaceholderText(QApplication::translate("SponsorMainWindow", "type here", Q_NULLPTR));
        id_lineEdit->setText(QString());
        id_lineEdit->setPlaceholderText(QApplication::translate("SponsorMainWindow", "type here", Q_NULLPTR));
        montant_lineEdit->setText(QString());
        montant_lineEdit->setPlaceholderText(QApplication::translate("SponsorMainWindow", "type here", Q_NULLPTR));
        employee_id_lineEdit->setText(QApplication::translate("SponsorMainWindow", "021dd", Q_NULLPTR));
        tempsaffichage_lineEdit->setText(QString());
        tempsaffichage_lineEdit->setPlaceholderText(QApplication::translate("SponsorMainWindow", "type here", Q_NULLPTR));
        etatcontrat_lineEdit->setText(QString());
        etatcontrat_lineEdit->setPlaceholderText(QApplication::translate("SponsorMainWindow", "type here", Q_NULLPTR));
        nb_totalaffichage_lineEdit->setText(QString());
        nb_totalaffichage_lineEdit->setPlaceholderText(QApplication::translate("SponsorMainWindow", "type here", Q_NULLPTR));
        label_37->setText(QApplication::translate("SponsorMainWindow", "total viewing time", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("SponsorMainWindow", "add", Q_NULLPTR));
        emailLineEdit->setText(QApplication::translate("SponsorMainWindow", "Type here", Q_NULLPTR));
        passwordLineEdit->setText(QApplication::translate("SponsorMainWindow", "type_here ", Q_NULLPTR));
        label_43->setText(QApplication::translate("SponsorMainWindow", "Email :", Q_NULLPTR));
        label_44->setText(QApplication::translate("SponsorMainWindow", "Password :  ", Q_NULLPTR));
        label_45->setText(QApplication::translate("SponsorMainWindow", "Recepient :", Q_NULLPTR));
        label_46->setText(QApplication::translate("SponsorMainWindow", "Content:", Q_NULLPTR));
        recipientLineEdit->setText(QApplication::translate("SponsorMainWindow", "type_here ", Q_NULLPTR));
        contentTextEdit->setText(QApplication::translate("SponsorMainWindow", "type_here ", Q_NULLPTR));
        label_47->setText(QApplication::translate("SponsorMainWindow", "Subject", Q_NULLPTR));
        subjectLineEdit->setText(QApplication::translate("SponsorMainWindow", "type_here ", Q_NULLPTR));
        sendButton->setText(QApplication::translate("SponsorMainWindow", "SEND!", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("SponsorMainWindow", "SendMail", Q_NULLPTR));
        update->setText(QApplication::translate("SponsorMainWindow", "Update", Q_NULLPTR));
        etatcontrat_lineEdit_2->setText(QApplication::translate("SponsorMainWindow", "type here", Q_NULLPTR));
        label_33->setText(QApplication::translate("SponsorMainWindow", "viewing time", Q_NULLPTR));
        label_39->setText(QApplication::translate("SponsorMainWindow", "total viewing time", Q_NULLPTR));
        label_36->setText(QApplication::translate("SponsorMainWindow", "ID", Q_NULLPTR));
        montant_lineEdit_2->setText(QApplication::translate("SponsorMainWindow", "type here", Q_NULLPTR));
        label_40->setText(QApplication::translate("SponsorMainWindow", "contract state", Q_NULLPTR));
        label_41->setText(QApplication::translate("SponsorMainWindow", "name", Q_NULLPTR));
        tempsaffichage_lineEdit_2->setText(QApplication::translate("SponsorMainWindow", "type here", Q_NULLPTR));
        name_lineEdit_2->setText(QApplication::translate("SponsorMainWindow", "type here", Q_NULLPTR));
        label_42->setText(QApplication::translate("SponsorMainWindow", "price", Q_NULLPTR));
        nb_totalaffichage_lineEdit_2->setText(QApplication::translate("SponsorMainWindow", "type here", Q_NULLPTR));
        id_lineEdit_2->setText(QApplication::translate("SponsorMainWindow", "type here", Q_NULLPTR));
        ajouter_2->setText(QApplication::translate("SponsorMainWindow", "add", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("SponsorMainWindow", "Update", Q_NULLPTR));
        label_35->setText(QApplication::translate("SponsorMainWindow", "ID", Q_NULLPTR));
        id_lineEdit_delete->setText(QApplication::translate("SponsorMainWindow", "type here", Q_NULLPTR));
        delete_button->setText(QApplication::translate("SponsorMainWindow", "Delete", Q_NULLPTR));
        label_38->setText(QApplication::translate("SponsorMainWindow", "enter the sponsor id :", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("SponsorMainWindow", "Delete", Q_NULLPTR));
        clear_all_in_table->setText(QApplication::translate("SponsorMainWindow", "delete all sponsors", Q_NULLPTR));
        list_all_button->setText(QApplication::translate("SponsorMainWindow", "sponsor list", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("SponsorMainWindow", "view tablee", Q_NULLPTR));
        label_48->setText(QApplication::translate("SponsorMainWindow", "START", Q_NULLPTR));
        label_49->setText(QApplication::translate("SponsorMainWindow", "END", Q_NULLPTR));
        SendButton->setText(QApplication::translate("SponsorMainWindow", "SAVE DATE", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_16), QApplication::translate("SponsorMainWindow", "Calendar", Q_NULLPTR));
        jgcugedu->setText(QApplication::translate("SponsorMainWindow", "Check contracts", Q_NULLPTR));
        sms->setText(QApplication::translate("SponsorMainWindow", "Send sms", Q_NULLPTR));
        excel->setText(QApplication::translate("SponsorMainWindow", "Generate Excel", Q_NULLPTR));
        sortComboBox->clear();
        sortComboBox->insertItems(0, QStringList()
         << QApplication::translate("SponsorMainWindow", "default", Q_NULLPTR)
         << QApplication::translate("SponsorMainWindow", "A-Z", Q_NULLPTR)
        );
        fr->setText(QApplication::translate("SponsorMainWindow", "FR", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QString());
        label_4->setText(QString());
        label_6->setText(QString());
        label_7->setText(QString());
        label_17->setText(QString());
        pushButton_7->setText(QApplication::translate("SponsorMainWindow", "Log Out", Q_NULLPTR));
        label_13->setText(QApplication::translate("SponsorMainWindow", "Employees", Q_NULLPTR));
        menuCreate->setTitle(QApplication::translate("SponsorMainWindow", "Create ", Q_NULLPTR));
        menuRead->setTitle(QApplication::translate("SponsorMainWindow", "Read", Q_NULLPTR));
        menuupdate->setTitle(QApplication::translate("SponsorMainWindow", "Update", Q_NULLPTR));
        menudelete->setTitle(QApplication::translate("SponsorMainWindow", "Delete ", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SponsorMainWindow: public Ui_SponsorMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPONSORMAINWINDOW_H
