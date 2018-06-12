#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
#include <QSqlQueryModel>
#include <QComboBox>
#include <QTableWidget>
#include "mysqlquerymodel.h"
namespace Ui
{
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    int UID;
    QSqlDatabase* db;
    explicit MainWindow(QWidget *parent = 0);
    class MySqlQueryModel* myModel=NULL;
    ~MainWindow();
public slots:
    void on_action_F_triggered();

private slots:


    void on_deleteButton_clicked();
    void on_addButton_clicked();
    void on_queryButton_clicked();
    void on_tabWidget_currentChanged(int index);
    void on_postButton_clicked();

private:
    Ui::MainWindow *ui;
    int selRow;
    int selCol;

    void setFlight_Combox();
    void setTab2();


    //debug funciton
    void printSQLError();
};























#endif // MAINWINDOW_H
