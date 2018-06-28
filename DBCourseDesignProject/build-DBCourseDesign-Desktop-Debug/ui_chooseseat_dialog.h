/********************************************************************************
** Form generated from reading UI file 'chooseseat_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSESEAT_DIALOG_H
#define UI_CHOOSESEAT_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_chooseSeat_Dialog
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QTableView *FSTATUS_tableView;
    QGridLayout *gridLayout_1;
    QLabel *label_fullRate;
    QLabel *label_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_usableSeatNum;
    QLabel *label_totalSeatNum;
    QPushButton *chooseSteat_pushButton;
    QGraphicsView *graphicsView;
    QGridLayout *gridLayout_0;

    void setupUi(QDialog *chooseSeat_Dialog)
    {
        if (chooseSeat_Dialog->objectName().isEmpty())
            chooseSeat_Dialog->setObjectName(QStringLiteral("chooseSeat_Dialog"));
        chooseSeat_Dialog->resize(1450, 1000);
        chooseSeat_Dialog->setMinimumSize(QSize(50, 1000));
        widget = new QWidget(chooseSeat_Dialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 0, 1351, 871));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        FSTATUS_tableView = new QTableView(widget);
        FSTATUS_tableView->setObjectName(QStringLiteral("FSTATUS_tableView"));
        FSTATUS_tableView->setMinimumSize(QSize(50, 200));

        verticalLayout->addWidget(FSTATUS_tableView);

        gridLayout_1 = new QGridLayout();
        gridLayout_1->setObjectName(QStringLiteral("gridLayout_1"));
        label_fullRate = new QLabel(widget);
        label_fullRate->setObjectName(QStringLiteral("label_fullRate"));

        gridLayout_1->addWidget(label_fullRate, 3, 1, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_1->addWidget(label_3, 3, 0, 1, 1);

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_1->addWidget(label, 2, 0, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_1->addWidget(label_2, 1, 0, 1, 1);

        label_usableSeatNum = new QLabel(widget);
        label_usableSeatNum->setObjectName(QStringLiteral("label_usableSeatNum"));

        gridLayout_1->addWidget(label_usableSeatNum, 2, 1, 1, 1);

        label_totalSeatNum = new QLabel(widget);
        label_totalSeatNum->setObjectName(QStringLiteral("label_totalSeatNum"));

        gridLayout_1->addWidget(label_totalSeatNum, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_1);

        chooseSteat_pushButton = new QPushButton(widget);
        chooseSteat_pushButton->setObjectName(QStringLiteral("chooseSteat_pushButton"));

        verticalLayout->addWidget(chooseSteat_pushButton);

        graphicsView = new QGraphicsView(widget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(graphicsView->sizePolicy().hasHeightForWidth());
        graphicsView->setSizePolicy(sizePolicy);
        graphicsView->setMinimumSize(QSize(0, 800));
        graphicsView->setMaximumSize(QSize(800, 600));
        graphicsView->setAutoFillBackground(true);

        verticalLayout->addWidget(graphicsView);


        horizontalLayout->addLayout(verticalLayout);

        gridLayout_0 = new QGridLayout();
        gridLayout_0->setObjectName(QStringLiteral("gridLayout_0"));

        horizontalLayout->addLayout(gridLayout_0);


        retranslateUi(chooseSeat_Dialog);

        QMetaObject::connectSlotsByName(chooseSeat_Dialog);
    } // setupUi

    void retranslateUi(QDialog *chooseSeat_Dialog)
    {
        chooseSeat_Dialog->setWindowTitle(QApplication::translate("chooseSeat_Dialog", "Dialog", nullptr));
        label_fullRate->setText(QApplication::translate("chooseSeat_Dialog", "TextLabel", nullptr));
        label_3->setText(QApplication::translate("chooseSeat_Dialog", "\346\273\241\345\272\247\347\216\207", nullptr));
        label->setText(QApplication::translate("chooseSeat_Dialog", "\350\210\252\347\217\255\345\211\251\344\275\231\345\272\247\344\275\215", nullptr));
        label_2->setText(QApplication::translate("chooseSeat_Dialog", "\350\210\252\347\217\255\346\200\273\345\205\261\345\272\247\344\275\215", nullptr));
        label_usableSeatNum->setText(QApplication::translate("chooseSeat_Dialog", "TextLabel", nullptr));
        label_totalSeatNum->setText(QApplication::translate("chooseSeat_Dialog", "TextLabel", nullptr));
        chooseSteat_pushButton->setText(QApplication::translate("chooseSeat_Dialog", "\347\241\256\350\256\244\351\200\211\345\272\247", nullptr));
    } // retranslateUi

};

namespace Ui {
    class chooseSeat_Dialog: public Ui_chooseSeat_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSESEAT_DIALOG_H
