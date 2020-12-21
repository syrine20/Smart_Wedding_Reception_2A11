#ifndef CEREMONIES_H
#define CEREMONIES_H


#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDialog>
#include <QDate>
#include <QDateEdit>


class ceremonies
{public:
    ceremonies();
    ceremonies(int,int,int,float,QString);
    int get_Id_emplacement();
    int get_Code_mariage();
    int get_Nb_invites();
    //QString get_Date();
    float get_Budget();
    QString get_type();

    bool ajouter();
    bool modifier(int);
    QSqlQueryModel * afficher();
    bool supprimer(int);
    QSqlQueryModel *recherche(const QString &);
    QSqlQueryModel * tri_ceremDesc(QString);
    QSqlQueryModel * tri_ceremAsc(QString);
    int calculer(QString );


private:
    //QString Date;
    int Id_emplacement,code_mariage,Nb_invites;
    float Budget;
    QString type;
};

#endif // CEREMONIE_H
