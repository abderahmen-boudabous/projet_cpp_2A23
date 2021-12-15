#include "ticket.h"
#include<QSqlQuery>
#include<QDebug>
#include<QObject>
#include<QtGlobal>
ticket::ticket()//default constructor
{
id=0;
type="";
etat="";

prix=0;
}
ticket::ticket(int id)//default constructor
{
this->id=id;
type="";
etat="";

prix=0;
}
ticket::ticket(int id ,QString type,QString etat,int prix)//parameter constructor
{
    this->id=id;
    this->type=type;
    this->etat=etat;

    this->prix=prix;
}



bool ticket::ajouter()
{
    QSqlQuery query;
    QString id_string;
            id_string=QString::number(id);
    QString prixString=QString::number(prix);

    query.prepare("INSERT INTO ticket(id_t,type, etat , prix)"
                  "VALUES (:id, :type, :etat, :prix)");
    query.bindValue(":id_t",id_string);
    query.bindValue(":type",type);
    query.bindValue(":etat",etat);
    query.bindValue(":prix",prixString);


    return query.exec();
}
QSqlQueryModel* ticket::afficher()
{

    QSqlQueryModel* model=new QSqlQueryModel();

          model->setQuery("SELECT* from ticket");
          model->setHeaderData(0, Qt::Horizontal, QObject::tr("id_t"));
          model->setHeaderData(1, Qt::Horizontal, QObject::tr("type "));
          model->setHeaderData(2, Qt::Horizontal, QObject::tr("etat"));
          model->setHeaderData(3, Qt::Horizontal, QObject::tr("prix"));



    return model;

}
bool ticket::supprimer(int id)
{
    bool test=rech(id);
    QSqlQuery query;

    query.prepare("Delete from ticket where id_t= :id_t");
    query.bindValue(":id_t",id);
     query.exec();
     return test;
}
bool ticket::rech(int id)
{
    QString ide=QString::number(id);
    QSqlQuery q("select * from ticket where id_t="+ide);
    return q.next();
}
bool ticket::modifier(int id)
{
QSqlQuery query;



    query.prepare("update ticket set type=:type, etat=:etat, prix=:prix where id_t=:id_t");
      query.bindValue(":id_t",id);
    query.bindValue(":type",type);
    query.bindValue(":prix",prix);
    query.bindValue(":etat",etat);








query.exec();
return rech(id);
}
void ticket::chercherticket(int critere)
{
    QSqlQuery query;


    if(critere==1)
    {
        query.prepare("SELECT * FROM ticket WHERE id_t =:id_t" );
        query.bindValue(":id_t", id);
        query.exec();




        while(query.next())
       {
            this->id=query.value(0).toInt();

            this->type=query.value(1).toString();
            this->etat=query.value(2).toString();

            this->prix=query.value(4).toInt();

       }
    }

}
QSqlQueryModel *ticket::recherchercode(QString q)
{
     QString res= QString::number(id);
     QSqlQueryModel *model=new QSqlQueryModel();
      model->setQuery("SELECT * FROM ticket  WHERE  id_t like '%"+q+"%'" );
      model->setHeaderData(0, Qt::Horizontal, QObject::tr("id_t"));
      model->setHeaderData(1, Qt::Horizontal, QObject::tr("type"));
      model->setHeaderData(2, Qt::Horizontal, QObject::tr("etat"));
      model->setHeaderData(4, Qt::Horizontal, QObject::tr("prix"));


      return model;
}
QSqlQueryModel *ticket::recherchertype(QString q)
{
     QString res=type;
     QSqlQueryModel *model=new QSqlQueryModel();
      model->setQuery("SELECT * FROM ticket  WHERE type like '%"+q+"%'" );
      model->setHeaderData(0, Qt::Horizontal, QObject::tr("id_t"));
      model->setHeaderData(1, Qt::Horizontal, QObject::tr("type"));
      model->setHeaderData(2, Qt::Horizontal, QObject::tr("etat"));
      model->setHeaderData(3, Qt::Horizontal, QObject::tr("prix"));


      return model;
}

QSqlQueryModel * ticket::tri()
{
    QSqlQueryModel * model =new QSqlQueryModel();
    model->setQuery("SELECT * FROM ticket ORDER BY CAST (id_t AS number) ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id_t"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("type"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("etat"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("prix."));


    return model;
}
QSqlQueryModel * ticket::trim()
{
    QSqlQueryModel * model =new QSqlQueryModel();
    model->setQuery("SELECT * FROM ticket  ORDER BY type ASC ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id_t"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("type"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("etat"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("prix"));


    return model;
}
QSqlQueryModel * ticket::trie()
{
    QSqlQueryModel * model =new QSqlQueryModel();
   model->setQuery("SELECT * FROM ticket ORDER BY CAST (prix AS number) ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id_t"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("type"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("etat"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("prix"));


    return model;
}

