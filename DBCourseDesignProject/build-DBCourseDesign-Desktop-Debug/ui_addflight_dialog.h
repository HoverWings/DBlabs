/********************************************************************************
** Form generated from reading UI file 'addflight_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDFLIGHT_DIALOG_H
#define UI_ADDFLIGHT_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_addFlight_Dialog
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *FFROM_lineEdit;
    QComboBox *FSTATE_comboBox;
    QLineEdit *FTO_lineEdit;
    QLabel *label_8;
    QLabel *label_3;
    QLabel *label_7;
    QLabel *label_10;
    QComboBox *FMODEL_comboBox;
    QDateEdit *dateEdit;
    QLineEdit *Flight_lineEdit;
    QLabel *label_9;
    QLabel *label;
    QTimeEdit *timeEdit;
    QLabel *label_6;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *FID_lineEdit;
    QDateEdit *dateEdit_2;
    QTimeEdit *timeEdit_2;
    QPushButton *post_Button;

    void setupUi(QDialog *addFlight_Dialog)
    {
        if (addFlight_Dialog->objectName().isEmpty())
            addFlight_Dialog->setObjectName(QStringLiteral("addFlight_Dialog"));
        addFlight_Dialog->resize(533, 504);
        gridLayoutWidget = new QWidget(addFlight_Dialog);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(110, 60, 301, 363));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        FFROM_lineEdit = new QLineEdit(gridLayoutWidget);
        FFROM_lineEdit->setObjectName(QStringLiteral("FFROM_lineEdit"));

        gridLayout->addWidget(FFROM_lineEdit, 4, 1, 1, 1);

        FSTATE_comboBox = new QComboBox(gridLayoutWidget);
        FSTATE_comboBox->setObjectName(QStringLiteral("FSTATE_comboBox"));
        FSTATE_comboBox->setEditable(true);

        gridLayout->addWidget(FSTATE_comboBox, 3, 1, 1, 1);

        FTO_lineEdit = new QLineEdit(gridLayoutWidget);
        FTO_lineEdit->setObjectName(QStringLiteral("FTO_lineEdit"));

        gridLayout->addWidget(FTO_lineEdit, 6, 1, 1, 1);

        label_8 = new QLabel(gridLayoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 8, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 7, 0, 1, 1);

        label_10 = new QLabel(gridLayoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout->addWidget(label_10, 10, 0, 1, 1);

        FMODEL_comboBox = new QComboBox(gridLayoutWidget);
        FMODEL_comboBox->setObjectName(QStringLiteral("FMODEL_comboBox"));
        FMODEL_comboBox->setEditable(true);

        gridLayout->addWidget(FMODEL_comboBox, 2, 1, 1, 1);

        dateEdit = new QDateEdit(gridLayoutWidget);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));

        gridLayout->addWidget(dateEdit, 7, 1, 1, 1);

        Flight_lineEdit = new QLineEdit(gridLayoutWidget);
        Flight_lineEdit->setObjectName(QStringLiteral("Flight_lineEdit"));

        gridLayout->addWidget(Flight_lineEdit, 1, 1, 1, 1);

        label_9 = new QLabel(gridLayoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout->addWidget(label_9, 9, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        timeEdit = new QTimeEdit(gridLayoutWidget);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));

        gridLayout->addWidget(timeEdit, 8, 1, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 6, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        FID_lineEdit = new QLineEdit(gridLayoutWidget);
        FID_lineEdit->setObjectName(QStringLiteral("FID_lineEdit"));

        gridLayout->addWidget(FID_lineEdit, 0, 1, 1, 1);

        dateEdit_2 = new QDateEdit(gridLayoutWidget);
        dateEdit_2->setObjectName(QStringLiteral("dateEdit_2"));

        gridLayout->addWidget(dateEdit_2, 9, 1, 1, 1);

        timeEdit_2 = new QTimeEdit(gridLayoutWidget);
        timeEdit_2->setObjectName(QStringLiteral("timeEdit_2"));

        gridLayout->addWidget(timeEdit_2, 10, 1, 1, 1);

        post_Button = new QPushButton(gridLayoutWidget);
        post_Button->setObjectName(QStringLiteral("post_Button"));

        gridLayout->addWidget(post_Button, 11, 1, 1, 1);

        QWidget::setTabOrder(FID_lineEdit, Flight_lineEdit);
        QWidget::setTabOrder(Flight_lineEdit, FMODEL_comboBox);
        QWidget::setTabOrder(FMODEL_comboBox, FSTATE_comboBox);
        QWidget::setTabOrder(FSTATE_comboBox, FFROM_lineEdit);
        QWidget::setTabOrder(FFROM_lineEdit, FTO_lineEdit);
        QWidget::setTabOrder(FTO_lineEdit, dateEdit);
        QWidget::setTabOrder(dateEdit, timeEdit);
        QWidget::setTabOrder(timeEdit, dateEdit_2);
        QWidget::setTabOrder(dateEdit_2, timeEdit_2);
        QWidget::setTabOrder(timeEdit_2, post_Button);

        retranslateUi(addFlight_Dialog);

        QMetaObject::connectSlotsByName(addFlight_Dialog);
    } // setupUi

    void retranslateUi(QDialog *addFlight_Dialog)
    {
        addFlight_Dialog->setWindowTitle(QApplication::translate("addFlight_Dialog", "Dialog", nullptr));
        label_2->setText(QApplication::translate("addFlight_Dialog", "\350\210\252\347\251\272\345\205\254\345\217\270(Flight)", nullptr));
        label_8->setText(QApplication::translate("addFlight_Dialog", "\350\265\267\351\243\236\346\227\266\351\227\264(FTIME)", nullptr));
        label_3->setText(QApplication::translate("addFlight_Dialog", "\351\243\236\346\234\272\345\236\213\345\217\267(FMODEL)", nullptr));
        label_7->setText(QApplication::translate("addFlight_Dialog", "\350\265\267\351\243\236\346\227\245\346\234\237(FDATE)", nullptr));
        label_10->setText(QApplication::translate("addFlight_Dialog", "\345\210\260\350\276\276\346\227\266\351\227\264(ARRTIME)", nullptr));
        dateEdit->setDisplayFormat(QApplication::translate("addFlight_Dialog", "yyyy/mm/dd", nullptr));
        label_9->setText(QApplication::translate("addFlight_Dialog", "\345\210\260\350\276\276\346\227\245\346\234\237(ARRDATE)", nullptr));
        label->setText(QApplication::translate("addFlight_Dialog", "\350\210\252\347\217\255\345\217\267(FID)", nullptr));
        timeEdit->setDisplayFormat(QApplication::translate("addFlight_Dialog", "hh:mm", nullptr));
        label_6->setText(QApplication::translate("addFlight_Dialog", "\351\243\236\345\276\200(FTO)", nullptr));
        label_4->setText(QApplication::translate("addFlight_Dialog", "\351\243\236\346\234\272\347\212\266\346\200\201(FSTATE)", nullptr));
        label_5->setText(QApplication::translate("addFlight_Dialog", "\350\265\267\351\243\236\345\234\260(FFROM)", nullptr));
        dateEdit_2->setDisplayFormat(QApplication::translate("addFlight_Dialog", "yyyy/mm/dd", nullptr));
        timeEdit_2->setDisplayFormat(QApplication::translate("addFlight_Dialog", "hh:mm", nullptr));
        post_Button->setText(QApplication::translate("addFlight_Dialog", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addFlight_Dialog: public Ui_addFlight_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDFLIGHT_DIALOG_H
