#ifndef INVITES_H
#define INVITES_H

#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDialog>
#include <QDate>


class invites
{public:
    invites();
    invites(int,QString,QString);
    QString get_prenom();
    QString get_nom();
    int get_Id_invitation();
    bool ajouter();
    bool modifier(int);
    QSqlQueryModel * afficher();
    bool supprimer(int);
    QSqlQueryModel *recherche(const QString &);
    QSqlQueryModel * tri_inviDesc(QString);
    QSqlQueryModel * tri_inviAsc(QString);
    void pdffonction();



private:
    QString nom,prenom;
    int Id_invitation;

};

#endif // INVITES_H
