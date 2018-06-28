/********************************************************************************
** Form generated from reading UI file 'print_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRINT_DIALOG_H
#define UI_PRINT_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_print_Dialog
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_13;
    QLabel *FSTATE_label;
    QLabel *FFROM_label;
    QLabel *ARRTIME_label;
    QLabel *SID_label;
    QLabel *TIAKCTIME_label;
    QLabel *user_label;
    QLabel *label_11;
    QLabel *FID_label;
    QLabel *label_2;
    QLabel *Flight_label;
    QLabel *ARRDATE_label;
    QLabel *FTO_label;
    QLabel *FTIME_label;
    QLabel *label_8;
    QLabel *label_3;
    QLabel *label_7;
    QLabel *label_10;
    QLabel *label_9;
    QLabel *label_6;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_15;
    QLabel *label;
    QLabel *FMODEL_label;
    QLabel *FDATE_label;
    QLabel *label_16;
    QLabel *SeatRank_label;
    QPushButton *pushButton;
    QLabel *label_12;

    void setupUi(QDialog *print_Dialog)
    {
        if (print_Dialog->objectName().isEmpty())
            print_Dialog->setObjectName(QStringLiteral("print_Dialog"));
        print_Dialog->resize(615, 625);
        gridLayoutWidget = new QWidget(print_Dialog);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(150, 100, 301, 363));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(gridLayoutWidget);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout->addWidget(label_13, 14, 0, 1, 1);

        FSTATE_label = new QLabel(gridLayoutWidget);
        FSTATE_label->setObjectName(QStringLiteral("FSTATE_label"));

        gridLayout->addWidget(FSTATE_label, 6, 1, 1, 1);

        FFROM_label = new QLabel(gridLayoutWidget);
        FFROM_label->setObjectName(QStringLiteral("FFROM_label"));

        gridLayout->addWidget(FFROM_label, 7, 1, 1, 1);

        ARRTIME_label = new QLabel(gridLayoutWidget);
        ARRTIME_label->setObjectName(QStringLiteral("ARRTIME_label"));

        gridLayout->addWidget(ARRTIME_label, 13, 1, 1, 1);

        SID_label = new QLabel(gridLayoutWidget);
        SID_label->setObjectName(QStringLiteral("SID_label"));

        gridLayout->addWidget(SID_label, 1, 1, 1, 1);

        TIAKCTIME_label = new QLabel(gridLayoutWidget);
        TIAKCTIME_label->setObjectName(QStringLiteral("TIAKCTIME_label"));

        gridLayout->addWidget(TIAKCTIME_label, 14, 1, 1, 1);

        user_label = new QLabel(gridLayoutWidget);
        user_label->setObjectName(QStringLiteral("user_label"));

        gridLayout->addWidget(user_label, 0, 1, 1, 1);

        label_11 = new QLabel(gridLayoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout->addWidget(label_11, 0, 0, 1, 1);

        FID_label = new QLabel(gridLayoutWidget);
        FID_label->setObjectName(QStringLiteral("FID_label"));

        gridLayout->addWidget(FID_label, 3, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 4, 0, 1, 1);

        Flight_label = new QLabel(gridLayoutWidget);
        Flight_label->setObjectName(QStringLiteral("Flight_label"));

        gridLayout->addWidget(Flight_label, 4, 1, 1, 1);

        ARRDATE_label = new QLabel(gridLayoutWidget);
        ARRDATE_label->setObjectName(QStringLiteral("ARRDATE_label"));

        gridLayout->addWidget(ARRDATE_label, 12, 1, 1, 1);

        FTO_label = new QLabel(gridLayoutWidget);
        FTO_label->setObjectName(QStringLiteral("FTO_label"));

        gridLayout->addWidget(FTO_label, 9, 1, 1, 1);

        FTIME_label = new QLabel(gridLayoutWidget);
        FTIME_label->setObjectName(QStringLiteral("FTIME_label"));

        gridLayout->addWidget(FTIME_label, 11, 1, 1, 1);

        label_8 = new QLabel(gridLayoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout->addWidget(label_8, 11, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 5, 0, 1, 1);

        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 10, 0, 1, 1);

        label_10 = new QLabel(gridLayoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout->addWidget(label_10, 13, 0, 1, 1);

        label_9 = new QLabel(gridLayoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout->addWidget(label_9, 12, 0, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 9, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 6, 0, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 7, 0, 1, 1);

        label_15 = new QLabel(gridLayoutWidget);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout->addWidget(label_15, 1, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 3, 0, 1, 1);

        FMODEL_label = new QLabel(gridLayoutWidget);
        FMODEL_label->setObjectName(QStringLiteral("FMODEL_label"));

        gridLayout->addWidget(FMODEL_label, 5, 1, 1, 1);

        FDATE_label = new QLabel(gridLayoutWidget);
        FDATE_label->setObjectName(QStringLiteral("FDATE_label"));

        gridLayout->addWidget(FDATE_label, 10, 1, 1, 1);

        label_16 = new QLabel(gridLayoutWidget);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout->addWidget(label_16, 2, 0, 1, 1);

        SeatRank_label = new QLabel(gridLayoutWidget);
        SeatRank_label->setObjectName(QStringLiteral("SeatRank_label"));

        gridLayout->addWidget(SeatRank_label, 2, 1, 1, 1);

        pushButton = new QPushButton(print_Dialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(250, 520, 88, 27));
        label_12 = new QLabel(print_Dialog);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(250, 50, 111, 41));

        retranslateUi(print_Dialog);

        QMetaObject::connectSlotsByName(print_Dialog);
    } // setupUi

    void retranslateUi(QDialog *print_Dialog)
    {
        print_Dialog->setWindowTitle(QApplication::translate("print_Dialog", "Dialog", nullptr));
        label_13->setText(QApplication::translate("print_Dialog", "\345\207\272\347\245\250\346\227\266\351\227\264", nullptr));
        FSTATE_label->setText(QApplication::translate("print_Dialog", "TextLabel", nullptr));
        FFROM_label->setText(QApplication::translate("print_Dialog", "TextLabel", nullptr));
        ARRTIME_label->setText(QApplication::translate("print_Dialog", "TextLabel", nullptr));
        SID_label->setText(QApplication::translate("print_Dialog", "TextLabel", nullptr));
        TIAKCTIME_label->setText(QApplication::translate("print_Dialog", "TextLabel", nullptr));
        user_label->setText(QApplication::translate("print_Dialog", "TextLabel", nullptr));
        label_11->setText(QApplication::translate("print_Dialog", "\347\224\250\346\210\267\345\247\223\345\220\215(user)", nullptr));
        FID_label->setText(QApplication::translate("print_Dialog", "TextLabel", nullptr));
        label_2->setText(QApplication::translate("print_Dialog", "\350\210\252\347\251\272\345\205\254\345\217\270(Flight)", nullptr));
        Flight_label->setText(QApplication::translate("print_Dialog", "TextLabel", nullptr));
        ARRDATE_label->setText(QApplication::translate("print_Dialog", "TextLabel", nullptr));
        FTO_label->setText(QApplication::translate("print_Dialog", "TextLabel", nullptr));
        FTIME_label->setText(QApplication::translate("print_Dialog", "TextLabel", nullptr));
        label_8->setText(QApplication::translate("print_Dialog", "\350\265\267\351\243\236\346\227\266\351\227\264(FTIME)", nullptr));
        label_3->setText(QApplication::translate("print_Dialog", "\351\243\236\346\234\272\345\236\213\345\217\267(FMODEL)", nullptr));
        label_7->setText(QApplication::translate("print_Dialog", "\350\265\267\351\243\236\346\227\245\346\234\237(FDATE)", nullptr));
        label_10->setText(QApplication::translate("print_Dialog", "\345\210\260\350\276\276\346\227\266\351\227\264(ARRTIME)", nullptr));
        label_9->setText(QApplication::translate("print_Dialog", "\345\210\260\350\276\276\346\227\245\346\234\237(ARRDATE)", nullptr));
        label_6->setText(QApplication::translate("print_Dialog", "\351\243\236\345\276\200(FTO)", nullptr));
        label_4->setText(QApplication::translate("print_Dialog", "\351\243\236\346\234\272\347\212\266\346\200\201(FSTATE)", nullptr));
        label_5->setText(QApplication::translate("print_Dialog", "\350\265\267\351\243\236\345\234\260(FFROM)", nullptr));
        label_15->setText(QApplication::translate("print_Dialog", "\345\272\247\344\275\215\345\217\267\347\240\201(SID)", nullptr));
        label->setText(QApplication::translate("print_Dialog", "\350\210\252\347\217\255\345\217\267(FID)", nullptr));
        FMODEL_label->setText(QApplication::translate("print_Dialog", "TextLabel", nullptr));
        FDATE_label->setText(QApplication::translate("print_Dialog", "TextLabel", nullptr));
        label_16->setText(QApplication::translate("print_Dialog", "\345\272\247\344\275\215\347\255\211\347\272\247(SeatRank)", nullptr));
        SeatRank_label->setText(QApplication::translate("print_Dialog", "TextLabel", nullptr));
        pushButton->setText(QApplication::translate("print_Dialog", "\346\234\272\347\245\250\346\211\223\345\215\260", nullptr));
        label_12->setText(QApplication::translate("print_Dialog", "    \347\224\265\345\255\220\346\234\272\347\245\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class print_Dialog: public Ui_print_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRINT_DIALOG_H
