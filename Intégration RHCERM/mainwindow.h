#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "invites.h"
#include "ceremonies.h"
#include "arduino.h"
#include <qbytearray.h>
#include <QSortFilterProxyModel>
#include "personnel.h"
#include "tache.h"
#include <QTextTableFormat>
#include <QStandardItemModel>
#include "exportexcelobject.h"
#include <QDialog>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QSortFilterProxyModel *proxy,*proxyt;
     Personnel tempPerso;
     Tache tempTache;

       void show_tables();
       void fill_form(int);
       void fill_formTache(QString);

private slots:
    void on_btn_login_clicked();

    void on_ajouterinvite_clicked();

    void on_tableViewInvites_activated(const QModelIndex &index);

    void on_supprimerinvite_clicked();

    void on_modifierinvite_clicked();

    void on_ajouterMariage_clicked();

    void on_tableViewCerems_activated(const QModelIndex &index);

    void on_modifierMariage_clicked();

    void on_supprimerMariage_clicked();

    void on_btn_rech_invite_clicked();

    void on_btn_rechfMariage_clicked();

    void on_btn_triefdescMariage_clicked();

    void on_btn_trieDec_clicked();

    void on_btn_trieAsc_clicked();

    void on_btn_triefascMariage_clicked();

    void on_ExcelMariage_clicked();

    void on_Pdf_invitation_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();


    
    void on_supprimerperso_clicked();

    void on_modifierperso_clicked();

    void on_ajouterperso_clicked();

    void on_rechercher_textChanged(const QString &arg1);

    void on_ajouter_tache_clicked();

    void on_supprimertache_clicked();

    void on_modifierTache_clicked();

    void on_export_excel_clicked();

    void on_EmailTache_clicked();

    void on_ON_clicked();

    void on_OFF_clicked();

    void on_RHadmin_clicked();

private:
    Ui::MainWindow *ui;
    invites tmpinvite;
    ceremonies tmpcerem;
    QByteArray data;
    arduino a;
};
#endif // MAINWINDOW_H
