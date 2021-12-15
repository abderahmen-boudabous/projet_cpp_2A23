#include "gestion_employer.h"
#include "ui_gestion_employer.h"
#include <QTabWidget>
#include<QMessageBox>
#include <iostream>
#include"employer.h"
#include<QtCharts>
#include<QChartView>
#include"exportexcelobject.h"
#include<QFile>
#include<QFileDialog>
#include <QCamera>
#include <QCameraViewfinder>
#include <QCameraImageCapture>
#include <QVBoxLayout>
#include <QMenu>
gestion_employer::gestion_employer(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::gestion_employer)
{
    ui->setupUi(this);
    ui->tableView->setModel((etmp.afficher()));
    QTimer *timer=new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(myHeure()));
    timer->start();


    mCamera = new QCamera(this);
     mCameraViewfinder = new QCameraViewfinder(this);
     mCameraImageCapture = new QCameraImageCapture(mCamera, this);
     mLayout = new QVBoxLayout;
     //mLayout->addItem(mCameraViewfinder);
     mOptionsMenu =new QMenu("Options", this);
     mAllumerAction =new QAction ("Allumer",this);
     mEteindreAction =new QAction ("Etteindre", this);
     mCapturerAction= new QAction ("Capturer",this);



     mOptionsMenu->addActions({ mAllumerAction, mEteindreAction, mCapturerAction });
     ui->OptionsPushButton->setMenu(mOptionsMenu);
     mCamera->setViewfinder(mCameraViewfinder);
     mLayout->addWidget(mCameraViewfinder);
     mLayout->setMargin(0);
     ui->scrollArea->setLayout(mLayout);
     connect(mAllumerAction,&QAction::triggered,[&](){
          mCamera->start();
         });

     connect(mEteindreAction, &QAction::triggered,[&](){
         mCamera->stop();
         });
     connect(mCapturerAction, &QAction::triggered,[&](){
         auto filename = QFileDialog::getSaveFileName(this, "Capturer","/","Image (.jpg;.jpeg");
         if (filename.isEmpty()) {
                     return ;
                 }
            mCameraImageCapture->setCaptureDestination(QCameraImageCapture::CaptureToFile);
            QImageEncoderSettings imageEncoderSettings ;
                    imageEncoderSettings.setCodec("image/jpeg");
                    imageEncoderSettings.setResolution(1600, 1200);
                    mCameraImageCapture->setEncodingSettings(QImageEncoderSettings());
                    mCamera->setCaptureMode(QCamera ::CaptureStillImage);
                    mCamera->start() ;
                    mCamera->searchAndLock();
                    mCameraImageCapture->capture(filename);
                    mCamera->unlock();
         });


     int ret=A.connect_arduino(); // lancer la connexion à arduino
         switch(ret){
         case(0):qDebug()<< "arduino is available and connected to : "<< A.getarduino_port_name();
             break;
         case(1):qDebug() << "arduino is available but not connected to :" <<A.getarduino_port_name();
            break;
         case(-1):qDebug() << "arduino is not available";
         }
          QObject::connect(A.getserial(),SIGNAL(readyRead()),this,SLOT(update_label())); // permet de lancer
          //le slot update_label suite à la reception du signal readyRead (reception des données).
}

gestion_employer::~gestion_employer()
{
    delete ui;
}

void gestion_employer::on_Ajouter_clicked()
{
    int ID_EM=ui->lineEdit_ID->text().toInt();
    QString NOM_EM=ui->lineEdit_NOM->text();
    QString PRENOM_EM=ui->lineEdit_PRENOM->text();
    int NBRJ_EM=ui->lineEdit_NBRJ->text().toInt();
    QString ROLE=ui->comboBox_ROLE->currentText();
    employer e(ID_EM,NOM_EM,PRENOM_EM,NBRJ_EM,ROLE);
    bool test=e.ajouter();
        if(test)
        {
            ui->tableView->setModel((etmp.afficher()));
           QMessageBox::information(nullptr,QObject::tr("OK"),
                                    QObject::tr("Ajout effectué\n"
                                                "Click Cancel to exit."),QMessageBox::Cancel);
        }
           else
               QMessageBox::critical(nullptr,QObject::tr("Not OK"),
                                        QObject::tr("Ajout non effectué\n"
                                                  "Click Cancel to exit."),QMessageBox::Cancel);
        ui->lineEdit_ID->clear();
        ui->lineEdit_NOM->clear();
        ui->lineEdit_PRENOM->clear();
        ui->lineEdit_NBRJ->clear();
        ui->comboBox_ROLE->clear();

}

void gestion_employer::on_Supprimer_clicked()
{
    int ID_EM=ui->lineEdit_Supprimer->text().toInt();
           bool test1=etmp.supprimer(ID_EM);
       if(test1)
       {
           ui->tableView->setModel(etmp.afficher());
           QMessageBox::information(nullptr,QObject::tr("Not OK"),
                                    QObject::tr("Suppression effevtuée\n"
                                                "Click Cancel to exit."),QMessageBox::Cancel);
       }
       else
           QMessageBox::critical(nullptr,QObject::tr("Not OK"),
                                    QObject::tr("Suppression non effevtué\n"
                                                "Click Cancel to exit."),QMessageBox::Cancel);
       ui->lineEdit_Supprimer->clear();
}

void gestion_employer::on_Modifier_clicked()
{

    int ID_EM=ui->lineEdit_ID->text().toInt();
    QString NOM_EM=ui->lineEdit_NOM->text();
    QString PRENOM_EM=ui->lineEdit_PRENOM->text();
    int NBRJ_EM=ui->lineEdit_NBRJ->text().toInt();
    QString ROLE=ui->comboBox_ROLE->currentText();
    employer e(ID_EM,NOM_EM,PRENOM_EM,NBRJ_EM,ROLE);

    bool test=e.modifier(ID_EM,NOM_EM,PRENOM_EM,NBRJ_EM,ROLE);
    if(test)
                     {
                         ui->tableView->setModel(etmp.afficher());
                         QMessageBox::information(nullptr, QObject::tr("modifier un employer"),
                                           QObject::tr("employer  modifié.\n"
                                                       "Click Cancel to exit."), QMessageBox::Cancel);
                      }

                           else
                               QMessageBox::critical(nullptr, QObject::tr("Modifier employer"),
                                           QObject::tr("Erreur !.\n"
                                                       "Click Cancel to exit."), QMessageBox::Cancel);
    ui->lineEdit_ID->clear();
    ui->lineEdit_NOM->clear();
    ui->lineEdit_PRENOM->clear();
    ui->lineEdit_NBRJ->clear();
    ui->comboBox_ROLE_2->clear();
}

void gestion_employer::on_TRI_clicked()
{
    ui->tableView->setModel(etmp.tri());
}

void gestion_employer::on_TRIN_clicked()
{
    ui->tableView->setModel(etmp.triN());
}

void gestion_employer::on_TRIP_clicked()
{
    ui->tableView->setModel(etmp.triP());
}

void gestion_employer::on_pushButton_clicked()
{
    int rech=ui->lineEdit_Supprimer->text().toInt();
    ui->tableView->setModel(etmp.rechercherID(rech));
    ui->lineEdit_Supprimer->clear();

}

void gestion_employer::on_stat_clicked()
{

        QSqlQueryModel * model= new QSqlQueryModel();
                                model->setQuery("select * from EMPLOYER where NBRJ_EM <20");
                                float nbr1=model->rowCount();
                                model->setQuery("select * from EMPLOYER where NBRJ_EM  between 5 and 20 ");
                                float nbr2=model->rowCount();
                                model->setQuery("select * from EMPLOYER where NBRJ_EM >20 ");
                                float nbr3=model->rowCount();
                                float total=nbr1+nbr2+nbr3;
                                QString a=QString("NBRJ<20   "+QString::number((nbr1*100)/total,'f',2)+"%" );
                                QString b=QString(" between 5 and 20 :"+QString::number((nbr2*100)/total,'f',2)+"%" );
                                QString c=QString(" NBRJ >20: "+QString::number((nbr3*100)/total,'f',2)+"%" );
                                QPieSeries *series = new QPieSeries();
                                series->append(a,nbr1);
                                series->append(b,nbr2);
                                series->append(c,nbr3);
                        if (nbr1!=0)
                        {QPieSlice *slice = series->slices().at(0);
                         slice->setLabelVisible();
                         slice->setPen(QPen());}
                        if ( nbr2!=0)
                        {
                                 // Add label, explode and define brush for 2nd slice
                                 QPieSlice *slice1 = series->slices().at(1);
                                 //slice1->setExploded();
                                 slice1->setLabelVisible();
                        }
                        if(nbr3!=0)
                        {
                                 // Add labels to rest of slices
                                 QPieSlice *slice2 = series->slices().at(2);
                                 //slice1->setExploded();
                                 slice2->setLabelVisible();
                        }
                                // Create the chart widget
                                QChart *chart = new QChart();
                                // Add data to chart with title and hide legend
                                chart->addSeries(series);
                                chart->setTitle("Pourcentage Par nombre de jours travaillés par employés ");
                                chart->legend()->hide();
                                // Used to display the chart
                                QChartView *chartView = new QChartView(chart);
                                chartView->setRenderHint(QPainter::Antialiasing);
                                chartView->resize(1000,500);
                                chartView->show();

}

void gestion_employer::on_EXCEL_clicked()
{

    QString fileName = QFileDialog::getSaveFileName(this, tr("Excel file"), qApp->applicationDirPath (),
                                                     tr("Excel Files (*.xls)"));
     if (fileName.isEmpty())
         return;

     ExportExcelObject obj(fileName, "mydata", ui->tableView);

     //colums to export
     obj.addField(0, "ID", "char(20)");
     obj.addField(1, "NOM", "char(20)");
     obj.addField(2, "PRENOM", "char(20)");
     obj.addField(3, "NBRJ", "char(20)");
      obj.addField(3, "ROLE", "char(20)");



     int retVal = obj.export2Excel();
     if( retVal > 0)
     {
         QMessageBox::information(this, tr("Done"),
                                  QString(tr("%1 records exported!")).arg(retVal)
                                  );
      }
}
void gestion_employer::myHeure()
{
    QTime time=QTime::currentTime();
    QString time_text=time.toString("hh : mm : ss");
    if ((time.second()%2)==0)
    {
        time_text[3]=' ';
        time_text[8]=' ';

    }

    ui->label_time->setText(time_text);






}
void gestion_employer::update_label()
{
    data=A.read_from_arduino();

    if(data=="1")
{
        ui->label_ard->setText("acces autoriser"); // si les données reçues de arduino via la liaison série sont égales à 1
    // alors afficher ON

        A.write_to_arduino("2");

}
    else if (data=="0")
{
        ui->label_ard->setText("acces non autoriser");
    // si les données reçues de arduino via la liaison série sont égales à 0
     //alors afficher ON
    A.write_to_arduino("4");

   }
    else if (data=="3")
{
        ui->label_ard->setText("");
    // si les données reçues de arduino via la liaison série sont égales à 0
     //alors afficher ON

   }
   // A.write_to_arduino("5");

}
