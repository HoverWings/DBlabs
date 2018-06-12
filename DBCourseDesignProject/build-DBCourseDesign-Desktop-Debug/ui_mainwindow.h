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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTimeEdit>
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
    QTabWidget *tabWidget;
    QWidget *tab;
    QTableWidget *tableWidget;
    QPushButton *addButton;
    QPushButton *deleteButton;
    QTableView *tableView;
    QWidget *tab_2;
    QTableView *tableView_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QDateEdit *dateEdit;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QTimeEdit *timeEdit;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QComboBox *FLISHT_comboBox;
    QWidget *layoutWidget_4;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QComboBox *queryorder_comboBox;
    QPushButton *queryButton;
    QPushButton *postButton;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *FFROM_lineEdit;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *FTO_lineEdit;
    QWidget *tab_3;
    QTableView *tableView_3;
    QWidget *tab_4;
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
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(30, 10, 1021, 481));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tableWidget = new QTableWidget(tab);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(80, 70, 211, 251));
        addButton = new QPushButton(tab);
        addButton->setObjectName(QStringLiteral("addButton"));
        addButton->setGeometry(QRect(380, 390, 88, 27));
        deleteButton = new QPushButton(tab);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));
        deleteButton->setGeometry(QRect(520, 390, 88, 27));
        tableView = new QTableView(tab);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(370, 40, 581, 301));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tableView_2 = new QTableView(tab_2);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setGeometry(QRect(370, 40, 581, 301));
        layoutWidget = new QWidget(tab_2);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 150, 201, 30));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        dateEdit = new QDateEdit(layoutWidget);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));

        horizontalLayout_3->addWidget(dateEdit);

        layoutWidget_2 = new QWidget(tab_2);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(30, 200, 201, 30));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget_2);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        timeEdit = new QTimeEdit(layoutWidget_2);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));

        horizontalLayout_4->addWidget(timeEdit);

        layoutWidget_3 = new QWidget(tab_2);
        layoutWidget_3->setObjectName(QStringLiteral("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(30, 250, 201, 29));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget_3);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_5->addWidget(label_5);

        FLISHT_comboBox = new QComboBox(layoutWidget_3);
        FLISHT_comboBox->setObjectName(QStringLiteral("FLISHT_comboBox"));

        horizontalLayout_5->addWidget(FLISHT_comboBox);

        layoutWidget_4 = new QWidget(tab_2);
        layoutWidget_4->setObjectName(QStringLiteral("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(30, 320, 325, 29));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget_4);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget_4);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_6->addWidget(label_6);

        queryorder_comboBox = new QComboBox(layoutWidget_4);
        queryorder_comboBox->addItem(QString());
        queryorder_comboBox->addItem(QString());
        queryorder_comboBox->addItem(QString());
        queryorder_comboBox->addItem(QString());
        queryorder_comboBox->setObjectName(QStringLiteral("queryorder_comboBox"));

        horizontalLayout_6->addWidget(queryorder_comboBox);

        queryButton = new QPushButton(tab_2);
        queryButton->setObjectName(QStringLiteral("queryButton"));
        queryButton->setGeometry(QRect(40, 390, 88, 27));
        postButton = new QPushButton(tab_2);
        postButton->setObjectName(QStringLiteral("postButton"));
        postButton->setGeometry(QRect(700, 380, 88, 27));
        layoutWidget1 = new QWidget(tab_2);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(30, 50, 201, 29));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        FFROM_lineEdit = new QLineEdit(layoutWidget1);
        FFROM_lineEdit->setObjectName(QStringLiteral("FFROM_lineEdit"));

        horizontalLayout->addWidget(FFROM_lineEdit);

        layoutWidget2 = new QWidget(tab_2);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(30, 100, 201, 29));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        FTO_lineEdit = new QLineEdit(layoutWidget2);
        FTO_lineEdit->setObjectName(QStringLiteral("FTO_lineEdit"));

        horizontalLayout_2->addWidget(FTO_lineEdit);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tableView_3 = new QTableView(tab_3);
        tableView_3->setObjectName(QStringLiteral("tableView_3"));
        tableView_3->setGeometry(QRect(370, 50, 471, 291));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tabWidget->addTab(tab_4, QString());
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
        menu_F->addSeparator();
        menu_F->addAction(action_F);
        menu_O->addAction(action_Q);
        menu_O->addAction(action_L);
        menu_O->addAction(action_G);
        menu_O->addAction(action_B);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(2);


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
        addButton->setText(QApplication::translate("MainWindow", "add", nullptr));
        deleteButton->setText(QApplication::translate("MainWindow", "Delete", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Tab 1", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "\350\265\267\351\243\236\346\227\245\346\234\237", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "\350\265\267\351\243\236 \346\227\266\351\227\264", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "\350\210\252\347\251\272\345\205\254\345\217\270", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Order By", nullptr));
        queryorder_comboBox->setItemText(0, QApplication::translate("MainWindow", "\344\273\267\346\240\274", nullptr));
        queryorder_comboBox->setItemText(1, QApplication::translate("MainWindow", "\346\234\200\350\277\221", nullptr));
        queryorder_comboBox->setItemText(2, QApplication::translate("MainWindow", "\347\233\264\350\276\276", nullptr));
        queryorder_comboBox->setItemText(3, QApplication::translate("MainWindow", "\346\220\255\344\271\230\350\277\207\347\232\204\350\210\252\347\251\272\345\205\254\345\217\270", nullptr));

        queryButton->setText(QApplication::translate("MainWindow", "\346\237\245\350\257\242", nullptr));
        postButton->setText(QApplication::translate("MainWindow", "\346\217\220\344\272\244\350\256\242\345\215\225", nullptr));
        label->setText(QApplication::translate("MainWindow", " \345\207\272\345\217\221\345\234\260", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\345\210\260\350\276\276\345\234\260", nullptr));
        FTO_lineEdit->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Tab 2", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Page", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "Page", nullptr));
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
