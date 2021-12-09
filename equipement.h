#ifndef EQUIPMENT_H
#define EQUIPMENT_H


#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>


class Equipement
{
public:
    //constructeurs
    Equipement();
    Equipement(int , QString, int ,int);

    //getters

    int getid();
    QString getnoms_des_equipements();
    float getprix();
    int getpanne();

    //setters

    void setid(int);
    void setnoms_des_equipemets(QString);
    void setprix(int);
    void setpanne(int);



    bool ajouter();
    QSqlQueryModel * afficher ();
    bool supprimer (int);
    bool modifier(int);
    QSqlQueryModel *chercher_equip(const QString &aux);
    QSqlQueryModel *chercher_equip1(const QString &aux);
    QSqlQueryModel *tri();
    QSqlQueryModel *tri1();
    QSqlQueryModel *tri2();
    int stati1();
    int stati2();
    int nb_total();



private:
    int id , panne, prix;
    QString noms_des_equipements;

};


#endif // EQUIPMENT_H
