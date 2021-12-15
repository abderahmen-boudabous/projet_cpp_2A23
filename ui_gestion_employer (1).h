/********************************************************************************
** Form generated from reading UI file 'gestion_employer.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GESTION_EMPLOYER_H
#define UI_GESTION_EMPLOYER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gestion_employer
{
public:
    QGroupBox *groupBox;
    QTabWidget *tabWidget;
    QWidget *tab;
    QPushButton *Supprimer;
    QComboBox *comboBox_ROLE_2;
    QPushButton *TRI;
    QLabel *label_3;
    QTableView *tableView;
    QLineEdit *lineEdit_PRENOM;
    QLabel *label_6;
    QPushButton *Ajouter;
    QPushButton *EXCEL;
    QLabel *label_5;
    QLabel *label_time;
    QPushButton *stat;
    QComboBox *comboBox_ROLE;
    QLineEdit *lineEdit_Supprimer;
    QLabel *label_2;
    QLineEdit *lineEdit_NBRJ;
    QLabel *label_4;
    QPushButton *Modifier;
    QPushButton *TRIP;
    QPushButton *pushButton;
    QPushButton *TRIN;
    QLineEdit *lineEdit_ID;
    QLineEdit *lineEdit_NOM;
    QLabel *label;
    QWidget *tab_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QPushButton *OptionsPushButton;
    QLabel *label_ard;
    QLabel *label_7;

    void setupUi(QWidget *gestion_employer)
    {
        if (gestion_employer->objectName().isEmpty())
            gestion_employer->setObjectName(QStringLiteral("gestion_employer"));
        gestion_employer->resize(1351, 801);
        groupBox = new QGroupBox(gestion_employer);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 1351, 801));
        groupBox->setStyleSheet(QStringLiteral("background:#FFFFFF"));
        tabWidget = new QTabWidget(groupBox);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 20, 1351, 801));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        Supprimer = new QPushButton(tab);
        Supprimer->setObjectName(QStringLiteral("Supprimer"));
        Supprimer->setGeometry(QRect(720, 449, 101, 23));
        comboBox_ROLE_2 = new QComboBox(tab);
        comboBox_ROLE_2->setObjectName(QStringLiteral("comboBox_ROLE_2"));
        comboBox_ROLE_2->setGeometry(QRect(450, 419, 111, 22));
        TRI = new QPushButton(tab);
        TRI->setObjectName(QStringLiteral("TRI"));
        TRI->setGeometry(QRect(704, 549, 91, 23));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(260, 293, 47, 20));
        tableView = new QTableView(tab);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(580, 150, 491, 271));
        lineEdit_PRENOM = new QLineEdit(tab);
        lineEdit_PRENOM->setObjectName(QStringLiteral("lineEdit_PRENOM"));
        lineEdit_PRENOM->setGeometry(QRect(360, 299, 113, 20));
        label_6 = new QLabel(tab);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 10, 47, 14));
        Ajouter = new QPushButton(tab);
        Ajouter->setObjectName(QStringLiteral("Ajouter"));
        Ajouter->setGeometry(QRect(320, 469, 75, 23));
        EXCEL = new QPushButton(tab);
        EXCEL->setObjectName(QStringLiteral("EXCEL"));
        EXCEL->setGeometry(QRect(470, 539, 75, 23));
        label_5 = new QLabel(tab);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(260, 419, 47, 14));
        label_time = new QLabel(tab);
        label_time->setObjectName(QStringLiteral("label_time"));
        label_time->setGeometry(QRect(80, 0, 71, 31));
        stat = new QPushButton(tab);
        stat->setObjectName(QStringLiteral("stat"));
        stat->setGeometry(QRect(280, 539, 75, 23));
        comboBox_ROLE = new QComboBox(tab);
        comboBox_ROLE->setObjectName(QStringLiteral("comboBox_ROLE"));
        comboBox_ROLE->setGeometry(QRect(310, 419, 111, 22));
        lineEdit_Supprimer = new QLineEdit(tab);
        lineEdit_Supprimer->setObjectName(QStringLiteral("lineEdit_Supprimer"));
        lineEdit_Supprimer->setGeometry(QRect(840, 469, 113, 20));
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(260, 249, 47, 14));
        lineEdit_NBRJ = new QLineEdit(tab);
        lineEdit_NBRJ->setObjectName(QStringLiteral("lineEdit_NBRJ"));
        lineEdit_NBRJ->setGeometry(QRect(360, 359, 113, 20));
        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(260, 349, 91, 41));
        Modifier = new QPushButton(tab);
        Modifier->setObjectName(QStringLiteral("Modifier"));
        Modifier->setGeometry(QRect(450, 469, 75, 23));
        TRIP = new QPushButton(tab);
        TRIP->setObjectName(QStringLiteral("TRIP"));
        TRIP->setGeometry(QRect(940, 549, 101, 23));
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(720, 489, 101, 23));
        TRIN = new QPushButton(tab);
        TRIN->setObjectName(QStringLiteral("TRIN"));
        TRIN->setGeometry(QRect(824, 549, 91, 23));
        lineEdit_ID = new QLineEdit(tab);
        lineEdit_ID->setObjectName(QStringLiteral("lineEdit_ID"));
        lineEdit_ID->setGeometry(QRect(360, 189, 113, 20));
        lineEdit_NOM = new QLineEdit(tab);
        lineEdit_NOM->setObjectName(QStringLiteral("lineEdit_NOM"));
        lineEdit_NOM->setGeometry(QRect(360, 249, 113, 20));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(260, 189, 47, 14));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        scrollArea = new QScrollArea(tab_2);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(120, 80, 551, 251));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 549, 249));
        scrollArea->setWidget(scrollAreaWidgetContents);
        OptionsPushButton = new QPushButton(tab_2);
        OptionsPushButton->setObjectName(QStringLiteral("OptionsPushButton"));
        OptionsPushButton->setGeometry(QRect(210, 40, 361, 23));
        label_ard = new QLabel(tab_2);
        label_ard->setObjectName(QStringLiteral("label_ard"));
        label_ard->setGeometry(QRect(150, 373, 141, 51));
        label_7 = new QLabel(tab_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(40, 380, 71, 31));
        tabWidget->addTab(tab_2, QString());

        retranslateUi(gestion_employer);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(gestion_employer);
    } // setupUi

    void retranslateUi(QWidget *gestion_employer)
    {
        gestion_employer->setWindowTitle(QApplication::translate("gestion_employer", "Form", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("gestion_employer", "Gestion Employ\303\251s", Q_NULLPTR));
        Supprimer->setText(QApplication::translate("gestion_employer", "Supprimer", Q_NULLPTR));
        comboBox_ROLE_2->clear();
        comboBox_ROLE_2->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("gestion_employer", "Agenst Des Attractions", Q_NULLPTR)
         << QApplication::translate("gestion_employer", "Agents De Guichet", Q_NULLPTR)
         << QApplication::translate("gestion_employer", "Femmes De M\303\251nage", Q_NULLPTR)
         << QApplication::translate("gestion_employer", "Agents Securit\303\251", Q_NULLPTR)
        );
        TRI->setText(QApplication::translate("gestion_employer", "Tri par ID", Q_NULLPTR));
        label_3->setText(QApplication::translate("gestion_employer", "PRENOM", Q_NULLPTR));
        label_6->setText(QApplication::translate("gestion_employer", "<html><head/><body><p><span style=\" font-weight:600;\">HEURE</span></p></body></html>", Q_NULLPTR));
        Ajouter->setText(QApplication::translate("gestion_employer", "Ajouter", Q_NULLPTR));
        EXCEL->setText(QApplication::translate("gestion_employer", "EXCEL", Q_NULLPTR));
        label_5->setText(QApplication::translate("gestion_employer", "ROLE", Q_NULLPTR));
        label_time->setText(QApplication::translate("gestion_employer", "<html><head/><body><p><span style=\" font-weight:600;\">hhh</span></p></body></html>", Q_NULLPTR));
        stat->setText(QApplication::translate("gestion_employer", "stat", Q_NULLPTR));
        comboBox_ROLE->clear();
        comboBox_ROLE->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("gestion_employer", "Agenst Des Attractions", Q_NULLPTR)
         << QApplication::translate("gestion_employer", "Agents De Guichet", Q_NULLPTR)
         << QApplication::translate("gestion_employer", "Femmes De M\303\251nage", Q_NULLPTR)
         << QApplication::translate("gestion_employer", "Agents Securit\303\251", Q_NULLPTR)
         << QApplication::translate("gestion_employer", "Agents de Maintenance", Q_NULLPTR)
        );
        label_2->setText(QApplication::translate("gestion_employer", "NOM", Q_NULLPTR));
        label_4->setText(QApplication::translate("gestion_employer", "nombre de jour\n"
"travaill\303\251", Q_NULLPTR));
        Modifier->setText(QApplication::translate("gestion_employer", "Modifier", Q_NULLPTR));
        TRIP->setText(QApplication::translate("gestion_employer", "Tri par Prenom", Q_NULLPTR));
        pushButton->setText(QApplication::translate("gestion_employer", "Recherche par ID", Q_NULLPTR));
        TRIN->setText(QApplication::translate("gestion_employer", "Tri par Nom", Q_NULLPTR));
        label->setText(QApplication::translate("gestion_employer", "ID", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("gestion_employer", "Ajouter et consulter", Q_NULLPTR));
        OptionsPushButton->setText(QApplication::translate("gestion_employer", "options", Q_NULLPTR));
        label_ard->setText(QApplication::translate("gestion_employer", "<html><head/><body><p><br/></p></body></html>", Q_NULLPTR));
        label_7->setText(QApplication::translate("gestion_employer", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">Access</span></p></body></html>", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("gestion_employer", "Camera", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class gestion_employer: public Ui_gestion_employer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GESTION_EMPLOYER_H
