/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *pages;
    QWidget *menu;
    QLabel *label_LoginPass;
    QLabel *label_LoginTitre;
    QLineEdit *login_pass;
    QLineEdit *login_name;
    QPushButton *btn_login;
    QLabel *label_loginNom;
    QLabel *label_4;
    QLabel *label_login_role;
    QComboBox *login_role;
    QWidget *patisserie;
    QLabel *label_12;
    QGroupBox *groupBox;
    QTableView *TablePatiss;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_32;
    QLabel *label_33;
    QLabel *label_34;
    QLabel *label_35;
    QLabel *label_36;
    QLineEdit *lineEdit_14;
    QLineEdit *lineEdit_15;
    QLineEdit *lineEdit_20;
    QToolButton *toolButton;
    QToolButton *toolButton_2;
    QToolButton *toolButton_3;
    QToolButton *toolButton_4;
    QPushButton *pushButton_4;
    QToolButton *toolButton_9;
    QToolButton *toolButton_10;
    QToolButton *toolButton_13;
    QToolButton *toolButton_14;
    QToolButton *toolButton_15;
    QLabel *label_47;
    QWidget *page_7;
    QGroupBox *groupBox_6;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTabWidget *tabWidget_2;
    QWidget *tab_3;
    QTableView *tablePerso;
    QPushButton *SupprimerPerso;
    QPushButton *ModifierPerso;
    QLabel *label_cinP_M_S;
    QLineEdit *lineEdit_CINmod_supp;
    QLineEdit *RechercherPerso;
    QGraphicsView *graphicsView;
    QPushButton *pushButton_PDF_Perso;
    QPushButton *pushButton_RetourRHMenu;
    QWidget *tab_4;
    QLabel *label_72;
    QLabel *label_73;
    QLabel *label_74;
    QLabel *label_75;
    QLabel *label_76;
    QLabel *label_77;
    QLabel *label_78;
    QLineEdit *lineEdit_Cin;
    QLineEdit *lineEdit_nomp;
    QLineEdit *lineEdit_prenomp;
    QLineEdit *lineEdit_datenp;
    QLineEdit *lineEdit_tel;
    QLineEdit *lineEdit_mail;
    QLineEdit *lineEdit_nbmar;
    QPushButton *AjouterPerso;
    QWidget *widget;
    QTabWidget *tabWidget_3;
    QWidget *tab_5;
    QTableView *tableTache;
    QPushButton *ExportExcelTache;
    QPushButton *EmailTache;
    QPushButton *ModifierTache;
    QPushButton *SupprimerTache;
    QLabel *label_79;
    QLineEdit *NomTSuppMod;
    QWidget *tab_6;
    QLabel *label_80;
    QLabel *label_81;
    QLabel *label_82;
    QLabel *label_83;
    QLineEdit *lineEdit_NomT;
    QLineEdit *lineEdit_EtatT;
    QLineEdit *lineEdit_DateLimitT;
    QLineEdit *lineEdit_IDP;
    QPushButton *AjouterTache;
    QWidget *tab_2;
    QTabWidget *tabWidget_4;
    QWidget *tab_7;
    QTableView *tableGrade;
    QPushButton *SupprimerGrade;
    QPushButton *ModifierGrade;
    QLineEdit *RechercherGrade;
    QGraphicsView *graphicsView_2;
    QLabel *label_84;
    QLineEdit *lineEdit_NomGSupMod;
    QPushButton *ImprimerListeGrade;
    QWidget *tab_8;
    QLabel *label_85;
    QLabel *label_86;
    QLabel *label_87;
    QLabel *label_88;
    QLineEdit *lineEdit_NomGrade;
    QLineEdit *lineEdit_DateEmbauche;
    QLineEdit *lineEdit_SalaireGrade;
    QLineEdit *lineEdit_IDPG;
    QPushButton *AjouterGrade;
    QWidget *tab_9;
    QLabel *label_89;
    QPushButton *ON_Cgaz;
    QPushButton *OFF_Cgaz;
    QWidget *rania;
    QLabel *img;
    QStackedWidget *pagesTable;
    QWidget *page_5;
    QTabWidget *tab_Mariage;
    QWidget *tab_15;
    QGroupBox *groupBox_112;
    QTableView *tableViewInvites;
    QPushButton *Pdf_invitation;
    QPushButton *pushButton_2;
    QPushButton *btn_trieDec;
    QPushButton *btn_trieAsc;
    QComboBox *trie_invite;
    QLabel *label_27;
    QLineEdit *recherche_invite;
    QPushButton *btn_rech_invite;
    QPushButton *ajouterinvite;
    QLabel *label_56;
    QLineEdit *invi_prenom;
    QLineEdit *invi_id;
    QLabel *label_54;
    QLabel *label_49;
    QLineEdit *invi_nom;
    QPushButton *modifierinvite;
    QPushButton *supprimerinvite;
    QWidget *tab_16;
    QPushButton *btn_triefdescMariage;
    QGroupBox *groupBox_113;
    QTableView *tableViewCerems;
    QLabel *label_28;
    QLineEdit *recherche_Mariage;
    QLineEdit *mariage_budget;
    QLineEdit *mariage_code;
    QPushButton *ajouterMariage;
    QLineEdit *mariage_nbinvit;
    QPushButton *btn_triefascMariage;
    QLineEdit *mariage_id;
    QComboBox *trie_mariage;
    QLabel *label_50;
    QPushButton *btn_rechfMariage;
    QLabel *label_59;
    QPushButton *modifierMariage;
    QLabel *label_60;
    QPushButton *supprimerMariage;
    QLabel *label_61;
    QPushButton *ExcelMariage;
    QPushButton *pushButton;
    QWidget *page_6;
    QPushButton *pushButton_3;
    QWidget *sous_menuemploye;
    QLabel *img_2;
    QGroupBox *groupBox_2;
    QPushButton *organisation_2;
    QPushButton *ceremonie_2;
    QPushButton *alimentation_2;
    QWidget *page;
    QLabel *img_4;
    QPushButton *gerer_salle;
    QPushButton *gerer_decorateur;
    QPushButton *quittersalledeco;
    QWidget *page_2;
    QLabel *img_5;
    QPushButton *liste_des_salle;
    QPushButton *ajouter_salle;
    QPushButton *quittersalle;
    QPushButton *retoursalle;
    QWidget *page_3;
    QLabel *img_6;
    QPushButton *liste_de_decorateur;
    QPushButton *ajouter_decorateur;
    QPushButton *quitterdeco;
    QPushButton *retourdeco;
    QWidget *page_4;
    QLabel *img_7;
    QLabel *label_9;
    QLineEdit *lineEdit_ideco;
    QLineEdit *lineEdit_nom;
    QLineEdit *lineEdit_style;
    QLineEdit *lineEdit_18;
    QLineEdit *lineEdit_21;
    QLineEdit *lineEdit_22;
    QLineEdit *lineEdit_23;
    QLabel *label_11;
    QLabel *label_10;
    QLabel *label_13;
    QLabel *label_53;
    QLabel *label_55;
    QLabel *label_57;
    QPushButton *ajouter_decorateur_2;
    QPushButton *return11;
    QWidget *page_8;
    QLabel *img_8;
    QLabel *label_14;
    QLabel *label_16;
    QLabel *label_15;
    QLabel *label_17;
    QLabel *label_18;
    QPushButton *ajoutersalle;
    QPushButton *retouur;
    QLineEdit *lineEdit_id;
    QLineEdit *lineEdit_lieu;
    QLineEdit *lineEdit_prix;
    QLineEdit *lineEdit_capacite;
    QWidget *page_9;
    QLabel *img_9;
    QLabel *label_21;
    QTableView *tabledeco;
    QPushButton *a_retour;
    QLineEdit *lineEdit_24;
    QPushButton *recherche_deco;
    QPushButton *lieu_recherche_2;
    QPushButton *style_recherche;
    QPushButton *idd_recherche;
    QLabel *label_45;
    QLineEdit *lineEdit_ideco2;
    QPushButton *suppression_a;
    QPushButton *supprimer_deco;
    QPushButton *update_s;
    QPushButton *retouir;
    QPushButton *home;
    QPushButton *exporteer_pdff;
    QWidget *page_10;
    QLabel *img_10;
    QLabel *label_29;
    QTableView *tablesalle;
    QLabel *label_58;
    QPushButton *trie_capacite_2;
    QPushButton *trie_id;
    QPushButton *trie_prix;
    QPushButton *trie_lieu;
    QLineEdit *lineEdit_supp;
    QLabel *label_46;
    QPushButton *suppression_salle;
    QPushButton *reserver_salle;
    QPushButton *salle_email;
    QPushButton *retouur5;
    QPushButton *homme;
    QPushButton *export_excel_salle;
    QWidget *page_11;
    QLabel *img_11;
    QLabel *label_30;
    QLineEdit *lineEdit_13;
    QLineEdit *lineEdit_19;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLabel *label_51;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *okk;
    QPushButton *back;
    QWidget *page_12;
    QLabel *img_12;
    QLineEdit *rcpt;
    QLineEdit *subject;
    QLineEdit *file;
    QTextEdit *msg;
    QPushButton *sendBtn;
    QLineEdit *mail_pass;
    QPushButton *browseBtn;
    QPushButton *backk;
    QWidget *page_13;
    QLabel *img_13;
    QLabel *label_38;
    QLineEdit *lineEdit_12;
    QLineEdit *lineEdit_11;
    QLineEdit *lineEdit_10;
    QLineEdit *lineEdit_5;
    QDateEdit *dateEdit;
    QDateEdit *dateEdit_2;
    QPushButton *imprimer_resrv;
    QPushButton *backkk;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_19;
    QLabel *label_20;
    QWidget *page_14;
    QLabel *img_14;
    QLabel *label_42;
    QLineEdit *lineEdit_16;
    QLineEdit *lineEdit_17;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_8;
    QLineEdit *lineEdit_9;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *label_26;
    QLabel *label_31;
    QPushButton *okkkkk;
    QPushButton *bacck;
    QWidget *sousmenu_administrateur;
    QLabel *img_3;
    QPushButton *organisation_3;
    QPushButton *ceremonie_3;
    QPushButton *marketing_2;
    QPushButton *alimentation_3;
    QPushButton *RessourcesHumaine;
    QWidget *traiteurs;
    QLabel *label_37;
    QGroupBox *groupBox_3;
    QLineEdit *nomtrait;
    QLineEdit *idtrait;
    QLineEdit *mailtrait;
    QLineEdit *comission;
    QLabel *label_39;
    QLabel *label_40;
    QLabel *label_41;
    QLabel *label_43;
    QToolButton *toolButton_5;
    QToolButton *toolButton_6;
    QToolButton *toolButton_7;
    QToolButton *toolButton_8;
    QTableView *TableTrait;
    QLabel *label_44;
    QLineEdit *search;
    QToolButton *toolButton_11;
    QToolButton *toolButton_12;
    QPushButton *pushButton_5;
    QWidget *articles;
    QLabel *label_48;
    QGroupBox *groupBox_4;
    QToolButton *toolButton_16;
    QTableView *tableart;
    QLineEdit *nomart;
    QLineEdit *idart;
    QLineEdit *qte;
    QLineEdit *pu;
    QComboBox *type;
    QLabel *label_62;
    QLabel *label_63;
    QLabel *label_64;
    QLabel *label_65;
    QLabel *label_66;
    QToolButton *ajoutart;
    QToolButton *suppart;
    QToolButton *modifart;
    QWidget *commandes;
    QLabel *label_52;
    QGroupBox *groupBox_5;
    QToolButton *toolButton_17;
    QTableView *tablecmd;
    QLineEdit *idcmd;
    QComboBox *trait;
    QComboBox *art;
    QLineEdit *qte1;
    QLabel *label_67;
    QLabel *label_68;
    QTextEdit *desccmd;
    QLabel *label_69;
    QLabel *label_70;
    QLabel *label_71;
    QToolButton *ajoutcmd;
    QToolButton *suppcmd;
    QToolButton *modifcmd;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(931, 659);
        QFont font;
        font.setKerning(true);
        MainWindow->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral(":/ressource/ring.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pages = new QStackedWidget(centralwidget);
        pages->setObjectName(QStringLiteral("pages"));
        pages->setGeometry(QRect(0, 0, 931, 641));
        menu = new QWidget();
        menu->setObjectName(QStringLiteral("menu"));
        label_LoginPass = new QLabel(menu);
        label_LoginPass->setObjectName(QStringLiteral("label_LoginPass"));
        label_LoginPass->setGeometry(QRect(0, 0, 931, 661));
        label_LoginPass->setPixmap(QPixmap(QString::fromUtf8(":/ressource/mariage.jpg")));
        label_LoginPass->setScaledContents(true);
        label_LoginTitre = new QLabel(menu);
        label_LoginTitre->setObjectName(QStringLiteral("label_LoginTitre"));
        label_LoginTitre->setGeometry(QRect(320, 150, 301, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("Sachiko"));
        font1.setPointSize(32);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        font1.setKerning(true);
        label_LoginTitre->setFont(font1);
        label_LoginTitre->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 32pt \"Sachiko\";"));
        login_pass = new QLineEdit(menu);
        login_pass->setObjectName(QStringLiteral("login_pass"));
        login_pass->setGeometry(QRect(340, 360, 251, 31));
        login_pass->setAutoFillBackground(false);
        login_pass->setStyleSheet(QStringLiteral("background-color:white;border-color:white;"));
        login_name = new QLineEdit(menu);
        login_name->setObjectName(QStringLiteral("login_name"));
        login_name->setGeometry(QRect(340, 280, 251, 31));
        login_name->setAutoFillBackground(false);
        login_name->setStyleSheet(QStringLiteral("background-color:white;border-color:black;"));
        btn_login = new QPushButton(menu);
        btn_login->setObjectName(QStringLiteral("btn_login"));
        btn_login->setGeometry(QRect(410, 500, 111, 41));
        btn_login->setAutoFillBackground(false);
        btn_login->setStyleSheet(QStringLiteral("background-color:green;"));
        btn_login->setAutoDefault(false);
        btn_login->setFlat(false);
        label_loginNom = new QLabel(menu);
        label_loginNom->setObjectName(QStringLiteral("label_loginNom"));
        label_loginNom->setGeometry(QRect(330, 240, 281, 31));
        QFont font2;
        font2.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font2.setPointSize(18);
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        font2.setKerning(true);
        label_loginNom->setFont(font2);
        label_loginNom->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 18pt \"MS Shell Dlg 2\";"));
        label_4 = new QLabel(menu);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(350, 320, 251, 31));
        QFont font3;
        font3.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font3.setPointSize(20);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setWeight(50);
        font3.setKerning(true);
        label_4->setFont(font3);
        label_4->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 20pt \"MS Shell Dlg 2\";"));
        label_login_role = new QLabel(menu);
        label_login_role->setObjectName(QStringLiteral("label_login_role"));
        label_login_role->setGeometry(QRect(430, 400, 71, 31));
        QFont font4;
        font4.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font4.setPointSize(16);
        font4.setBold(false);
        font4.setItalic(false);
        font4.setWeight(9);
        font4.setKerning(true);
        label_login_role->setFont(font4);
        label_login_role->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"font: 75 16pt \"MS Shell Dlg 2\";"));
        login_role = new QComboBox(menu);
        login_role->setObjectName(QStringLiteral("login_role"));
        login_role->setGeometry(QRect(398, 440, 141, 31));
        pages->addWidget(menu);
        patisserie = new QWidget();
        patisserie->setObjectName(QStringLiteral("patisserie"));
        label_12 = new QLabel(patisserie);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(0, 0, 941, 601));
        label_12->setPixmap(QPixmap(QString::fromUtf8(":/ressource/mariage.jpg")));
        label_12->setScaledContents(true);
        groupBox = new QGroupBox(patisserie);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 0, 911, 601));
        groupBox->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        TablePatiss = new QTableView(groupBox);
        TablePatiss->setObjectName(QStringLiteral("TablePatiss"));
        TablePatiss->setGeometry(QRect(10, 40, 541, 421));
        TablePatiss->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(730, 160, 113, 22));
        lineEdit->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(730, 210, 113, 22));
        lineEdit_2->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        label_32 = new QLabel(groupBox);
        label_32->setObjectName(QStringLiteral("label_32"));
        label_32->setGeometry(QRect(610, 160, 55, 16));
        label_33 = new QLabel(groupBox);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setGeometry(QRect(610, 210, 55, 16));
        label_34 = new QLabel(groupBox);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setGeometry(QRect(610, 260, 55, 16));
        label_35 = new QLabel(groupBox);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setGeometry(QRect(610, 300, 55, 16));
        label_36 = new QLabel(groupBox);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setGeometry(QRect(610, 340, 55, 16));
        lineEdit_14 = new QLineEdit(groupBox);
        lineEdit_14->setObjectName(QStringLiteral("lineEdit_14"));
        lineEdit_14->setGeometry(QRect(730, 260, 113, 22));
        lineEdit_14->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        lineEdit_15 = new QLineEdit(groupBox);
        lineEdit_15->setObjectName(QStringLiteral("lineEdit_15"));
        lineEdit_15->setGeometry(QRect(730, 300, 113, 22));
        lineEdit_15->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        lineEdit_20 = new QLineEdit(groupBox);
        lineEdit_20->setObjectName(QStringLiteral("lineEdit_20"));
        lineEdit_20->setGeometry(QRect(730, 340, 113, 22));
        lineEdit_20->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        toolButton = new QToolButton(groupBox);
        toolButton->setObjectName(QStringLiteral("toolButton"));
        toolButton->setGeometry(QRect(860, 150, 41, 41));
        toolButton->setStyleSheet(QStringLiteral(""));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/ressource/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon1);
        toolButton->setIconSize(QSize(200, 200));
        toolButton_2 = new QToolButton(groupBox);
        toolButton_2->setObjectName(QStringLiteral("toolButton_2"));
        toolButton_2->setGeometry(QRect(860, 200, 41, 41));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/ressource/Delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_2->setIcon(icon2);
        toolButton_2->setIconSize(QSize(250, 250));
        toolButton_3 = new QToolButton(groupBox);
        toolButton_3->setObjectName(QStringLiteral("toolButton_3"));
        toolButton_3->setGeometry(QRect(860, 250, 41, 41));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/ressource/settings.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_3->setIcon(icon3);
        toolButton_3->setIconSize(QSize(250, 250));
        toolButton_4 = new QToolButton(groupBox);
        toolButton_4->setObjectName(QStringLiteral("toolButton_4"));
        toolButton_4->setGeometry(QRect(680, 0, 61, 61));
        toolButton_4->setAutoFillBackground(true);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/ressource/leftwards-black-arrow-emoji-by-twitter.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_4->setIcon(icon4);
        toolButton_4->setIconSize(QSize(250, 250));
        pushButton_4 = new QPushButton(groupBox);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(750, 0, 151, 61));
        pushButton_4->setStyleSheet(QLatin1String("background-image: url(:/ressource/mariage.jpg);\n"
"font: 24pt \"Sachiko\";"));
        toolButton_9 = new QToolButton(groupBox);
        toolButton_9->setObjectName(QStringLiteral("toolButton_9"));
        toolButton_9->setGeometry(QRect(560, 40, 51, 51));
        toolButton_9->setAutoFillBackground(true);
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/ressource/upp.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_9->setIcon(icon5);
        toolButton_9->setIconSize(QSize(250, 250));
        toolButton_10 = new QToolButton(groupBox);
        toolButton_10->setObjectName(QStringLiteral("toolButton_10"));
        toolButton_10->setGeometry(QRect(620, 40, 51, 51));
        toolButton_10->setAutoFillBackground(true);
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/ressource/downn.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_10->setIcon(icon6);
        toolButton_10->setIconSize(QSize(250, 250));
        toolButton_13 = new QToolButton(groupBox);
        toolButton_13->setObjectName(QStringLiteral("toolButton_13"));
        toolButton_13->setGeometry(QRect(860, 300, 41, 41));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/ressource/pdf.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_13->setIcon(icon7);
        toolButton_13->setIconSize(QSize(250, 250));
        toolButton_14 = new QToolButton(groupBox);
        toolButton_14->setObjectName(QStringLiteral("toolButton_14"));
        toolButton_14->setGeometry(QRect(860, 350, 41, 41));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/ressource/printer.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_14->setIcon(icon8);
        toolButton_14->setIconSize(QSize(250, 250));
        toolButton_15 = new QToolButton(groupBox);
        toolButton_15->setObjectName(QStringLiteral("toolButton_15"));
        toolButton_15->setGeometry(QRect(790, 440, 71, 71));
        toolButton_15->setAutoFillBackground(true);
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/ressource/wedding-cake.png"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton_15->setIcon(icon9);
        toolButton_15->setIconSize(QSize(250, 250));
        label_47 = new QLabel(groupBox);
        label_47->setObjectName(QStringLiteral("label_47"));
        label_47->setGeometry(QRect(780, 510, 91, 31));
        label_47->setStyleSheet(QLatin1String("font: 22pt \"Sachiko\";\n"
"color: rgb(255, 255, 255);"));
        pages->addWidget(patisserie);
        page_7 = new QWidget();
        page_7->setObjectName(QStringLiteral("page_7"));
        groupBox_6 = new QGroupBox(page_7);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        groupBox_6->setGeometry(QRect(0, 0, 931, 631));
        groupBox_6->setStyleSheet(QLatin1String("background-image: url(:/ressource/mariage.jpg);\n"
"color: rgb(255, 255, 255);"));
        tabWidget = new QTabWidget(groupBox_6);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 931, 611));
        tabWidget->setStyleSheet(QLatin1String("color: rgb(16, 64, 127);\n"
""));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget_2 = new QTabWidget(tab);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(0, 0, 931, 581));
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tablePerso = new QTableView(tab_3);
        tablePerso->setObjectName(QStringLiteral("tablePerso"));
        tablePerso->setGeometry(QRect(20, 120, 691, 371));
        tablePerso->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        SupprimerPerso = new QPushButton(tab_3);
        SupprimerPerso->setObjectName(QStringLiteral("SupprimerPerso"));
        SupprimerPerso->setGeometry(QRect(740, 140, 171, 28));
        SupprimerPerso->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        ModifierPerso = new QPushButton(tab_3);
        ModifierPerso->setObjectName(QStringLiteral("ModifierPerso"));
        ModifierPerso->setGeometry(QRect(740, 190, 171, 28));
        ModifierPerso->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_cinP_M_S = new QLabel(tab_3);
        label_cinP_M_S->setObjectName(QStringLiteral("label_cinP_M_S"));
        label_cinP_M_S->setGeometry(QRect(740, 230, 41, 21));
        label_cinP_M_S->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        lineEdit_CINmod_supp = new QLineEdit(tab_3);
        lineEdit_CINmod_supp->setObjectName(QStringLiteral("lineEdit_CINmod_supp"));
        lineEdit_CINmod_supp->setGeometry(QRect(790, 231, 113, 21));
        lineEdit_CINmod_supp->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        RechercherPerso = new QLineEdit(tab_3);
        RechercherPerso->setObjectName(QStringLiteral("RechercherPerso"));
        RechercherPerso->setGeometry(QRect(570, 70, 141, 31));
        graphicsView = new QGraphicsView(tab_3);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(520, 70, 41, 31));
        graphicsView->setStyleSheet(QStringLiteral("border-image: url(:/ressource/loop.png);"));
        pushButton_PDF_Perso = new QPushButton(tab_3);
        pushButton_PDF_Perso->setObjectName(QStringLiteral("pushButton_PDF_Perso"));
        pushButton_PDF_Perso->setGeometry(QRect(790, 280, 71, 51));
        pushButton_PDF_Perso->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"border-image: url(:/ressource/pdf.png);"));
        pushButton_RetourRHMenu = new QPushButton(tab_3);
        pushButton_RetourRHMenu->setObjectName(QStringLiteral("pushButton_RetourRHMenu"));
        pushButton_RetourRHMenu->setGeometry(QRect(780, 490, 93, 28));
        pushButton_RetourRHMenu->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        tabWidget_2->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        label_72 = new QLabel(tab_4);
        label_72->setObjectName(QStringLiteral("label_72"));
        label_72->setGeometry(QRect(90, 100, 55, 16));
        label_72->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_73 = new QLabel(tab_4);
        label_73->setObjectName(QStringLiteral("label_73"));
        label_73->setGeometry(QRect(90, 150, 55, 16));
        label_73->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_74 = new QLabel(tab_4);
        label_74->setObjectName(QStringLiteral("label_74"));
        label_74->setGeometry(QRect(90, 200, 55, 16));
        label_74->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_75 = new QLabel(tab_4);
        label_75->setObjectName(QStringLiteral("label_75"));
        label_75->setGeometry(QRect(90, 260, 131, 16));
        label_75->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_76 = new QLabel(tab_4);
        label_76->setObjectName(QStringLiteral("label_76"));
        label_76->setGeometry(QRect(90, 310, 55, 16));
        label_76->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_77 = new QLabel(tab_4);
        label_77->setObjectName(QStringLiteral("label_77"));
        label_77->setGeometry(QRect(90, 360, 55, 16));
        label_77->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_78 = new QLabel(tab_4);
        label_78->setObjectName(QStringLiteral("label_78"));
        label_78->setGeometry(QRect(90, 410, 101, 16));
        label_78->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        lineEdit_Cin = new QLineEdit(tab_4);
        lineEdit_Cin->setObjectName(QStringLiteral("lineEdit_Cin"));
        lineEdit_Cin->setGeometry(QRect(230, 100, 113, 22));
        lineEdit_Cin->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        lineEdit_nomp = new QLineEdit(tab_4);
        lineEdit_nomp->setObjectName(QStringLiteral("lineEdit_nomp"));
        lineEdit_nomp->setGeometry(QRect(230, 150, 113, 22));
        lineEdit_nomp->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        lineEdit_prenomp = new QLineEdit(tab_4);
        lineEdit_prenomp->setObjectName(QStringLiteral("lineEdit_prenomp"));
        lineEdit_prenomp->setGeometry(QRect(230, 200, 113, 22));
        lineEdit_prenomp->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        lineEdit_datenp = new QLineEdit(tab_4);
        lineEdit_datenp->setObjectName(QStringLiteral("lineEdit_datenp"));
        lineEdit_datenp->setGeometry(QRect(230, 260, 113, 22));
        lineEdit_datenp->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        lineEdit_tel = new QLineEdit(tab_4);
        lineEdit_tel->setObjectName(QStringLiteral("lineEdit_tel"));
        lineEdit_tel->setGeometry(QRect(230, 310, 113, 22));
        lineEdit_tel->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        lineEdit_mail = new QLineEdit(tab_4);
        lineEdit_mail->setObjectName(QStringLiteral("lineEdit_mail"));
        lineEdit_mail->setGeometry(QRect(230, 360, 113, 22));
        lineEdit_mail->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        lineEdit_nbmar = new QLineEdit(tab_4);
        lineEdit_nbmar->setObjectName(QStringLiteral("lineEdit_nbmar"));
        lineEdit_nbmar->setGeometry(QRect(230, 410, 113, 22));
        lineEdit_nbmar->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        AjouterPerso = new QPushButton(tab_4);
        AjouterPerso->setObjectName(QStringLiteral("AjouterPerso"));
        AjouterPerso->setGeometry(QRect(402, 260, 111, 28));
        AjouterPerso->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        tabWidget_2->addTab(tab_4, QString());
        tabWidget->addTab(tab, QString());
        widget = new QWidget();
        widget->setObjectName(QStringLiteral("widget"));
        tabWidget_3 = new QTabWidget(widget);
        tabWidget_3->setObjectName(QStringLiteral("tabWidget_3"));
        tabWidget_3->setGeometry(QRect(0, 0, 931, 591));
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        tableTache = new QTableView(tab_5);
        tableTache->setObjectName(QStringLiteral("tableTache"));
        tableTache->setGeometry(QRect(20, 110, 651, 331));
        tableTache->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        ExportExcelTache = new QPushButton(tab_5);
        ExportExcelTache->setObjectName(QStringLiteral("ExportExcelTache"));
        ExportExcelTache->setGeometry(QRect(710, 120, 171, 28));
        ExportExcelTache->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        EmailTache = new QPushButton(tab_5);
        EmailTache->setObjectName(QStringLiteral("EmailTache"));
        EmailTache->setGeometry(QRect(710, 170, 171, 28));
        EmailTache->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        ModifierTache = new QPushButton(tab_5);
        ModifierTache->setObjectName(QStringLiteral("ModifierTache"));
        ModifierTache->setGeometry(QRect(710, 220, 171, 28));
        ModifierTache->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        SupprimerTache = new QPushButton(tab_5);
        SupprimerTache->setObjectName(QStringLiteral("SupprimerTache"));
        SupprimerTache->setGeometry(QRect(710, 270, 171, 28));
        SupprimerTache->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_79 = new QLabel(tab_5);
        label_79->setObjectName(QStringLiteral("label_79"));
        label_79->setGeometry(QRect(710, 310, 55, 16));
        label_79->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        NomTSuppMod = new QLineEdit(tab_5);
        NomTSuppMod->setObjectName(QStringLiteral("NomTSuppMod"));
        NomTSuppMod->setGeometry(QRect(780, 310, 101, 22));
        NomTSuppMod->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        tabWidget_3->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        label_80 = new QLabel(tab_6);
        label_80->setObjectName(QStringLiteral("label_80"));
        label_80->setGeometry(QRect(110, 120, 55, 16));
        label_80->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_81 = new QLabel(tab_6);
        label_81->setObjectName(QStringLiteral("label_81"));
        label_81->setGeometry(QRect(110, 170, 55, 16));
        label_81->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_82 = new QLabel(tab_6);
        label_82->setObjectName(QStringLiteral("label_82"));
        label_82->setGeometry(QRect(110, 220, 81, 16));
        label_82->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_83 = new QLabel(tab_6);
        label_83->setObjectName(QStringLiteral("label_83"));
        label_83->setGeometry(QRect(110, 270, 55, 16));
        label_83->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        lineEdit_NomT = new QLineEdit(tab_6);
        lineEdit_NomT->setObjectName(QStringLiteral("lineEdit_NomT"));
        lineEdit_NomT->setGeometry(QRect(220, 120, 113, 22));
        lineEdit_NomT->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        lineEdit_EtatT = new QLineEdit(tab_6);
        lineEdit_EtatT->setObjectName(QStringLiteral("lineEdit_EtatT"));
        lineEdit_EtatT->setGeometry(QRect(220, 170, 113, 22));
        lineEdit_EtatT->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        lineEdit_DateLimitT = new QLineEdit(tab_6);
        lineEdit_DateLimitT->setObjectName(QStringLiteral("lineEdit_DateLimitT"));
        lineEdit_DateLimitT->setGeometry(QRect(220, 220, 113, 22));
        lineEdit_DateLimitT->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        lineEdit_IDP = new QLineEdit(tab_6);
        lineEdit_IDP->setObjectName(QStringLiteral("lineEdit_IDP"));
        lineEdit_IDP->setGeometry(QRect(220, 270, 113, 22));
        lineEdit_IDP->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        AjouterTache = new QPushButton(tab_6);
        AjouterTache->setObjectName(QStringLiteral("AjouterTache"));
        AjouterTache->setGeometry(QRect(370, 190, 93, 28));
        AjouterTache->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        tabWidget_3->addTab(tab_6, QString());
        tabWidget->addTab(widget, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget_4 = new QTabWidget(tab_2);
        tabWidget_4->setObjectName(QStringLiteral("tabWidget_4"));
        tabWidget_4->setGeometry(QRect(0, 0, 931, 581));
        tab_7 = new QWidget();
        tab_7->setObjectName(QStringLiteral("tab_7"));
        tableGrade = new QTableView(tab_7);
        tableGrade->setObjectName(QStringLiteral("tableGrade"));
        tableGrade->setGeometry(QRect(30, 120, 651, 311));
        tableGrade->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        SupprimerGrade = new QPushButton(tab_7);
        SupprimerGrade->setObjectName(QStringLiteral("SupprimerGrade"));
        SupprimerGrade->setGeometry(QRect(710, 140, 181, 28));
        SupprimerGrade->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        ModifierGrade = new QPushButton(tab_7);
        ModifierGrade->setObjectName(QStringLiteral("ModifierGrade"));
        ModifierGrade->setGeometry(QRect(710, 190, 181, 28));
        ModifierGrade->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        RechercherGrade = new QLineEdit(tab_7);
        RechercherGrade->setObjectName(QStringLiteral("RechercherGrade"));
        RechercherGrade->setGeometry(QRect(552, 81, 131, 31));
        RechercherGrade->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        graphicsView_2 = new QGraphicsView(tab_7);
        graphicsView_2->setObjectName(QStringLiteral("graphicsView_2"));
        graphicsView_2->setGeometry(QRect(510, 80, 31, 31));
        graphicsView_2->setStyleSheet(QStringLiteral("border-image: url(:/ressource/loop.png);"));
        label_84 = new QLabel(tab_7);
        label_84->setObjectName(QStringLiteral("label_84"));
        label_84->setGeometry(QRect(710, 230, 71, 21));
        label_84->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        lineEdit_NomGSupMod = new QLineEdit(tab_7);
        lineEdit_NomGSupMod->setObjectName(QStringLiteral("lineEdit_NomGSupMod"));
        lineEdit_NomGSupMod->setGeometry(QRect(790, 230, 101, 22));
        lineEdit_NomGSupMod->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        ImprimerListeGrade = new QPushButton(tab_7);
        ImprimerListeGrade->setObjectName(QStringLiteral("ImprimerListeGrade"));
        ImprimerListeGrade->setGeometry(QRect(710, 270, 181, 28));
        ImprimerListeGrade->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        tabWidget_4->addTab(tab_7, QString());
        tab_8 = new QWidget();
        tab_8->setObjectName(QStringLiteral("tab_8"));
        label_85 = new QLabel(tab_8);
        label_85->setObjectName(QStringLiteral("label_85"));
        label_85->setGeometry(QRect(70, 130, 101, 20));
        label_85->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_86 = new QLabel(tab_8);
        label_86->setObjectName(QStringLiteral("label_86"));
        label_86->setGeometry(QRect(70, 220, 111, 20));
        label_86->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_87 = new QLabel(tab_8);
        label_87->setObjectName(QStringLiteral("label_87"));
        label_87->setGeometry(QRect(70, 180, 111, 20));
        label_87->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_88 = new QLabel(tab_8);
        label_88->setObjectName(QStringLiteral("label_88"));
        label_88->setGeometry(QRect(70, 270, 111, 20));
        label_88->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        lineEdit_NomGrade = new QLineEdit(tab_8);
        lineEdit_NomGrade->setObjectName(QStringLiteral("lineEdit_NomGrade"));
        lineEdit_NomGrade->setGeometry(QRect(210, 120, 113, 22));
        lineEdit_NomGrade->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        lineEdit_DateEmbauche = new QLineEdit(tab_8);
        lineEdit_DateEmbauche->setObjectName(QStringLiteral("lineEdit_DateEmbauche"));
        lineEdit_DateEmbauche->setGeometry(QRect(210, 170, 113, 22));
        lineEdit_DateEmbauche->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        lineEdit_SalaireGrade = new QLineEdit(tab_8);
        lineEdit_SalaireGrade->setObjectName(QStringLiteral("lineEdit_SalaireGrade"));
        lineEdit_SalaireGrade->setGeometry(QRect(210, 220, 113, 22));
        lineEdit_SalaireGrade->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        lineEdit_IDPG = new QLineEdit(tab_8);
        lineEdit_IDPG->setObjectName(QStringLiteral("lineEdit_IDPG"));
        lineEdit_IDPG->setGeometry(QRect(210, 270, 113, 22));
        lineEdit_IDPG->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        AjouterGrade = new QPushButton(tab_8);
        AjouterGrade->setObjectName(QStringLiteral("AjouterGrade"));
        AjouterGrade->setGeometry(QRect(370, 190, 141, 28));
        AjouterGrade->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        tabWidget_4->addTab(tab_8, QString());
        tabWidget->addTab(tab_2, QString());
        tab_9 = new QWidget();
        tab_9->setObjectName(QStringLiteral("tab_9"));
        label_89 = new QLabel(tab_9);
        label_89->setObjectName(QStringLiteral("label_89"));
        label_89->setGeometry(QRect(170, 220, 181, 31));
        label_89->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        ON_Cgaz = new QPushButton(tab_9);
        ON_Cgaz->setObjectName(QStringLiteral("ON_Cgaz"));
        ON_Cgaz->setGeometry(QRect(370, 220, 93, 28));
        ON_Cgaz->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        OFF_Cgaz = new QPushButton(tab_9);
        OFF_Cgaz->setObjectName(QStringLiteral("OFF_Cgaz"));
        OFF_Cgaz->setGeometry(QRect(500, 220, 93, 28));
        OFF_Cgaz->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        tabWidget->addTab(tab_9, QString());
        pages->addWidget(page_7);
        rania = new QWidget();
        rania->setObjectName(QStringLiteral("rania"));
        img = new QLabel(rania);
        img->setObjectName(QStringLiteral("img"));
        img->setGeometry(QRect(0, 0, 1700, 1134));
        img->setPixmap(QPixmap(QString::fromUtf8(":/ressource/mariage.jpg")));
        img->setScaledContents(false);
        img->setAlignment(Qt::AlignCenter);
        img->setWordWrap(false);
        pagesTable = new QStackedWidget(rania);
        pagesTable->setObjectName(QStringLiteral("pagesTable"));
        pagesTable->setEnabled(true);
        pagesTable->setGeometry(QRect(30, 50, 861, 521));
        pagesTable->setStyleSheet(QStringLiteral("color: white ; background-color: darkCyan ;background: transparent;"));
        pagesTable->setFrameShape(QFrame::NoFrame);
        pagesTable->setFrameShadow(QFrame::Plain);
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        tab_Mariage = new QTabWidget(page_5);
        tab_Mariage->setObjectName(QStringLiteral("tab_Mariage"));
        tab_Mariage->setGeometry(QRect(20, 10, 851, 521));
        QFont font5;
        font5.setPointSize(10);
        tab_Mariage->setFont(font5);
        tab_Mariage->setStyleSheet(QStringLiteral(""));
        tab_Mariage->setTabShape(QTabWidget::Triangular);
        tab_15 = new QWidget();
        tab_15->setObjectName(QStringLiteral("tab_15"));
        groupBox_112 = new QGroupBox(tab_15);
        groupBox_112->setObjectName(QStringLiteral("groupBox_112"));
        groupBox_112->setGeometry(QRect(20, 100, 791, 351));
        groupBox_112->setStyleSheet(QStringLiteral("color: dark ; background-color: darkCyan ;background: transparent;"));
        tableViewInvites = new QTableView(groupBox_112);
        tableViewInvites->setObjectName(QStringLiteral("tableViewInvites"));
        tableViewInvites->setGeometry(QRect(10, 20, 561, 321));
        Pdf_invitation = new QPushButton(groupBox_112);
        Pdf_invitation->setObjectName(QStringLiteral("Pdf_invitation"));
        Pdf_invitation->setGeometry(QRect(650, 270, 101, 23));
        QFont font6;
        font6.setFamily(QStringLiteral("MV Boli"));
        font6.setBold(true);
        font6.setWeight(75);
        Pdf_invitation->setFont(font6);
        Pdf_invitation->setIcon(icon7);
        Pdf_invitation->setFlat(true);
        pushButton_2 = new QPushButton(groupBox_112);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(670, 300, 75, 23));
        btn_trieDec = new QPushButton(tab_15);
        btn_trieDec->setObjectName(QStringLiteral("btn_trieDec"));
        btn_trieDec->setGeometry(QRect(282, 60, 33, 29));
        btn_trieDec->setStyleSheet(QLatin1String("color: green ; background-color: white ;\n"
"background-color: rgb(209, 209, 209);"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/ressource/down.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_trieDec->setIcon(icon10);
        btn_trieDec->setFlat(true);
        btn_trieAsc = new QPushButton(tab_15);
        btn_trieAsc->setObjectName(QStringLiteral("btn_trieAsc"));
        btn_trieAsc->setGeometry(QRect(340, 60, 33, 29));
        btn_trieAsc->setStyleSheet(QLatin1String("color: green ; background-color: white ;\n"
"background-color: rgb(209, 209, 209);"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/ressource/up.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_trieAsc->setIcon(icon11);
        btn_trieAsc->setFlat(true);
        trie_invite = new QComboBox(tab_15);
        trie_invite->setObjectName(QStringLiteral("trie_invite"));
        trie_invite->setGeometry(QRect(120, 64, 137, 20));
        trie_invite->setStyleSheet(QLatin1String("QComboBox\n"
"{\n"
"    color:white;\n"
"    background-color: qlineargradient(x1:0, y1:0, x2:1,y2:1, stop: 1 rgba(228, 41, 81, 100), stop: 0 rgba(234, 107, 101, 100));\n"
"    border-color: rgba(255,255,255,200);\n"
"    border-width: 1px;\n"
"    border-style: solid;\n"
"}\n"
"\n"
"QComboBox QListView\n"
"{\n"
"    border-style: none;\n"
"    background-color: qlineargradient(x1:0, y1:0, x2:1,y2:0, stop: 1 rgba(228, 41, 81, 100), stop: 0 rgba(234, 107, 101, 100));\n"
"}\n"
"\n"
"QComboBox::drop-down\n"
"{\n"
"    width: 20px;\n"
"    border: 1px;\n"
"    border-color:white;\n"
"    border-left-style:solid;\n"
"    border-top-style: none;\n"
"    border-bottom-style: none;\n"
"    border-right-style: none;\n"
"}\n"
"\n"
"QComboBox::down-arrow\n"
"{\n"
"    image: url(C:/Users/SBS/Documents/testqt/Ressources/down.png);\n"
"    width: 16px;\n"
"    height: 16px;\n"
"}"));
        label_27 = new QLabel(tab_15);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(30, 60, 65, 29));
        label_27->setFont(font5);
        label_27->setStyleSheet(QStringLiteral("color:black;"));
        recherche_invite = new QLineEdit(tab_15);
        recherche_invite->setObjectName(QStringLiteral("recherche_invite"));
        recherche_invite->setGeometry(QRect(381, 63, 181, 22));
        recherche_invite->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        btn_rech_invite = new QPushButton(tab_15);
        btn_rech_invite->setObjectName(QStringLiteral("btn_rech_invite"));
        btn_rech_invite->setGeometry(QRect(570, 60, 33, 29));
        btn_rech_invite->setStyleSheet(QLatin1String("color: green ; background-color: white ;\n"
"background-color: rgb(209, 209, 209);"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/ressource/loop.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_rech_invite->setIcon(icon12);
        btn_rech_invite->setFlat(true);
        ajouterinvite = new QPushButton(tab_15);
        ajouterinvite->setObjectName(QStringLiteral("ajouterinvite"));
        ajouterinvite->setGeometry(QRect(650, 250, 141, 41));
        ajouterinvite->setFont(font6);
        ajouterinvite->setStyleSheet(QStringLiteral("color:black;"));
        ajouterinvite->setIcon(icon1);
        ajouterinvite->setFlat(true);
        label_56 = new QLabel(tab_15);
        label_56->setObjectName(QStringLiteral("label_56"));
        label_56->setGeometry(QRect(620, 160, 56, 16));
        label_56->setStyleSheet(QStringLiteral("color:black;"));
        invi_prenom = new QLineEdit(tab_15);
        invi_prenom->setObjectName(QStringLiteral("invi_prenom"));
        invi_prenom->setGeometry(QRect(690, 200, 113, 22));
        invi_prenom->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        invi_id = new QLineEdit(tab_15);
        invi_id->setObjectName(QStringLiteral("invi_id"));
        invi_id->setGeometry(QRect(690, 120, 113, 22));
        invi_id->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        invi_id->setReadOnly(false);
        label_54 = new QLabel(tab_15);
        label_54->setObjectName(QStringLiteral("label_54"));
        label_54->setGeometry(QRect(620, 200, 51, 20));
        label_54->setStyleSheet(QStringLiteral("color:black;"));
        label_49 = new QLabel(tab_15);
        label_49->setObjectName(QStringLiteral("label_49"));
        label_49->setGeometry(QRect(610, 120, 71, 20));
        label_49->setStyleSheet(QStringLiteral("color:black;"));
        invi_nom = new QLineEdit(tab_15);
        invi_nom->setObjectName(QStringLiteral("invi_nom"));
        invi_nom->setGeometry(QRect(690, 160, 113, 22));
        invi_nom->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        modifierinvite = new QPushButton(tab_15);
        modifierinvite->setObjectName(QStringLiteral("modifierinvite"));
        modifierinvite->setGeometry(QRect(680, 291, 101, 29));
        modifierinvite->setFont(font6);
        modifierinvite->setStyleSheet(QStringLiteral("color:black;"));
        modifierinvite->setIcon(icon3);
        modifierinvite->setFlat(true);
        supprimerinvite = new QPushButton(tab_15);
        supprimerinvite->setObjectName(QStringLiteral("supprimerinvite"));
        supprimerinvite->setGeometry(QRect(680, 330, 101, 29));
        supprimerinvite->setFont(font6);
        supprimerinvite->setStyleSheet(QStringLiteral("color:black;"));
        supprimerinvite->setIcon(icon2);
        supprimerinvite->setFlat(true);
        tab_Mariage->addTab(tab_15, QString());
        tab_16 = new QWidget();
        tab_16->setObjectName(QStringLiteral("tab_16"));
        btn_triefdescMariage = new QPushButton(tab_16);
        btn_triefdescMariage->setObjectName(QStringLiteral("btn_triefdescMariage"));
        btn_triefdescMariage->setGeometry(QRect(282, 70, 33, 29));
        btn_triefdescMariage->setStyleSheet(QLatin1String("color: green ; background-color: white ;\n"
"background-color: rgb(209, 209, 209);"));
        btn_triefdescMariage->setIcon(icon10);
        btn_triefdescMariage->setFlat(true);
        groupBox_113 = new QGroupBox(tab_16);
        groupBox_113->setObjectName(QStringLiteral("groupBox_113"));
        groupBox_113->setGeometry(QRect(20, 120, 581, 341));
        groupBox_113->setStyleSheet(QStringLiteral("color: dark ; background-color: darkCyan ;background: transparent;"));
        tableViewCerems = new QTableView(groupBox_113);
        tableViewCerems->setObjectName(QStringLiteral("tableViewCerems"));
        tableViewCerems->setGeometry(QRect(10, 40, 541, 271));
        label_28 = new QLabel(tab_16);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(30, 70, 65, 29));
        label_28->setFont(font5);
        label_28->setStyleSheet(QStringLiteral("color:black;"));
        recherche_Mariage = new QLineEdit(tab_16);
        recherche_Mariage->setObjectName(QStringLiteral("recherche_Mariage"));
        recherche_Mariage->setGeometry(QRect(381, 73, 181, 22));
        recherche_Mariage->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        mariage_budget = new QLineEdit(tab_16);
        mariage_budget->setObjectName(QStringLiteral("mariage_budget"));
        mariage_budget->setGeometry(QRect(690, 260, 113, 22));
        mariage_budget->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        mariage_code = new QLineEdit(tab_16);
        mariage_code->setObjectName(QStringLiteral("mariage_code"));
        mariage_code->setGeometry(QRect(690, 140, 113, 22));
        mariage_code->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        ajouterMariage = new QPushButton(tab_16);
        ajouterMariage->setObjectName(QStringLiteral("ajouterMariage"));
        ajouterMariage->setGeometry(QRect(650, 310, 141, 41));
        ajouterMariage->setFont(font6);
        ajouterMariage->setStyleSheet(QStringLiteral("color:black;"));
        ajouterMariage->setIcon(icon1);
        ajouterMariage->setFlat(true);
        mariage_nbinvit = new QLineEdit(tab_16);
        mariage_nbinvit->setObjectName(QStringLiteral("mariage_nbinvit"));
        mariage_nbinvit->setGeometry(QRect(690, 220, 113, 22));
        mariage_nbinvit->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        btn_triefascMariage = new QPushButton(tab_16);
        btn_triefascMariage->setObjectName(QStringLiteral("btn_triefascMariage"));
        btn_triefascMariage->setGeometry(QRect(340, 70, 33, 29));
        btn_triefascMariage->setStyleSheet(QLatin1String("color: green ; background-color: white ;\n"
"background-color: rgb(209, 209, 209);"));
        btn_triefascMariage->setIcon(icon11);
        btn_triefascMariage->setFlat(true);
        mariage_id = new QLineEdit(tab_16);
        mariage_id->setObjectName(QStringLiteral("mariage_id"));
        mariage_id->setGeometry(QRect(690, 180, 113, 22));
        mariage_id->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        mariage_id->setReadOnly(false);
        trie_mariage = new QComboBox(tab_16);
        trie_mariage->setObjectName(QStringLiteral("trie_mariage"));
        trie_mariage->setGeometry(QRect(120, 74, 137, 20));
        trie_mariage->setStyleSheet(QLatin1String("QComboBox\n"
"{\n"
"    color:white;\n"
"    background-color: qlineargradient(x1:0, y1:0, x2:1,y2:1, stop: 1 rgba(228, 41, 81, 100), stop: 0 rgba(234, 107, 101, 100));\n"
"    border-color: rgba(255,255,255,200);\n"
"    border-width: 1px;\n"
"    border-style: solid;\n"
"}\n"
"\n"
"QComboBox QListView\n"
"{\n"
"    border-style: none;\n"
"    background-color: qlineargradient(x1:0, y1:0, x2:1,y2:0, stop: 1 rgba(228, 41, 81, 100), stop: 0 rgba(234, 107, 101, 100));\n"
"}\n"
"\n"
"QComboBox::drop-down\n"
"{\n"
"    width: 20px;\n"
"    border: 1px;\n"
"    border-color:white;\n"
"    border-left-style:solid;\n"
"    border-top-style: none;\n"
"    border-bottom-style: none;\n"
"    border-right-style: none;\n"
"}\n"
"\n"
"QComboBox::down-arrow\n"
"{\n"
"    image: url(C:/Users/SBS/Documents/testqt/Ressources/down.png);\n"
"    width: 16px;\n"
"    height: 16px;\n"
"}"));
        label_50 = new QLabel(tab_16);
        label_50->setObjectName(QStringLiteral("label_50"));
        label_50->setGeometry(QRect(610, 180, 81, 20));
        label_50->setStyleSheet(QStringLiteral("color:black;"));
        btn_rechfMariage = new QPushButton(tab_16);
        btn_rechfMariage->setObjectName(QStringLiteral("btn_rechfMariage"));
        btn_rechfMariage->setGeometry(QRect(570, 70, 33, 29));
        btn_rechfMariage->setStyleSheet(QLatin1String("color: green ; background-color: white ;\n"
"background-color: rgb(209, 209, 209);"));
        btn_rechfMariage->setIcon(icon12);
        btn_rechfMariage->setFlat(true);
        label_59 = new QLabel(tab_16);
        label_59->setObjectName(QStringLiteral("label_59"));
        label_59->setGeometry(QRect(610, 140, 71, 16));
        label_59->setStyleSheet(QStringLiteral("color:black;"));
        modifierMariage = new QPushButton(tab_16);
        modifierMariage->setObjectName(QStringLiteral("modifierMariage"));
        modifierMariage->setGeometry(QRect(680, 351, 101, 29));
        modifierMariage->setFont(font6);
        modifierMariage->setStyleSheet(QStringLiteral("color:black;"));
        modifierMariage->setIcon(icon3);
        modifierMariage->setFlat(true);
        label_60 = new QLabel(tab_16);
        label_60->setObjectName(QStringLiteral("label_60"));
        label_60->setGeometry(QRect(610, 260, 61, 20));
        label_60->setStyleSheet(QStringLiteral("color:black;"));
        supprimerMariage = new QPushButton(tab_16);
        supprimerMariage->setObjectName(QStringLiteral("supprimerMariage"));
        supprimerMariage->setGeometry(QRect(680, 390, 101, 29));
        supprimerMariage->setFont(font6);
        supprimerMariage->setStyleSheet(QStringLiteral("color:black;"));
        supprimerMariage->setIcon(icon2);
        supprimerMariage->setFlat(true);
        label_61 = new QLabel(tab_16);
        label_61->setObjectName(QStringLiteral("label_61"));
        label_61->setGeometry(QRect(610, 220, 51, 20));
        label_61->setStyleSheet(QStringLiteral("color:black;"));
        ExcelMariage = new QPushButton(tab_16);
        ExcelMariage->setObjectName(QStringLiteral("ExcelMariage"));
        ExcelMariage->setGeometry(QRect(690, 420, 111, 31));
        ExcelMariage->setFont(font6);
        ExcelMariage->setStyleSheet(QStringLiteral("color:black;"));
        QIcon icon13;
        icon13.addFile(QStringLiteral(":/ressource/execel.png"), QSize(), QIcon::Normal, QIcon::Off);
        ExcelMariage->setIcon(icon13);
        ExcelMariage->setFlat(true);
        pushButton = new QPushButton(tab_16);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(700, 62, 91, 31));
        pushButton->setStyleSheet(QLatin1String("    color:white;\n"
"    background-color: qlineargradient(x1:0, y1:0, x2:1,y2:1, stop: 1 rgba(228, 41, 81, 100), stop: 0 rgba(234, 107, 101, 100));\n"
"    border-color: rgba(255,255,255,200);\n"
"    border-width: 1px;\n"
"    border-style: solid;\n"
""));
        tab_Mariage->addTab(tab_16, QString());
        pagesTable->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QStringLiteral("page_6"));
        pagesTable->addWidget(page_6);
        pushButton_3 = new QPushButton(rania);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(820, 20, 93, 28));
        pushButton_3->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"background-image: url(:/ressource/mariage.jpg);"));
        pages->addWidget(rania);
        sous_menuemploye = new QWidget();
        sous_menuemploye->setObjectName(QStringLiteral("sous_menuemploye"));
        img_2 = new QLabel(sous_menuemploye);
        img_2->setObjectName(QStringLiteral("img_2"));
        img_2->setGeometry(QRect(0, 0, 1700, 1134));
        img_2->setPixmap(QPixmap(QString::fromUtf8(":/ressource/mariage.jpg")));
        img_2->setScaledContents(false);
        img_2->setAlignment(Qt::AlignCenter);
        img_2->setWordWrap(false);
        groupBox_2 = new QGroupBox(sous_menuemploye);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(40, 40, 861, 541));
        organisation_2 = new QPushButton(groupBox_2);
        organisation_2->setObjectName(QStringLiteral("organisation_2"));
        organisation_2->setGeometry(QRect(80, 130, 250, 70));
        organisation_2->setStyleSheet(QLatin1String("background-image: url(:/ressource/mariage.jpg);\n"
"color: rgb(255, 255, 255);\n"
"font: 16pt \"Sachiko\";\n"
"border-color: rgb(255, 255, 255);"));
        ceremonie_2 = new QPushButton(groupBox_2);
        ceremonie_2->setObjectName(QStringLiteral("ceremonie_2"));
        ceremonie_2->setGeometry(QRect(80, 240, 250, 70));
        ceremonie_2->setStyleSheet(QLatin1String("background-image: url(:/ressource/mariage.jpg);\n"
"color: rgb(255, 255, 255);\n"
"font: 16pt \"Sachiko\";\n"
"border-color: rgb(255, 255, 255);"));
        alimentation_2 = new QPushButton(groupBox_2);
        alimentation_2->setObjectName(QStringLiteral("alimentation_2"));
        alimentation_2->setGeometry(QRect(80, 350, 250, 70));
        alimentation_2->setStyleSheet(QLatin1String("background-image: url(:/ressource/mariage.jpg);\n"
"color: rgb(255, 255, 255);\n"
"font: 16pt \"Sachiko\";\n"
"border-color: rgb(255, 255, 255);"));
        pages->addWidget(sous_menuemploye);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        img_4 = new QLabel(page);
        img_4->setObjectName(QStringLiteral("img_4"));
        img_4->setGeometry(QRect(0, -10, 1700, 1134));
        img_4->setPixmap(QPixmap(QString::fromUtf8(":/ressource/mariage.jpg")));
        img_4->setScaledContents(false);
        img_4->setAlignment(Qt::AlignCenter);
        img_4->setWordWrap(false);
        gerer_salle = new QPushButton(page);
        gerer_salle->setObjectName(QStringLiteral("gerer_salle"));
        gerer_salle->setGeometry(QRect(160, 230, 211, 51));
        gerer_salle->setAutoFillBackground(false);
        gerer_salle->setStyleSheet(QLatin1String("background-image: url(:/ressource/mariage.jpg);\n"
"color: rgb(255, 255, 255);\n"
"font: 16pt \"Sachiko\";\n"
"border-color: rgb(255, 255, 255);"));
        gerer_decorateur = new QPushButton(page);
        gerer_decorateur->setObjectName(QStringLiteral("gerer_decorateur"));
        gerer_decorateur->setGeometry(QRect(120, 310, 291, 51));
        gerer_decorateur->setAutoFillBackground(false);
        gerer_decorateur->setStyleSheet(QLatin1String("background-image: url(:/ressource/mariage.jpg);\n"
"color: rgb(255, 255, 255);\n"
"font: 16pt \"Sachiko\";\n"
"border-color: rgb(255, 255, 255);"));
        quittersalledeco = new QPushButton(page);
        quittersalledeco->setObjectName(QStringLiteral("quittersalledeco"));
        quittersalledeco->setGeometry(QRect(840, 590, 61, 21));
        quittersalledeco->setStyleSheet(QLatin1String("background-image: url(:/ressource/mariage.jpg);\n"
"color: rgb(255, 255, 255);\n"
"font: 8pt \"Sachiko\";\n"
"border-color: rgb(255, 255, 255);"));
        pages->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        img_5 = new QLabel(page_2);
        img_5->setObjectName(QStringLiteral("img_5"));
        img_5->setGeometry(QRect(-20, -20, 1700, 1134));
        img_5->setPixmap(QPixmap(QString::fromUtf8(":/ressource/mariage.jpg")));
        img_5->setScaledContents(false);
        img_5->setAlignment(Qt::AlignCenter);
        img_5->setWordWrap(false);
        liste_des_salle = new QPushButton(page_2);
        liste_des_salle->setObjectName(QStringLiteral("liste_des_salle"));
        liste_des_salle->setGeometry(QRect(110, 230, 261, 51));
        liste_des_salle->setAutoFillBackground(false);
        liste_des_salle->setStyleSheet(QLatin1String("background-image: url(:/ressource/mariage.jpg);\n"
"color: rgb(255, 255, 255);\n"
"font: 16pt \"Sachiko\";\n"
"border-color: rgb(255, 255, 255);"));
        ajouter_salle = new QPushButton(page_2);
        ajouter_salle->setObjectName(QStringLiteral("ajouter_salle"));
        ajouter_salle->setGeometry(QRect(130, 310, 221, 51));
        ajouter_salle->setAutoFillBackground(false);
        ajouter_salle->setStyleSheet(QLatin1String("background-image: url(:/ressource/mariage.jpg);\n"
"color: rgb(255, 255, 255);\n"
"font: 16pt \"Sachiko\";\n"
"border-color: rgb(255, 255, 255);"));
        quittersalle = new QPushButton(page_2);
        quittersalle->setObjectName(QStringLiteral("quittersalle"));
        quittersalle->setGeometry(QRect(800, 580, 51, 21));
        quittersalle->setStyleSheet(QLatin1String("background-image: url(:/ressource/mariage.jpg);\n"
"color: rgb(255, 255, 255);\n"
"font: 8pt \"Sachiko\";\n"
"border-color: rgb(255, 255, 255);"));
        retoursalle = new QPushButton(page_2);
        retoursalle->setObjectName(QStringLiteral("retoursalle"));
        retoursalle->setGeometry(QRect(860, 580, 51, 21));
        retoursalle->setStyleSheet(QLatin1String("background-image: url(:/ressource/mariage.jpg);\n"
"color: rgb(255, 255, 255);\n"
"font: 8pt \"Sachiko\";\n"
"border-color: rgb(255, 255, 255);"));
        pages->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        img_6 = new QLabel(page_3);
        img_6->setObjectName(QStringLiteral("img_6"));
        img_6->setGeometry(QRect(-10, 0, 1700, 1134));
        img_6->setPixmap(QPixmap(QString::fromUtf8(":/ressource/mariage.jpg")));
        img_6->setScaledContents(false);
        img_6->setAlignment(Qt::AlignCenter);
        img_6->setWordWrap(false);
        liste_de_decorateur = new QPushButton(page_3);
        liste_de_decorateur->setObjectName(QStringLiteral("liste_de_decorateur"));
        liste_de_decorateur->setGeometry(QRect(90, 200, 311, 51));
        liste_de_decorateur->setStyleSheet(QLatin1String("background-image: url(:/ressource/mariage.jpg);\n"
"color: rgb(255, 255, 255);\n"
"font: 16pt \"Sachiko\";\n"
"border-color: rgb(255, 255, 255);"));
        ajouter_decorateur = new QPushButton(page_3);
        ajouter_decorateur->setObjectName(QStringLiteral("ajouter_decorateur"));
        ajouter_decorateur->setGeometry(QRect(120, 270, 251, 51));
        ajouter_decorateur->setStyleSheet(QLatin1String("background-image: url(:/ressource/mariage.jpg);\n"
"color: rgb(255, 255, 255);\n"
"font: 16pt \"Sachiko\";\n"
"border-color: rgb(255, 255, 255);"));
        quitterdeco = new QPushButton(page_3);
        quitterdeco->setObjectName(QStringLiteral("quitterdeco"));
        quitterdeco->setGeometry(QRect(760, 580, 75, 23));
        quitterdeco->setStyleSheet(QLatin1String("background-image: url(:/ressource/mariage.jpg);\n"
"color: rgb(255, 255, 255);\n"
"font: 8pt \"Sachiko\";\n"
"border-color: rgb(255, 255, 255);"));
        retourdeco = new QPushButton(page_3);
        retourdeco->setObjectName(QStringLiteral("retourdeco"));
        retourdeco->setGeometry(QRect(840, 580, 71, 23));
        retourdeco->setStyleSheet(QLatin1String("background-image: url(:/ressource/mariage.jpg);\n"
"color: rgb(255, 255, 255);\n"
"font: 8pt \"Sachiko\";\n"
"border-color: rgb(255, 255, 255);"));
        pages->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        img_7 = new QLabel(page_4);
        img_7->setObjectName(QStringLiteral("img_7"));
        img_7->setGeometry(QRect(-10, 0, 1700, 1134));
        img_7->setPixmap(QPixmap(QString::fromUtf8(":/ressource/mariage.jpg")));
        img_7->setScaledContents(false);
        img_7->setAlignment(Qt::AlignCenter);
        img_7->setWordWrap(false);
        label_9 = new QLabel(page_4);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(230, 50, 501, 61));
        label_9->setStyleSheet(QLatin1String("color:rgb(255, 255, 255);\n"
"font: 75 29pt \"Segoe Script\";"));
        lineEdit_ideco = new QLineEdit(page_4);
        lineEdit_ideco->setObjectName(QStringLiteral("lineEdit_ideco"));
        lineEdit_ideco->setGeometry(QRect(500, 150, 113, 16));
        lineEdit_ideco->setCursor(QCursor(Qt::IBeamCursor));
        lineEdit_ideco->setTabletTracking(false);
        lineEdit_ideco->setContextMenuPolicy(Qt::DefaultContextMenu);
        lineEdit_ideco->setStyleSheet(QLatin1String("font: 75 8pt \"Segoe Script\";\n"
"color: rgb(0, 0, 0);"));
        lineEdit_ideco->setMaxLength(4);
        lineEdit_nom = new QLineEdit(page_4);
        lineEdit_nom->setObjectName(QStringLiteral("lineEdit_nom"));
        lineEdit_nom->setGeometry(QRect(500, 220, 113, 16));
        lineEdit_nom->setStyleSheet(QLatin1String("font: 75 8pt \"Segoe Script\";\n"
"color: rgb(0, 0, 0);"));
        lineEdit_style = new QLineEdit(page_4);
        lineEdit_style->setObjectName(QStringLiteral("lineEdit_style"));
        lineEdit_style->setGeometry(QRect(500, 280, 113, 16));
        lineEdit_style->setStyleSheet(QLatin1String("font: 75 8pt \"Segoe Script\";\n"
"color: rgb(0, 0, 0);"));
        lineEdit_18 = new QLineEdit(page_4);
        lineEdit_18->setObjectName(QStringLiteral("lineEdit_18"));
        lineEdit_18->setGeometry(QRect(500, 350, 113, 16));
        lineEdit_18->setStyleSheet(QLatin1String("font: 75 8pt \"Segoe Script\";\n"
"color: rgb(0, 0, 0);"));
        lineEdit_18->setMaxLength(8);
        lineEdit_21 = new QLineEdit(page_4);
        lineEdit_21->setObjectName(QStringLiteral("lineEdit_21"));
        lineEdit_21->setGeometry(QRect(700, 630, 113, 16));
        lineEdit_21->setStyleSheet(QLatin1String("font: 75 8pt \"Segoe Script\";\n"
"color: rgb(0, 0, 0);"));
        lineEdit_22 = new QLineEdit(page_4);
        lineEdit_22->setObjectName(QStringLiteral("lineEdit_22"));
        lineEdit_22->setGeometry(QRect(500, 410, 113, 16));
        lineEdit_22->setStyleSheet(QLatin1String("font: 75 8pt \"Segoe Script\";\n"
"color: rgb(0, 0, 0);"));
        lineEdit_23 = new QLineEdit(page_4);
        lineEdit_23->setObjectName(QStringLiteral("lineEdit_23"));
        lineEdit_23->setGeometry(QRect(500, 470, 113, 16));
        lineEdit_23->setStyleSheet(QLatin1String("font: 75 8pt \"Segoe Script\";\n"
"color: rgb(0, 0, 0);"));
        label_11 = new QLabel(page_4);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(310, 150, 141, 16));
        label_11->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 87 9pt \"Arial Black\";"));
        label_10 = new QLabel(page_4);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(310, 220, 141, 16));
        label_10->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 87 9pt \"Arial Black\";"));
        label_13 = new QLabel(page_4);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(310, 280, 141, 16));
        label_13->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 87 9pt \"Arial Black\";"));
        label_53 = new QLabel(page_4);
        label_53->setObjectName(QStringLiteral("label_53"));
        label_53->setGeometry(QRect(290, 350, 211, 16));
        label_53->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 87 9pt \"Arial Black\";"));
        label_55 = new QLabel(page_4);
        label_55->setObjectName(QStringLiteral("label_55"));
        label_55->setGeometry(QRect(310, 410, 161, 16));
        label_55->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 87 9pt \"Arial Black\";"));
        label_57 = new QLabel(page_4);
        label_57->setObjectName(QStringLiteral("label_57"));
        label_57->setGeometry(QRect(310, 470, 151, 16));
        label_57->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 87 9pt \"Arial Black\";"));
        ajouter_decorateur_2 = new QPushButton(page_4);
        ajouter_decorateur_2->setObjectName(QStringLiteral("ajouter_decorateur_2"));
        ajouter_decorateur_2->setGeometry(QRect(740, 570, 75, 23));
        ajouter_decorateur_2->setStyleSheet(QLatin1String("background-image: url(:/ressource/mariage.jpg);\n"
"color: rgb(255, 255, 255);\n"
"font: 8pt \"Sachiko\";\n"
"border-color: rgb(255, 255, 255);"));
        return11 = new QPushButton(page_4);
        return11->setObjectName(QStringLiteral("return11"));
        return11->setGeometry(QRect(830, 570, 75, 23));
        return11->setStyleSheet(QLatin1String("background-image: url(:/ressource/mariage.jpg);\n"
"color: rgb(255, 255, 255);\n"
"font: 8pt \"Sachiko\";\n"
"border-color: rgb(255, 255, 255);"));
        pages->addWidget(page_4);
        page_8 = new QWidget();
        page_8->setObjectName(QStringLiteral("page_8"));
        img_8 = new QLabel(page_8);
        img_8->setObjectName(QStringLiteral("img_8"));
        img_8->setGeometry(QRect(-10, -10, 1700, 1134));
        img_8->setPixmap(QPixmap(QString::fromUtf8(":/ressource/mariage.jpg")));
        img_8->setScaledContents(false);
        img_8->setAlignment(Qt::AlignCenter);
        img_8->setWordWrap(false);
        label_14 = new QLabel(page_8);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(360, 50, 431, 61));
        label_14->setStyleSheet(QLatin1String("color:rgb(255, 255, 255);\n"
"font: 75 29pt \"Segoe Script\";"));
        label_16 = new QLabel(page_8);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(340, 180, 101, 16));
        label_16->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 87 9pt \"Arial Black\";"));
        label_15 = new QLabel(page_8);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(340, 250, 101, 16));
        label_15->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 87 9pt \"Arial Black\";"));
        label_17 = new QLabel(page_8);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(340, 300, 141, 31));
        label_17->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 87 9pt \"Arial Black\";"));
        label_18 = new QLabel(page_8);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(340, 360, 141, 31));
        label_18->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 87 9pt \"Arial Black\";"));
        ajoutersalle = new QPushButton(page_8);
        ajoutersalle->setObjectName(QStringLiteral("ajoutersalle"));
        ajoutersalle->setGeometry(QRect(790, 580, 61, 21));
        ajoutersalle->setStyleSheet(QLatin1String("background-image: url(:/ressource/mariage.jpg);\n"
"color: rgb(255, 255, 255);\n"
"font: 8pt \"Sachiko\";\n"
"border-color: rgb(255, 255, 255);"));
        retouur = new QPushButton(page_8);
        retouur->setObjectName(QStringLiteral("retouur"));
        retouur->setGeometry(QRect(860, 580, 61, 21));
        retouur->setStyleSheet(QLatin1String("background-image: url(:/ressource/mariage.jpg);\n"
"color: rgb(255, 255, 255);\n"
"font: 8pt \"Sachiko\";\n"
"border-color: rgb(255, 255, 255);"));
        lineEdit_id = new QLineEdit(page_8);
        lineEdit_id->setObjectName(QStringLiteral("lineEdit_id"));
        lineEdit_id->setGeometry(QRect(510, 180, 113, 16));
        lineEdit_id->setStyleSheet(QLatin1String("font: 75 8pt \"Segoe Script\";\n"
"color: rgb(0, 0, 0);"));
        lineEdit_id->setMaxLength(4);
        lineEdit_lieu = new QLineEdit(page_8);
        lineEdit_lieu->setObjectName(QStringLiteral("lineEdit_lieu"));
        lineEdit_lieu->setGeometry(QRect(510, 250, 111, 16));
        lineEdit_lieu->setStyleSheet(QLatin1String("font: 75 8pt \"Segoe Script\";\n"
"color: rgb(0, 0, 0);"));
        lineEdit_prix = new QLineEdit(page_8);
        lineEdit_prix->setObjectName(QStringLiteral("lineEdit_prix"));
        lineEdit_prix->setGeometry(QRect(510, 310, 111, 16));
        lineEdit_prix->setStyleSheet(QLatin1String("font: 75 8pt \"Segoe Script\";\n"
"color: rgb(0, 0, 0);"));
        lineEdit_capacite = new QLineEdit(page_8);
        lineEdit_capacite->setObjectName(QStringLiteral("lineEdit_capacite"));
        lineEdit_capacite->setGeometry(QRect(510, 370, 111, 16));
        lineEdit_capacite->setStyleSheet(QLatin1String("font: 75 8pt \"Segoe Script\";\n"
"color: rgb(0, 0, 0);"));
        pages->addWidget(page_8);
        page_9 = new QWidget();
        page_9->setObjectName(QStringLiteral("page_9"));
        img_9 = new QLabel(page_9);
        img_9->setObjectName(QStringLiteral("img_9"));
        img_9->setGeometry(QRect(0, 0, 1700, 1134));
        img_9->setPixmap(QPixmap(QString::fromUtf8(":/ressource/mariage.jpg")));
        img_9->setScaledContents(false);
        img_9->setAlignment(Qt::AlignCenter);
        img_9->setWordWrap(false);
        label_21 = new QLabel(page_9);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(360, 60, 331, 51));
        label_21->setStyleSheet(QLatin1String("color:rgb(255, 255, 255);\n"
"font: 75 29pt \"Segoe Script\";"));
        tabledeco = new QTableView(page_9);
        tabledeco->setObjectName(QStringLiteral("tabledeco"));
        tabledeco->setGeometry(QRect(80, 170, 491, 251));
        tabledeco->setStyleSheet(QLatin1String("color:rgb(0, 0, 0);\n"
"font: 75 9pt \"Segoe Script\";"));
        a_retour = new QPushButton(page_9);
        a_retour->setObjectName(QStringLiteral("a_retour"));
        a_retour->setGeometry(QRect(900, 20, 21, 16));
        a_retour->setIconSize(QSize(16, 20));
        lineEdit_24 = new QLineEdit(page_9);
        lineEdit_24->setObjectName(QStringLiteral("lineEdit_24"));
        lineEdit_24->setGeometry(QRect(800, 170, 91, 16));
        lineEdit_24->setStyleSheet(QLatin1String("font: 75 8pt \"Segoe Script\";\n"
"color: rgb(0, 0, 0);"));
        recherche_deco = new QPushButton(page_9);
        recherche_deco->setObjectName(QStringLiteral("recherche_deco"));
        recherche_deco->setGeometry(QRect(770, 170, 21, 21));
        lieu_recherche_2 = new QPushButton(page_9);
        lieu_recherche_2->setObjectName(QStringLiteral("lieu_recherche_2"));
        lieu_recherche_2->setGeometry(QRect(740, 220, 41, 41));
        lieu_recherche_2->setIconSize(QSize(60, 50));
        style_recherche = new QPushButton(page_9);
        style_recherche->setObjectName(QStringLiteral("style_recherche"));
        style_recherche->setGeometry(QRect(800, 220, 61, 31));
        style_recherche->setIconSize(QSize(55, 50));
        idd_recherche = new QPushButton(page_9);
        idd_recherche->setObjectName(QStringLiteral("idd_recherche"));
        idd_recherche->setGeometry(QRect(880, 220, 41, 41));
        idd_recherche->setStyleSheet(QLatin1String("font: 75 8pt \"Segoe Script\";\n"
"color: rgb(0, 0, 0);"));
        idd_recherche->setIconSize(QSize(60, 50));
        label_45 = new QLabel(page_9);
        label_45->setObjectName(QStringLiteral("label_45"));
        label_45->setGeometry(QRect(740, 380, 47, 41));
        label_45->setStyleSheet(QLatin1String("color:rgb(255, 255, 255);\n"
"font: 75 13pt \"Segoe Script\";"));
        lineEdit_ideco2 = new QLineEdit(page_9);
        lineEdit_ideco2->setObjectName(QStringLiteral("lineEdit_ideco2"));
        lineEdit_ideco2->setGeometry(QRect(780, 390, 91, 16));
        lineEdit_ideco2->setStyleSheet(QLatin1String("font: 75 8pt \"Segoe Script\";\n"
"color: rgb(0, 0, 0);"));
        lineEdit_ideco2->setMaxLength(4);
        suppression_a = new QPushButton(page_9);
        suppression_a->setObjectName(QStringLiteral("suppression_a"));
        suppression_a->setGeometry(QRect(750, 430, 41, 41));
        suppression_a->setStyleSheet(QLatin1String("font: 75 8pt \"Segoe Script\";\n"
"color: rgb(0, 0, 0);"));
        suppression_a->setIconSize(QSize(60, 40));
        supprimer_deco = new QPushButton(page_9);
        supprimer_deco->setObjectName(QStringLiteral("supprimer_deco"));
        supprimer_deco->setGeometry(QRect(810, 430, 41, 41));
        supprimer_deco->setStyleSheet(QLatin1String("font: 75 8pt \"Segoe Script\";\n"
"color: rgb(0, 0, 0);"));
        supprimer_deco->setIconSize(QSize(60, 40));
        update_s = new QPushButton(page_9);
        update_s->setObjectName(QStringLiteral("update_s"));
        update_s->setGeometry(QRect(870, 430, 41, 41));
        update_s->setStyleSheet(QLatin1String("font: 75 8pt \"Segoe Script\";\n"
"color: rgb(0, 0, 0);"));
        update_s->setIconSize(QSize(60, 40));
        retouir = new QPushButton(page_9);
        retouir->setObjectName(QStringLiteral("retouir"));
        retouir->setGeometry(QRect(790, 580, 51, 21));
        retouir->setStyleSheet(QLatin1String("background-image: url(:/ressource/mariage.jpg);\n"
"color: rgb(255, 255, 255);\n"
"font: 8pt \"Sachiko\";\n"
"border-color: rgb(255, 255, 255);"));
        home = new QPushButton(page_9);
        home->setObjectName(QStringLiteral("home"));
        home->setGeometry(QRect(850, 580, 61, 21));
        home->setStyleSheet(QLatin1String("background-image: url(:/ressource/mariage.jpg);\n"
"color: rgb(255, 255, 255);\n"
"font: 8pt \"Sachiko\";\n"
"border-color: rgb(255, 255, 255);"));
        exporteer_pdff = new QPushButton(page_9);
        exporteer_pdff->setObjectName(QStringLiteral("exporteer_pdff"));
        exporteer_pdff->setGeometry(QRect(790, 500, 75, 21));
        exporteer_pdff->setStyleSheet(QLatin1String("background-image: url(:/ressource/mariage.jpg);\n"
"color: rgb(255, 255, 255);\n"
"font: 8pt \"Sachiko\";\n"
"border-color: rgb(255, 255, 255);"));
        pages->addWidget(page_9);
        page_10 = new QWidget();
        page_10->setObjectName(QStringLiteral("page_10"));
        img_10 = new QLabel(page_10);
        img_10->setObjectName(QStringLiteral("img_10"));
        img_10->setGeometry(QRect(0, 0, 1700, 1134));
        img_10->setPixmap(QPixmap(QString::fromUtf8(":/ressource/mariage.jpg")));
        img_10->setScaledContents(false);
        img_10->setAlignment(Qt::AlignCenter);
        img_10->setWordWrap(false);
        label_29 = new QLabel(page_10);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(360, 60, 251, 61));
        label_29->setStyleSheet(QLatin1String("color:rgb(255, 255, 255);\n"
"font: 75 29pt \"Segoe Script\";"));
        tablesalle = new QTableView(page_10);
        tablesalle->setObjectName(QStringLiteral("tablesalle"));
        tablesalle->setGeometry(QRect(100, 200, 441, 331));
        tablesalle->setStyleSheet(QLatin1String("color:rgb(0, 0, 0);\n"
"font: 75 12pt \"Segoe Script\";"));
        label_58 = new QLabel(page_10);
        label_58->setObjectName(QStringLiteral("label_58"));
        label_58->setGeometry(QRect(750, 160, 81, 21));
        label_58->setStyleSheet(QLatin1String("color:rgb(21, 24, 91);\n"
"font: 75 16pt \"Segoe Script\";"));
        trie_capacite_2 = new QPushButton(page_10);
        trie_capacite_2->setObjectName(QStringLiteral("trie_capacite_2"));
        trie_capacite_2->setGeometry(QRect(650, 210, 41, 41));
        trie_capacite_2->setIconSize(QSize(58, 40));
        trie_id = new QPushButton(page_10);
        trie_id->setObjectName(QStringLiteral("trie_id"));
        trie_id->setGeometry(QRect(710, 210, 61, 41));
        trie_id->setIconSize(QSize(80, 50));
        trie_prix = new QPushButton(page_10);
        trie_prix->setObjectName(QStringLiteral("trie_prix"));
        trie_prix->setGeometry(QRect(790, 210, 41, 41));
        trie_prix->setIconSize(QSize(60, 39));
        trie_lieu = new QPushButton(page_10);
        trie_lieu->setObjectName(QStringLiteral("trie_lieu"));
        trie_lieu->setGeometry(QRect(850, 210, 37, 41));
        trie_lieu->setIconSize(QSize(60, 40));
        lineEdit_supp = new QLineEdit(page_10);
        lineEdit_supp->setObjectName(QStringLiteral("lineEdit_supp"));
        lineEdit_supp->setGeometry(QRect(790, 330, 81, 16));
        lineEdit_supp->setStyleSheet(QLatin1String("font: 75 8pt \"Segoe Script\";\n"
"color: rgb(0, 0, 0);"));
        lineEdit_supp->setMaxLength(4);
        label_46 = new QLabel(page_10);
        label_46->setObjectName(QStringLiteral("label_46"));
        label_46->setGeometry(QRect(750, 330, 47, 14));
        label_46->setStyleSheet(QLatin1String("color:rgb(255, 255, 255);\n"
"font: 75 16pt \"Segoe Script\";"));
        suppression_salle = new QPushButton(page_10);
        suppression_salle->setObjectName(QStringLiteral("suppression_salle"));
        suppression_salle->setGeometry(QRect(720, 380, 41, 41));
        suppression_salle->setStyleSheet(QLatin1String("font: 75 8pt \"Segoe Script\";\n"
"color: rgb(0, 0, 0);"));
        suppression_salle->setIconSize(QSize(60, 40));
        reserver_salle = new QPushButton(page_10);
        reserver_salle->setObjectName(QStringLiteral("reserver_salle"));
        reserver_salle->setGeometry(QRect(780, 380, 51, 41));
        reserver_salle->setStyleSheet(QLatin1String("font: 75 8pt \"Segoe Script\";\n"
"color: rgb(0, 0, 0);"));
        reserver_salle->setIconSize(QSize(60, 40));
        salle_email = new QPushButton(page_10);
        salle_email->setObjectName(QStringLiteral("salle_email"));
        salle_email->setGeometry(QRect(850, 380, 41, 41));
        salle_email->setStyleSheet(QLatin1String("font: 75 8pt \"Segoe Script\";\n"
"color: rgb(0, 0, 0);"));
        salle_email->setIconSize(QSize(60, 40));
        retouur5 = new QPushButton(page_10);
        retouur5->setObjectName(QStringLiteral("retouur5"));
        retouur5->setGeometry(QRect(770, 580, 75, 23));
        retouur5->setStyleSheet(QLatin1String("background-image: url(:/ressource/mariage.jpg);\n"
"color: rgb(255, 255, 255);\n"
"font: 8pt \"Sachiko\";\n"
"border-color: rgb(255, 255, 255);"));
        retouur5->setIconSize(QSize(68, 50));
        homme = new QPushButton(page_10);
        homme->setObjectName(QStringLiteral("homme"));
        homme->setGeometry(QRect(850, 580, 71, 21));
        homme->setStyleSheet(QLatin1String("background-image: url(:/ressource/mariage.jpg);\n"
"color: rgb(255, 255, 255);\n"
"font: 8pt \"Sachiko\";\n"
"border-color: rgb(255, 255, 255);\n"
""));
        homme->setIconSize(QSize(68, 50));
        export_excel_salle = new QPushButton(page_10);
        export_excel_salle->setObjectName(QStringLiteral("export_excel_salle"));
        export_excel_salle->setGeometry(QRect(790, 450, 91, 23));
        export_excel_salle->setStyleSheet(QLatin1String("background-image: url(:/ressource/mariage.jpg);\n"
"color: rgb(255, 255, 255);\n"
"font: 8pt \"Sachiko\";\n"
"border-color: rgb(255, 255, 255);"));
        pages->addWidget(page_10);
        page_11 = new QWidget();
        page_11->setObjectName(QStringLiteral("page_11"));
        img_11 = new QLabel(page_11);
        img_11->setObjectName(QStringLiteral("img_11"));
        img_11->setGeometry(QRect(0, 0, 1700, 1134));
        img_11->setPixmap(QPixmap(QString::fromUtf8(":/ressource/mariage.jpg")));
        img_11->setScaledContents(false);
        img_11->setAlignment(Qt::AlignCenter);
        img_11->setWordWrap(false);
        label_30 = new QLabel(page_11);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(340, 70, 411, 51));
        label_30->setStyleSheet(QLatin1String("color:rgb(255, 255, 255);\n"
"font: 75 29pt \"Segoe Script\";"));
        lineEdit_13 = new QLineEdit(page_11);
        lineEdit_13->setObjectName(QStringLiteral("lineEdit_13"));
        lineEdit_13->setGeometry(QRect(480, 190, 111, 16));
        lineEdit_13->setStyleSheet(QLatin1String("font: 75 8pt \"Segoe Script\";\n"
"color: rgb(0, 0, 0);"));
        lineEdit_13->setMaxLength(4);
        lineEdit_13->setReadOnly(true);
        lineEdit_19 = new QLineEdit(page_11);
        lineEdit_19->setObjectName(QStringLiteral("lineEdit_19"));
        lineEdit_19->setGeometry(QRect(480, 270, 113, 16));
        lineEdit_19->setStyleSheet(QLatin1String("font: 75 8pt \"Segoe Script\";\n"
"color: rgb(0, 0, 0);"));
        lineEdit_3 = new QLineEdit(page_11);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(480, 350, 113, 16));
        lineEdit_3->setStyleSheet(QLatin1String("font: 75 8pt \"Segoe Script\";\n"
"color: rgb(0, 0, 0);"));
        lineEdit_4 = new QLineEdit(page_11);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(480, 440, 113, 16));
        lineEdit_4->setStyleSheet(QLatin1String("font: 75 8pt \"Segoe Script\";\n"
"color: rgb(0, 0, 0);"));
        label_51 = new QLabel(page_11);
        label_51->setObjectName(QStringLiteral("label_51"));
        label_51->setGeometry(QRect(330, 180, 47, 41));
        label_51->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 87 9pt \"Arial Black\";"));
        label = new QLabel(page_11);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(330, 270, 131, 16));
        label->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 87 9pt \"Arial Black\";"));
        label_2 = new QLabel(page_11);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(330, 350, 151, 16));
        label_2->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 87 9pt \"Arial Black\";"));
        label_3 = new QLabel(page_11);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(330, 440, 121, 16));
        label_3->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 87 9pt \"Arial Black\";"));
        okk = new QPushButton(page_11);
        okk->setObjectName(QStringLiteral("okk"));
        okk->setGeometry(QRect(760, 581, 51, 20));
        okk->setStyleSheet(QLatin1String("background-image: url(:/ressource/mariage.jpg);\n"
"color: rgb(255, 255, 255);\n"
"font: 8pt \"Sachiko\";\n"
"border-color: rgb(255, 255, 255);\n"
""));
        okk->setIconSize(QSize(40, 30));
        back = new QPushButton(page_11);
        back->setObjectName(QStringLiteral("back"));
        back->setGeometry(QRect(820, 580, 71, 21));
        back->setStyleSheet(QLatin1String("background-image: url(:/ressource/mariage.jpg);\n"
"color: rgb(255, 255, 255);\n"
"font: 8pt \"Sachiko\";\n"
"border-color: rgb(255, 255, 255);"));
        back->setIconSize(QSize(68, 50));
        pages->addWidget(page_11);
        page_12 = new QWidget();
        page_12->setObjectName(QStringLiteral("page_12"));
        img_12 = new QLabel(page_12);
        img_12->setObjectName(QStringLiteral("img_12"));
        img_12->setGeometry(QRect(0, -10, 1700, 1134));
        img_12->setPixmap(QPixmap(QString::fromUtf8(":/ressource/mariage.jpg")));
        img_12->setScaledContents(false);
        img_12->setAlignment(Qt::AlignCenter);
        img_12->setWordWrap(false);
        rcpt = new QLineEdit(page_12);
        rcpt->setObjectName(QStringLiteral("rcpt"));
        rcpt->setGeometry(QRect(100, 60, 511, 21));
        rcpt->setStyleSheet(QLatin1String("font: 75 8pt \"Segoe Script\";\n"
"color: rgb(0, 0, 0);\n"
""));
        subject = new QLineEdit(page_12);
        subject->setObjectName(QStringLiteral("subject"));
        subject->setGeometry(QRect(100, 120, 661, 16));
        subject->setStyleSheet(QLatin1String("font: 75 8pt \"Segoe Script\";\n"
"color: rgb(0, 0, 0);"));
        file = new QLineEdit(page_12);
        file->setObjectName(QStringLiteral("file"));
        file->setGeometry(QRect(100, 180, 571, 23));
        file->setStyleSheet(QLatin1String("font: 75 8pt \"Segoe Script\";\n"
"color: rgb(0, 0, 0);"));
        msg = new QTextEdit(page_12);
        msg->setObjectName(QStringLiteral("msg"));
        msg->setGeometry(QRect(100, 240, 661, 231));
        msg->setStyleSheet(QLatin1String("font: 75 8pt \"Segoe Script\";\n"
"color: rgb(0, 0, 0);"));
        sendBtn = new QPushButton(page_12);
        sendBtn->setObjectName(QStringLiteral("sendBtn"));
        sendBtn->setGeometry(QRect(100, 500, 641, 23));
        sendBtn->setStyleSheet(QLatin1String("font: 75 8pt \"Segoe Script\";\n"
"color: rgb(0, 0, 0);"));
        mail_pass = new QLineEdit(page_12);
        mail_pass->setObjectName(QStringLiteral("mail_pass"));
        mail_pass->setGeometry(QRect(620, 60, 141, 20));
        mail_pass->setStyleSheet(QLatin1String("font: 75 8pt \"Segoe Script\";\n"
"color: rgb(0, 0, 0);"));
        mail_pass->setEchoMode(QLineEdit::Password);
        browseBtn = new QPushButton(page_12);
        browseBtn->setObjectName(QStringLiteral("browseBtn"));
        browseBtn->setGeometry(QRect(680, 180, 81, 24));
        browseBtn->setStyleSheet(QLatin1String("font: 75 8pt \"Segoe Script\";\n"
"color: rgb(0, 0, 0);"));
        backk = new QPushButton(page_12);
        backk->setObjectName(QStringLiteral("backk"));
        backk->setGeometry(QRect(740, 500, 21, 21));
        pages->addWidget(page_12);
        page_13 = new QWidget();
        page_13->setObjectName(QStringLiteral("page_13"));
        img_13 = new QLabel(page_13);
        img_13->setObjectName(QStringLiteral("img_13"));
        img_13->setGeometry(QRect(-10, -10, 1700, 1134));
        img_13->setPixmap(QPixmap(QString::fromUtf8(":/ressource/mariage.jpg")));
        img_13->setScaledContents(false);
        img_13->setAlignment(Qt::AlignCenter);
        img_13->setWordWrap(false);
        label_38 = new QLabel(page_13);
        label_38->setObjectName(QStringLiteral("label_38"));
        label_38->setGeometry(QRect(380, 80, 271, 41));
        label_38->setStyleSheet(QLatin1String("color:rgb(255, 255, 255);\n"
"font: 75 29pt \"Segoe Script\";"));
        lineEdit_12 = new QLineEdit(page_13);
        lineEdit_12->setObjectName(QStringLiteral("lineEdit_12"));
        lineEdit_12->setGeometry(QRect(460, 200, 113, 16));
        lineEdit_12->setStyleSheet(QLatin1String("font: 75 8pt \"Segoe Script\";\n"
"color: rgb(0, 0, 0);"));
        lineEdit_12->setMaxLength(4);
        lineEdit_12->setReadOnly(true);
        lineEdit_11 = new QLineEdit(page_13);
        lineEdit_11->setObjectName(QStringLiteral("lineEdit_11"));
        lineEdit_11->setGeometry(QRect(460, 270, 113, 16));
        lineEdit_11->setStyleSheet(QLatin1String("font: 75 8pt \"Segoe Script\";\n"
"color: rgb(0, 0, 0);"));
        lineEdit_11->setReadOnly(true);
        lineEdit_10 = new QLineEdit(page_13);
        lineEdit_10->setObjectName(QStringLiteral("lineEdit_10"));
        lineEdit_10->setGeometry(QRect(460, 340, 113, 16));
        lineEdit_10->setStyleSheet(QLatin1String("font: 75 8pt \"Segoe Script\";\n"
"color: rgb(0, 0, 0);"));
        lineEdit_10->setReadOnly(true);
        lineEdit_5 = new QLineEdit(page_13);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(460, 400, 113, 16));
        lineEdit_5->setStyleSheet(QLatin1String("font: 75 8pt \"Segoe Script\";\n"
"color: rgb(0, 0, 0);"));
        lineEdit_5->setReadOnly(true);
        dateEdit = new QDateEdit(page_13);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(460, 470, 110, 16));
        dateEdit->setStyleSheet(QLatin1String("font: 75 8pt \"Segoe Script\";\n"
"color: rgb(0, 0, 0);"));
        dateEdit_2 = new QDateEdit(page_13);
        dateEdit_2->setObjectName(QStringLiteral("dateEdit_2"));
        dateEdit_2->setGeometry(QRect(460, 530, 110, 16));
        dateEdit_2->setStyleSheet(QLatin1String("font: 75 8pt \"Segoe Script\";\n"
"color: rgb(0, 0, 0);"));
        imprimer_resrv = new QPushButton(page_13);
        imprimer_resrv->setObjectName(QStringLiteral("imprimer_resrv"));
        imprimer_resrv->setGeometry(QRect(760, 580, 71, 20));
        imprimer_resrv->setStyleSheet(QLatin1String("background-image: url(:/ressource/mariage.jpg);\n"
"color: rgb(255, 255, 255);\n"
"font: 8pt \"Sachiko\";\n"
"border-color: rgb(255, 255, 255);"));
        backkk = new QPushButton(page_13);
        backkk->setObjectName(QStringLiteral("backkk"));
        backkk->setGeometry(QRect(840, 580, 75, 21));
        backkk->setStyleSheet(QLatin1String("background-image: url(:/ressource/mariage.jpg);\n"
"color: rgb(255, 255, 255);\n"
"font: 8pt \"Sachiko\";\n"
"border-color: rgb(255, 255, 255);"));
        label_5 = new QLabel(page_13);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(290, 200, 91, 16));
        label_5->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 87 9pt \"Arial Black\";"));
        label_6 = new QLabel(page_13);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(290, 270, 131, 16));
        label_6->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 87 9pt \"Arial Black\";"));
        label_7 = new QLabel(page_13);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(290, 340, 151, 16));
        label_7->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 87 9pt \"Arial Black\";"));
        label_8 = new QLabel(page_13);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(290, 400, 111, 16));
        label_8->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 87 9pt \"Arial Black\";"));
        label_19 = new QLabel(page_13);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(290, 470, 131, 16));
        label_19->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 87 9pt \"Arial Black\";"));
        label_20 = new QLabel(page_13);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(290, 530, 131, 16));
        label_20->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 87 9pt \"Arial Black\";"));
        pages->addWidget(page_13);
        page_14 = new QWidget();
        page_14->setObjectName(QStringLiteral("page_14"));
        img_14 = new QLabel(page_14);
        img_14->setObjectName(QStringLiteral("img_14"));
        img_14->setGeometry(QRect(-10, 0, 1700, 1134));
        img_14->setPixmap(QPixmap(QString::fromUtf8(":/ressource/mariage.jpg")));
        img_14->setScaledContents(false);
        img_14->setAlignment(Qt::AlignCenter);
        img_14->setWordWrap(false);
        label_42 = new QLabel(page_14);
        label_42->setObjectName(QStringLiteral("label_42"));
        label_42->setGeometry(QRect(300, 80, 561, 31));
        label_42->setStyleSheet(QLatin1String("color:rgb(255, 255, 255);\n"
"font: 75 29pt \"Segoe Script\";"));
        lineEdit_16 = new QLineEdit(page_14);
        lineEdit_16->setObjectName(QStringLiteral("lineEdit_16"));
        lineEdit_16->setGeometry(QRect(600, 200, 113, 16));
        lineEdit_16->setStyleSheet(QLatin1String("font: 75 8pt \"Segoe Script\";\n"
"color: rgb(0, 0, 0);"));
        lineEdit_16->setReadOnly(true);
        lineEdit_17 = new QLineEdit(page_14);
        lineEdit_17->setObjectName(QStringLiteral("lineEdit_17"));
        lineEdit_17->setGeometry(QRect(600, 270, 113, 16));
        lineEdit_17->setStyleSheet(QLatin1String("font: 75 8pt \"Segoe Script\";\n"
"color: rgb(0, 0, 0);"));
        lineEdit_6 = new QLineEdit(page_14);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(600, 340, 113, 16));
        lineEdit_6->setStyleSheet(QLatin1String("font: 75 8pt \"Segoe Script\";\n"
"color: rgb(0, 0, 0);"));
        lineEdit_7 = new QLineEdit(page_14);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(600, 410, 113, 16));
        lineEdit_7->setStyleSheet(QLatin1String("font: 75 8pt \"Segoe Script\";\n"
"color: rgb(0, 0, 0);"));
        lineEdit_7->setMaxLength(8);
        lineEdit_8 = new QLineEdit(page_14);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        lineEdit_8->setGeometry(QRect(600, 480, 113, 16));
        lineEdit_8->setStyleSheet(QLatin1String("font: 75 8pt \"Segoe Script\";\n"
"color: rgb(0, 0, 0);"));
        lineEdit_9 = new QLineEdit(page_14);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));
        lineEdit_9->setGeometry(QRect(600, 540, 113, 16));
        lineEdit_9->setStyleSheet(QLatin1String("font: 75 8pt \"Segoe Script\";\n"
"color: rgb(0, 0, 0);"));
        label_22 = new QLabel(page_14);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(390, 200, 131, 16));
        label_22->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 87 9pt \"Arial Black\";"));
        label_23 = new QLabel(page_14);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(390, 270, 191, 16));
        label_23->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 87 9pt \"Arial Black\";"));
        label_24 = new QLabel(page_14);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(390, 340, 191, 16));
        label_24->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 87 9pt \"Arial Black\";"));
        label_25 = new QLabel(page_14);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(320, 410, 281, 16));
        label_25->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 87 9pt \"Arial Black\";"));
        label_26 = new QLabel(page_14);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(390, 480, 191, 16));
        label_26->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 87 9pt \"Arial Black\";"));
        label_31 = new QLabel(page_14);
        label_31->setObjectName(QStringLiteral("label_31"));
        label_31->setGeometry(QRect(390, 540, 181, 16));
        label_31->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 87 9pt \"Arial Black\";\n"
""));
        okkkkk = new QPushButton(page_14);
        okkkkk->setObjectName(QStringLiteral("okkkkk"));
        okkkkk->setGeometry(QRect(780, 590, 61, 21));
        okkkkk->setStyleSheet(QLatin1String("background-image: url(:/ressource/mariage.jpg);\n"
"color: rgb(255, 255, 255);\n"
"font: 8pt \"Sachiko\";\n"
"border-color: rgb(255, 255, 255);"));
        bacck = new QPushButton(page_14);
        bacck->setObjectName(QStringLiteral("bacck"));
        bacck->setGeometry(QRect(850, 590, 75, 21));
        bacck->setStyleSheet(QLatin1String("background-image: url(:/ressource/mariage.jpg);\n"
"color: rgb(255, 255, 255);\n"
"font: 8pt \"Sachiko\";\n"
"border-color: rgb(255, 255, 255);"));
        pages->addWidget(page_14);
        sousmenu_administrateur = new QWidget();
        sousmenu_administrateur->setObjectName(QStringLiteral("sousmenu_administrateur"));
        img_3 = new QLabel(sousmenu_administrateur);
        img_3->setObjectName(QStringLiteral("img_3"));
        img_3->setGeometry(QRect(-40, -70, 1700, 1134));
        img_3->setPixmap(QPixmap(QString::fromUtf8(":/ressource/mariage.jpg")));
        img_3->setScaledContents(false);
        img_3->setAlignment(Qt::AlignCenter);
        img_3->setWordWrap(false);
        organisation_3 = new QPushButton(sousmenu_administrateur);
        organisation_3->setObjectName(QStringLiteral("organisation_3"));
        organisation_3->setGeometry(QRect(140, 60, 250, 70));
        organisation_3->setStyleSheet(QLatin1String("background-image: url(:/ressource/mariage.jpg);\n"
"color: rgb(255, 255, 255);\n"
"font: 16pt \"Sachiko\";\n"
"border-color: rgb(255, 255, 255);"));
        ceremonie_3 = new QPushButton(sousmenu_administrateur);
        ceremonie_3->setObjectName(QStringLiteral("ceremonie_3"));
        ceremonie_3->setGeometry(QRect(140, 160, 250, 70));
        ceremonie_3->setStyleSheet(QLatin1String("background-image: url(:/ressource/mariage.jpg);\n"
"color: rgb(255, 255, 255);\n"
"font: 16pt \"Sachiko\";\n"
"border-color: rgb(255, 255, 255);"));
        marketing_2 = new QPushButton(sousmenu_administrateur);
        marketing_2->setObjectName(QStringLiteral("marketing_2"));
        marketing_2->setGeometry(QRect(140, 260, 250, 70));
        marketing_2->setStyleSheet(QLatin1String("background-image: url(:/ressource/mariage.jpg);\n"
"color: rgb(255, 255, 255);\n"
"font: 16pt \"Sachiko\";\n"
"border-color: rgb(255, 255, 255);"));
        alimentation_3 = new QPushButton(sousmenu_administrateur);
        alimentation_3->setObjectName(QStringLiteral("alimentation_3"));
        alimentation_3->setGeometry(QRect(140, 360, 250, 70));
        alimentation_3->setStyleSheet(QLatin1String("background-image: url(:/ressource/mariage.jpg);\n"
"color: rgb(255, 255, 255);\n"
"font: 16pt \"Sachiko\";\n"
"border-color: rgb(255, 255, 255);"));
        RessourcesHumaine = new QPushButton(sousmenu_administrateur);
        RessourcesHumaine->setObjectName(QStringLiteral("RessourcesHumaine"));
        RessourcesHumaine->setGeometry(QRect(140, 470, 250, 70));
        RessourcesHumaine->setStyleSheet(QLatin1String("background-image: url(:/ressource/mariage.jpg);\n"
"color: rgb(255, 255, 255);\n"
"font: 16pt \"Sachiko\";\n"
"border-color: rgb(255, 255, 255);"));
        pages->addWidget(sousmenu_administrateur);
        traiteurs = new QWidget();
        traiteurs->setObjectName(QStringLiteral("traiteurs"));
        label_37 = new QLabel(traiteurs);
        label_37->setObjectName(QStringLiteral("label_37"));
        label_37->setGeometry(QRect(0, 0, 931, 621));
        label_37->setPixmap(QPixmap(QString::fromUtf8(":/ressource/mariage.jpg")));
        label_37->setScaledContents(true);
        groupBox_3 = new QGroupBox(traiteurs);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(10, 10, 911, 581));
        groupBox_3->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        nomtrait = new QLineEdit(groupBox_3);
        nomtrait->setObjectName(QStringLiteral("nomtrait"));
        nomtrait->setGeometry(QRect(710, 110, 113, 22));
        nomtrait->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        idtrait = new QLineEdit(groupBox_3);
        idtrait->setObjectName(QStringLiteral("idtrait"));
        idtrait->setGeometry(QRect(710, 160, 113, 22));
        idtrait->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        mailtrait = new QLineEdit(groupBox_3);
        mailtrait->setObjectName(QStringLiteral("mailtrait"));
        mailtrait->setGeometry(QRect(710, 210, 113, 22));
        mailtrait->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        comission = new QLineEdit(groupBox_3);
        comission->setObjectName(QStringLiteral("comission"));
        comission->setGeometry(QRect(710, 260, 113, 22));
        comission->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        label_39 = new QLabel(groupBox_3);
        label_39->setObjectName(QStringLiteral("label_39"));
        label_39->setGeometry(QRect(590, 110, 55, 21));
        label_40 = new QLabel(groupBox_3);
        label_40->setObjectName(QStringLiteral("label_40"));
        label_40->setGeometry(QRect(590, 160, 55, 16));
        label_41 = new QLabel(groupBox_3);
        label_41->setObjectName(QStringLiteral("label_41"));
        label_41->setGeometry(QRect(590, 210, 55, 21));
        label_43 = new QLabel(groupBox_3);
        label_43->setObjectName(QStringLiteral("label_43"));
        label_43->setGeometry(QRect(580, 261, 71, 20));
        toolButton_5 = new QToolButton(groupBox_3);
        toolButton_5->setObjectName(QStringLiteral("toolButton_5"));
        toolButton_5->setGeometry(QRect(840, 10, 71, 71));
        toolButton_5->setIcon(icon4);
        toolButton_5->setIconSize(QSize(250, 250));
        toolButton_6 = new QToolButton(groupBox_3);
        toolButton_6->setObjectName(QStringLiteral("toolButton_6"));
        toolButton_6->setGeometry(QRect(860, 110, 41, 41));
        toolButton_6->setIcon(icon1);
        toolButton_6->setIconSize(QSize(250, 250));
        toolButton_7 = new QToolButton(groupBox_3);
        toolButton_7->setObjectName(QStringLiteral("toolButton_7"));
        toolButton_7->setGeometry(QRect(860, 160, 41, 41));
        toolButton_7->setIcon(icon2);
        toolButton_7->setIconSize(QSize(250, 250));
        toolButton_8 = new QToolButton(groupBox_3);
        toolButton_8->setObjectName(QStringLiteral("toolButton_8"));
        toolButton_8->setGeometry(QRect(860, 210, 41, 41));
        toolButton_8->setIcon(icon3);
        toolButton_8->setIconSize(QSize(250, 250));
        TableTrait = new QTableView(groupBox_3);
        TableTrait->setObjectName(QStringLiteral("TableTrait"));
        TableTrait->setGeometry(QRect(10, 140, 521, 381));
        TableTrait->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        label_44 = new QLabel(groupBox_3);
        label_44->setObjectName(QStringLiteral("label_44"));
        label_44->setGeometry(QRect(30, 50, 161, 51));
        label_44->setStyleSheet(QLatin1String("font: 24pt \"Sachiko\";\n"
"color: rgb(255, 255, 255);"));
        search = new QLineEdit(groupBox_3);
        search->setObjectName(QStringLiteral("search"));
        search->setGeometry(QRect(210, 60, 221, 31));
        search->setStyleSheet(QLatin1String("font: 10pt \"MS Shell Dlg 2\";\n"
"color: rgb(0, 0, 0);"));
        toolButton_11 = new QToolButton(groupBox_3);
        toolButton_11->setObjectName(QStringLiteral("toolButton_11"));
        toolButton_11->setGeometry(QRect(440, 60, 41, 41));
        toolButton_11->setIcon(icon5);
        toolButton_11->setIconSize(QSize(250, 250));
        toolButton_12 = new QToolButton(groupBox_3);
        toolButton_12->setObjectName(QStringLiteral("toolButton_12"));
        toolButton_12->setGeometry(QRect(500, 60, 41, 41));
        toolButton_12->setIcon(icon6);
        toolButton_12->setIconSize(QSize(250, 250));
        pushButton_5 = new QPushButton(groupBox_3);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(680, 10, 151, 61));
        pushButton_5->setStyleSheet(QLatin1String("background-image: url(:/ressource/mariage.jpg);\n"
"color: rgb(255, 255, 255);\n"
"font: 18pt \"Sachiko\";"));
        pages->addWidget(traiteurs);
        articles = new QWidget();
        articles->setObjectName(QStringLiteral("articles"));
        label_48 = new QLabel(articles);
        label_48->setObjectName(QStringLiteral("label_48"));
        label_48->setGeometry(QRect(0, 0, 931, 611));
        label_48->setPixmap(QPixmap(QString::fromUtf8(":/ressource/mariage.jpg")));
        label_48->setScaledContents(true);
        groupBox_4 = new QGroupBox(articles);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(10, 0, 911, 591));
        groupBox_4->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        toolButton_16 = new QToolButton(groupBox_4);
        toolButton_16->setObjectName(QStringLiteral("toolButton_16"));
        toolButton_16->setGeometry(QRect(830, 10, 81, 81));
        toolButton_16->setIcon(icon4);
        toolButton_16->setIconSize(QSize(250, 250));
        tableart = new QTableView(groupBox_4);
        tableart->setObjectName(QStringLiteral("tableart"));
        tableart->setGeometry(QRect(10, 40, 641, 481));
        tableart->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        nomart = new QLineEdit(groupBox_4);
        nomart->setObjectName(QStringLiteral("nomart"));
        nomart->setGeometry(QRect(750, 140, 113, 22));
        nomart->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        idart = new QLineEdit(groupBox_4);
        idart->setObjectName(QStringLiteral("idart"));
        idart->setGeometry(QRect(750, 190, 113, 22));
        idart->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        qte = new QLineEdit(groupBox_4);
        qte->setObjectName(QStringLiteral("qte"));
        qte->setGeometry(QRect(750, 240, 113, 22));
        qte->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        pu = new QLineEdit(groupBox_4);
        pu->setObjectName(QStringLiteral("pu"));
        pu->setGeometry(QRect(750, 290, 113, 22));
        pu->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        type = new QComboBox(groupBox_4);
        type->setObjectName(QStringLiteral("type"));
        type->setGeometry(QRect(750, 340, 73, 22));
        type->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        label_62 = new QLabel(groupBox_4);
        label_62->setObjectName(QStringLiteral("label_62"));
        label_62->setGeometry(QRect(660, 140, 81, 21));
        label_63 = new QLabel(groupBox_4);
        label_63->setObjectName(QStringLiteral("label_63"));
        label_63->setGeometry(QRect(660, 190, 71, 16));
        label_64 = new QLabel(groupBox_4);
        label_64->setObjectName(QStringLiteral("label_64"));
        label_64->setGeometry(QRect(660, 240, 55, 16));
        label_65 = new QLabel(groupBox_4);
        label_65->setObjectName(QStringLiteral("label_65"));
        label_65->setGeometry(QRect(660, 290, 81, 21));
        label_66 = new QLabel(groupBox_4);
        label_66->setObjectName(QStringLiteral("label_66"));
        label_66->setGeometry(QRect(680, 340, 55, 16));
        ajoutart = new QToolButton(groupBox_4);
        ajoutart->setObjectName(QStringLiteral("ajoutart"));
        ajoutart->setGeometry(QRect(700, 400, 41, 41));
        ajoutart->setIcon(icon1);
        ajoutart->setIconSize(QSize(250, 250));
        suppart = new QToolButton(groupBox_4);
        suppart->setObjectName(QStringLiteral("suppart"));
        suppart->setGeometry(QRect(760, 400, 41, 41));
        suppart->setIcon(icon2);
        suppart->setIconSize(QSize(250, 250));
        modifart = new QToolButton(groupBox_4);
        modifart->setObjectName(QStringLiteral("modifart"));
        modifart->setGeometry(QRect(820, 400, 41, 41));
        modifart->setIcon(icon3);
        modifart->setIconSize(QSize(250, 250));
        pages->addWidget(articles);
        commandes = new QWidget();
        commandes->setObjectName(QStringLiteral("commandes"));
        label_52 = new QLabel(commandes);
        label_52->setObjectName(QStringLiteral("label_52"));
        label_52->setGeometry(QRect(0, 0, 931, 601));
        label_52->setPixmap(QPixmap(QString::fromUtf8(":/ressource/mariage.jpg")));
        label_52->setScaledContents(true);
        groupBox_5 = new QGroupBox(commandes);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(10, 0, 911, 591));
        groupBox_5->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        toolButton_17 = new QToolButton(groupBox_5);
        toolButton_17->setObjectName(QStringLiteral("toolButton_17"));
        toolButton_17->setGeometry(QRect(850, 10, 61, 61));
        toolButton_17->setIcon(icon4);
        toolButton_17->setIconSize(QSize(250, 250));
        tablecmd = new QTableView(groupBox_5);
        tablecmd->setObjectName(QStringLiteral("tablecmd"));
        tablecmd->setGeometry(QRect(10, 30, 531, 511));
        tablecmd->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        idcmd = new QLineEdit(groupBox_5);
        idcmd->setObjectName(QStringLiteral("idcmd"));
        idcmd->setGeometry(QRect(700, 130, 113, 22));
        idcmd->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
""));
        trait = new QComboBox(groupBox_5);
        trait->setObjectName(QStringLiteral("trait"));
        trait->setGeometry(QRect(700, 290, 73, 22));
        trait->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        art = new QComboBox(groupBox_5);
        art->setObjectName(QStringLiteral("art"));
        art->setGeometry(QRect(700, 320, 73, 22));
        art->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
""));
        qte1 = new QLineEdit(groupBox_5);
        qte1->setObjectName(QStringLiteral("qte1"));
        qte1->setGeometry(QRect(700, 360, 113, 22));
        qte1->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        label_67 = new QLabel(groupBox_5);
        label_67->setObjectName(QStringLiteral("label_67"));
        label_67->setGeometry(QRect(570, 130, 71, 16));
        label_68 = new QLabel(groupBox_5);
        label_68->setObjectName(QStringLiteral("label_68"));
        label_68->setGeometry(QRect(550, 190, 141, 20));
        desccmd = new QTextEdit(groupBox_5);
        desccmd->setObjectName(QStringLiteral("desccmd"));
        desccmd->setGeometry(QRect(700, 180, 201, 101));
        desccmd->setStyleSheet(QStringLiteral("color: rgb(0, 0, 0);"));
        label_69 = new QLabel(groupBox_5);
        label_69->setObjectName(QStringLiteral("label_69"));
        label_69->setGeometry(QRect(580, 290, 71, 16));
        label_70 = new QLabel(groupBox_5);
        label_70->setObjectName(QStringLiteral("label_70"));
        label_70->setGeometry(QRect(580, 320, 81, 16));
        label_71 = new QLabel(groupBox_5);
        label_71->setObjectName(QStringLiteral("label_71"));
        label_71->setGeometry(QRect(580, 360, 71, 16));
        ajoutcmd = new QToolButton(groupBox_5);
        ajoutcmd->setObjectName(QStringLiteral("ajoutcmd"));
        ajoutcmd->setGeometry(QRect(626, 431, 51, 51));
        ajoutcmd->setIcon(icon1);
        ajoutcmd->setIconSize(QSize(250, 250));
        suppcmd = new QToolButton(groupBox_5);
        suppcmd->setObjectName(QStringLiteral("suppcmd"));
        suppcmd->setGeometry(QRect(696, 431, 51, 51));
        suppcmd->setIcon(icon2);
        suppcmd->setIconSize(QSize(250, 250));
        modifcmd = new QToolButton(groupBox_5);
        modifcmd->setObjectName(QStringLiteral("modifcmd"));
        modifcmd->setGeometry(QRect(770, 430, 51, 51));
        modifcmd->setIcon(icon3);
        modifcmd->setIconSize(QSize(250, 250));
        pages->addWidget(commandes);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 931, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        pages->setCurrentIndex(0);
        btn_login->setDefault(false);
        tabWidget->setCurrentIndex(0);
        tabWidget_2->setCurrentIndex(0);
        tabWidget_3->setCurrentIndex(0);
        tabWidget_4->setCurrentIndex(0);
        pagesTable->setCurrentIndex(0);
        tab_Mariage->setCurrentIndex(0);
        ajouterinvite->setDefault(false);
        ajouterMariage->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "TheBigDay", Q_NULLPTR));
#ifndef QT_NO_ACCESSIBILITY
        MainWindow->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
        label_LoginPass->setText(QString());
        label_LoginTitre->setText(QApplication::translate("MainWindow", "BIENVENUE", Q_NULLPTR));
        btn_login->setText(QApplication::translate("MainWindow", "Se CONNECTER", Q_NULLPTR));
        label_loginNom->setText(QApplication::translate("MainWindow", "NOM D'UTILISATEUR", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "MOT DE PASSE", Q_NULLPTR));
        label_login_role->setText(QApplication::translate("MainWindow", "Role", Q_NULLPTR));
        login_role->clear();
        login_role->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "EMPLOYE", Q_NULLPTR)
         << QApplication::translate("MainWindow", "ADMIN", Q_NULLPTR)
        );
        label_12->setText(QString());
        groupBox->setTitle(QApplication::translate("MainWindow", "Patisseries", Q_NULLPTR));
        label_32->setText(QApplication::translate("MainWindow", "Nom :", Q_NULLPTR));
        label_33->setText(QApplication::translate("MainWindow", "Id :", Q_NULLPTR));
        label_34->setText(QApplication::translate("MainWindow", "Qualit\303\251 :", Q_NULLPTR));
        label_35->setText(QApplication::translate("MainWindow", "Adresse :", Q_NULLPTR));
        label_36->setText(QApplication::translate("MainWindow", "Email :", Q_NULLPTR));
        toolButton->setText(QApplication::translate("MainWindow", "...", Q_NULLPTR));
        toolButton_2->setText(QString());
        toolButton_3->setText(QApplication::translate("MainWindow", "...", Q_NULLPTR));
        toolButton_4->setText(QApplication::translate("MainWindow", "...", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "Traiteurs", Q_NULLPTR));
        toolButton_9->setText(QApplication::translate("MainWindow", "...", Q_NULLPTR));
        toolButton_10->setText(QApplication::translate("MainWindow", "...", Q_NULLPTR));
        toolButton_13->setText(QApplication::translate("MainWindow", "...", Q_NULLPTR));
        toolButton_14->setText(QApplication::translate("MainWindow", "...", Q_NULLPTR));
        toolButton_15->setText(QString());
        label_47->setText(QApplication::translate("MainWindow", "Articles", Q_NULLPTR));
        groupBox_6->setTitle(QApplication::translate("MainWindow", "Ressources Humaines", Q_NULLPTR));
        SupprimerPerso->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        ModifierPerso->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        label_cinP_M_S->setText(QApplication::translate("MainWindow", "CIN :", Q_NULLPTR));
        pushButton_PDF_Perso->setText(QString());
        pushButton_RetourRHMenu->setText(QApplication::translate("MainWindow", "Retour", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_3), QApplication::translate("MainWindow", "La liste des personnels", Q_NULLPTR));
        label_72->setText(QApplication::translate("MainWindow", "CIN :", Q_NULLPTR));
        label_73->setText(QApplication::translate("MainWindow", "Nom :", Q_NULLPTR));
        label_74->setText(QApplication::translate("MainWindow", "Prenom :", Q_NULLPTR));
        label_75->setText(QApplication::translate("MainWindow", "Date_de_naissance :", Q_NULLPTR));
        label_76->setText(QApplication::translate("MainWindow", "Tel :", Q_NULLPTR));
        label_77->setText(QApplication::translate("MainWindow", "Mail :", Q_NULLPTR));
        label_78->setText(QApplication::translate("MainWindow", "Nb_Mar_Org :", Q_NULLPTR));
        AjouterPerso->setText(QApplication::translate("MainWindow", "Confirmer", Q_NULLPTR));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QApplication::translate("MainWindow", "Ajouter un personnel", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Personnels", Q_NULLPTR));
        ExportExcelTache->setText(QApplication::translate("MainWindow", "Export Excel", Q_NULLPTR));
        EmailTache->setText(QApplication::translate("MainWindow", "E-mail", Q_NULLPTR));
        ModifierTache->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        SupprimerTache->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        label_79->setText(QApplication::translate("MainWindow", "NomT :", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_5), QApplication::translate("MainWindow", "La liste des t\303\242ches", Q_NULLPTR));
        label_80->setText(QApplication::translate("MainWindow", "NomT :", Q_NULLPTR));
        label_81->setText(QApplication::translate("MainWindow", "EtataT :", Q_NULLPTR));
        label_82->setText(QApplication::translate("MainWindow", "DateLimiteT:", Q_NULLPTR));
        label_83->setText(QApplication::translate("MainWindow", "IDP :", Q_NULLPTR));
        AjouterTache->setText(QApplication::translate("MainWindow", "Confirmer", Q_NULLPTR));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_6), QApplication::translate("MainWindow", "Ajouter une t\303\242che", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(widget), QApplication::translate("MainWindow", "T\303\242ches", Q_NULLPTR));
        SupprimerGrade->setText(QApplication::translate("MainWindow", "Supprimer", Q_NULLPTR));
        ModifierGrade->setText(QApplication::translate("MainWindow", "Modifier", Q_NULLPTR));
        label_84->setText(QApplication::translate("MainWindow", "NomGrade:", Q_NULLPTR));
        ImprimerListeGrade->setText(QApplication::translate("MainWindow", "Imprimer ", Q_NULLPTR));
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_7), QApplication::translate("MainWindow", "La liste des grades", Q_NULLPTR));
        label_85->setText(QApplication::translate("MainWindow", "NomGrade :", Q_NULLPTR));
        label_86->setText(QApplication::translate("MainWindow", "SalaireGrade :", Q_NULLPTR));
        label_87->setText(QApplication::translate("MainWindow", "DateEmbauche :", Q_NULLPTR));
        label_88->setText(QApplication::translate("MainWindow", "IDPG :", Q_NULLPTR));
        AjouterGrade->setText(QApplication::translate("MainWindow", "Confirmer", Q_NULLPTR));
        tabWidget_4->setTabText(tabWidget_4->indexOf(tab_8), QApplication::translate("MainWindow", "Ajouter un grade", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Grades", Q_NULLPTR));
        label_89->setText(QApplication::translate("MainWindow", "Etat Led rouge et buzzer :", Q_NULLPTR));
        ON_Cgaz->setText(QApplication::translate("MainWindow", "ON", Q_NULLPTR));
        OFF_Cgaz->setText(QApplication::translate("MainWindow", "OFF", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_9), QApplication::translate("MainWindow", "Capteur de Gaz", Q_NULLPTR));
        img->setText(QString());
        groupBox_112->setTitle(QApplication::translate("MainWindow", "listes des  invit\303\251s", Q_NULLPTR));
        Pdf_invitation->setText(QApplication::translate("MainWindow", "Exporter Pdf", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "Imprimer", Q_NULLPTR));
        btn_trieDec->setText(QString());
        btn_trieAsc->setText(QString());
        trie_invite->clear();
        trie_invite->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "select", Q_NULLPTR)
         << QApplication::translate("MainWindow", "IDINVI", Q_NULLPTR)
         << QApplication::translate("MainWindow", "NOM", Q_NULLPTR)
         << QApplication::translate("MainWindow", "PRENOM", Q_NULLPTR)
        );
        label_27->setText(QApplication::translate("MainWindow", "trie par :", Q_NULLPTR));
        recherche_invite->setPlaceholderText(QApplication::translate("MainWindow", "recherche", Q_NULLPTR));
        btn_rech_invite->setText(QString());
        ajouterinvite->setText(QApplication::translate("MainWindow", "ajouter", Q_NULLPTR));
        label_56->setText(QApplication::translate("MainWindow", "nom", Q_NULLPTR));
        label_54->setText(QApplication::translate("MainWindow", "prenom", Q_NULLPTR));
        label_49->setText(QApplication::translate("MainWindow", "ID_Invitation", Q_NULLPTR));
        modifierinvite->setText(QApplication::translate("MainWindow", "modifier", Q_NULLPTR));
        supprimerinvite->setText(QApplication::translate("MainWindow", "supprimer", Q_NULLPTR));
        tab_Mariage->setTabText(tab_Mariage->indexOf(tab_15), QApplication::translate("MainWindow", "invites", Q_NULLPTR));
        btn_triefdescMariage->setText(QString());
        groupBox_113->setTitle(QApplication::translate("MainWindow", "listes des  Mariages", Q_NULLPTR));
        label_28->setText(QApplication::translate("MainWindow", "trie par :", Q_NULLPTR));
        recherche_Mariage->setPlaceholderText(QApplication::translate("MainWindow", "recherche", Q_NULLPTR));
        ajouterMariage->setText(QApplication::translate("MainWindow", "ajouter", Q_NULLPTR));
        btn_triefascMariage->setText(QString());
        trie_mariage->clear();
        trie_mariage->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "select", Q_NULLPTR)
         << QApplication::translate("MainWindow", "CODEMARIAGE", Q_NULLPTR)
         << QApplication::translate("MainWindow", "IDEMPLACEMENT", Q_NULLPTR)
         << QApplication::translate("MainWindow", "NBINVITES", Q_NULLPTR)
         << QApplication::translate("MainWindow", "BUDGET", Q_NULLPTR)
        );
        label_50->setText(QApplication::translate("MainWindow", "ID_Emplacement", Q_NULLPTR));
        btn_rechfMariage->setText(QString());
        label_59->setText(QApplication::translate("MainWindow", "Code_Mariage", Q_NULLPTR));
        modifierMariage->setText(QApplication::translate("MainWindow", "modifier", Q_NULLPTR));
        label_60->setText(QApplication::translate("MainWindow", "Budget", Q_NULLPTR));
        supprimerMariage->setText(QApplication::translate("MainWindow", "supprimer", Q_NULLPTR));
        label_61->setText(QApplication::translate("MainWindow", "Nb_invites", Q_NULLPTR));
        ExcelMariage->setText(QApplication::translate("MainWindow", "ExportToExcel", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "Statistiques", Q_NULLPTR));
        tab_Mariage->setTabText(tab_Mariage->indexOf(tab_16), QApplication::translate("MainWindow", "mariages", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "Retour", Q_NULLPTR));
        img_2->setText(QString());
        groupBox_2->setTitle(QString());
        organisation_2->setText(QApplication::translate("MainWindow", "Organisation", Q_NULLPTR));
        ceremonie_2->setText(QApplication::translate("MainWindow", "Ceremonie", Q_NULLPTR));
        alimentation_2->setText(QApplication::translate("MainWindow", "Alimentation", Q_NULLPTR));
        img_4->setText(QString());
        gerer_salle->setText(QApplication::translate("MainWindow", "G\303\251rer les salles", Q_NULLPTR));
        gerer_decorateur->setText(QApplication::translate("MainWindow", "G\303\251rer les d\303\251corateurs", Q_NULLPTR));
        quittersalledeco->setText(QApplication::translate("MainWindow", "Quitter", Q_NULLPTR));
        img_5->setText(QString());
        liste_des_salle->setText(QApplication::translate("MainWindow", "La liste des salles", Q_NULLPTR));
        ajouter_salle->setText(QApplication::translate("MainWindow", "Ajouter une salle", Q_NULLPTR));
        quittersalle->setText(QApplication::translate("MainWindow", "Quitter", Q_NULLPTR));
        retoursalle->setText(QApplication::translate("MainWindow", "Retour", Q_NULLPTR));
        img_6->setText(QString());
        liste_de_decorateur->setText(QApplication::translate("MainWindow", " La liste des d\303\251corateurs", Q_NULLPTR));
        ajouter_decorateur->setText(QApplication::translate("MainWindow", "Ajouter un d\303\251corateur", Q_NULLPTR));
        quitterdeco->setText(QApplication::translate("MainWindow", "Quitter", Q_NULLPTR));
        retourdeco->setText(QApplication::translate("MainWindow", "Retour", Q_NULLPTR));
        img_7->setText(QString());
        label_9->setText(QApplication::translate("MainWindow", "Ajouter un d\303\251corateur", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "ID de d\303\251corateur", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "Nom de d\303\251corateur", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "Style de d\303\251corateur", Q_NULLPTR));
        label_53->setText(QApplication::translate("MainWindow", "num_telephone de d\303\251corateur", Q_NULLPTR));
        label_55->setText(QApplication::translate("MainWindow", "email de d\303\251corateur", Q_NULLPTR));
        label_57->setText(QApplication::translate("MainWindow", "Lieu de d\303\251corateur", Q_NULLPTR));
        ajouter_decorateur_2->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        return11->setText(QApplication::translate("MainWindow", "Retour", Q_NULLPTR));
        img_8->setText(QString());
        label_14->setText(QApplication::translate("MainWindow", "Ajouter une salle", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "ID de la salle", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "lieu de la salle", Q_NULLPTR));
        label_17->setText(QApplication::translate("MainWindow", "prix de la salle", Q_NULLPTR));
        label_18->setText(QApplication::translate("MainWindow", "capacit\303\251 de la salle", Q_NULLPTR));
        ajoutersalle->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        retouur->setText(QApplication::translate("MainWindow", "Retour", Q_NULLPTR));
        img_9->setText(QString());
        label_21->setText(QApplication::translate("MainWindow", "Les d\303\251corateurs", Q_NULLPTR));
        a_retour->setText(QString());
        recherche_deco->setText(QString());
        lieu_recherche_2->setText(QString());
        style_recherche->setText(QString());
        idd_recherche->setText(QString());
        label_45->setText(QApplication::translate("MainWindow", "ID", Q_NULLPTR));
        suppression_a->setText(QString());
        supprimer_deco->setText(QString());
        update_s->setText(QString());
        retouir->setText(QApplication::translate("MainWindow", "Retour", Q_NULLPTR));
        home->setText(QApplication::translate("MainWindow", "Home", Q_NULLPTR));
        exporteer_pdff->setText(QApplication::translate("MainWindow", "Exporter PDF", Q_NULLPTR));
        img_10->setText(QString());
        label_29->setText(QApplication::translate("MainWindow", "Les salles", Q_NULLPTR));
        label_58->setText(QApplication::translate("MainWindow", "Trier ", Q_NULLPTR));
        trie_capacite_2->setText(QString());
        trie_id->setText(QString());
        trie_prix->setText(QString());
        trie_lieu->setText(QString());
        label_46->setText(QApplication::translate("MainWindow", "ID", Q_NULLPTR));
        suppression_salle->setText(QString());
        reserver_salle->setText(QString());
        salle_email->setText(QString());
        retouur5->setText(QApplication::translate("MainWindow", "Retour", Q_NULLPTR));
        homme->setText(QApplication::translate("MainWindow", "Home", Q_NULLPTR));
        export_excel_salle->setText(QApplication::translate("MainWindow", "Export To Excel", Q_NULLPTR));
        img_11->setText(QString());
        label_30->setText(QApplication::translate("MainWindow", "La nouvelle salle", Q_NULLPTR));
        label_51->setText(QApplication::translate("MainWindow", "ID", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "Le nouveau lieu", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "La  nouvelle capacit\303\251", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "Le nouveau prix", Q_NULLPTR));
        okk->setText(QApplication::translate("MainWindow", "OK", Q_NULLPTR));
        back->setText(QApplication::translate("MainWindow", "Retour", Q_NULLPTR));
        img_12->setText(QString());
        rcpt->setPlaceholderText(QApplication::translate("MainWindow", "recipient", Q_NULLPTR));
        subject->setPlaceholderText(QApplication::translate("MainWindow", "subject", Q_NULLPTR));
        file->setPlaceholderText(QApplication::translate("MainWindow", "attachement here", Q_NULLPTR));
        msg->setPlaceholderText(QApplication::translate("MainWindow", "type your message here ...", Q_NULLPTR));
        sendBtn->setText(QApplication::translate("MainWindow", "Send", Q_NULLPTR));
        mail_pass->setPlaceholderText(QApplication::translate("MainWindow", "your mail password", Q_NULLPTR));
        browseBtn->setText(QApplication::translate("MainWindow", "Browse ...", Q_NULLPTR));
        backk->setText(QString());
        img_13->setText(QString());
        label_38->setText(QApplication::translate("MainWindow", "R\303\251servation", Q_NULLPTR));
        imprimer_resrv->setText(QApplication::translate("MainWindow", "Imprimer", Q_NULLPTR));
        backkk->setText(QApplication::translate("MainWindow", "Retour", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "ID de la salle", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Lieu de la salle", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Capacit\303\251 de la salle", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Prix de la salle", Q_NULLPTR));
        label_19->setText(QApplication::translate("MainWindow", "Date de r\303\251servation", Q_NULLPTR));
        label_20->setText(QApplication::translate("MainWindow", "Date de  jour J", Q_NULLPTR));
        img_14->setText(QString());
        label_42->setText(QApplication::translate("MainWindow", "Le nouveau d\303\251corateur", Q_NULLPTR));
        label_22->setText(QApplication::translate("MainWindow", "ID de d\303\251corateur", Q_NULLPTR));
        label_23->setText(QApplication::translate("MainWindow", "Nom de nouveau d\303\251corateur", Q_NULLPTR));
        label_24->setText(QApplication::translate("MainWindow", "Style de nouveau d\303\251corateur", Q_NULLPTR));
        label_25->setText(QApplication::translate("MainWindow", "Num_t\303\251lephone de nouveau d\303\251corateur", Q_NULLPTR));
        label_26->setText(QApplication::translate("MainWindow", "Email de nouveau d\303\251corateur", Q_NULLPTR));
        label_31->setText(QApplication::translate("MainWindow", "Lieu de nouveau d\303\251corateur", Q_NULLPTR));
        okkkkk->setText(QApplication::translate("MainWindow", "OK", Q_NULLPTR));
        bacck->setText(QApplication::translate("MainWindow", "Retour", Q_NULLPTR));
        img_3->setText(QString());
        organisation_3->setText(QApplication::translate("MainWindow", "Organisation", Q_NULLPTR));
        ceremonie_3->setText(QApplication::translate("MainWindow", "Ceremonie", Q_NULLPTR));
        marketing_2->setText(QApplication::translate("MainWindow", "Marketing", Q_NULLPTR));
        alimentation_3->setText(QApplication::translate("MainWindow", "Alimentation", Q_NULLPTR));
        RessourcesHumaine->setText(QApplication::translate("MainWindow", "Ressources Humaines", Q_NULLPTR));
        label_37->setText(QString());
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Traiteurs", Q_NULLPTR));
        label_39->setText(QApplication::translate("MainWindow", "Nom :", Q_NULLPTR));
        label_40->setText(QApplication::translate("MainWindow", "Id :", Q_NULLPTR));
        label_41->setText(QApplication::translate("MainWindow", "Email :", Q_NULLPTR));
        label_43->setText(QApplication::translate("MainWindow", "comission :", Q_NULLPTR));
        toolButton_5->setText(QApplication::translate("MainWindow", "...", Q_NULLPTR));
        toolButton_6->setText(QApplication::translate("MainWindow", "...", Q_NULLPTR));
        toolButton_7->setText(QApplication::translate("MainWindow", "...", Q_NULLPTR));
        toolButton_8->setText(QApplication::translate("MainWindow", "...", Q_NULLPTR));
        label_44->setText(QApplication::translate("MainWindow", "Search Bar", Q_NULLPTR));
        toolButton_11->setText(QApplication::translate("MainWindow", "...", Q_NULLPTR));
        toolButton_12->setText(QApplication::translate("MainWindow", "...", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainWindow", "Commandes", Q_NULLPTR));
        label_48->setText(QString());
        groupBox_4->setTitle(QApplication::translate("MainWindow", "Articles", Q_NULLPTR));
        toolButton_16->setText(QString());
        type->clear();
        type->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "sucr\303\251", Q_NULLPTR)
         << QApplication::translate("MainWindow", "sal\303\251", Q_NULLPTR)
        );
        label_62->setText(QApplication::translate("MainWindow", "Nom article:", Q_NULLPTR));
        label_63->setText(QApplication::translate("MainWindow", "Id article :", Q_NULLPTR));
        label_64->setText(QApplication::translate("MainWindow", "Quantit\303\251 :", Q_NULLPTR));
        label_65->setText(QApplication::translate("MainWindow", "Prix unitaire :", Q_NULLPTR));
        label_66->setText(QApplication::translate("MainWindow", "Type :", Q_NULLPTR));
        ajoutart->setText(QApplication::translate("MainWindow", "...", Q_NULLPTR));
        suppart->setText(QApplication::translate("MainWindow", "...", Q_NULLPTR));
        modifart->setText(QApplication::translate("MainWindow", "...", Q_NULLPTR));
        label_52->setText(QString());
        groupBox_5->setTitle(QApplication::translate("MainWindow", "Commandes", Q_NULLPTR));
        toolButton_17->setText(QApplication::translate("MainWindow", "...", Q_NULLPTR));
        label_67->setText(QApplication::translate("MainWindow", "Id Cmd   :", Q_NULLPTR));
        label_68->setText(QApplication::translate("MainWindow", "Description commande :", Q_NULLPTR));
        label_69->setText(QApplication::translate("MainWindow", "Id traiteur :", Q_NULLPTR));
        label_70->setText(QApplication::translate("MainWindow", "Id Article :", Q_NULLPTR));
        label_71->setText(QApplication::translate("MainWindow", "Quantit\303\251 :", Q_NULLPTR));
        ajoutcmd->setText(QApplication::translate("MainWindow", "...", Q_NULLPTR));
        suppcmd->setText(QApplication::translate("MainWindow", "...", Q_NULLPTR));
        modifcmd->setText(QApplication::translate("MainWindow", "...", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
