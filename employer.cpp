#include "employer.h"
#include <QDebug>
#include<QSqlQueryModel>
#include <QSqlQuery>
#include<QString>
#include<QMessageBox>

employer::employer()
{
    NOM_EM="";
    PRENOM_EM="";
    ID_EM=0;
    NBRJ_EM=0;
    ROLE="";

}


employer::employer(int ID,QString NOM_EM,QString PRENOM_EM,int NBRJ_EM,QString ROLE)
{
   this->ID_EM=ID_EM;
   this->NOM_EM=NOM_EM;
    this->PRENOM_EM=PRENOM_EM;
    this->NBRJ_EM=NBRJ_EM;
    this->ROLE=ROLE;


 }



bool employer::ajouter()
{
    QSqlQuery query;
   QString res= QString::number(ID_EM);

    query.prepare("INSERT INTO EMPLOYER ( ID_EM,NOM_EM, PRENOM_EM,NBRJ_EM,ROLE) "
                        "VALUES (:ID_EM,:NOM_EM, :PRENOM_EM,:NBRJ_EM,:ROLE)");
    query.bindValue(":ID_EM", res);
    query.bindValue(":NOM_EM", NOM_EM);
    query.bindValue(":PRENOM_EM", PRENOM_EM);
    query.bindValue(":NBRJ_EM", NBRJ_EM);
    query.bindValue(":ROLE", ROLE);


    return    query.exec();
}



QSqlQueryModel * employer::afficher()
{
    QSqlQueryModel * model= new QSqlQueryModel();

    model->setQuery("select * from employer");

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID_EM"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM_EM"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRENOM_EM "));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("NBRJ_EM "));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("ROLE "));



        return model;
}


bool employer::supprimer(int ID_EM)
{
    QSqlQuery query;
    QString res= QString::number(ID_EM);
    query.prepare("Delete from employer where ID_EM = :ID_EM ");
    query.bindValue(":ID_EM", res);


    return    query.exec();
}


bool employer::modifier(int ID_EM,QString NOM_EM,QString PRENOM_EM,int NBRJ_EM,QString ROLE)
{
    QSqlQuery query;
    query.prepare("UPDATE employer SET NOM_EM=:NOM_EM,PRENOM_EM=:PRENOM_EM,NBRJ_EM=:NBRJ_EM,ROLE=:ROLE WHERE ID_EM=:ID_EM");
    query.bindValue(":ID_EM", ID_EM);
    query.bindValue(":NOM_EM", NOM_EM);
    query.bindValue(":PRENOM_EM", PRENOM_EM);
    query.bindValue(":NBRJ_EM", NBRJ_EM);
    query.bindValue(":ROLE", ROLE);


    return    query.exec();

}

QSqlQueryModel* employer::tri()
{
    QSqlQueryModel * model= new QSqlQueryModel();
           model->setQuery("SELECT * FROM employer ORDER BY ID_EM");
           return model;
}
QSqlQueryModel* employer::triN()
{
    QSqlQueryModel * model= new QSqlQueryModel();
           model->setQuery("SELECT * FROM employer ORDER BY NOM_EM");
           return model;
}
QSqlQueryModel* employer::triP()
{
    QSqlQueryModel * model= new QSqlQueryModel();
           model->setQuery("SELECT * FROM employer ORDER BY PRENOM_EM");
           return model;
}



QSqlQueryModel* employer::rechercherID(int ID_EM)
{
    QSqlQueryModel * model= new QSqlQueryModel();
    QString res= QString::number(ID_EM);
       QString recher="select * from employer where ID_EM like '%"+res+"%' ";
       model->setQuery(recher);
       return model;
}


