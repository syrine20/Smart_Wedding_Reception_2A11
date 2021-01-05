/********************************************************************************
** Form generated from reading UI file 'mailt.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAILT_H
#define UI_MAILT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_MailT
{
public:
    QGroupBox *groupBox;
    QLineEdit *rcpt;
    QLineEdit *mail_pass;
    QLineEdit *subject;
    QLineEdit *file;
    QTextEdit *msg;
    QPushButton *sendBtn;
    QPushButton *browseBtn;

    void setupUi(QDialog *MailT)
    {
        if (MailT->objectName().isEmpty())
            MailT->setObjectName(QStringLiteral("MailT"));
        MailT->resize(628, 492);
        groupBox = new QGroupBox(MailT);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 621, 481));
        groupBox->setStyleSheet(QStringLiteral("background-image: url(:/ressource/mariage.jpg);"));
        rcpt = new QLineEdit(groupBox);
        rcpt->setObjectName(QStringLiteral("rcpt"));
        rcpt->setGeometry(QRect(20, 30, 441, 21));
        rcpt->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        mail_pass = new QLineEdit(groupBox);
        mail_pass->setObjectName(QStringLiteral("mail_pass"));
        mail_pass->setGeometry(QRect(470, 30, 141, 20));
        mail_pass->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        mail_pass->setEchoMode(QLineEdit::Password);
        subject = new QLineEdit(groupBox);
        subject->setObjectName(QStringLiteral("subject"));
        subject->setGeometry(QRect(20, 70, 591, 21));
        subject->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
""));
        file = new QLineEdit(groupBox);
        file->setObjectName(QStringLiteral("file"));
        file->setGeometry(QRect(20, 110, 491, 23));
        file->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        msg = new QTextEdit(groupBox);
        msg->setObjectName(QStringLiteral("msg"));
        msg->setGeometry(QRect(20, 160, 591, 261));
        msg->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
""));
        sendBtn = new QPushButton(groupBox);
        sendBtn->setObjectName(QStringLiteral("sendBtn"));
        sendBtn->setGeometry(QRect(20, 440, 591, 23));
        sendBtn->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        browseBtn = new QPushButton(groupBox);
        browseBtn->setObjectName(QStringLiteral("browseBtn"));
        browseBtn->setGeometry(QRect(530, 110, 75, 24));
        browseBtn->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        retranslateUi(MailT);

        QMetaObject::connectSlotsByName(MailT);
    } // setupUi

    void retranslateUi(QDialog *MailT)
    {
        MailT->setWindowTitle(QApplication::translate("MailT", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MailT", "MailTache", Q_NULLPTR));
        rcpt->setPlaceholderText(QApplication::translate("MailT", "recipient", Q_NULLPTR));
        mail_pass->setPlaceholderText(QApplication::translate("MailT", "your mail password", Q_NULLPTR));
        subject->setPlaceholderText(QApplication::translate("MailT", "subject", Q_NULLPTR));
        file->setPlaceholderText(QApplication::translate("MailT", "attachement here", Q_NULLPTR));
        msg->setPlaceholderText(QApplication::translate("MailT", "type your message here ...", Q_NULLPTR));
        sendBtn->setText(QApplication::translate("MailT", "Send", Q_NULLPTR));
        browseBtn->setText(QApplication::translate("MailT", "Browse ...", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MailT: public Ui_MailT {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAILT_H
