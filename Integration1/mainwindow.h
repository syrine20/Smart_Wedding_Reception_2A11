#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "invites.h"
#include "ceremonies.h"
#include "arduino.h"
#include <qbytearray.h>

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

private:
    Ui::MainWindow *ui;
    invites tmpinvite;
    ceremonies tmpcerem;
    QByteArray data;
    arduino a;
};
#endif // MAINWINDOW_H
