/********************************************************************************
** Form generated from reading UI file 'chooseseat_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_chooseSeat_Dialog
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QTableView *FSTATUS_tableView;
    QGraphicsView *graphicsView;
    QGridLayout *gridLayout;
    QPushButton *chooseSteat_pushButton;

    void setupUi(QDialog *chooseSeat_Dialog)
    {
        if (chooseSeat_Dialog->objectName().isEmpty())
            chooseSeat_Dialog->setObjectName(QStringLiteral("chooseSeat_Dialog"));
        chooseSeat_Dialog->resize(921, 721);
        widget = new QWidget(chooseSeat_Dialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(-10, -50, 691, 481));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        FSTATUS_tableView = new QTableView(widget);
        FSTATUS_tableView->setObjectName(QStringLiteral("FSTATUS_tableView"));

        horizontalLayout->addWidget(FSTATUS_tableView);

        graphicsView = new QGraphicsView(widget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));

        horizontalLayout->addWidget(graphicsView);


        verticalLayout->addLayout(horizontalLayout);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));

        verticalLayout->addLayout(gridLayout);

        chooseSteat_pushButton = new QPushButton(widget);
        chooseSteat_pushButton->setObjectName(QStringLiteral("chooseSteat_pushButton"));

        verticalLayout->addWidget(chooseSteat_pushButton);


        retranslateUi(chooseSeat_Dialog);

        QMetaObject::connectSlotsByName(chooseSeat_Dialog);
    } // setupUi

    void retranslateUi(QDialog *chooseSeat_Dialog)
    {
        chooseSeat_Dialog->setWindowTitle(QApplication::translate("chooseSeat_Dialog", "Dialog", nullptr));
        chooseSteat_pushButton->setText(QApplication::translate("chooseSeat_Dialog", "\347\241\256\350\256\244\351\200\211\345\272\247", nullptr));
    } // retranslateUi

};

namespace Ui {
    class chooseSeat_Dialog: public Ui_chooseSeat_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSESEAT_DIALOG_H
