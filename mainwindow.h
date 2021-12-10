//#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "client.h"
#include <QMainWindow>
#include "arduino.h"
#include "equipement.h"
#include"ticket.h"




namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_pb_ajouter_clicked();

    void on_pb_supprimer_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_clicked();


    void on_load_clicked();

    void on_load_2_clicked();


    void on_pushButton_3_clicked();


    void on_excel_clicked();


    //void on_pb_tri_clicked();

    void on_rechercherid_textChanged(const QString &arg1);

    void on_recherchernom_textChanged(const QString &arg1);

    void on_recherchermail_textChanged(const QString &arg1);

    void on_comboBox_currentTextChanged(const QString &arg1);

    void on_comboBox_2_currentTextChanged(const QString &arg1);

    void on_tri_nom_clicked();

    void on_tri_age_clicked();

    void on_imprimer_clicked();

    void on_socket_clicked();

    void on_pushButton_6_clicked();

    void on_Login_clicked();



    /*****************_fonction_aziz_*************************/


    void on_pb_ajout_clicked();
    void on_pb_supp_clicked();
    void on_pb_modifier_clicked();
    void on_pb_rech_clicked();
    //void on_pb_tri_clicked();
    void on_pb_tri1_clicked();
    void on_pb_tri2_clicked();
    void on_pb_PDF_clicked();
    void on_pb_stat_clicked();
    void on_pb_image_clicked();

    void on_nom_asc_clicked();

    void on_rb_asc_historique_clicked();


    void on_rechPB_clicked();

    void on_pb_ajouter_2_clicked();

    void on_deleteRech_clicked();

    void on_modifyRech_clicked();

    void on_lineEdit_4_textChanged(const QString &arg1);

    void on_lineEdit_5_textChanged(const QString &arg1);

    void on_pushButton_10_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_statistique_clicked();

    void on_pb_update_clicked();

    void on_regarder_clicked();
    void browse();

private:
    Ui::MainWindow *ui;
    client c;
    Arduino A;
    //ghazi
    ticket s;
    QStringList files;

    /***********aziz************/


    Equipement E;
    Equipement E2;




};

