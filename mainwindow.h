#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "invites.h"

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

private:
    Ui::MainWindow *ui;
    invites tmpinvite;
};
#endif // MAINWINDOW_H
