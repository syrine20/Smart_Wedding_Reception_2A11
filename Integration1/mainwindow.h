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
#include "patisserie.h"
#include "traiteur.h"
#include "article.h"
#include "commande.h"
#include <QDialog>
#include "personnel.h"
#include <QMessageBox>
#include "tache.h"
#include <QSortFilterProxyModel>
#include <QTextTableFormat>
#include <QStandardItemModel>
#include "grade.h"
#include "promotion.h"
#include "pack.h"
#include "vente.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    void exporter();
        void print();
    ~MainWindow();
        QSortFilterProxyModel *proxy,*proxyt,*proxyg;
             Personnel tempPerso;
             Tache tempTache;
             Grade tempGrade;


            void show_tables();
            void fill_form(int);
            void fill_formTache(QString);
            void fill_formGrade(QString);
            void recherche(Ui::MainWindow *ui);
            void TRI_ID(Ui::MainWindow *ui);
            void TRI_Categorie(Ui::MainWindow *ui);
            void TRI_Prix(Ui::MainWindow *ui);

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


    
    //void on_ceremonie_clicked();



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

    void on_pushButton_3_clicked();


    void on_toolButton_clicked();

    void on_alimentation_2_clicked();

    void on_alimentation_3_clicked();

    void on_toolButton_4_clicked();


    void on_toolButton_2_clicked();

    void on_TablePatiss_activated(const QModelIndex &index);

    void on_toolButton_3_clicked();

    void on_toolButton_5_clicked();

    void on_pushButton_4_clicked();

    void on_toolButton_6_clicked();

    void on_toolButton_7_clicked();

    void on_toolButton_8_clicked();

    void on_search_textChanged(const QString &arg1);

    void on_toolButton_9_clicked();

    void on_toolButton_10_clicked();

    void on_toolButton_13_clicked();

    void on_toolButton_14_clicked();

    void on_toolButton_16_clicked();

    void on_toolButton_15_clicked();

    void on_toolButton_17_clicked();

    void on_pushButton_5_clicked();

    void on_TableTrait_activated(const QModelIndex &index);

    void on_ajoutart_clicked();

    void on_suppart_clicked();

    void on_modifart_clicked();

    void on_ajoutcmd_clicked();

    void on_suppcmd_clicked();

    void on_modifcmd_clicked();

    void on_AjouterPerso_clicked();

    void on_SupprimerPerso_clicked();

    void on_ModifierPerso_clicked();

    void on_RechercherPerso_textChanged(const QString &arg1);

    void on_AjouterTache_clicked();

    void on_SupprimerTache_clicked();

    void on_ModifierTache_clicked();

    void on_ExportExcelTache_clicked();

    void on_EmailTache_clicked();

    void on_pushButton_PDF_Perso_clicked();

    void on_AjouterGrade_clicked();

    void on_SupprimerGrade_clicked();

    void on_ModifierGrade_clicked();

    void on_RechercherGrade_textChanged(const QString &arg1);

    void on_ON_Cgaz_clicked();

    void on_OFF_Cgaz_clicked();

    void on_RessourcesHumaine_clicked();

    void on_pushButton_RetourRHMenu_clicked();

    void on_ImprimerListeGrade_clicked();

    void on_marketing_2_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton__valider_promotions_ajouter_clicked();

    void on_pushButton_modif_promotions_clicked();

    void on_pushButton_supp_promotions_clicked();

    void on_pushButton_valider_Packs_ajouter_clicked();

    void on_pushButton_modif_pack_clicked();

    void on_pushButton_supp_pack_clicked();

    void on_pushButton_rechercher_packs_clicked();

    void on_pushButton_tri_pack_ID_clicked();

    void on_pushButton_tri_id_pack_inverse_clicked();

    void on_pushButton_tri_categorie_pack_clicked();

    void on_pushButton_tri_categorie_pack_inverse_clicked();

    void on_pushButton_tri_pack_prix_clicked();

    void on_pushButton_tri_prix_pack_inverse_clicked();

    void on_pushButton_pdf_clicked();

    void on_pushButton_imprimer_liste_promotions_clicked();

    void on_pushButto_ajouter_vente_clicked();

    void on_pushButton_retour_promotions_ajouter_clicked();

    void on_pushButton_retour_promotions_consulter_clicked();

    void on_pushButton_retour_packs_ajouter_clicked();

    void on_pushButton_retour_packs_consulter_clicked();

    void on_pushButton_retour_ventes_clicked();

    void on_comboBox_activated(const QString &arg1);

    void on_trait_activated(const QString &arg1);

    void on_type_activated(const QString &arg1);



    void on_liste_activated(int index);

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
    patisserie tempPatiss;
    commande tempCmd;
    traiteur tempTrait;
    article tempArt;
    pack PA;
    promotion P;
    vente V;
    int rl; //role 1=admin 2=employé


};
#endif // MAINWINDOW_H
