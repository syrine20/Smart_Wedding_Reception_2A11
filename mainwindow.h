#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <qthread.h>
#include <QMainWindow>
#include <QtMultimedia/qmediaplayer.h>
#include <qdebug.h>
#include "patisserie.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    static void usleep(unsigned long usecs){QThread::usleep(usecs);}
        static void msleep(unsigned long msecs){QThread::msleep(msecs);}
        static void sleep(unsigned long secs){QThread::sleep(secs);}
        bool check(QString user, QString pass);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
    QMediaPlayer* player ;

};
#endif // MAINWINDOW_H
