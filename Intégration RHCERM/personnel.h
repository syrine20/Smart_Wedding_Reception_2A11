#ifndef PERSONNEL_H
#define PERSONNEL_H

#include <QString>
#include <QVariant>
#include <QDate>
#include <QSqlQuery>
#include <QSqlQueryModel>
class Personnel
{
    int CIN;
    QString NomPerso;
    QString PrenomPerso;
    QString DateNaissP;
    QString Mail;
    int TelPerso;
    int NbMarOrg;

public:
    Personnel();
    Personnel( int,QString,QString,QString,QString, int, int);
    int get_CIN(){return CIN;}
    QString get_NomPerso(){return NomPerso;}
    QString get_PrenomPerso(){return PrenomPerso;}
    QString get_DateNaissP(){return DateNaissP;}
    QString get_Mail(){return Mail;}
    int get_TelPerso(){return TelPerso;}
    int get_NbMarOrg(){return NbMarOrg;}

    bool ajouter();
    bool supprimer(int);
    QSqlQueryModel * afficher();
    bool modifier(int);


};

#endif // PERSONNEL_H
