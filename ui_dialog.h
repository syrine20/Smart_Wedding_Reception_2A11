/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *background1;
    QTabWidget *tabWidget_entites;
    QWidget *tab_Promotions;
    QTabWidget *tabWidget_promotions;
    QWidget *tab_promotions_ajouter;
    QPushButton *pushButton__valider_promotions_ajouter;
    QLabel *label_mail_promotion;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_Promotions_Ajouter;
    QLabel *label_ID_promotions_ajouter;
    QLineEdit *lineEdit_ID_promotions_ajouter;
    QLabel *label_Nom_promotions_ajouter;
    QLineEdit *lineEdit_Nom_promotions_ajouter;
    QLabel *label_pourcentge_promotions_ajouter;
    QLineEdit *lineEdit_pourcentge_promotions_ajouter;
    QWidget *tab_promotions_consulter;
    QLabel *label_liste_promotions_consulter;
    QTableView *tableView_Promotions_consulter;
    QLabel *ID_promotion_supprimer;
    QLineEdit *lineEdit_supp_promotions;
    QPushButton *pushButton_supp_promotions;
    QPushButton *pushButton_modif_promotions;
    QWidget *tab_Packs;
    QTabWidget *tabWidget_packs;
    QWidget *tab_packs_ajouter;
    QPushButton *pushButton_valider_Packs_ajouter;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_pack;
    QLabel *label_ID_Packs_Ajouter;
    QLabel *label_Categorie_Packs_Ajouter;
    QLabel *label_Liste_Packs_Ajouter;
    QLineEdit *lineEdit_Liste_Packs_Ajouter;
    QLineEdit *lineEdit_ID_Packs_Ajouter;
    QLabel *label_prix_initial_packs_ajouter;
    QLineEdit *lineEdit_prix_initial_packs_ajouter;
    QComboBox *comboBox_Categorie_Packs_Ajouter;
    QWidget *tab_packs_consulter;
    QLabel *label_liste_packs_consulter;
    QLineEdit *lineEdit_rechercher_packs_consulter;
    QTableView *tableView_packs_consulter;
    QLabel *ID_pack_supprimer;
    QLineEdit *lineEdit_sup_pack;
    QPushButton *pushButton_supp_pack;
    QPushButton *pushButton_modif_pack;
    QPushButton *pushButton_rechercher_packs;
    QPushButton *pushButton_tri_pack_ID;
    QPushButton *pushButton_tri_categorie_pack;
    QPushButton *pushButton_tri_pack_prix;
    QPushButton *pushButton_tri_id_pack_inverse;
    QPushButton *pushButton_tri_categorie_pack_inverse;
    QPushButton *pushButton_tri_prix_pack_inverse;
    QWidget *tab_packs_statistiques;
    QWidget *widget_green;
    QWidget *widget_red;
    QWidget *widget_blue;
    QWidget *tab_Ventes;
    QLabel *label_liste_Ventes;
    QListView *listView_Ventes;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(959, 667);
        background1 = new QLabel(Dialog);
        background1->setObjectName(QString::fromUtf8("background1"));
        background1->setGeometry(QRect(0, 0, 961, 641));
        background1->setStyleSheet(QString::fromUtf8("background-image: url(:/images/aaa.jpg);"));
        tabWidget_entites = new QTabWidget(Dialog);
        tabWidget_entites->setObjectName(QString::fromUtf8("tabWidget_entites"));
        tabWidget_entites->setGeometry(QRect(110, 140, 741, 501));
        QFont font;
        font.setFamily(QString::fromUtf8("Blackadder ITC"));
        font.setPointSize(18);
        font.setBold(false);
        font.setWeight(50);
        tabWidget_entites->setFont(font);
        tabWidget_entites->setMouseTracking(false);
        tabWidget_entites->setTabletTracking(false);
        tabWidget_entites->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 225);\n"
"color: rgb(85, 85, 127);"));
        tabWidget_entites->setTabShape(QTabWidget::Triangular);
        tab_Promotions = new QWidget();
        tab_Promotions->setObjectName(QString::fromUtf8("tab_Promotions"));
        tabWidget_promotions = new QTabWidget(tab_Promotions);
        tabWidget_promotions->setObjectName(QString::fromUtf8("tabWidget_promotions"));
        tabWidget_promotions->setGeometry(QRect(0, 0, 741, 451));
        QFont font1;
        font1.setFamily(QString::fromUtf8("MS Sans Serif"));
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setItalic(true);
        font1.setWeight(50);
        tabWidget_promotions->setFont(font1);
        tabWidget_promotions->setStyleSheet(QString::fromUtf8("color: rgb(71, 142, 255);\n"
"font: italic 12pt \"MS Sans Serif\";\n"
""));
        tabWidget_promotions->setTabShape(QTabWidget::Triangular);
        tab_promotions_ajouter = new QWidget();
        tab_promotions_ajouter->setObjectName(QString::fromUtf8("tab_promotions_ajouter"));
        pushButton__valider_promotions_ajouter = new QPushButton(tab_promotions_ajouter);
        pushButton__valider_promotions_ajouter->setObjectName(QString::fromUtf8("pushButton__valider_promotions_ajouter"));
        pushButton__valider_promotions_ajouter->setGeometry(QRect(220, 330, 93, 28));
        pushButton__valider_promotions_ajouter->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(164, 255, 190, 255), stop:1 rgba(255, 255, 255, 255));"));
        label_mail_promotion = new QLabel(tab_promotions_ajouter);
        label_mail_promotion->setObjectName(QString::fromUtf8("label_mail_promotion"));
        label_mail_promotion->setGeometry(QRect(400, 330, 41, 31));
        label_mail_promotion->setStyleSheet(QString::fromUtf8("border-image: url(:/images/mail2.png);"));
        layoutWidget = new QWidget(tab_promotions_ajouter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 50, 381, 211));
        gridLayout_Promotions_Ajouter = new QGridLayout(layoutWidget);
        gridLayout_Promotions_Ajouter->setObjectName(QString::fromUtf8("gridLayout_Promotions_Ajouter"));
        gridLayout_Promotions_Ajouter->setContentsMargins(0, 0, 0, 0);
        label_ID_promotions_ajouter = new QLabel(layoutWidget);
        label_ID_promotions_ajouter->setObjectName(QString::fromUtf8("label_ID_promotions_ajouter"));
        label_ID_promotions_ajouter->setEnabled(true);
        label_ID_promotions_ajouter->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(79, 179, 255, 255), stop:1 rgba(255, 255, 255, 255));"));

        gridLayout_Promotions_Ajouter->addWidget(label_ID_promotions_ajouter, 0, 0, 1, 1);

        lineEdit_ID_promotions_ajouter = new QLineEdit(layoutWidget);
        lineEdit_ID_promotions_ajouter->setObjectName(QString::fromUtf8("lineEdit_ID_promotions_ajouter"));

        gridLayout_Promotions_Ajouter->addWidget(lineEdit_ID_promotions_ajouter, 0, 1, 1, 1);

        label_Nom_promotions_ajouter = new QLabel(layoutWidget);
        label_Nom_promotions_ajouter->setObjectName(QString::fromUtf8("label_Nom_promotions_ajouter"));
        label_Nom_promotions_ajouter->setStyleSheet(QString::fromUtf8("font: 75 10pt \"MS Shell Dlg 2\";\n"
"color: rgb(0, 0, 0);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(79, 179, 255, 255), stop:1 rgba(255, 255, 255, 255));"));

        gridLayout_Promotions_Ajouter->addWidget(label_Nom_promotions_ajouter, 1, 0, 1, 1);

        lineEdit_Nom_promotions_ajouter = new QLineEdit(layoutWidget);
        lineEdit_Nom_promotions_ajouter->setObjectName(QString::fromUtf8("lineEdit_Nom_promotions_ajouter"));

        gridLayout_Promotions_Ajouter->addWidget(lineEdit_Nom_promotions_ajouter, 1, 1, 1, 1);

        label_pourcentge_promotions_ajouter = new QLabel(layoutWidget);
        label_pourcentge_promotions_ajouter->setObjectName(QString::fromUtf8("label_pourcentge_promotions_ajouter"));
        label_pourcentge_promotions_ajouter->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(79, 179, 255, 255), stop:1 rgba(255, 255, 255, 255));"));

        gridLayout_Promotions_Ajouter->addWidget(label_pourcentge_promotions_ajouter, 2, 0, 1, 1);

        lineEdit_pourcentge_promotions_ajouter = new QLineEdit(layoutWidget);
        lineEdit_pourcentge_promotions_ajouter->setObjectName(QString::fromUtf8("lineEdit_pourcentge_promotions_ajouter"));

        gridLayout_Promotions_Ajouter->addWidget(lineEdit_pourcentge_promotions_ajouter, 2, 1, 1, 1);

        tabWidget_promotions->addTab(tab_promotions_ajouter, QString());
        tab_promotions_consulter = new QWidget();
        tab_promotions_consulter->setObjectName(QString::fromUtf8("tab_promotions_consulter"));
        label_liste_promotions_consulter = new QLabel(tab_promotions_consulter);
        label_liste_promotions_consulter->setObjectName(QString::fromUtf8("label_liste_promotions_consulter"));
        label_liste_promotions_consulter->setGeometry(QRect(10, 10, 171, 31));
        label_liste_promotions_consulter->setStyleSheet(QString::fromUtf8("font: 75 10pt \"MS Shell Dlg 2\";\n"
"color: rgb(0, 0, 0);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(164, 255, 190, 255), stop:1 rgba(255, 255, 255, 255));"));
        tableView_Promotions_consulter = new QTableView(tab_promotions_consulter);
        tableView_Promotions_consulter->setObjectName(QString::fromUtf8("tableView_Promotions_consulter"));
        tableView_Promotions_consulter->setGeometry(QRect(10, 50, 501, 361));
        ID_promotion_supprimer = new QLabel(tab_promotions_consulter);
        ID_promotion_supprimer->setObjectName(QString::fromUtf8("ID_promotion_supprimer"));
        ID_promotion_supprimer->setGeometry(QRect(520, 310, 61, 21));
        ID_promotion_supprimer->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 75 12pt \"MS Shell Dlg 2\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(79, 179, 255, 255), stop:1 rgba(255, 255, 255, 255));"));
        lineEdit_supp_promotions = new QLineEdit(tab_promotions_consulter);
        lineEdit_supp_promotions->setObjectName(QString::fromUtf8("lineEdit_supp_promotions"));
        lineEdit_supp_promotions->setGeometry(QRect(590, 310, 113, 22));
        pushButton_supp_promotions = new QPushButton(tab_promotions_consulter);
        pushButton_supp_promotions->setObjectName(QString::fromUtf8("pushButton_supp_promotions"));
        pushButton_supp_promotions->setGeometry(QRect(600, 360, 51, 31));
        pushButton_supp_promotions->setStyleSheet(QString::fromUtf8("border-image: url(:/images/supprimer.png);"));
        pushButton_modif_promotions = new QPushButton(tab_promotions_consulter);
        pushButton_modif_promotions->setObjectName(QString::fromUtf8("pushButton_modif_promotions"));
        pushButton_modif_promotions->setGeometry(QRect(600, 130, 41, 31));
        pushButton_modif_promotions->setStyleSheet(QString::fromUtf8("border-image: url(:/images/modifier.png);"));
        tabWidget_promotions->addTab(tab_promotions_consulter, QString());
        tabWidget_entites->addTab(tab_Promotions, QString());
        tab_Packs = new QWidget();
        tab_Packs->setObjectName(QString::fromUtf8("tab_Packs"));
        tabWidget_packs = new QTabWidget(tab_Packs);
        tabWidget_packs->setObjectName(QString::fromUtf8("tabWidget_packs"));
        tabWidget_packs->setGeometry(QRect(0, 0, 741, 451));
        tabWidget_packs->setStyleSheet(QString::fromUtf8("color: rgb(71, 142, 255);\n"
"font: italic 12pt \"MS Sans Serif\";\n"
"\n"
"\n"
""));
        tabWidget_packs->setTabShape(QTabWidget::Triangular);
        tab_packs_ajouter = new QWidget();
        tab_packs_ajouter->setObjectName(QString::fromUtf8("tab_packs_ajouter"));
        pushButton_valider_Packs_ajouter = new QPushButton(tab_packs_ajouter);
        pushButton_valider_Packs_ajouter->setObjectName(QString::fromUtf8("pushButton_valider_Packs_ajouter"));
        pushButton_valider_Packs_ajouter->setGeometry(QRect(220, 330, 93, 28));
        pushButton_valider_Packs_ajouter->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(164, 255, 190, 255), stop:1 rgba(255, 255, 255, 255));\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
""));
        layoutWidget1 = new QWidget(tab_packs_ajouter);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(40, 40, 301, 241));
        gridLayout_pack = new QGridLayout(layoutWidget1);
        gridLayout_pack->setObjectName(QString::fromUtf8("gridLayout_pack"));
        gridLayout_pack->setContentsMargins(0, 0, 0, 0);
        label_ID_Packs_Ajouter = new QLabel(layoutWidget1);
        label_ID_Packs_Ajouter->setObjectName(QString::fromUtf8("label_ID_Packs_Ajouter"));
        label_ID_Packs_Ajouter->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(79, 179, 255, 255), stop:1 rgba(255, 255, 255, 255));"));

        gridLayout_pack->addWidget(label_ID_Packs_Ajouter, 0, 0, 1, 1);

        label_Categorie_Packs_Ajouter = new QLabel(layoutWidget1);
        label_Categorie_Packs_Ajouter->setObjectName(QString::fromUtf8("label_Categorie_Packs_Ajouter"));
        label_Categorie_Packs_Ajouter->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(79, 179, 255, 255), stop:1 rgba(255, 255, 255, 255));"));

        gridLayout_pack->addWidget(label_Categorie_Packs_Ajouter, 1, 0, 1, 1);

        label_Liste_Packs_Ajouter = new QLabel(layoutWidget1);
        label_Liste_Packs_Ajouter->setObjectName(QString::fromUtf8("label_Liste_Packs_Ajouter"));
        label_Liste_Packs_Ajouter->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(79, 179, 255, 255), stop:1 rgba(255, 255, 255, 255));"));

        gridLayout_pack->addWidget(label_Liste_Packs_Ajouter, 2, 0, 1, 1);

        lineEdit_Liste_Packs_Ajouter = new QLineEdit(layoutWidget1);
        lineEdit_Liste_Packs_Ajouter->setObjectName(QString::fromUtf8("lineEdit_Liste_Packs_Ajouter"));

        gridLayout_pack->addWidget(lineEdit_Liste_Packs_Ajouter, 2, 1, 1, 1);

        lineEdit_ID_Packs_Ajouter = new QLineEdit(layoutWidget1);
        lineEdit_ID_Packs_Ajouter->setObjectName(QString::fromUtf8("lineEdit_ID_Packs_Ajouter"));

        gridLayout_pack->addWidget(lineEdit_ID_Packs_Ajouter, 0, 1, 1, 1);

        label_prix_initial_packs_ajouter = new QLabel(layoutWidget1);
        label_prix_initial_packs_ajouter->setObjectName(QString::fromUtf8("label_prix_initial_packs_ajouter"));
        label_prix_initial_packs_ajouter->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(79, 179, 255, 255), stop:1 rgba(255, 255, 255, 255));"));

        gridLayout_pack->addWidget(label_prix_initial_packs_ajouter, 3, 0, 1, 1);

        lineEdit_prix_initial_packs_ajouter = new QLineEdit(layoutWidget1);
        lineEdit_prix_initial_packs_ajouter->setObjectName(QString::fromUtf8("lineEdit_prix_initial_packs_ajouter"));

        gridLayout_pack->addWidget(lineEdit_prix_initial_packs_ajouter, 3, 1, 1, 1);

        comboBox_Categorie_Packs_Ajouter = new QComboBox(layoutWidget1);
        comboBox_Categorie_Packs_Ajouter->addItem(QString());
        comboBox_Categorie_Packs_Ajouter->addItem(QString());
        comboBox_Categorie_Packs_Ajouter->addItem(QString());
        comboBox_Categorie_Packs_Ajouter->setObjectName(QString::fromUtf8("comboBox_Categorie_Packs_Ajouter"));

        gridLayout_pack->addWidget(comboBox_Categorie_Packs_Ajouter, 1, 1, 1, 1);

        tabWidget_packs->addTab(tab_packs_ajouter, QString());
        tab_packs_consulter = new QWidget();
        tab_packs_consulter->setObjectName(QString::fromUtf8("tab_packs_consulter"));
        label_liste_packs_consulter = new QLabel(tab_packs_consulter);
        label_liste_packs_consulter->setObjectName(QString::fromUtf8("label_liste_packs_consulter"));
        label_liste_packs_consulter->setGeometry(QRect(10, 10, 191, 31));
        label_liste_packs_consulter->setStyleSheet(QString::fromUtf8("font: 75 10pt \"MS Shell Dlg 2\";\n"
"color: rgb(0, 0, 0);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(164, 255, 190, 255), stop:1 rgba(255, 255, 255, 255));"));
        lineEdit_rechercher_packs_consulter = new QLineEdit(tab_packs_consulter);
        lineEdit_rechercher_packs_consulter->setObjectName(QString::fromUtf8("lineEdit_rechercher_packs_consulter"));
        lineEdit_rechercher_packs_consulter->setGeometry(QRect(500, 80, 151, 22));
        tableView_packs_consulter = new QTableView(tab_packs_consulter);
        tableView_packs_consulter->setObjectName(QString::fromUtf8("tableView_packs_consulter"));
        tableView_packs_consulter->setGeometry(QRect(0, 50, 471, 361));
        ID_pack_supprimer = new QLabel(tab_packs_consulter);
        ID_pack_supprimer->setObjectName(QString::fromUtf8("ID_pack_supprimer"));
        ID_pack_supprimer->setGeometry(QRect(480, 320, 91, 31));
        ID_pack_supprimer->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"font: 75 10pt \"MS Shell Dlg 2\";\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(79, 179, 255, 255), stop:1 rgba(255, 255, 255, 255));"));
        lineEdit_sup_pack = new QLineEdit(tab_packs_consulter);
        lineEdit_sup_pack->setObjectName(QString::fromUtf8("lineEdit_sup_pack"));
        lineEdit_sup_pack->setGeometry(QRect(590, 320, 121, 31));
        pushButton_supp_pack = new QPushButton(tab_packs_consulter);
        pushButton_supp_pack->setObjectName(QString::fromUtf8("pushButton_supp_pack"));
        pushButton_supp_pack->setGeometry(QRect(530, 360, 41, 31));
        pushButton_supp_pack->setStyleSheet(QString::fromUtf8("border-image: url(:/images/supprimer.png);"));
        pushButton_modif_pack = new QPushButton(tab_packs_consulter);
        pushButton_modif_pack->setObjectName(QString::fromUtf8("pushButton_modif_pack"));
        pushButton_modif_pack->setGeometry(QRect(500, 200, 41, 31));
        pushButton_modif_pack->setStyleSheet(QString::fromUtf8("border-image: url(:/images/modifier.png);"));
        pushButton_rechercher_packs = new QPushButton(tab_packs_consulter);
        pushButton_rechercher_packs->setObjectName(QString::fromUtf8("pushButton_rechercher_packs"));
        pushButton_rechercher_packs->setGeometry(QRect(660, 80, 51, 31));
        pushButton_rechercher_packs->setStyleSheet(QString::fromUtf8("border-image: url(:/images/rechercher.png);"));
        pushButton_tri_pack_ID = new QPushButton(tab_packs_consulter);
        pushButton_tri_pack_ID->setObjectName(QString::fromUtf8("pushButton_tri_pack_ID"));
        pushButton_tri_pack_ID->setGeometry(QRect(520, 50, 31, 21));
        pushButton_tri_pack_ID->setStyleSheet(QString::fromUtf8("border-image: url(:/images/tri_AZ.png);"));
        pushButton_tri_categorie_pack = new QPushButton(tab_packs_consulter);
        pushButton_tri_categorie_pack->setObjectName(QString::fromUtf8("pushButton_tri_categorie_pack"));
        pushButton_tri_categorie_pack->setGeometry(QRect(580, 120, 131, 31));
        pushButton_tri_pack_prix = new QPushButton(tab_packs_consulter);
        pushButton_tri_pack_prix->setObjectName(QString::fromUtf8("pushButton_tri_pack_prix"));
        pushButton_tri_pack_prix->setGeometry(QRect(590, 190, 93, 28));
        pushButton_tri_id_pack_inverse = new QPushButton(tab_packs_consulter);
        pushButton_tri_id_pack_inverse->setObjectName(QString::fromUtf8("pushButton_tri_id_pack_inverse"));
        pushButton_tri_id_pack_inverse->setGeometry(QRect(600, 160, 93, 28));
        pushButton_tri_categorie_pack_inverse = new QPushButton(tab_packs_consulter);
        pushButton_tri_categorie_pack_inverse->setObjectName(QString::fromUtf8("pushButton_tri_categorie_pack_inverse"));
        pushButton_tri_categorie_pack_inverse->setGeometry(QRect(540, 220, 181, 28));
        pushButton_tri_prix_pack_inverse = new QPushButton(tab_packs_consulter);
        pushButton_tri_prix_pack_inverse->setObjectName(QString::fromUtf8("pushButton_tri_prix_pack_inverse"));
        pushButton_tri_prix_pack_inverse->setGeometry(QRect(540, 260, 171, 28));
        tabWidget_packs->addTab(tab_packs_consulter, QString());
        tab_packs_statistiques = new QWidget();
        tab_packs_statistiques->setObjectName(QString::fromUtf8("tab_packs_statistiques"));
        widget_green = new QWidget(tab_packs_statistiques);
        widget_green->setObjectName(QString::fromUtf8("widget_green"));
        widget_green->setGeometry(QRect(610, 30, 41, 41));
        widget_green->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 0);"));
        widget_red = new QWidget(tab_packs_statistiques);
        widget_red->setObjectName(QString::fromUtf8("widget_red"));
        widget_red->setGeometry(QRect(610, 120, 41, 41));
        widget_red->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 0);"));
        widget_blue = new QWidget(tab_packs_statistiques);
        widget_blue->setObjectName(QString::fromUtf8("widget_blue"));
        widget_blue->setGeometry(QRect(610, 210, 41, 41));
        widget_blue->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 255);"));
        tabWidget_packs->addTab(tab_packs_statistiques, QString());
        tabWidget_entites->addTab(tab_Packs, QString());
        tab_Ventes = new QWidget();
        tab_Ventes->setObjectName(QString::fromUtf8("tab_Ventes"));
        label_liste_Ventes = new QLabel(tab_Ventes);
        label_liste_Ventes->setObjectName(QString::fromUtf8("label_liste_Ventes"));
        label_liste_Ventes->setGeometry(QRect(10, 10, 221, 31));
        label_liste_Ventes->setStyleSheet(QString::fromUtf8("font: 75 10pt \"MS Shell Dlg 2\";\n"
"color: rgb(0, 0, 0);\n"
"background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(164, 255, 190, 255), stop:1 rgba(255, 255, 255, 255));"));
        listView_Ventes = new QListView(tab_Ventes);
        listView_Ventes->setObjectName(QString::fromUtf8("listView_Ventes"));
        listView_Ventes->setGeometry(QRect(10, 50, 701, 391));
        tabWidget_entites->addTab(tab_Ventes, QString());

        retranslateUi(Dialog);

        tabWidget_entites->setCurrentIndex(1);
        tabWidget_promotions->setCurrentIndex(0);
        tabWidget_packs->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        background1->setText(QString());
        pushButton__valider_promotions_ajouter->setText(QCoreApplication::translate("Dialog", "Valider", nullptr));
        label_mail_promotion->setText(QString());
        label_ID_promotions_ajouter->setText(QCoreApplication::translate("Dialog", "ID", nullptr));
        label_Nom_promotions_ajouter->setText(QCoreApplication::translate("Dialog", "Nom", nullptr));
        label_pourcentge_promotions_ajouter->setText(QCoreApplication::translate("Dialog", "Pourcentage", nullptr));
        tabWidget_promotions->setTabText(tabWidget_promotions->indexOf(tab_promotions_ajouter), QCoreApplication::translate("Dialog", "Ajouter", nullptr));
        label_liste_promotions_consulter->setText(QCoreApplication::translate("Dialog", "Liste des promotions", nullptr));
        ID_promotion_supprimer->setText(QCoreApplication::translate("Dialog", "ID", nullptr));
        pushButton_supp_promotions->setText(QString());
        pushButton_modif_promotions->setText(QString());
        tabWidget_promotions->setTabText(tabWidget_promotions->indexOf(tab_promotions_consulter), QCoreApplication::translate("Dialog", "Consulter", nullptr));
        tabWidget_entites->setTabText(tabWidget_entites->indexOf(tab_Promotions), QCoreApplication::translate("Dialog", "Promotions", nullptr));
        pushButton_valider_Packs_ajouter->setText(QCoreApplication::translate("Dialog", "Valider", nullptr));
        label_ID_Packs_Ajouter->setText(QCoreApplication::translate("Dialog", "ID_Pack", nullptr));
        label_Categorie_Packs_Ajouter->setText(QCoreApplication::translate("Dialog", "Categorie", nullptr));
        label_Liste_Packs_Ajouter->setText(QCoreApplication::translate("Dialog", "Liste", nullptr));
        label_prix_initial_packs_ajouter->setText(QCoreApplication::translate("Dialog", "Prix_initial", nullptr));
        comboBox_Categorie_Packs_Ajouter->setItemText(0, QCoreApplication::translate("Dialog", "Silver", nullptr));
        comboBox_Categorie_Packs_Ajouter->setItemText(1, QCoreApplication::translate("Dialog", "Gold", nullptr));
        comboBox_Categorie_Packs_Ajouter->setItemText(2, QCoreApplication::translate("Dialog", "Premium", nullptr));

        tabWidget_packs->setTabText(tabWidget_packs->indexOf(tab_packs_ajouter), QCoreApplication::translate("Dialog", "Ajouter", nullptr));
        label_liste_packs_consulter->setText(QCoreApplication::translate("Dialog", "Liste des packs", nullptr));
        ID_pack_supprimer->setText(QCoreApplication::translate("Dialog", "ID_Pack", nullptr));
        pushButton_supp_pack->setText(QString());
        pushButton_modif_pack->setText(QString());
        pushButton_rechercher_packs->setText(QString());
        pushButton_tri_pack_ID->setText(QString());
        pushButton_tri_categorie_pack->setText(QCoreApplication::translate("Dialog", " tri categorie", nullptr));
        pushButton_tri_pack_prix->setText(QCoreApplication::translate("Dialog", "tri prix", nullptr));
        pushButton_tri_id_pack_inverse->setText(QCoreApplication::translate("Dialog", "trier id inv", nullptr));
        pushButton_tri_categorie_pack_inverse->setText(QCoreApplication::translate("Dialog", "tri categorie inv", nullptr));
        pushButton_tri_prix_pack_inverse->setText(QCoreApplication::translate("Dialog", "tri prix inv", nullptr));
        tabWidget_packs->setTabText(tabWidget_packs->indexOf(tab_packs_consulter), QCoreApplication::translate("Dialog", "Consulter", nullptr));
        tabWidget_packs->setTabText(tabWidget_packs->indexOf(tab_packs_statistiques), QCoreApplication::translate("Dialog", "Statistiques", nullptr));
        tabWidget_entites->setTabText(tabWidget_entites->indexOf(tab_Packs), QCoreApplication::translate("Dialog", "Packs", nullptr));
        label_liste_Ventes->setText(QCoreApplication::translate("Dialog", "Liste des ventes", nullptr));
        tabWidget_entites->setTabText(tabWidget_entites->indexOf(tab_Ventes), QCoreApplication::translate("Dialog", "Ventes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
