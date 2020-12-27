#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "invites.h"
#include "ceremonies.h"
#include "arduino.h"
#include <qbytearray.h>
#include <QDialog>
#include <QWidget>
#include "salle.h"
#include<QMessageBox>
#include "decorateur.h"
#include <QFileDialog>
#include <QMediaPlayer>
#include <QtDebug>
#include <QSortFilterProxyModel>
#include <QTextTableFormat>
#include <QStandardItemModel>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

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


    
    void on_ceremonie_clicked();



    void on_ceremonie_3_clicked();

    void on_ceremonie_2_clicked();



    void on_gerer_salle_clicked();

    void on_gerer_decorateur_clicked();

    void on_quittersalledeco_clicked();

    void on_liste_des_salle_clicked();

    void on_ajouter_salle_clicked();

    void on_quittersalle_clicked();

    void on_retoursalle_clicked();

    void on_liste_de_decorateur_clicked();

    void on_ajouter_decorateur_clicked();

    void on_quitterdeco_clicked();

    void on_retourdeco_clicked();

    void on_ajouter_decorateur_2_clicked();

    void on_return11_clicked();

    void on_ajoutersalle_clicked();

    void on_retouur_clicked();

    void on_a_retour_clicked();

    void on_lieu_recherche_2_clicked();

    void on_style_recherche_clicked();

    void on_idd_recherche_clicked();

    void on_suppression_a_clicked();

    void on_supprimer_deco_clicked();

    void on_update_s_clicked();

    void on_exporteer_pdff_clicked();

    void on_home_clicked();

    void on_retouir_clicked();

    void on_trie_capacite_2_clicked();

    void on_trie_id_clicked();

    void on_trie_prix_clicked();

    void on_trie_lieu_clicked();

    void on_suppression_salle_clicked();

    void on_reserver_salle_clicked();

    void on_salle_email_clicked();

    void on_export_excel_salle_clicked();

    void on_retouur5_clicked();

    void on_homme_clicked();

    void on_okk_clicked();

    void on_back_clicked();

    void sendMail();
    void mailSent(QString);
    void browse();

    void on_backk_clicked();

    void on_imprimer_resrv_clicked();

    void on_backkk_clicked();

    void on_okkkkk_clicked();

    void on_bacck_clicked();

    void on_tabledeco_activated(const QModelIndex &index);

    void on_tablesalle_activated(const QModelIndex &index);

    void on_a_retour_toggled(bool checked);

    void on_recherche_deco_toggled(bool checked);

    void on_lieu_recherche_2_toggled(bool checked);

    void on_style_recherche_toggled(bool checked);

    void on_idd_recherche_toggled(bool checked);

    void on_suppression_a_toggled(bool checked);

    void on_supprimer_deco_toggled(bool checked);

    void on_update_s_toggled(bool checked);

    void on_trie_capacite_2_toggled(bool checked);

    void on_trie_id_toggled(bool checked);

    void on_trie_prix_toggled(bool checked);

    void on_trie_lieu_toggled(bool checked);

    void on_suppression_salle_toggled(bool checked);

    void on_reserver_salle_toggled(bool checked);

    void on_salle_email_toggled(bool checked);

    void on_backk_toggled(bool checked);

    void on_organisation_3_clicked();

    void on_organisation_2_clicked();

private:
    Ui::MainWindow *ui;
    invites tmpinvite;
    ceremonies tmpcerem;
    QByteArray data;//variable contenant les donnnee recue
    arduino a;//objet temporel
    salle stmp;
    decorateur dtmp;
    QStringList files;
    QMediaPlayer *player ;
};
#endif // MAINWINDOW_H
