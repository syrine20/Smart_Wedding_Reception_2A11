#ifndef ORGANISATION_H
#define ORGANISATION_H

#include <QDialog>
#include <QWidget>
#include "salle.h"
#include<QMessageBox>
#include "decorateur.h"
#include <QDialog>
#include <QFileDialog>
#include <QMediaPlayer>
#include <QtDebug>
#include <QSortFilterProxyModel>
#include <QTextTableFormat>
#include <QStandardItemModel>
#include "arduino.h"


namespace Ui {
class Organisation;
}

class Organisation : public QDialog
{
    Q_OBJECT

public:
    explicit Organisation(QWidget *parent = nullptr);
    ~Organisation();


private slots:


    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_13_clicked();

    void on_pushButton_15_clicked();

    void on_pushButton_34_clicked();

    void on_pushButton_21_clicked();

    void on_pushButton_18_clicked();

    void on_pushButton_16_clicked();

    void on_pushButton_23_clicked();

    void on_pushButton_24_clicked();

    void on_pushButton_35_clicked();

    void on_pushButton_27_clicked();

    void on_pushButton_29_clicked();

    void on_pushButton_31_clicked();

    void on_pushButton_33_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_36_clicked();

    void on_pushButton_37_clicked();

    void on_pushButton_38_clicked();

    void on_pushButton_39_clicked();

    void on_pushButton_14_clicked();

    void on_pushButton_25_clicked();

    void on_pushButton_12_clicked();

    void on_pushButton_17_clicked();

    void on_pushButton_32_clicked();

    void on_tabledeco_activated(const QModelIndex &index);

    void on_tablesalle_activated(const QModelIndex &index);

    void on_pushButton_26_clicked();

    void on_pushButton_22_clicked();

    void on_pushButton_text_clicked();

    void on_pushButton_onoff_toggled(bool checked);

    void on_pushButton_40_toggled(bool checked);

    void on_pushButton_onoff_clicked();

    void on_pushButton_40_clicked();

    void on_pushButton_25_toggled(bool checked);

    void on_pushButton_23_toggled(bool checked);

    void on_pushButton_26_toggled(bool checked);

    void on_pushButton_17_toggled(bool checked);

    void on_pushButton_18_toggled(bool checked);

    void on_pushButton_16_toggled(bool checked);

    void on_pushButton_24_toggled(bool checked);

    void on_pushButton_22_toggled(bool checked);

    void on_pushButton_41_toggled(bool checked);

    void on_pushButton_41_clicked();

    void on_pushButton_19_clicked();

    void on_pushButton_21_toggled(bool checked);

    void on_pushButton_42_clicked();
    void sendMail();
    void mailSent(QString);
    void browse();

    void on_pushButton_28_toggled(bool checked);

    void on_pushButton_42_toggled(bool checked);

    void on_pushButton_19_toggled(bool checked);

    void on_pushButton_43_toggled(bool checked);

    void on_pushButton_43_clicked();

    void on_pushButton_20_clicked();

    void on_pushButton_29_toggled(bool checked);

    void on_pushButton_30_clicked();

    void on_pushButton_44_clicked();

    void on_label_33_windowTitleChanged(const QString &title);

private:
    Ui::Organisation *ui;
    salle stmp;
    decorateur dtmp;
    QStringList files;
    QMediaPlayer *player ;
    Arduino A;//objet temporel
    QByteArray data="";//variable contenant les donnnee recue
};

#endif // ORGANISATION_H
