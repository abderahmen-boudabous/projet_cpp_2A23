#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "client.h"
#include <QMainWindow>
#include "arduino.h"




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


    void on_pb_tri_clicked();

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

private:
    Ui::MainWindow *ui;
    client c;
    Arduino A;



};

#endif // MAINWINDOW_H
