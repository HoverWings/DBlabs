/********************************************************************************
** Form generated from reading UI file 'login_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_DIALOG_H
#define UI_LOGIN_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_login_dialog
{
public:
    QLineEdit *usrname_lineEdit;
    QLineEdit *password_lineEdit;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QPushButton *login_pushButton;

    void setupUi(QDialog *login_dialog)
    {
        if (login_dialog->objectName().isEmpty())
            login_dialog->setObjectName(QStringLiteral("login_dialog"));
        login_dialog->resize(776, 435);
        usrname_lineEdit = new QLineEdit(login_dialog);
        usrname_lineEdit->setObjectName(QStringLiteral("usrname_lineEdit"));
        usrname_lineEdit->setGeometry(QRect(320, 110, 211, 27));
        password_lineEdit = new QLineEdit(login_dialog);
        password_lineEdit->setObjectName(QStringLiteral("password_lineEdit"));
        password_lineEdit->setGeometry(QRect(320, 160, 211, 27));
        label = new QLabel(login_dialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(210, 110, 68, 19));
        label_2 = new QLabel(login_dialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(210, 160, 68, 19));
        label_3 = new QLabel(login_dialog);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(300, 40, 171, 19));
        pushButton = new QPushButton(login_dialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(420, 290, 88, 27));
        login_pushButton = new QPushButton(login_dialog);
        login_pushButton->setObjectName(QStringLiteral("login_pushButton"));
        login_pushButton->setGeometry(QRect(540, 290, 88, 27));

        retranslateUi(login_dialog);

        QMetaObject::connectSlotsByName(login_dialog);
    } // setupUi

    void retranslateUi(QDialog *login_dialog)
    {
        login_dialog->setWindowTitle(QApplication::translate("login_dialog", "Dialog", nullptr));
        label->setText(QApplication::translate("login_dialog", "userName", nullptr));
        label_2->setText(QApplication::translate("login_dialog", "password", nullptr));
        label_3->setText(QApplication::translate("login_dialog", "\346\234\272\347\245\250\351\242\204\350\256\242\347\263\273\347\273\237", nullptr));
        pushButton->setText(QApplication::translate("login_dialog", "\346\263\250\345\206\214", nullptr));
        login_pushButton->setText(QApplication::translate("login_dialog", "\347\231\273\345\275\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login_dialog: public Ui_login_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_DIALOG_H
