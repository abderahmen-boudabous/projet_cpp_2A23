/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget_2;
    QWidget *tab_7;
    QTabWidget *modifier_2;
    QWidget *tab;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *id;
    QLineEdit *prenom;
    QLineEdit *nom;
    QPushButton *pushButton_2;
    QPushButton *pb_ajouter;
    QLineEdit *age;
    QLabel *label_4;
    QLineEdit *mail;
    QLabel *label_6;
    QLabel *label_16;
    QLabel *label_21;
    QWidget *tab_2;
    QPushButton *excel;
    QPushButton *imprimer;
    QPushButton *pb_tri;
    QPushButton *pushButton_11;
    QTableView *afficher_2;
    QPushButton *pushButton;
    QLabel *label_12;
    QLineEdit *rechercherid;
    QLineEdit *recherchernom;
    QLineEdit *recherchermail;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QPushButton *tri_nom;
    QPushButton *tri_age;
    QLabel *label_17;
    QLabel *label_20;
    QWidget *tab_3;
    QPushButton *pb_supprimer;
    QLabel *label_5;
    QLineEdit *le_id_supp;
    QComboBox *comboBox;
    QPushButton *load_2;
    QLabel *label_18;
    QLabel *label_7;
    QPushButton *pushButton_3;
    QWidget *modifier;
    QLineEdit *mail_m;
    QLineEdit *id_m;
    QLineEdit *nom_m;
    QLineEdit *age_m;
    QLineEdit *prenom_m;
    QPushButton *pushButton_8;
    QComboBox *comboBox_2;
    QPushButton *load;
    QLabel *label_19;
    QLabel *label_26;
    QLabel *label_31;
    QLabel *label_33;
    QLabel *label_34;
    QLabel *label_35;
    QLabel *label_36;
    QLabel *label_37;
    QLabel *label_22;
    QPushButton *pushButton_4;
    QWidget *tab_4;
    QLabel *label_23;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QGroupBox *groupBox_2;
    QPushButton *Login;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_10;
    QLineEdit *lineEdit_password;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_9;
    QLineEdit *lineEdit_username;
    QLabel *label_8;
    QLabel *label_11;
    QWidget *tab_10;
    QWidget *tab_8;
    QTabWidget *tabWidget;
    QWidget *widget_2;
    QLabel *label_24;
    QLineEdit *le_id;
    QLineEdit *le_nom;
    QLineEdit *le_prix;
    QLineEdit *le_panne;
    QLabel *label_25;
    QLabel *label_27;
    QLabel *label_28;
    QPushButton *pb_ajout;
    QLabel *label_38;
    QLabel *label_39;
    QWidget *widget;
    QLabel *label_29;
    QLineEdit *id_supp;
    QPushButton *pb_supp;
    QLabel *label_40;
    QLabel *label_41;
    QWidget *tab_5;
    QTableView *tab_equipement;
    QLabel *label_32;
    QLabel *label_42;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_7;
    QWidget *tab_6;
    QLabel *label_30;
    QLineEdit *le__prix;
    QLabel *label_43;
    QLabel *label_44;
    QLabel *label_45;
    QLineEdit *le__id;
    QLineEdit *le__panne;
    QLineEdit *le__nom;
    QPushButton *pb_modifier;
    QLabel *label_46;
    QLabel *label_47;
    QLineEdit *lineEdit_2;
    QWidget *tab_9;
    QRadioButton *radioButton_id;
    QRadioButton *radioButton_nom;
    QPushButton *pb_rech;
    QPushButton *pb_tri_2;
    QPushButton *pb_stat;
    QLineEdit *lineEdit;
    QPushButton *pb_PDF;
    QTableView *tableView;
    QLabel *label_48;
    QLabel *label_49;
    QLabel *label_50;
    QLabel *label_51;
    QPushButton *pb_image;
    QLabel *label_pic;
    QLabel *label_52;
    QLabel *label_53;
    QPushButton *pb_tri2;
    QPushButton *pb_tri1;
    QLabel *label_54;
    QLabel *label_56;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1348, 802);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget_2 = new QTabWidget(centralWidget);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(0, 0, 1351, 801));
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        modifier_2 = new QTabWidget(tab_7);
        modifier_2->setObjectName(QStringLiteral("modifier_2"));
        modifier_2->setGeometry(QRect(0, 0, 1401, 781));
        modifier_2->setStyleSheet(QLatin1String("QPushButton::hover\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.511, x2:1, y2:0.511, stop:0 rgba(0, 207, 179, 255),stop:1 rgb(108, 135, 255));\n"
"\n"
"}\n"
""));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, -10, 1351, 721));
        groupBox->setTabletTracking(false);
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 70, 61, 51));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 130, 101, 31));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 180, 91, 41));
        id = new QLineEdit(groupBox);
        id->setObjectName(QStringLiteral("id"));
        id->setGeometry(QRect(110, 80, 191, 31));
        prenom = new QLineEdit(groupBox);
        prenom->setObjectName(QStringLiteral("prenom"));
        prenom->setGeometry(QRect(110, 130, 191, 31));
        nom = new QLineEdit(groupBox);
        nom->setObjectName(QStringLiteral("nom"));
        nom->setGeometry(QRect(110, 180, 191, 31));
        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(1190, 660, 91, 31));
        pushButton_2->setStyleSheet(QLatin1String("QPushButton::hover\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.511, x2:1, y2:0.511, stop:0 rgba(0, 207, 179, 255),stop:1 rgb(108, 135, 255));\n"
"\n"
"}"));
        pb_ajouter = new QPushButton(groupBox);
        pb_ajouter->setObjectName(QStringLiteral("pb_ajouter"));
        pb_ajouter->setGeometry(QRect(120, 350, 161, 41));
        pb_ajouter->setStyleSheet(QLatin1String("QPushButton::hover\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.511, x2:1, y2:0.511, stop:0 rgba(0, 207, 179, 255),stop:1 rgb(108, 135, 255));\n"
"\n"
"}"));
        age = new QLineEdit(groupBox);
        age->setObjectName(QStringLiteral("age"));
        age->setGeometry(QRect(110, 280, 191, 31));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 230, 91, 41));
        mail = new QLineEdit(groupBox);
        mail->setObjectName(QStringLiteral("mail"));
        mail->setGeometry(QRect(110, 230, 191, 31));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(30, 280, 91, 31));
        label_16 = new QLabel(groupBox);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(1170, 10, 141, 101));
        label_16->setPixmap(QPixmap(QString::fromUtf8("../aaaa (7).png")));
        label_21 = new QLabel(groupBox);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(-30, -40, 1381, 801));
        label_21->setPixmap(QPixmap(QString::fromUtf8("../Webp.net-resizeimage (3).jpg")));
        label_21->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        id->raise();
        prenom->raise();
        nom->raise();
        pushButton_2->raise();
        pb_ajouter->raise();
        age->raise();
        label_4->raise();
        mail->raise();
        label_6->raise();
        label_16->raise();
        modifier_2->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        excel = new QPushButton(tab_2);
        excel->setObjectName(QStringLiteral("excel"));
        excel->setGeometry(QRect(90, 650, 221, 41));
        excel->setStyleSheet(QLatin1String("QPushButton::hover\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.511, x2:1, y2:0.511, stop:0 rgba(0, 207, 179, 255),stop:1 rgb(108, 135, 255));\n"
"\n"
"}"));
        imprimer = new QPushButton(tab_2);
        imprimer->setObjectName(QStringLiteral("imprimer"));
        imprimer->setGeometry(QRect(370, 650, 211, 41));
        imprimer->setStyleSheet(QLatin1String("QPushButton::hover\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.511, x2:1, y2:0.511, stop:0 rgba(0, 207, 179, 255),stop:1 rgb(108, 135, 255));\n"
"\n"
"}"));
        pb_tri = new QPushButton(tab_2);
        pb_tri->setObjectName(QStringLiteral("pb_tri"));
        pb_tri->setGeometry(QRect(390, 50, 131, 31));
        pb_tri->setStyleSheet(QLatin1String("QPushButton::hover\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.511, x2:1, y2:0.511, stop:0 rgba(0, 207, 179, 255),stop:1 rgb(108, 135, 255));\n"
"\n"
"}"));
        pushButton_11 = new QPushButton(tab_2);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setGeometry(QRect(1190, 650, 101, 31));
        afficher_2 = new QTableView(tab_2);
        afficher_2->setObjectName(QStringLiteral("afficher_2"));
        afficher_2->setGeometry(QRect(10, 100, 791, 411));
        pushButton = new QPushButton(tab_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(10, 510, 61, 21));
        label_12 = new QLabel(tab_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(30, 40, 101, 51));
        rechercherid = new QLineEdit(tab_2);
        rechercherid->setObjectName(QStringLiteral("rechercherid"));
        rechercherid->setGeometry(QRect(990, 100, 141, 31));
        recherchernom = new QLineEdit(tab_2);
        recherchernom->setObjectName(QStringLiteral("recherchernom"));
        recherchernom->setGeometry(QRect(990, 150, 141, 31));
        recherchermail = new QLineEdit(tab_2);
        recherchermail->setObjectName(QStringLiteral("recherchermail"));
        recherchermail->setGeometry(QRect(990, 200, 141, 31));
        label_13 = new QLabel(tab_2);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(810, 100, 161, 31));
        label_14 = new QLabel(tab_2);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(810, 150, 211, 31));
        label_15 = new QLabel(tab_2);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(810, 200, 181, 31));
        tri_nom = new QPushButton(tab_2);
        tri_nom->setObjectName(QStringLiteral("tri_nom"));
        tri_nom->setGeometry(QRect(130, 50, 131, 31));
        tri_nom->setStyleSheet(QLatin1String("QPushButton::hover\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.511, x2:1, y2:0.511, stop:0 rgba(0, 207, 179, 255),stop:1 rgb(108, 135, 255));\n"
"\n"
"}"));
        tri_age = new QPushButton(tab_2);
        tri_age->setObjectName(QStringLiteral("tri_age"));
        tri_age->setGeometry(QRect(260, 50, 131, 31));
        tri_age->setStyleSheet(QLatin1String("QPushButton::hover\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.511, x2:1, y2:0.511, stop:0 rgba(0, 207, 179, 255),stop:1 rgb(108, 135, 255));\n"
"\n"
"}"));
        label_17 = new QLabel(tab_2);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(1170, 0, 141, 101));
        label_17->setPixmap(QPixmap(QString::fromUtf8("../aaaa (7).png")));
        label_20 = new QLabel(tab_2);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(-10, -30, 1461, 841));
        label_20->setPixmap(QPixmap(QString::fromUtf8("../Webp.net-resizeimage (3).jpg")));
        modifier_2->addTab(tab_2, QString());
        label_20->raise();
        excel->raise();
        imprimer->raise();
        pb_tri->raise();
        pushButton_11->raise();
        afficher_2->raise();
        pushButton->raise();
        label_12->raise();
        rechercherid->raise();
        recherchernom->raise();
        recherchermail->raise();
        label_13->raise();
        label_14->raise();
        label_15->raise();
        tri_nom->raise();
        tri_age->raise();
        label_17->raise();
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        pb_supprimer = new QPushButton(tab_3);
        pb_supprimer->setObjectName(QStringLiteral("pb_supprimer"));
        pb_supprimer->setGeometry(QRect(320, 310, 171, 51));
        pb_supprimer->setStyleSheet(QLatin1String("QPushButton::hover\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.511, x2:1, y2:0.511, stop:0 rgba(0, 207, 179, 255),stop:1 rgb(108, 135, 255));\n"
"\n"
"}"));
        label_5 = new QLabel(tab_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(70, 310, 151, 51));
        le_id_supp = new QLineEdit(tab_3);
        le_id_supp->setObjectName(QStringLiteral("le_id_supp"));
        le_id_supp->setGeometry(QRect(130, 320, 161, 31));
        comboBox = new QComboBox(tab_3);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(150, 120, 121, 41));
        load_2 = new QPushButton(tab_3);
        load_2->setObjectName(QStringLiteral("load_2"));
        load_2->setGeometry(QRect(320, 120, 151, 41));
        load_2->setStyleSheet(QLatin1String("QPushButton::hover\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.511, x2:1, y2:0.511, stop:0 rgba(0, 207, 179, 255),stop:1 rgb(108, 135, 255));\n"
"\n"
"}"));
        label_18 = new QLabel(tab_3);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(1170, 0, 141, 101));
        label_18->setPixmap(QPixmap(QString::fromUtf8("../aaaa (7).png")));
        label_7 = new QLabel(tab_3);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(0, -40, 1491, 821));
        label_7->setPixmap(QPixmap(QString::fromUtf8("../Webp.net-resizeimage (2).jpg")));
        pushButton_3 = new QPushButton(tab_3);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(1200, 650, 91, 31));
        pushButton_3->setStyleSheet(QLatin1String("QPushButton::hover\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.511, x2:1, y2:0.511, stop:0 rgba(0, 207, 179, 255),stop:1 rgb(108, 135, 255));\n"
"\n"
"}"));
        modifier_2->addTab(tab_3, QString());
        label_7->raise();
        pb_supprimer->raise();
        label_5->raise();
        le_id_supp->raise();
        comboBox->raise();
        load_2->raise();
        label_18->raise();
        pushButton_3->raise();
        modifier = new QWidget();
        modifier->setObjectName(QStringLiteral("modifier"));
        modifier->setEnabled(true);
        mail_m = new QLineEdit(modifier);
        mail_m->setObjectName(QStringLiteral("mail_m"));
        mail_m->setGeometry(QRect(180, 250, 191, 31));
        id_m = new QLineEdit(modifier);
        id_m->setObjectName(QStringLiteral("id_m"));
        id_m->setGeometry(QRect(180, 100, 191, 31));
        nom_m = new QLineEdit(modifier);
        nom_m->setObjectName(QStringLiteral("nom_m"));
        nom_m->setGeometry(QRect(180, 200, 191, 31));
        age_m = new QLineEdit(modifier);
        age_m->setObjectName(QStringLiteral("age_m"));
        age_m->setGeometry(QRect(180, 300, 191, 31));
        prenom_m = new QLineEdit(modifier);
        prenom_m->setObjectName(QStringLiteral("prenom_m"));
        prenom_m->setGeometry(QRect(180, 150, 191, 31));
        pushButton_8 = new QPushButton(modifier);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(190, 390, 161, 41));
        pushButton_8->setStyleSheet(QLatin1String("QPushButton::hover\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.511, x2:1, y2:0.511, stop:0 rgba(0, 207, 179, 255),stop:1 rgb(108, 135, 255));\n"
"\n"
"}"));
        comboBox_2 = new QComboBox(modifier);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));
        comboBox_2->setGeometry(QRect(500, 140, 291, 31));
        load = new QPushButton(modifier);
        load->setObjectName(QStringLiteral("load"));
        load->setGeometry(QRect(580, 200, 141, 31));
        load->setStyleSheet(QLatin1String("QPushButton::hover\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.511, x2:1, y2:0.511, stop:0 rgba(0, 207, 179, 255),stop:1 rgb(108, 135, 255));\n"
"\n"
"}"));
        label_19 = new QLabel(modifier);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(1170, 0, 141, 101));
        label_19->setPixmap(QPixmap(QString::fromUtf8("../aaaa (7).png")));
        label_26 = new QLabel(modifier);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(830, 750, 91, 31));
        label_31 = new QLabel(modifier);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(960, 750, 91, 31));
        label_33 = new QLabel(modifier);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setGeometry(QRect(80, 250, 91, 41));
        label_34 = new QLabel(modifier);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setGeometry(QRect(80, 200, 91, 41));
        label_35 = new QLabel(modifier);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setGeometry(QRect(90, 90, 61, 51));
        label_36 = new QLabel(modifier);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setGeometry(QRect(80, 300, 91, 31));
        label_37 = new QLabel(modifier);
        label_37->setObjectName(QStringLiteral("label_37"));
        label_37->setGeometry(QRect(70, 150, 101, 31));
        label_22 = new QLabel(modifier);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(0, -30, 1361, 761));
        label_22->setPixmap(QPixmap(QString::fromUtf8("../Webp.net-resizeimage (1).jpg")));
        pushButton_4 = new QPushButton(modifier);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(1200, 650, 91, 31));
        pushButton_4->setStyleSheet(QLatin1String("QPushButton::hover\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.511, x2:1, y2:0.511, stop:0 rgba(0, 207, 179, 255),stop:1 rgb(108, 135, 255));\n"
"\n"
"}"));
        modifier_2->addTab(modifier, QString());
        label_22->raise();
        mail_m->raise();
        id_m->raise();
        nom_m->raise();
        age_m->raise();
        prenom_m->raise();
        pushButton_8->raise();
        comboBox_2->raise();
        load->raise();
        label_19->raise();
        label_26->raise();
        label_31->raise();
        label_33->raise();
        label_34->raise();
        label_35->raise();
        label_36->raise();
        label_37->raise();
        pushButton_4->raise();
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        label_23 = new QLabel(tab_4);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(1170, 0, 141, 101));
        label_23->setPixmap(QPixmap(QString::fromUtf8("../aaaa (7).png")));
        pushButton_5 = new QPushButton(tab_4);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(1200, 650, 91, 31));
        pushButton_5->setStyleSheet(QLatin1String("QPushButton::hover\n"
"{\n"
"	background-color: qlineargradient(spread:pad, x1:0, y1:0.511, x2:1, y2:0.511, stop:0 rgba(0, 207, 179, 255),stop:1 rgb(108, 135, 255));\n"
"\n"
"}"));
        pushButton_6 = new QPushButton(tab_4);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(750, 250, 171, 41));
        groupBox_2 = new QGroupBox(tab_4);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(400, 200, 391, 251));
        Login = new QPushButton(groupBox_2);
        Login->setObjectName(QStringLiteral("Login"));
        Login->setGeometry(QRect(30, 191, 331, 28));
        layoutWidget = new QWidget(groupBox_2);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 111, 341, 61));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout->addWidget(label_10);

        lineEdit_password = new QLineEdit(layoutWidget);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));
        lineEdit_password->setEchoMode(QLineEdit::Password);

        horizontalLayout->addWidget(lineEdit_password);

        layoutWidget1 = new QWidget(groupBox_2);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 30, 341, 61));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(layoutWidget1);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_2->addWidget(label_9);

        lineEdit_username = new QLineEdit(layoutWidget1);
        lineEdit_username->setObjectName(QStringLiteral("lineEdit_username"));

        horizontalLayout_2->addWidget(lineEdit_username);

        layoutWidget->raise();
        Login->raise();
        layoutWidget->raise();
        label_8 = new QLabel(tab_4);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(-50, -20, 1441, 781));
        label_8->setPixmap(QPixmap(QString::fromUtf8("../east_deck_exiting_0.v1 (1).v1.png")));
        label_11 = new QLabel(tab_4);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(400, 200, 391, 251));
        label_11->setPixmap(QPixmap(QString::fromUtf8("../bg.png")));
        modifier_2->addTab(tab_4, QString());
        pushButton_6->raise();
        label_8->raise();
        label_23->raise();
        pushButton_5->raise();
        label_11->raise();
        groupBox_2->raise();
        tabWidget_2->addTab(tab_7, QString());
        tab_10 = new QWidget();
        tab_10->setObjectName(QStringLiteral("tab_10"));
        tabWidget_2->addTab(tab_10, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QStringLiteral("tab_8"));
        tabWidget = new QTabWidget(tab_8);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 1341, 761));
        widget_2 = new QWidget();
        widget_2->setObjectName(QStringLiteral("widget_2"));
        label_24 = new QLabel(widget_2);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(430, 140, 21, 20));
        le_id = new QLineEdit(widget_2);
        le_id->setObjectName(QStringLiteral("le_id"));
        le_id->setGeometry(QRect(450, 140, 221, 20));
        le_nom = new QLineEdit(widget_2);
        le_nom->setObjectName(QStringLiteral("le_nom"));
        le_nom->setGeometry(QRect(450, 170, 221, 20));
        le_prix = new QLineEdit(widget_2);
        le_prix->setObjectName(QStringLiteral("le_prix"));
        le_prix->setGeometry(QRect(450, 200, 221, 20));
        le_panne = new QLineEdit(widget_2);
        le_panne->setObjectName(QStringLiteral("le_panne"));
        le_panne->setGeometry(QRect(450, 230, 221, 21));
        label_25 = new QLabel(widget_2);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(270, 170, 181, 20));
        label_27 = new QLabel(widget_2);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(410, 200, 41, 20));
        label_28 = new QLabel(widget_2);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(390, 230, 61, 20));
        pb_ajout = new QPushButton(widget_2);
        pb_ajout->setObjectName(QStringLiteral("pb_ajout"));
        pb_ajout->setGeometry(QRect(710, 170, 81, 41));
        label_38 = new QLabel(widget_2);
        label_38->setObjectName(QStringLiteral("label_38"));
        label_38->setGeometry(QRect(940, 0, 141, 101));
        label_38->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/3.png")));
        label_39 = new QLabel(widget_2);
        label_39->setObjectName(QStringLiteral("label_39"));
        label_39->setGeometry(QRect(10, -30, 1071, 571));
        label_39->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/1.jpg")));
        tabWidget->addTab(widget_2, QString());
        label_24->raise();
        label_25->raise();
        label_27->raise();
        label_28->raise();
        label_38->raise();
        label_39->raise();
        le_id->raise();
        le_nom->raise();
        le_prix->raise();
        le_panne->raise();
        pb_ajout->raise();
        widget = new QWidget();
        widget->setObjectName(QStringLiteral("widget"));
        label_29 = new QLabel(widget);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(390, 190, 21, 16));
        id_supp = new QLineEdit(widget);
        id_supp->setObjectName(QStringLiteral("id_supp"));
        id_supp->setGeometry(QRect(420, 190, 301, 20));
        pb_supp = new QPushButton(widget);
        pb_supp->setObjectName(QStringLiteral("pb_supp"));
        pb_supp->setGeometry(QRect(510, 220, 121, 23));
        label_40 = new QLabel(widget);
        label_40->setObjectName(QStringLiteral("label_40"));
        label_40->setGeometry(QRect(0, 0, 1091, 551));
        label_40->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/2.jpg")));
        label_41 = new QLabel(widget);
        label_41->setObjectName(QStringLiteral("label_41"));
        label_41->setGeometry(QRect(940, 0, 141, 101));
        label_41->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/3.png")));
        tabWidget->addTab(widget, QString());
        label_29->raise();
        label_40->raise();
        label_41->raise();
        id_supp->raise();
        pb_supp->raise();
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        tab_equipement = new QTableView(tab_5);
        tab_equipement->setObjectName(QStringLiteral("tab_equipement"));
        tab_equipement->setGeometry(QRect(170, 80, 611, 231));
        label_32 = new QLabel(tab_5);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(-120, -40, 1231, 591));
        label_32->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/1.jpg")));
        label_42 = new QLabel(tab_5);
        label_42->setObjectName(QStringLiteral("label_42"));
        label_42->setGeometry(QRect(940, 0, 141, 101));
        label_42->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/3.png")));
        lineEdit_3 = new QLineEdit(tab_5);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(330, 350, 113, 20));
        pushButton_7 = new QPushButton(tab_5);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(480, 350, 75, 23));
        tabWidget->addTab(tab_5, QString());
        label_42->raise();
        pushButton_7->raise();
        label_32->raise();
        tab_equipement->raise();
        lineEdit_3->raise();
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        label_30 = new QLabel(tab_6);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(370, 180, 21, 20));
        le__prix = new QLineEdit(tab_6);
        le__prix->setObjectName(QStringLiteral("le__prix"));
        le__prix->setGeometry(QRect(400, 240, 181, 20));
        label_43 = new QLabel(tab_6);
        label_43->setObjectName(QStringLiteral("label_43"));
        label_43->setGeometry(QRect(230, 210, 161, 20));
        label_44 = new QLabel(tab_6);
        label_44->setObjectName(QStringLiteral("label_44"));
        label_44->setGeometry(QRect(350, 240, 41, 20));
        label_45 = new QLabel(tab_6);
        label_45->setObjectName(QStringLiteral("label_45"));
        label_45->setGeometry(QRect(330, 270, 61, 20));
        le__id = new QLineEdit(tab_6);
        le__id->setObjectName(QStringLiteral("le__id"));
        le__id->setGeometry(QRect(400, 180, 181, 20));
        le__panne = new QLineEdit(tab_6);
        le__panne->setObjectName(QStringLiteral("le__panne"));
        le__panne->setGeometry(QRect(402, 270, 181, 20));
        le__nom = new QLineEdit(tab_6);
        le__nom->setObjectName(QStringLiteral("le__nom"));
        le__nom->setGeometry(QRect(400, 210, 181, 20));
        pb_modifier = new QPushButton(tab_6);
        pb_modifier->setObjectName(QStringLiteral("pb_modifier"));
        pb_modifier->setGeometry(QRect(620, 210, 75, 51));
        label_46 = new QLabel(tab_6);
        label_46->setObjectName(QStringLiteral("label_46"));
        label_46->setGeometry(QRect(-240, -240, 1621, 841));
        label_46->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/2.jpg")));
        label_47 = new QLabel(tab_6);
        label_47->setObjectName(QStringLiteral("label_47"));
        label_47->setGeometry(QRect(940, 0, 141, 101));
        label_47->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/3.png")));
        lineEdit_2 = new QLineEdit(tab_6);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(402, 120, 181, 20));
        tabWidget->addTab(tab_6, QString());
        label_43->raise();
        label_44->raise();
        label_45->raise();
        label_46->raise();
        label_47->raise();
        le__prix->raise();
        le__id->raise();
        le__panne->raise();
        le__nom->raise();
        pb_modifier->raise();
        label_30->raise();
        lineEdit_2->raise();
        tab_9 = new QWidget();
        tab_9->setObjectName(QStringLiteral("tab_9"));
        radioButton_id = new QRadioButton(tab_9);
        radioButton_id->setObjectName(QStringLiteral("radioButton_id"));
        radioButton_id->setGeometry(QRect(20, 70, 83, 18));
        radioButton_nom = new QRadioButton(tab_9);
        radioButton_nom->setObjectName(QStringLiteral("radioButton_nom"));
        radioButton_nom->setGeometry(QRect(20, 100, 111, 18));
        pb_rech = new QPushButton(tab_9);
        pb_rech->setObjectName(QStringLiteral("pb_rech"));
        pb_rech->setGeometry(QRect(20, 40, 75, 23));
        pb_tri_2 = new QPushButton(tab_9);
        pb_tri_2->setObjectName(QStringLiteral("pb_tri_2"));
        pb_tri_2->setGeometry(QRect(400, 220, 75, 23));
        pb_stat = new QPushButton(tab_9);
        pb_stat->setObjectName(QStringLiteral("pb_stat"));
        pb_stat->setGeometry(QRect(250, 10, 75, 23));
        lineEdit = new QLineEdit(tab_9);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(20, 10, 113, 20));
        pb_PDF = new QPushButton(tab_9);
        pb_PDF->setObjectName(QStringLiteral("pb_PDF"));
        pb_PDF->setGeometry(QRect(160, 10, 75, 23));
        tableView = new QTableView(tab_9);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(20, 130, 371, 261));
        label_48 = new QLabel(tab_9);
        label_48->setObjectName(QStringLiteral("label_48"));
        label_48->setGeometry(QRect(270, 100, 21, 21));
        label_49 = new QLabel(tab_9);
        label_49->setObjectName(QStringLiteral("label_49"));
        label_49->setGeometry(QRect(260, 40, 21, 21));
        label_50 = new QLabel(tab_9);
        label_50->setObjectName(QStringLiteral("label_50"));
        label_50->setGeometry(QRect(406, 109, 91, 21));
        label_51 = new QLabel(tab_9);
        label_51->setObjectName(QStringLiteral("label_51"));
        label_51->setGeometry(QRect(120, 100, 151, 21));
        pb_image = new QPushButton(tab_9);
        pb_image->setObjectName(QStringLiteral("pb_image"));
        pb_image->setGeometry(QRect(340, 10, 75, 23));
        label_pic = new QLabel(tab_9);
        label_pic->setObjectName(QStringLiteral("label_pic"));
        label_pic->setGeometry(QRect(660, 110, 411, 371));
        label_52 = new QLabel(tab_9);
        label_52->setObjectName(QStringLiteral("label_52"));
        label_52->setGeometry(QRect(10, -20, 1331, 751));
        label_52->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/1.jpg")));
        label_53 = new QLabel(tab_9);
        label_53->setObjectName(QStringLiteral("label_53"));
        label_53->setGeometry(QRect(940, 0, 141, 101));
        label_53->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/3.png")));
        pb_tri2 = new QPushButton(tab_9);
        pb_tri2->setObjectName(QStringLiteral("pb_tri2"));
        pb_tri2->setGeometry(QRect(400, 180, 75, 23));
        pb_tri1 = new QPushButton(tab_9);
        pb_tri1->setObjectName(QStringLiteral("pb_tri1"));
        pb_tri1->setGeometry(QRect(400, 140, 75, 23));
        label_54 = new QLabel(tab_9);
        label_54->setObjectName(QStringLiteral("label_54"));
        label_54->setGeometry(QRect(810, 530, 21, 20));
        label_56 = new QLabel(tab_9);
        label_56->setObjectName(QStringLiteral("label_56"));
        label_56->setGeometry(QRect(120, 40, 141, 21));
        tabWidget->addTab(tab_9, QString());
        pb_tri_2->raise();
        label_48->raise();
        label_49->raise();
        label_50->raise();
        label_51->raise();
        label_52->raise();
        label_53->raise();
        label_54->raise();
        label_56->raise();
        radioButton_id->raise();
        radioButton_nom->raise();
        pb_rech->raise();
        pb_stat->raise();
        lineEdit->raise();
        pb_PDF->raise();
        tableView->raise();
        pb_image->raise();
        label_pic->raise();
        pb_tri2->raise();
        pb_tri1->raise();
        tabWidget_2->addTab(tab_8, QString());
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget_2->setCurrentIndex(2);
        modifier_2->setCurrentIndex(1);
        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Gestion des Clients", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        modifier_2->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>modifier</p><p><br/></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        modifier_2->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p>modifier</p></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        groupBox->setTitle(QString());
        label->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#ff00ff;\">id : </span></p></body></html>", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:600; color:#ff00ff;\">prenom : </span></p></body></html>", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#ff00ff;\">nom : </span></p></body></html>", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "Retour", Q_NULLPTR));
        pb_ajouter->setText(QApplication::translate("MainWindow", "Ajouter un client ", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#ff00ff;\">mail :</span></p></body></html>", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#ff00ff;\">age :</span></p></body></html>", Q_NULLPTR));
        label_16->setText(QString());
        label_21->setText(QString());
        modifier_2->setTabText(modifier_2->indexOf(tab), QApplication::translate("MainWindow", "Ajouter_client", Q_NULLPTR));
        excel->setText(QApplication::translate("MainWindow", "Transf\303\251rer les donn\303\251es sur excel", Q_NULLPTR));
        imprimer->setText(QApplication::translate("MainWindow", "Imprimer-les donner", Q_NULLPTR));
        pb_tri->setText(QApplication::translate("MainWindow", "id", Q_NULLPTR));
        pushButton_11->setText(QApplication::translate("MainWindow", "Retour", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Refresh", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#ff00ff;\">Tri avec :</span></p></body></html>", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:600; color:#ff00ff;\">chercher par id :</span></p></body></html>", Q_NULLPTR));
        label_14->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:600; color:#ff00ff;\">chercher par nom :</span></p></body></html>", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:600; color:#ff00ff;\">chercher par mail :</span></p></body></html>", Q_NULLPTR));
        tri_nom->setText(QApplication::translate("MainWindow", "nom", Q_NULLPTR));
        tri_age->setText(QApplication::translate("MainWindow", "age", Q_NULLPTR));
        label_17->setText(QString());
        label_20->setText(QString());
        modifier_2->setTabText(modifier_2->indexOf(tab_2), QApplication::translate("MainWindow", "consulter_les_clients", Q_NULLPTR));
        pb_supprimer->setText(QApplication::translate("MainWindow", "Supprimer un client", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:18pt; color:#ff00ff;\">id :</span></p></body></html>", Q_NULLPTR));
        le_id_supp->setText(QString());
        load_2->setText(QApplication::translate("MainWindow", "Load", Q_NULLPTR));
        label_18->setText(QString());
        label_7->setText(QString());
        pushButton_3->setText(QApplication::translate("MainWindow", "Retour", Q_NULLPTR));
        modifier_2->setTabText(modifier_2->indexOf(tab_3), QApplication::translate("MainWindow", "supprimer_un_client", Q_NULLPTR));
#ifndef QT_NO_WHATSTHIS
        modifier->setWhatsThis(QApplication::translate("MainWindow", "<html><head/><body><p>modifier</p><p><br/></p></body></html>", Q_NULLPTR));
#endif // QT_NO_WHATSTHIS
        pushButton_8->setText(QApplication::translate("MainWindow", "Modifier un client ", Q_NULLPTR));
        load->setText(QApplication::translate("MainWindow", "Load", Q_NULLPTR));
        label_19->setText(QString());
        label_26->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#ff00ff;\">age :</span></p></body></html>", Q_NULLPTR));
        label_31->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#ff00ff;\">age :</span></p></body></html>", Q_NULLPTR));
        label_33->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#ff00ff;\">mail :</span></p></body></html>", Q_NULLPTR));
        label_34->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#ff00ff;\">nom : </span></p></body></html>", Q_NULLPTR));
        label_35->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#ff00ff;\">id : </span></p></body></html>", Q_NULLPTR));
        label_36->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#ff00ff;\">age :</span></p></body></html>", Q_NULLPTR));
        label_37->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:600; color:#ff00ff;\">prenom : </span></p></body></html>", Q_NULLPTR));
        label_22->setText(QString());
        pushButton_4->setText(QApplication::translate("MainWindow", "Retour", Q_NULLPTR));
        modifier_2->setTabText(modifier_2->indexOf(modifier), QApplication::translate("MainWindow", "modifier", Q_NULLPTR));
        label_23->setText(QString());
        pushButton_5->setText(QApplication::translate("MainWindow", "Retour", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("MainWindow", "Open the gate", Q_NULLPTR));
        groupBox_2->setTitle(QString());
        Login->setText(QApplication::translate("MainWindow", "Open the gate", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#ff00ff;\">Password</span></p></body></html>", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#ff00ff;\">UserName</span></p></body></html>", Q_NULLPTR));
        label_8->setText(QString());
        label_11->setText(QString());
        modifier_2->setTabText(modifier_2->indexOf(tab_4), QApplication::translate("MainWindow", "controle_gate", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_7), QApplication::translate("MainWindow", "Gestion de client", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_10), QApplication::translate("MainWindow", "Page", Q_NULLPTR));
        label_24->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#ff007f;\">id:</span></p></body></html>", Q_NULLPTR));
        label_25->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#ff007f;\">nom de l'\303\251quipement:</span></p></body></html>", Q_NULLPTR));
        label_27->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#ff007f;\">prix:</span></p></body></html>", Q_NULLPTR));
        label_28->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#ff007f;\">panne:</span></p></body></html>", Q_NULLPTR));
        pb_ajout->setText(QApplication::translate("MainWindow", "ajouter", Q_NULLPTR));
        label_38->setText(QString());
        label_39->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(widget_2), QApplication::translate("MainWindow", "ajouter equipement", Q_NULLPTR));
        label_29->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#ff007f;\">id:</span></p></body></html>", Q_NULLPTR));
        id_supp->setText(QString());
        pb_supp->setText(QApplication::translate("MainWindow", "supprimer", Q_NULLPTR));
        label_40->setText(QString());
        label_41->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(widget), QApplication::translate("MainWindow", "supprimer equipement", Q_NULLPTR));
        label_32->setText(QString());
        label_42->setText(QString());
        pushButton_7->setText(QApplication::translate("MainWindow", "modifier", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("MainWindow", "afficher equipement", Q_NULLPTR));
        label_30->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#ff007f;\">id:</span></p></body></html>", Q_NULLPTR));
        label_43->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#ff007f;\">nom d'\303\251quipement:</span></p></body></html>", Q_NULLPTR));
        label_44->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#ff007f;\">prix:</span></p></body></html>", Q_NULLPTR));
        label_45->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#ff007f;\">panne:</span></p></body></html>", Q_NULLPTR));
        le__nom->setText(QString());
        pb_modifier->setText(QApplication::translate("MainWindow", "modifier", Q_NULLPTR));
        label_46->setText(QString());
        label_47->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("MainWindow", "modifier equipement", Q_NULLPTR));
        radioButton_id->setText(QApplication::translate("MainWindow", "id", Q_NULLPTR));
        radioButton_nom->setText(QApplication::translate("MainWindow", "nom \303\251quipement", Q_NULLPTR));
        pb_rech->setText(QApplication::translate("MainWindow", "recherche", Q_NULLPTR));
        pb_tri_2->setText(QApplication::translate("MainWindow", "tri par prix", Q_NULLPTR));
        pb_stat->setText(QApplication::translate("MainWindow", "statistiques ", Q_NULLPTR));
        pb_PDF->setText(QApplication::translate("MainWindow", "PDF", Q_NULLPTR));
        label_48->setText(QString());
        label_49->setText(QString());
        label_50->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600; color:#ff007f;\">tri avec :</span></p></body></html>", Q_NULLPTR));
        label_51->setText(QString());
        pb_image->setText(QApplication::translate("MainWindow", "image", Q_NULLPTR));
        label_pic->setText(QString());
        label_52->setText(QString());
        label_53->setText(QString());
        pb_tri2->setText(QApplication::translate("MainWindow", "tri par nom", Q_NULLPTR));
        pb_tri1->setText(QApplication::translate("MainWindow", "tri par id ", Q_NULLPTR));
        label_54->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; color:#ff007f;\">id:</span></p></body></html>", Q_NULLPTR));
        label_56->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_9), QApplication::translate("MainWindow", "fonctionnalit\303\251s", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_8), QApplication::translate("MainWindow", "Gestion d'equipment", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
