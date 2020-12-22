#ifndef FENETRE_H
#define FENETRE_H

#include <QDialog>
#include <QtMultimedia/qmediaplayer.h>
#include <qdebug.h>
#include "patisserie.h"
#include "traiteur.h"
#include <qmessagebox.h>
#include "commande.h"
#include "article.h"
namespace Ui {
class fenetre;
}

class fenetre : public QDialog
{
    Q_OBJECT

public:
    explicit fenetre(QWidget *parent = nullptr);
    void exporter();
    void print();
    //QSqlQueryModel * affich_dyn();
    ~fenetre();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_supp1_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_modif1_clicked();


    void on_pushButton_9_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_14_clicked();

    void on_tableView_activated(const QModelIndex &index);


    void on_tableView_2_activated(const QModelIndex &index);

    void on_lineEdit_4_textChanged(const QString &arg1);

    void on_pushButton_15_clicked();

    void on_pushButton_16_clicked();

    void on_toolButton_clicked();


    void on_pushButton_17_clicked();

    void on_toolButton_2_clicked();

private:
    Ui::fenetre *ui;
    QMediaPlayer* player ;
    patisserie tempPatiss;
    traiteur tempTrait;
    commande tempCmd;
    article  tempArt;
};

#endif // FENETRE_H
