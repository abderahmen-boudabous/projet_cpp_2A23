#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "equipement.h"
#include <QMessageBox>
#include <QApplication>
#include <QIntValidator>
#include <QtPrintSupport/QPrinter>
#include <QtPrintSupport/QPrintDialog>
#include<QTextDocument>
#include <QDialog>
#include<QFileInfo>
#include<QFileDialog>
#include<QValidator>
#include <QGraphicsOpacityEffect>
#include <QPropertyAnimation>
#include <QtDebug>
#include <QPdfWriter>
#include <QPainter>
#include <QDesktopServices>
#include <QPieSeries>
#include <QChartView>
#include <QChart>
#include <QMessageBox>
#include <QIntValidator>
#include<QSqlQuery>
#include<QDebug>
#include<QWidget>
#include<QApplication>
#include<QFileDialog>
#include<QDesktopServices>
#include<QUrl>
#include <QString>
#include<QPixmap>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QLegend>
#include <QtCharts>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>
#include <QPieSlice>
#include <QPieSeries>
#include <QtCharts/QChartView>
#include <QtCharts/QChartView>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->le_id->setValidator(new QIntValidator (0, 9999999, this));
 ui->tab_equipement->setModel(E.afficher());

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pb_ajout_clicked()
{
    int id=ui->le_id->text().toInt();
    QString noms_des_equipements=ui->le_nom->text();
    int prix=ui->le_prix->text().toInt();
    int panne=ui->le_panne->text().toInt();
    Equipement E (id,noms_des_equipements,prix,panne);

    { Equipement E(id,noms_des_equipements,prix,panne);
            bool test=E.ajouter();

            if(test)
            {  QMessageBox::information(nullptr, QObject::tr("Ajouter un equipement"),
                                        QObject::tr("equipement ajoute\n"
                                                    "Cliquez sur cancel Pour Quitter."), QMessageBox::Cancel);
                ui->tab_equipement->setModel (E.afficher ());
            }
            else
            {  QMessageBox::warning(nullptr, QObject::tr("erreur"),
                                    QObject::tr("Echec de l'ajout.\n"
                                                "Click Cancel to exit."), QMessageBox::Cancel);}

        }

}




 void MainWindow::on_pb_supp_clicked()
{
        Equipement E1; E1.setid(ui->id_supp->text().toInt());
       bool test=E1.supprimer (E1.getid());
        QMessageBox msgBox;
        if(test)
           { msgBox.setText("Suppression avec succes.");
        ui->tab_equipement->setModel (E.afficher ());
        }

        else
            msgBox.setText("Echec de suppression");
            msgBox.exec();
}


void MainWindow::on_pb_modifier_clicked()

{
        int id= ui->le__id->text().toInt();
        QString noms_des_equipements= ui->le__nom->text();
        int  prix= ui->le__prix->text().toInt();
        int panne= ui->le__panne->text().toInt();

      Equipement E(id,noms_des_equipements,prix,panne);
      bool test=E.modifier(id);
      if(test)
     {

          ui->tab_equipement->setModel(E.afficher());
     QMessageBox::information(nullptr, QObject::tr("modifier un equipement"),
                       QObject::tr("equipement modifié.\n"
                                   "Click Cancel to exit."), QMessageBox::Cancel);

     }
       else
           QMessageBox::critical(nullptr, QObject::tr("modifier un equipement"),
                       QObject::tr("Erreur !.\n"
                                   "Click Cancel to exit."), QMessageBox::Cancel);

     }






void MainWindow::on_pb_rech_clicked()
{
    Equipement E;
    QString noms_des_equipements;
    if (ui->radioButton_id->isChecked()==true)
{
noms_des_equipements=ui->lineEdit->text();
     if(noms_des_equipements == "")

     {

         ui->tableView->setModel(E.afficher());

     }

     else

     {



         ui->tableView->setModel(E.chercher_equip(noms_des_equipements));

     }
    }
     if(ui->radioButton_nom->isChecked()==true)
    {
        noms_des_equipements=ui->lineEdit->text();
             if(noms_des_equipements == "")

             {

                 ui->tableView->setModel(E.afficher());

             }

             else

             {



                 ui->tableView->setModel(E.chercher_equip1(noms_des_equipements));

             }

    }
     else if     (ui->radioButton_nom->isChecked()==true)
     {

         noms_des_equipements=ui->lineEdit->text();
              if(noms_des_equipements == "")

              {

                  ui->tableView->setModel(E.afficher());

              }


     }
}

void MainWindow::on_pb_tri_clicked()

    {


             ui->tableView->setModel(E.tri());
}
             void MainWindow::on_pb_tri2_clicked()
             {
                 ui->tableView->setModel(E.tri2());

             }
             void MainWindow::on_pb_tri1_clicked()
             {
                 ui->tableView->setModel(E.tri1());
             }




void MainWindow::on_pb_PDF_clicked()


    {

          QString dir = QFileDialog::getExistingDirectory(this, tr("Open Directory"),
                                                      "/home",
                                                      QFileDialog::ShowDirsOnly
                                                      | QFileDialog::DontResolveSymlinks);
          qDebug()<<dir;
          QPdfWriter pdf(dir+"/Pdfdetention.pdf");
                                 QPainter painter(&pdf);
                                int i = 4000;
                                     painter.setPen(Qt::red);

                                     painter.setFont(QFont("Arial", 30));
                                     painter.drawText(2100,1200,"Liste Des Equipements");
                                     painter.setPen(Qt::black);
                                     painter.setFont(QFont("Arial", 50));
                                     painter.drawRect(1000,200,6500,2000);
                                     painter.drawPixmap(QRect(7600,70,2000,2600),QPixmap("C:/Users/User/OneDrive/Bureau/mohamed aziz rezgui/3.png"));
                                     painter.drawRect(0,3000,9600,500);
                                     painter.setFont(QFont("Arial", 9));
                                     painter.setPen(Qt::blue);
                                     painter.drawText(300,3300,"id");
                                     painter.drawText(2300,3300,"noms_des_equipements");
                                     painter.drawText(4300,3300,"prix");
                                     painter.drawText(6300,3300,"Panne");



                                     QSqlQuery query;
                                     query.prepare("select * from Equipement");
                                     query.exec();
                                     while (query.next())
                                     {
                                         painter.drawText(300,i,query.value(0).toString());
                                         painter.drawText(2300,i,query.value(1).toString());
                                         painter.drawText(4300,i,query.value(2).toString());
                                         painter.drawText(6300,i,query.value(3).toString());
                                         painter.drawText(7500,i,query.value(4).toString());
                                         painter.drawText(8000,i,query.value(5).toString());



                                        i = i +500;
                                     }
                                     int reponse = QMessageBox::question(this, "Génerer PDF", "<PDF Enregistré>...Vous Voulez Affichez Le PDF ?",
                                                                         QMessageBox::Yes |  QMessageBox::No);
                                         if (reponse == QMessageBox::Yes)
                                         {
                                             QDesktopServices::openUrl(QUrl::fromLocalFile(dir+"/Pdfdetention.pdf"));

                                             painter.end();
                                         }
                                         else
                                         {
                                              painter.end();


    }
}






void MainWindow:: on_pb_stat_clicked()
{

        QSqlQueryModel * model= new QSqlQueryModel();
                                model->setQuery("select * from equipement where panne = 0 ");
                                float e=model->rowCount();
                                model->setQuery("select * from equipement where panne = 1 ");
                                float ee=model->rowCount();

                                float total=e+ee;
                                QString a=QString("0: "+QString::number((e*100)/total,'f',2)+"%" );
                                QString b=QString("1: "+QString::number((ee*100)/total,'f',2)+"%" );

                                QPieSeries *series = new QPieSeries();
                                series->append(a,e);
                                series->append(b,ee);

                        if (e!=0)
                        {QPieSlice *slice = series->slices().at(0);
                         slice->setLabelVisible();
                         slice->setPen(QPen());}
                        if ( ee!=0)
                        {
                                 // Add label, explode and define brush for 2nd slice
                                 QPieSlice *slice1 = series->slices().at(1);
                                 //slice1->setExploded();
                                 slice1->setLabelVisible();
                        }

                                // Create the chart widget
                                QChart *chart = new QChart();
                                // Add data to chart with title and hide legend
                                chart->addSeries(series);
                                chart->setTitle("Pourcentage panne :  "+ QString::number(total));
                                chart->legend()->hide();
                                // Used to display the chart
                                QChartView *chartView = new QChartView(chart);
                                chartView->setRenderHint(QPainter::Antialiasing);
                                chartView->resize(1000,500);
                                chartView->show();
}

void MainWindow::on_pb_image_clicked()
{

        QFileDialog dialog(this);
        dialog.setNameFilter(tr("Images (*.png *.xpm *.jpg)"));
        dialog.setViewMode(QFileDialog::Detail);
        QString fileName =QFileDialog::getOpenFileName(this, tr("Open Images"), "C:/Users/User/OneDrive/Bureau", tr("Image Files (*.png *.jpg *.bmp)"));
    //to select and show the picture
        if (!fileName.isEmpty())
        {
            QImage image(fileName);
                ui->label_pic->setPixmap(QPixmap::fromImage(image));
        }

}
