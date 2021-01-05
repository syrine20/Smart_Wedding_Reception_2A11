#ifndef MAILT_H
#define MAILT_H

#include <QDialog>


#include <QFileDialog>
namespace Ui {
class MailT;
}

class MailT : public QDialog
{
    Q_OBJECT

public:
    explicit MailT(QWidget *parent = nullptr);
    ~MailT();
private slots:
    void sendMail();
    void mailSent(QString);
    void browse();

    void on_sendBtn_clicked();

private:
    Ui::MailT *ui;

    QStringList files;
};

#endif // MAILT_H
