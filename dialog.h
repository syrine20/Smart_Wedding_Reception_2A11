#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "personnel.h"
#include <QMessageBox>
#include "tache.h"
#include <QSortFilterProxyModel>
#include <QTextTableFormat>
#include <QStandardItemModel>
#include "exportexcelobject.h"

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

     QSortFilterProxyModel *proxy,*proxyt;
      Personnel tempPerso;
      Tache tempTache;


     void show_tables();
     void fill_form(int);
     void fill_formTache(QString);

private slots:


    void on_ajouterperso_clicked();

    void on_supprimerperso_clicked();

    void on_modifierperso_clicked();

    void on_rechercher_textChanged(const QString &arg1);



    void on_ajouter_tache_clicked();

    void on_supprimertache_clicked();

    void on_modifierTache_clicked();

    void on_pushButton_10_clicked();


    void on_export_excel_clicked();

private:
    Ui::Dialog *ui;



};

#endif // DIALOG_H
