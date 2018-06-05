/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_F;
    QAction *action_Q;
    QAction *action_G;
    QAction *action_B;
    QAction *action_L;
    QWidget *centralWidget;
    QTableWidget *tableWidget;
    QTableView *tableView;
    QPushButton *deleteButton;
    QPushButton *addButton;
    QMenuBar *menuBar;
    QMenu *menu_F;
    QMenu *menu_O;
    QMenu *menu_T;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1458, 679);
        action_F = new QAction(MainWindow);
        action_F->setObjectName(QStringLiteral("action_F"));
        action_Q = new QAction(MainWindow);
        action_Q->setObjectName(QStringLiteral("action_Q"));
        action_G = new QAction(MainWindow);
        action_G->setObjectName(QStringLiteral("action_G"));
        action_B = new QAction(MainWindow);
        action_B->setObjectName(QStringLiteral("action_B"));
        action_L = new QAction(MainWindow);
        action_L->setObjectName(QStringLiteral("action_L"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tableWidget = new QTableWidget(centralWidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 160, 211, 251));
        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(250, 60, 771, 351));
        deleteButton = new QPushButton(centralWidget);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        deleteButton->setGeometry(QRect(530, 520, 88, 27));
        addButton = new QPushButton(centralWidget);
        addButton->setObjectName(QStringLiteral("addButton"));
        addButton->setGeometry(QRect(330, 510, 88, 27));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1458, 24));
        menu_F = new QMenu(menuBar);
        menu_F->setObjectName(QStringLiteral("menu_F"));
        menu_O = new QMenu(menuBar);
        menu_O->setObjectName(QStringLiteral("menu_O"));
        menu_T = new QMenu(menuBar);
        menu_T->setObjectName(QStringLiteral("menu_T"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu_F->menuAction());
        menuBar->addAction(menu_O->menuAction());
        menuBar->addAction(menu_T->menuAction());
        menu_F->addAction(action_F);
        menu_O->addAction(action_Q);
        menu_O->addAction(action_L);
        menu_O->addAction(action_G);
        menu_O->addAction(action_B);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        action_F->setText(QApplication::translate("MainWindow", "\350\210\252\347\217\255\344\277\241\346\201\257(&F)", nullptr));
        action_Q->setText(QApplication::translate("MainWindow", "\350\210\252\347\217\255\346\237\245\350\257\242(&Q)", nullptr));
        action_G->setText(QApplication::translate("MainWindow", "\345\217\226\347\245\250(&G)", nullptr));
        action_B->setText(QApplication::translate("MainWindow", "\351\200\200\350\256\242\346\234\272\347\245\250(&B)", nullptr));
        action_L->setText(QApplication::translate("MainWindow", "\350\256\242\345\215\225\346\237\245\350\257\242(&L)", nullptr));
        deleteButton->setText(QApplication::translate("MainWindow", "Delete", nullptr));
        addButton->setText(QApplication::translate("MainWindow", "add", nullptr));
        menu_F->setTitle(QApplication::translate("MainWindow", "\350\210\252\347\217\255\344\277\241\346\201\257(&F)", nullptr));
        menu_O->setTitle(QApplication::translate("MainWindow", "\350\256\242\345\215\225\347\256\241\347\220\206(&O)", nullptr));
        menu_T->setTitle(QApplication::translate("MainWindow", "\350\264\246\345\215\225\346\237\245\350\257\242(&T)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
