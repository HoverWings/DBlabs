/********************************************************************************
** Form generated from reading UI file 'tese.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESE_H
#define UI_TESE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tese
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *tese)
    {
        if (tese->objectName().isEmpty())
            tese->setObjectName(QStringLiteral("tese"));
        tese->resize(800, 600);
        centralwidget = new QWidget(tese);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(490, 260, 68, 19));
        tese->setCentralWidget(centralwidget);
        menubar = new QMenuBar(tese);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 24));
        tese->setMenuBar(menubar);
        statusbar = new QStatusBar(tese);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        tese->setStatusBar(statusbar);

        retranslateUi(tese);

        QMetaObject::connectSlotsByName(tese);
    } // setupUi

    void retranslateUi(QMainWindow *tese)
    {
        tese->setWindowTitle(QApplication::translate("tese", "MainWindow", nullptr));
        label->setText(QApplication::translate("tese", "asdzsdsa", nullptr));
    } // retranslateUi

};

namespace Ui {
    class tese: public Ui_tese {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESE_H
