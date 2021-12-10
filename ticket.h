#ifndef TICKET_H
#define TICKET_H
#include<QString>
#include<QSqlQuery>
#include<QSqlQueryModel>


class ticket
{
 public:
    ticket();
    ticket(int);
    ticket(int  , QString , QString , int);
    int getcode();
    QString getmarque();
    QString getdatee();

    int getquantite();
    void setcode(int);
    void setmarque(QString);
    void setdatee(QString);

    void setquantite(int);

    bool ajouter();
    bool supprimer(int code);
    QSqlQueryModel* afficher();
    bool modifier(int);
    void chercherticket(int );
     QSqlQueryModel *recherchercode(QString);
  QSqlQueryModel *recherchertype(QString);
  QSqlQueryModel *tri();
  QSqlQueryModel *trim();
  QSqlQueryModel *trie();
  bool rech(int);
private:
    int id;

    QString type;

    QString etat;
    int prix;
};
#endif // TICKET_H
