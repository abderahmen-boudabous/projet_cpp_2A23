#ifndef GESTIONCOMPTE_H
#define GESTIONCOMPTE_H
#include <QString>
#include <QSqlQueryModel>

class client
{
public:
    //constructeurs
    client();
    client(int , QString ,QString ,QString ,int );

    //getters

    int getid();
    QString getnom();
    QString getprenom();
    QString getmail();
    int getage();


    //setters

    void setid(int);
    void setnom(QString);
    void setprenom(QString);
    void setmail(QString);
    void setage(int);


    bool ajouter();
    QSqlQueryModel* afficher();
    bool supprimer(int);
    bool modifier();

    QSqlQueryModel* tri();
    QSqlQueryModel* tri_nom();
    QSqlQueryModel* tri_age();

    QSqlQueryModel *rechercherid(QString);
    QSqlQueryModel *recherchernom(QString);
    QSqlQueryModel *recherchermail(QString);

private:
    int id,age;
    QString nom , prenom , mail ;
};

#endif // GESTIONCOMPTE_H
