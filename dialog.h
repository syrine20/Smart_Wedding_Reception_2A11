#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QMessageBox>
#include "promotion.h"

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:


    void on_pushButton__valider_promotions_ajouter_clicked();



    void on_pushButton_supprimer_promotions_consulter_clicked();

private:
    Ui::Dialog *ui;
    promotion tempP;
};

#endif // DIALOG_H
