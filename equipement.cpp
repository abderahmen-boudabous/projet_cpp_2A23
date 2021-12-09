#include "equipement.h"
#include <QSqlQuery>
#include <QtDebug>
#include <QObject>


Equipement::Equipement()
{

    id=0;
    noms_des_equipements=" ";
    prix=0;
    panne=0;
}
Equipement::Equipement(int id, QString noms_des_EQUIPMENT,int prix,int panne)
{
    this->id=id;
    this->noms_des_equipements=noms_des_EQUIPMENT;
    this->prix=prix;
    this->panne=panne;
}

int     Equipement::getid(){return id;}
QString Equipement::getnoms_des_equipements(){return noms_des_equipements;}
float   Equipement::getprix(){return prix;}
int     Equipement::getpanne(){return panne;}



void Equipement::setid(int id){this->id=id;}
void Equipement::setnoms_des_equipemets(QString noms_des_EQUIPMENT){this->noms_des_equipements=noms_des_EQUIPMENT;}
void Equipement::setprix(int prix){this->prix=prix;}
void Equipement::setpanne(int panne){this->panne=panne;}



bool Equipement::ajouter()
{
   QSqlQuery query;
        QString id_string= QString::number(id);
        QString prix_string= QString::number(prix);
         QString panne_string= QString::number(panne);
             query.prepare("insert into EQUIPEMENT (ide,noms_des_EQUIPMENT,prix,panne)VALUES (:ide,:noms_des_EQUIPMENT,:prix,:panne)");
             query.bindValue(":ide", id_string);
             query.bindValue(":noms_des_EQUIPMENT", noms_des_equipements);
             query.bindValue(":prix", prix);
             query.bindValue(":panne", panne);


        return query.exec();

}


bool Equipement::supprimer(int id)
{
    QSqlQuery query;
          query.prepare("Delete from EQUIPEMENT where ide=:ide");
          query.bindValue (0, id);
         return query.exec();
}
QSqlQueryModel *Equipement::afficher()

{
QSqlQueryModel* model=new QSqlQueryModel();
     model->setQuery("SELECT* FROM EQUIPEMENT");
     model->setHeaderData (0, Qt:: Horizontal,QObject::tr ("ide"));
     model->setHeaderData (1, Qt::Horizontal,QObject::tr("noms_des_EQUIPMENT"));
     model->setHeaderData (2, Qt:: Horizontal,QObject::tr ("prix"));
     model->setHeaderData (3, Qt:: Horizontal,QObject::tr ("panne"));


     return model;
}


bool Equipement::modifier(int id)
{
QSqlQuery query;



    query.prepare("update EQUIPEMENT set panne=?, noms_des_EQUIPMENT=?, prix=? where ide=ide");
    query.addBindValue(id);
    query.addBindValue(noms_des_equipements);
    query.addBindValue(prix);
    query.addBindValue(panne);
return    query.exec();
}


QSqlQueryModel * Equipement::chercher_equip(const QString &aux)
{
    QSqlQueryModel * model = new QSqlQueryModel();

    model->setQuery("select * from EQUIPEMENT where ((id ) LIKE '%"+aux+"%')");
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("panne"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("prix"));

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ide"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("noms_des_EQUIPMENT"));

    return model;
}
QSqlQueryModel * Equipement::chercher_equip1(const QString &aux)
{
    QSqlQueryModel * model = new QSqlQueryModel();

    model->setQuery("select * from EQUIPEMENT where ((noms_des_EQUIPMENT ) LIKE '%"+aux+"%')");
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("panne"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("prix"));

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ide"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("noms_des_EQUIPMENT"));

    return model;
}

QSqlQueryModel* Equipement::tri()
{
    QSqlQueryModel* model = new QSqlQueryModel();

        model->setQuery("select * FROM EQUIPEMENT ORDER BY ID asc");

        model->setHeaderData(3, Qt::Horizontal, QObject::tr("panne"));
        model->setHeaderData(2, Qt::Horizontal, QObject::tr("prix"));

        model->setHeaderData(0, Qt::Horizontal, QObject::tr("ide"));
        model->setHeaderData(1, Qt::Horizontal, QObject::tr("noms_des_EQUIPMENT"));


    return model;
}
QSqlQueryModel* Equipement::tri1()
{
    {
        QSqlQueryModel * model =new QSqlQueryModel();
        model->setQuery("SELECT * FROM EQUIPEMENT ORDER  BY CAST (prix as number) ");
        model->setHeaderData (0, Qt:: Horizontal,QObject::tr ("ide"));
        model->setHeaderData (1, Qt::Horizontal,QObject::tr("noms_des_EQUIPMENT"));
        model->setHeaderData (2, Qt:: Horizontal,QObject::tr ("prix"));
        model->setHeaderData (3, Qt:: Horizontal,QObject::tr ("panne"));

        return model;

    }



}
QSqlQueryModel * Equipement::tri2()
{
    QSqlQueryModel * model =new QSqlQueryModel();
    model->setQuery("SELECT *FROM EQUIPEMENT ORDER BY NOMS_DES_EQUIPMENT asc");
    model->setHeaderData (0, Qt:: Horizontal,QObject::tr ("ide"));
    model->setHeaderData (1, Qt::Horizontal,QObject::tr("noms_des_EQUIPMENT"));
    model->setHeaderData (2, Qt:: Horizontal,QObject::tr ("prix"));
    model->setHeaderData (3, Qt:: Horizontal,QObject::tr ("panne"));
    return model;

}
int Equipement::stati1()
{
    QSqlQuery query;
    int count=0 ;
    QSqlQuery requete("select * from EQUIPEMENT where panne='1' ") ;
    while(requete.next())

    {
            count++ ;
    }

return(count);
}
int Equipement::stati2()
{
    QSqlQuery query;
    int count=0 ;
    QSqlQuery requete("select * from EQUIPEMENT where panne='0' ") ;
    while(requete.next())

    {
            count++ ;
    }
    QSqlQueryModel * model = new QSqlQueryModel();
    model->setHeaderData(0,Qt::Vertical,QObject::tr("Equipement en panne  "));




return(count);
}
int Equipement::nb_total()
{
    QSqlQuery query;
    int count=0 ;
    QSqlQuery requete("select * from EQUIPEMENT ") ;
    while(requete.next())

    {
            count++ ;
    }

return(count);
}

