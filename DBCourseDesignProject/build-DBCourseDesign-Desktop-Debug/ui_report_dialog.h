/********************************************************************************
** Form generated from reading UI file 'report_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPORT_DIALOG_H
#define UI_REPORT_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_report_Dialog
{
public:
    QGraphicsView *graphicsView;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QComboBox *FLIGHT_comboBox;
    QPushButton *show_pushButton;

    void setupUi(QDialog *report_Dialog)
    {
        if (report_Dialog->objectName().isEmpty())
            report_Dialog->setObjectName(QStringLiteral("report_Dialog"));
        report_Dialog->resize(672, 640);
        graphicsView = new QGraphicsView(report_Dialog);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(90, 60, 441, 381));
        widget = new QWidget(report_Dialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(190, 530, 175, 29));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        FLIGHT_comboBox = new QComboBox(widget);
        FLIGHT_comboBox->setObjectName(QStringLiteral("FLIGHT_comboBox"));

        horizontalLayout->addWidget(FLIGHT_comboBox);

        show_pushButton = new QPushButton(widget);
        show_pushButton->setObjectName(QStringLiteral("show_pushButton"));

        horizontalLayout->addWidget(show_pushButton);


        retranslateUi(report_Dialog);

        QMetaObject::connectSlotsByName(report_Dialog);
    } // setupUi

    void retranslateUi(QDialog *report_Dialog)
    {
        report_Dialog->setWindowTitle(QApplication::translate("report_Dialog", "Dialog", nullptr));
        show_pushButton->setText(QApplication::translate("report_Dialog", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class report_Dialog: public Ui_report_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPORT_DIALOG_H
