#ifndef COMMANDE_H
#define COMMANDE_H
#include <qstring.h>
#include <qsqlquerymodel.h>
class commande
{
    QString idcmd;
    QString description;
    QString idtrait;
    QString idart;
    int qte;
    int prixtot;
public:
    commande();
    commande(QString,QString,QString,QString,int,int);
 //getters
    QString getidcmd(){return idcmd;}
    QString getdesc(){return description;}
    QString getidtrait(){return idtrait;}
    QString getidart(){return idart;}
    int getqte(){return qte;}
    int getprixtot(){return prixtot;}
    //setters
    void setidcmd(QString d){idcmd=d;}
    void setdesc(QString d){description=d;}
    void setidtrait(QString d){idtrait=d;}
    void setidart(QString d){idart=d;}
    void setqte(int i){qte=i;}
    void setprixtot(int i){prixtot=i;}
    //methods
     bool ajouter();
     QSqlQueryModel * afficher();
     bool supprimer(QString);
     bool modifier(QString,QString);
};

#endif // COMMANDE_H
