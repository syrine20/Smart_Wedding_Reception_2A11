#ifndef TRAITEUR_H
#define TRAITEUR_H
#include <QString>
#include "patisserie.h"

class traiteur
{
public:
    traiteur();
    traiteur(QString,QString,QString,int);
    //getters
    QString getnom(){return nom;}
    QString getid(){return id;}
    QString getemail(){return email;}
    int getcomission(){return comission;}
    //setters
    void setnom(QString nm){nom=nm;}
    void setid(QString i){id=i;}
    void setemail(QString mail){email=mail;}
    void setcomission(int com){comission=com;}
    //methods
    bool ajouter();
    QSqlQueryModel * afficher();
    QSqlQueryModel * affich_dyn(QString );
    bool supprimer(QString);
    bool modifier();
    QSqlQueryModel *trierA();
    QSqlQueryModel *trierB();
private :
    QString nom;
    QString id;
    QString email;
    int comission;
};

#endif // TRAITEUR_H
