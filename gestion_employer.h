#ifndef GESTION_EMPLOYER_H
#define GESTION_EMPLOYER_H
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QDialog>
#include <QTabWidget>
#include <QWidget>
#include"employer.h"
#include<QTime>
#include<QTimer>
#include"arduino.h"
class QCamera;
class QCameraViewfinder;
class QCameraImageCapture;
class QVBoxLayout;
class QMenu;
class QAction;
namespace Ui {
class gestion_employer;
}

class gestion_employer : public QWidget
{
    Q_OBJECT

public:
    explicit gestion_employer(QWidget *parent = nullptr);
    ~gestion_employer();

private slots:
    void on_Ajouter_clicked();

    void on_Supprimer_clicked();

    void on_Modifier_clicked();

    void on_TRI_clicked();

    void on_TRIN_clicked();

    void on_TRIP_clicked();

    void on_pushButton_clicked();

    void on_stat_clicked();

    void on_EXCEL_clicked();
    void myHeure();
     void update_label();

private:
    Ui::gestion_employer *ui;
    employer etmp;
    QString files;
    QCamera *mCamera;
        QCameraViewfinder *mCameraViewfinder;
        QCameraImageCapture *mCameraImageCapture;
        QVBoxLayout *mLayout;
        QMenu *mOptionsMenu;
        QAction *mAllumerAction;
        QAction *mEteindreAction;
         QAction *mCapturerAction;
         QByteArray data; // variable contenant les données reçues

             Arduino A; // objet temporaire
};

#endif // GESTION_EMPLOYER_H
