#ifndef TRAITEURS_H
#define TRAITEURS_H

#include <QDialog>

namespace Ui {
class Traiteurs;
}

class Traiteurs : public QDialog
{
    Q_OBJECT

public:
    explicit Traiteurs(QWidget *parent = nullptr);
    ~Traiteurs();

private slots:
    void on_pushButton_4_clicked();

private:
    Ui::Traiteurs *ui;
};

#endif // TRAITEURS_H
