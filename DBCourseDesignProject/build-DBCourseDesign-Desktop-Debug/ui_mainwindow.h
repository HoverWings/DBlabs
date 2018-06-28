/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWebEngineWidgets/QWebEngineView>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
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
    QWidget *tab_0;
    QPushButton *addFlightButton;
    QPushButton *deleteFlightButton;
    QTableView *tableView_0;
    QPushButton *pushButton;
    QWidget *tab_1;
    QTableView *tableView_1;
    QPushButton *postButton;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QTimeEdit *timeEdit;
    QLineEdit *FFROM_lineEdit;
    QLabel *label_3;
    QLineEdit *FTO_lineEdit;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *queryButton;
    QComboBox *FLIGHT_comboBox;
    QLabel *label_2;
    QLabel *label;
    QLabel *label_6;
    QComboBox *order_comboBox;
    QDateEdit *dateEdit;
    QCheckBox *checkBox_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_8;
    QLineEdit *transtime_lineEdit;
    QWidget *tab_2;
    QTableView *tableView_2;
    QPushButton *checkin_pushButton;
    QPushButton *Unsubscribe_pushButton;
    QWidget *tab_3;
    QTableView *tableView_3;
    QLabel *label_7;
    QWebEngineView *webEngineView;
    QWidget *tab;
    QComboBox *FLIGHT_comboBox_4;
    QGraphicsView *graphicsView;
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
        tabWidget->setGeometry(QRect(0, 0, 1401, 601));
        tab_0 = new QWidget();
        tab_0->setObjectName(QStringLiteral("tab_0"));
        addFlightButton = new QPushButton(tab_0);
        addFlightButton->setObjectName(QStringLiteral("addFlightButton"));
        addFlightButton->setGeometry(QRect(70, 450, 88, 27));
        deleteFlightButton = new QPushButton(tab_0);
        deleteFlightButton->setObjectName(QStringLiteral("deleteFlightButton"));
        deleteFlightButton->setGeometry(QRect(190, 450, 88, 27));
        tableView_0 = new QTableView(tab_0);
        tableView_0->setObjectName(QStringLiteral("tableView_0"));
        tableView_0->setGeometry(QRect(40, 30, 1051, 321));
        pushButton = new QPushButton(tab_0);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(360, 450, 151, 27));
        tabWidget->addTab(tab_0, QString());
        tab_1 = new QWidget();
        tab_1->setObjectName(QStringLiteral("tab_1"));
        tableView_1 = new QTableView(tab_1);
        tableView_1->setObjectName(QStringLiteral("tableView_1"));
        tableView_1->setGeometry(QRect(360, 60, 931, 321));
        postButton = new QPushButton(tab_1);
        postButton->setObjectName(QStringLiteral("postButton"));
        postButton->setGeometry(QRect(740, 420, 88, 27));
        gridLayoutWidget = new QWidget(tab_1);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(50, 70, 291, 311));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        timeEdit = new QTimeEdit(gridLayoutWidget);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));

        gridLayout->addWidget(timeEdit, 3, 1, 1, 1);

        FFROM_lineEdit = new QLineEdit(gridLayoutWidget);
        FFROM_lineEdit->setObjectName(QStringLiteral("FFROM_lineEdit"));

        gridLayout->addWidget(FFROM_lineEdit, 0, 1, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        FTO_lineEdit = new QLineEdit(gridLayoutWidget);
        FTO_lineEdit->setObjectName(QStringLiteral("FTO_lineEdit"));

        gridLayout->addWidget(FTO_lineEdit, 1, 1, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        queryButton = new QPushButton(gridLayoutWidget);
        queryButton->setObjectName(QStringLiteral("queryButton"));

        gridLayout->addWidget(queryButton, 6, 0, 1, 2);

        FLIGHT_comboBox = new QComboBox(gridLayoutWidget);
        FLIGHT_comboBox->setObjectName(QStringLiteral("FLIGHT_comboBox"));
        FLIGHT_comboBox->setEditable(true);

        gridLayout->addWidget(FLIGHT_comboBox, 4, 1, 1, 1);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        order_comboBox = new QComboBox(gridLayoutWidget);
        order_comboBox->addItem(QString());
        order_comboBox->addItem(QString());
        order_comboBox->setObjectName(QStringLiteral("order_comboBox"));

        gridLayout->addWidget(order_comboBox, 5, 1, 1, 1);

        dateEdit = new QDateEdit(gridLayoutWidget);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));

        gridLayout->addWidget(dateEdit, 2, 1, 1, 1);

        checkBox_2 = new QCheckBox(tab_1);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(140, 450, 93, 25));
        layoutWidget = new QWidget(tab_1);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(60, 480, 201, 29));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout->addWidget(label_8);

        transtime_lineEdit = new QLineEdit(layoutWidget);
        transtime_lineEdit->setObjectName(QStringLiteral("transtime_lineEdit"));

        horizontalLayout->addWidget(transtime_lineEdit);

        tabWidget->addTab(tab_1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tableView_2 = new QTableView(tab_2);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setGeometry(QRect(80, 10, 861, 401));
        checkin_pushButton = new QPushButton(tab_2);
        checkin_pushButton->setObjectName(QStringLiteral("checkin_pushButton"));
        checkin_pushButton->setGeometry(QRect(530, 450, 88, 27));
        Unsubscribe_pushButton = new QPushButton(tab_2);
        Unsubscribe_pushButton->setObjectName(QStringLiteral("Unsubscribe_pushButton"));
        Unsubscribe_pushButton->setGeometry(QRect(180, 450, 88, 27));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tableView_3 = new QTableView(tab_3);
        tableView_3->setObjectName(QStringLiteral("tableView_3"));
        tableView_3->setGeometry(QRect(10, 60, 771, 371));
        label_7 = new QLabel(tab_3);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 30, 241, 19));
        webEngineView = new QWebEngineView(tab_3);
        webEngineView->setObjectName(QStringLiteral("webEngineView"));
        webEngineView->setGeometry(QRect(810, 160, 300, 200));
        webEngineView->setUrl(QUrl(QStringLiteral("about:blank")));
        tabWidget->addTab(tab_3, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        FLIGHT_comboBox_4 = new QComboBox(tab);
        FLIGHT_comboBox_4->setObjectName(QStringLiteral("FLIGHT_comboBox_4"));
        FLIGHT_comboBox_4->setGeometry(QRect(80, 450, 219, 27));
        FLIGHT_comboBox_4->setEditable(true);
        graphicsView = new QGraphicsView(tab);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(80, 50, 731, 321));
        tabWidget->addTab(tab, QString());
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
        QWidget::setTabOrder(tabWidget, FFROM_lineEdit);
        QWidget::setTabOrder(FFROM_lineEdit, FTO_lineEdit);
        QWidget::setTabOrder(FTO_lineEdit, dateEdit);
        QWidget::setTabOrder(dateEdit, timeEdit);
        QWidget::setTabOrder(timeEdit, FLIGHT_comboBox);
        QWidget::setTabOrder(FLIGHT_comboBox, order_comboBox);
        QWidget::setTabOrder(order_comboBox, queryButton);
        QWidget::setTabOrder(queryButton, postButton);
        QWidget::setTabOrder(postButton, tableView_0);
        QWidget::setTabOrder(tableView_0, addFlightButton);
        QWidget::setTabOrder(addFlightButton, deleteFlightButton);
        QWidget::setTabOrder(deleteFlightButton, tableView_2);
        QWidget::setTabOrder(tableView_2, tableView_1);
        QWidget::setTabOrder(tableView_1, checkin_pushButton);
        QWidget::setTabOrder(checkin_pushButton, Unsubscribe_pushButton);
        QWidget::setTabOrder(Unsubscribe_pushButton, tableView_3);

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

        tabWidget->setCurrentIndex(1);


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
        addFlightButton->setText(QApplication::translate("MainWindow", "add", nullptr));
        deleteFlightButton->setText(QApplication::translate("MainWindow", "Delete", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "show Report", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_0), QApplication::translate("MainWindow", "\350\210\252\347\217\255", nullptr));
        postButton->setText(QApplication::translate("MainWindow", "\346\217\220\344\272\244\350\256\242\345\215\225", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "\350\265\267\351\243\236\346\227\245\346\234\237", nullptr));
        FTO_lineEdit->setText(QString());
        label_4->setText(QApplication::translate("MainWindow", "\350\265\267\351\243\236 \346\227\266\351\227\264", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "\350\210\252\347\251\272\345\205\254\345\217\270", nullptr));
        queryButton->setText(QApplication::translate("MainWindow", "\346\237\245\350\257\242", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\345\210\260\350\276\276\345\234\260", nullptr));
        label->setText(QApplication::translate("MainWindow", "\345\207\272\345\217\221\345\234\260", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Order By", nullptr));
        order_comboBox->setItemText(0, QApplication::translate("MainWindow", "\346\234\200\350\277\221", nullptr));
        order_comboBox->setItemText(1, QApplication::translate("MainWindow", "\344\273\267\346\240\274", nullptr));

        checkBox_2->setText(QApplication::translate("MainWindow", "\346\230\257\345\220\246\344\270\255\350\275\254", nullptr));
        label_8->setText(QApplication::translate("MainWindow", " \344\270\255\350\275\254\346\227\266\351\227\264", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_1), QApplication::translate("MainWindow", "\350\210\252\347\217\255\346\237\245\350\257\242", nullptr));
        checkin_pushButton->setText(QApplication::translate("MainWindow", "check-in", nullptr));
        Unsubscribe_pushButton->setText(QApplication::translate("MainWindow", "Unsubscribe", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "\350\256\242\345\215\225\347\256\241\347\220\206", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "The Recent Flight", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "\350\264\246\345\215\225\346\237\245\350\257\242", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\346\212\245\350\241\250", nullptr));
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
