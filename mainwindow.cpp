#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "client.h"
#include <QMessageBox>
#include <QApplication>
#include <QSqlQuery>
#include <QDebug>
#include "connection.h"
#include <QFileDialog>
#include <QPainter>
#include <QRegularExpression>
#include <string>
#include <QPrintDialog>
#include <QPrinter>
#include <QTextDocument>
#include <QString>
#include <QDialog>
#include <QMessageBox>
#include <QtWidgets/QMessageBox>
#include <QFileDialog>
#include <QMainWindow>
#include <QtCore/QCoreApplication>
#include <QMainWindow>
#include <QStackedWidget>
#include "equipement.h"
//#include <QPieSeries>
//#include <QPieSlice>




MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    /**********************************************************/
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


   ui->id->setValidator(new QIntValidator(0,99999999,this));
   ui->age->setValidator(new QIntValidator(0,99,this));
   ui->afficher_2->setModel(c.afficher());




   /*****************************aziz*************************/
   ui->le_id->setValidator(new QIntValidator (0, 9999999, this));
   ui->tab_equipement->setModel(E.afficher());
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pb_ajouter_clicked()
{
    int id=ui->id->text().toInt();
    QString nom=ui->nom->text();
    QString prenom=ui->prenom->text();
    QString mail=ui->mail->text();
    int age=ui->age->text().toInt();

    client C (id,nom,prenom,mail,age);

    {client C (id,nom,prenom,mail,age);
            bool test=C.ajouter();

            if(test)
            {  QMessageBox::information(nullptr, QObject::tr("Ajouter un compte"),
                                        QObject::tr("compte ajoute\n"
                                                    "Cliquez sur cancel Pour Quitter."), QMessageBox::Cancel);
            ui->afficher_2->setModel(c.afficher());
            }
            else
            {  QMessageBox::warning(nullptr, QObject::tr("erreur"),
                                    QObject::tr("Echec de l'ajout.\n"
                                                "Click Cancel to exit."), QMessageBox::Cancel);}

        }
}

void MainWindow::on_pb_supprimer_clicked()
{
    client c1;
    c1.setid(ui->le_id_supp->text().toInt());
    bool test=c1.supprimer(c1.getid());
    QMessageBox msgBox;

    if(test)
    {
        msgBox.setText("Suppression avec succes.");
        ui->afficher_2->setModel(c.afficher());
    }
    else
        msgBox.setText("Echec de suppression.");
    msgBox.exec();
}

void MainWindow::on_pushButton_8_clicked()
{
        int id=ui->id_m->text().toInt();
        QString nom=ui->nom_m->text();
        QString prenom=ui->prenom_m->text();
        QString mail=ui->mail_m->text();
        int age=ui->age_m->text().toInt();
        client c(0, nom, prenom, mail,age);
        c.setid(id);
        bool test=c.modifier();
        QMessageBox msgBox;
        if(test)
        {
            msgBox.setText("modification avec succes.");
            ui->afficher_2->setModel(c.afficher());
        }
        else
            msgBox.setText("Echec de modification.");
        msgBox.exec();
}

void MainWindow::on_pushButton_clicked()
{

    QSqlQueryModel * model=new QSqlQueryModel();

    QSqlQuery* qry=new QSqlQuery();

    qry->prepare ("select * from client");
    qry->exec();

    model->setQuery (*qry);
    ui->afficher_2->setModel(model);

    qDebug()<<(model->rowCount());
}


void MainWindow::on_load_clicked()
{
    QSqlQueryModel * model=new QSqlQueryModel();
    ui->comboBox_2->setModel(c.afficher());
    QSqlQuery* qry=new QSqlQuery();

    qry->prepare ("select * from client");
    qry->exec();

    model->setQuery (*qry);
    ui->comboBox_2->setModel(model);

    qDebug()<<(model->rowCount());
}

void MainWindow::on_load_2_clicked()
{
    QSqlQueryModel * model=new QSqlQueryModel();

    QSqlQuery* qry=new QSqlQuery();

    qry->prepare ("select * from client");
    qry->exec();

    model->setQuery (*qry);
    ui->comboBox->setModel(model);

    qDebug()<<(model->rowCount());
}

void MainWindow::on_pushButton_3_clicked()
{

        ui->afficher_2->setModel(c.tri());

}


void MainWindow::on_excel_clicked()
{

    QTableView *table;
               table = ui->afficher_2;

               QString filters("xlsx files (.xlsx);;All files (.*)");
               QString defaultFilter("xlsx files (*.xlsx)");
               QString fileName = QFileDialog::getSaveFileName(0, "Save file", QCoreApplication::applicationDirPath(),
                                  filters, &defaultFilter);
               QFile file(fileName);

               QAbstractItemModel *model =  table->model();
               if (file.open(QFile::WriteOnly | QFile::Truncate)) {
                   QTextStream data(&file);
                   QStringList strList;
                   for (int i = 0; i < model->columnCount(); i++) {
                       if (model->headerData(i, Qt::Horizontal, Qt::DisplayRole).toString().length() > 0)
                           strList.append("\"" + model->headerData(i, Qt::Horizontal, Qt::DisplayRole).toString() + "\"");
                       else
                           strList.append("");
                   }
                   data << strList.join(";") << "\n";
                   for (int i = 0; i < model->rowCount(); i++) {
                       strList.clear();
                       for (int j = 0; j < model->columnCount(); j++) {

                           if (model->data(model->index(i, j)).toString().length() > 0)
                               strList.append("\"" + model->data(model->index(i, j)).toString() + "\"");
                           else
                               strList.append("");
                       }
                       data << strList.join(";") + "\n";
                   }
                   file.close();
                   QMessageBox::information(nullptr, QObject::tr("Export excel"),
                                             QObject::tr("Export avec succes .\n"
                                                         "Click OK to exit."), QMessageBox::Ok);
    }

}



/*void MainWindow::on_pb_tri_clicked()
{
    ui->afficher_2->setModel(c.tri());
}*/

void MainWindow::on_tri_nom_clicked()
{
    ui->afficher_2->setModel(c.tri_nom());
}

void MainWindow::on_tri_age_clicked()
{
    ui->afficher_2->setModel(c.tri_age());
}


void MainWindow::on_rechercherid_textChanged(const QString &arg1)
{
    QString ch = arg1;

                     if (ch=="")
                     {
                         ui->afficher_2->setModel(c.afficher());
                     }
                     else {
                       ui->afficher_2->setModel(c.rechercherid(ch)) ;
    }
}

void MainWindow::on_recherchernom_textChanged(const QString &arg1)
{
    QString ch = arg1;

                     if (ch=="")
                     {
                         ui->afficher_2->setModel(c.afficher());
                     }
                     else {
                       ui->afficher_2->setModel(c.recherchernom(ch)) ;
    }
}

void MainWindow::on_recherchermail_textChanged(const QString &arg1)
{
    QString ch = arg1;

                     if (ch=="")
                     {
                         ui->afficher_2->setModel(c.afficher());
                     }
                     else {
                       ui->afficher_2->setModel(c.recherchermail(ch)) ;
    }
}


void MainWindow::on_comboBox_currentTextChanged(const QString &arg1)
{

    QString val=ui->comboBox->currentText();

        QSqlQuery qry;
        qry.prepare("select * from client where id = '"+val+"' ");

        if(qry.exec( ))
        {
            while(qry.next())
            {
                ui->le_id_supp->setText(qry.value(0).toString());
            }
        }
}

void MainWindow::on_comboBox_2_currentTextChanged(const QString &arg1)
{
    QString id=ui->comboBox_2->currentText();

    QSqlQuery qry;
    qry.prepare ("select * from client where id='"+id+"'");

    if (qry.exec())
      {
        while (qry.next())
        {
           ui->id_m->setText(qry.value(0).toString());
           ui->nom_m->setText(qry.value(1).toString());
           ui->prenom_m->setText(qry.value(2).toString());
           ui->mail_m->setText(qry.value(3).toString());
           ui->age_m->setText(qry.value(4).toString());
        }


      }
}


void MainWindow::on_imprimer_clicked()
{
    QString strStream;
                QTextStream out(&strStream);



                const int rowCount =ui->afficher_2->model()->rowCount();
                const int columnCount =ui->afficher_2->model()->columnCount();

                out <<  "<html>\n"
                    "<head>\n"

                    "<meta Content=\"Text/html; charset=Windows-1251\">\n"
                    <<  QString("<title>%60 les postes</title>\n").arg("poste")
                    <<  "</head>\n"
                    "<body bgcolor=#ffffff link=#5000A0>\n"
                    "<table border=1 cellspacing=0 cellpadding=2>\n";
                out<< "<thead><tr bgcolor=#f0f0f0>";
                for (int column = 0; column < columnCount; column++)
                    if (! ui->afficher_2->isColumnHidden(column))
                        out << QString("<th>%1</th>").arg(ui->afficher_2->model()->headerData(column, Qt::Horizontal).toString());
                out<< "</tr></thead>\n";

                for (int row = 0; row < rowCount; row++) {
                    out << "<tr>";
                    for (int column = 0; column < columnCount; column++) {
                        if (!ui->afficher_2->isColumnHidden(column)) {
                            QString data = ui->afficher_2->model()->data(ui->afficher_2->model()->index(row, column)).toString().simplified();
                            out << QString("<td bkcolor=0>%1</td>").arg((!data.isEmpty()) ? data : QString("&nbsp;"));
                        }
                    }
                    out << "</tr>\n";
                }
                out <<  "</table>\n"
                    "</body>\n"
                    "</html>\n";

                QTextDocument *document = new QTextDocument();
                document->setHtml(strStream);

                QPrinter printer;

                QPrintDialog *dialog = new QPrintDialog(&printer, NULL);
                if (dialog->exec() == QDialog::Accepted) {
                    document->print(&printer);
                }

                delete document;

}


void MainWindow::on_pushButton_6_clicked()
{
    A.write_to_arduino("1");

}

void MainWindow::on_Login_clicked()
{

               QString username = ui->lineEdit_username->text();
               QString password = ui->lineEdit_password->text();

               if (username == "admin" && password == "admin") {
                   QMessageBox::information(this, "Login", "Username and password are correct and gate will open ");
              //  ui->stackedWidget->setCurrentIndex(0);

                   MainWindow::on_pushButton_6_clicked();

               }
               else {
                   QMessageBox::warning(this, "Login", "Username and password are not correct and the gate will not open");
               }

}



/*************************-integration_aziz******************************/




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

/*void MainWindow::on_pb_tri_clicked()

    {


             ui->tableView->setModel(E.tri());
}*/
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
                                     painter.drawPixmap(QRect(7600,70,2000,2600),QPixmap(":/new/prefix1/detention.jpg"));
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






void MainWindow::on_pb_stat_clicked()
{
/*
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

*/
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


/*void MainWindow::update_label()
{

if(A.read_from_arduino()=="5")
{
    N.notification_sys();
}
}*/



