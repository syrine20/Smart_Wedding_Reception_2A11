#ifndef FENETRE_H
#define FENETRE_H

#include <QDialog>
#include <QtMultimedia/qmediaplayer.h>
#include <qdebug.h>
#include "patisserie.h"
#include "traiteur.h"
#include <qmessagebox.h>

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

private:
    Ui::fenetre *ui;
    QMediaPlayer* player ;
    patisserie tempPatiss;
    traiteur tempTrait;
};

#endif // FENETRE_H
