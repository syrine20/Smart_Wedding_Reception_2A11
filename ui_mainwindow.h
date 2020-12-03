/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLabel *label_bienvenue;
    QPushButton *pushButton_connecter;
    QLabel *label;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_pseudo;
    QLineEdit *lineEdit_pseudo;
    QLabel *label_mdp;
    QLineEdit *lineEdit_mdp;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1584, 786);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 1581, 961));
        groupBox->setStyleSheet(QString::fromUtf8("background-image: url(:/images/mmm.jpg);"));
        label_bienvenue = new QLabel(groupBox);
        label_bienvenue->setObjectName(QString::fromUtf8("label_bienvenue"));
        label_bienvenue->setGeometry(QRect(660, 10, 481, 121));
        label_bienvenue->setStyleSheet(QString::fromUtf8("font: 30pt \"MS Shell Dlg 2\";\n"
""));
        pushButton_connecter = new QPushButton(groupBox);
        pushButton_connecter->setObjectName(QString::fromUtf8("pushButton_connecter"));
        pushButton_connecter->setGeometry(QRect(710, 610, 241, 41));
        pushButton_connecter->setStyleSheet(QString::fromUtf8("color: rgb(179, 0, 0);\n"
"font: 75 20pt \"MS Shell Dlg 2\";"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(420, 120, 55, 16));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(150, 250, 491, 221));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_pseudo = new QLabel(layoutWidget);
        label_pseudo->setObjectName(QString::fromUtf8("label_pseudo"));

        gridLayout->addWidget(label_pseudo, 0, 0, 1, 1);

        lineEdit_pseudo = new QLineEdit(layoutWidget);
        lineEdit_pseudo->setObjectName(QString::fromUtf8("lineEdit_pseudo"));

        gridLayout->addWidget(lineEdit_pseudo, 0, 1, 1, 1);

        label_mdp = new QLabel(layoutWidget);
        label_mdp->setObjectName(QString::fromUtf8("label_mdp"));

        gridLayout->addWidget(label_mdp, 1, 0, 1, 1);

        lineEdit_mdp = new QLineEdit(layoutWidget);
        lineEdit_mdp->setObjectName(QString::fromUtf8("lineEdit_mdp"));

        gridLayout->addWidget(lineEdit_mdp, 1, 1, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1584, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "GroupBox", nullptr));
        label_bienvenue->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:28pt; font-weight:600; color:#de0000;\">Bienvenue</span></p></body></html>", nullptr));
        pushButton_connecter->setText(QCoreApplication::translate("MainWindow", "Se connecter", nullptr));
        label->setText(QString());
        label_pseudo->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:20pt; font-weight:600; color:#97c9ff;\">Pseudo</span></p></body></html>", nullptr));
        label_mdp->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:20pt; font-weight:600; color:#97c9ff;\">Mot de passe</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
