#include "client.h"
#include <QSqlQuery>
#include <QtDebug>
#include <QObject>

client::client()
{

    id=0;
    nom=" ";
    prenom=" ";
    mail="";
    age=0;

}
client ::client(int id,QString nom ,QString prenom ,QString mail ,int age )
{
    this->id=id;
    this->nom=nom;
    this->prenom=prenom;
    this->mail=mail;
    this->age=age;

}

int client::getid(){return id;}
QString client::getnom(){return nom;}
QString client::getprenom(){return prenom;}
QString client::getmail(){return mail;}
int client::getage(){return age;}



void client::setid(int id){this->id=id;}
void client::setnom(QString nom){this->nom=nom;}
void client::setprenom(QString prenom){this->prenom=prenom;}
void client::setmail(QString mail){this->mail=mail;}
void client::setage(int age){this->age=age;}


bool client::ajouter()
{
    QSqlQuery query;
        QString id_string= QString::number(id);
        QString age_string= QString::number(age);
             query.prepare("insert into client (id,nom,prenom,mail,age)VALUES (:id,:nom,:prenom,:mail,:age)");
             query.bindValue(":id", id_string);
             query.bindValue(":nom", nom);
             query.bindValue(":prenom", prenom);
             query.bindValue(":mail", mail);
             query.bindValue(":age", age_string);

        return query.exec();
}


QSqlQueryModel* client::afficher()
{
QSqlQueryModel* model=new QSqlQueryModel();
model->setQuery("SELECT * FROM client");

         model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
         model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
         model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom"));
         model->setHeaderData(3, Qt::Horizontal, QObject::tr("mail"));
         model->setHeaderData(4, Qt::Horizontal, QObject::tr("age"));


    return model;
}

bool client::supprimer(int id)
{
    QSqlQuery query;

             query.prepare(" Delete from client where id=:id ");
             query.bindValue(":id", id);

        return query.exec();
}

bool client::modifier()
{

/*QSqlQuery query;


    query.prepare("update client set id=?, nom=?, prenom=?, mail=?, age=? ");
    query.addBindValue(id);
    query.addBindValue(nom);
    query.addBindValue(prenom);
    query.addBindValue(mail);
    query.addBindValue(age);

return    query.exec();*/

    QSqlQuery query;
  //  QString res= QString::number(idd);
    query.prepare("Update client set id = :id , nom = :nom , prenom = :prenom , mail = :mail , age = :age  where id = :id ");
    query.bindValue(":id", id);
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":mail", mail);
    query.bindValue(":age", age);
    return    query.exec();

}

QSqlQueryModel * client::tri()
{
    QSqlQueryModel * model =new QSqlQueryModel();
    model->setQuery("SELECT * FROM client ORDER BY CAST (ID AS number) ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("mail"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("age"));
    return model;
}
QSqlQueryModel * client::tri_nom()
{
    QSqlQueryModel * model =new QSqlQueryModel();
    model->setQuery("SELECT * FROM client ORDER BY NOM ASC ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("mail"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("age"));
    return model;
}
QSqlQueryModel * client::tri_age()
{
    QSqlQueryModel * model =new QSqlQueryModel();
    model->setQuery("SELECT * FROM client ORDER BY CAST (age AS number) ");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("mail"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("age"));
    return model;
}

QSqlQueryModel *client::rechercherid(QString q)
{
     QString res= QString::number(id);
     QSqlQueryModel *model=new QSqlQueryModel();
      model->setQuery("SELECT * FROM client  WHERE id like '%"+q+"%'" );
      model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
      model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
      model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom"));
      model->setHeaderData(3, Qt::Horizontal, QObject::tr("mail"));
      model->setHeaderData(4, Qt::Horizontal, QObject::tr("age"));

      return model;
}

QSqlQueryModel *client::recherchernom(QString q)
{
     QString res= nom ;
     QSqlQueryModel *model=new QSqlQueryModel();
      model->setQuery("SELECT * FROM client  WHERE nom like '%"+q+"%'" );
      model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
      model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
      model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom"));
      model->setHeaderData(3, Qt::Horizontal, QObject::tr("mail"));
      model->setHeaderData(4, Qt::Horizontal, QObject::tr("age"));

      return model;
}


QSqlQueryModel *client::recherchermail(QString q)
{
     QString res= mail ;
     QSqlQueryModel *model=new QSqlQueryModel();
      model->setQuery("SELECT * FROM client  WHERE mail like '%"+q+"%'" );
      model->setHeaderData(0, Qt::Horizontal, QObject::tr("id"));
      model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
      model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom"));
      model->setHeaderData(3, Qt::Horizontal, QObject::tr("mail"));
      model->setHeaderData(4, Qt::Horizontal, QObject::tr("age"));


      return model;
}



