#ifndef EMPLOYER_H
#define EMPLOYER_H
#include<QString>
#include<QSqlQueryModel>

class employer
{
public:
    void setNOM_EM(QString n);
    void setPREMON_EM(QString n);
    void setID_EM(int n);
    void setNBRJ_EM(int n);
    void setROLE(QString n);

    QString get_NOM_EM(){return NOM_EM;}
    QString get_PRENOM_EM(){return PRENOM_EM;}
    int get_ID_EM(){return ID_EM;}
    int get_NBRJ_EM(){return NBRJ_EM;}
    QString get_ROLE(){return ROLE;}

    employer();
    employer(int,QString,QString,int,QString);
    bool ajouter();
    QSqlQueryModel * afficher();
    bool supprimer(int);
    bool modifier(int,QString,QString,int,QString);


    QSqlQueryModel * tri();
    QSqlQueryModel * triN();
    QSqlQueryModel * triP();


  QSqlQueryModel* rechercherID(int );





private:
        QString NOM_EM,PRENOM_EM,ROLE;
        int ID_EM,NBRJ_EM;
};
#endif // EMPLOYER_H
