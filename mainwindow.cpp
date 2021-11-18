#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "client.h"
#include "smtp.h"
#include "smtp.cpp"
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

#include <QString>
#include <QDialog>
#include "smtp.h"
#include <QtWidgets/QMessageBox>
#include <QFileDialog>
#include <QMainWindow>
#include <QtCore/QCoreApplication>
#include <QMainWindow>




MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->id->setValidator(new QIntValidator(0,99999999,this));
    ui->age->setValidator(new QIntValidator(0,99,this));
    ui->afficher_2->setModel(c.afficher());
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
               QString defaultFilter("CSV files (*.xlsx)");
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



void MainWindow::on_pb_tri_clicked()
{
    ui->afficher_2->setModel(c.tri());
}

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


void MainWindow::sendMail()
{
    Smtp* smtp = new Smtp(ui->uname->text(), ui->paswd->text(), ui->server->text(), ui->port->text().toInt());
    connect(smtp, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));
/*
    if( !files.isEmpty() )
        smtp->sendMail(ui->uname->text(), ui->rcpt->text() , ui->subject->currentText(),ui->msg->toPlainText(), files );
    else
        smtp->sendMail(ui->uname->text(), ui->rcpt->text() , ui->subject->currentText(),ui->msg->toPlainText());*/
}

void MainWindow::mailSent(QString status)
{
    if(status == "Message sent")
        QMessageBox::warning( 0, tr( "Qt Simple SMTP client" ), tr( "Message sent!\n\n" ) );
}

void MainWindow::on_socket_clicked()
{
    connect(ui->sendBtn,SIGNAL(clicked()),this,SLOT(sendMail()));

}
