#ifndef GRADE_H
#define GRADE_H
#include <QString>
#include <QSqlQuery>
#include <qsqlquerymodel.h>

class Grade
{
    QString NomGrade;
    QString DateEmbauche;
    QString SalaireGrade ;
    int IDPG;
    public:
        Grade();
        Grade(QString,QString,QString,int);
        QString get_NomGrade(){return NomGrade;}
        QString get_DateEmbauche(){return DateEmbauche;}
        QString get_salaireGrade(){return SalaireGrade;}
        int get_IDPG(){return IDPG;}

        bool ajouter();
        bool supprimer(QString);
        QSqlQueryModel * afficher();
        bool modifier(QString);
};

#endif // GRADE_H
