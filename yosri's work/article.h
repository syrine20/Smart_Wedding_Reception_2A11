#ifndef ARTICLE_H
#define ARTICLE_H
#include <qstring.h>
#include <qsqlquerymodel.h>
class article
{
public:
    article();
    article(QString,QString,QString,int,int);
    //setters
    void setnomart(QString nm){nomart=nm;}
    void setidart(QString id){idart=id;}
    void settype(QString tp){type=tp;}
    void setqte(int qt){qte=qt;}
    void setpu(int p){pu=p;}
    //getters
    QString getnomart(){return nomart;}
    QString getidart(){return idart;}
    QString gettype(){return type;}
    int getqte(){return qte;};
    int getpu(){return pu;};
    //methods
    bool ajouter();
    QSqlQueryModel * afficher();
    bool supprimer(QString);
    bool modifier(QString,QString,QString,int,int);
private:
    QString nomart;
    QString idart;
    QString type;
    int qte;
    int pu;
};

#endif // ARTICLE_H
