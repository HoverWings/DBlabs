#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlQueryModel>
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
    explicit MainWindow(QWidget *parent = 0);
    class MySqlQueryModel* myModel=NULL;
    ~MainWindow();
public slots:
    void on_action_F_triggered();

private slots:


    void on_deleteButton_clicked();
    void on_addButton_clicked();

private:
    Ui::MainWindow *ui;
    int selRow;
    int selCol;
};























#endif // MAINWINDOW_H
