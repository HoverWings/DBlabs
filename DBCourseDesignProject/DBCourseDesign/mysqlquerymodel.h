#ifndef MYSQLQUERYMODEL_H
#define MYSQLQUERYMODEL_H
#include "mainwindow.h"
#include <QSqlQueryModel>
#include <qvector.h>
/*
 * op tabel
 * 1:user
 * 2:FLIGHTinfo
 * 3:
 */


class MySqlQueryModel : public QSqlQueryModel
{
    Q_OBJECT
public:

    //public var
    int  opTable;
    QString opName;
    QString opPRI;
    int opPRI_col;
    QVector<QString> opTitle;   //table title
    QVector<QString> addVec;    //the vec
    class MainWindow* mw;

    // public function
    MySqlQueryModel();
    explicit MySqlQueryModel(QObject *parent = 0);
    Qt::ItemFlags flags(const QModelIndex &index) const;
    QVariant data(const QModelIndex &item, int role=Qt::DisplayRole) const;
    bool addData();
    bool deleteData(QModelIndex &index);
    bool setData(const QModelIndex &index, const QVariant &value, int role);


    bool set_op();
    bool set_opTitle();
    bool set_opName();
    bool set_opIndex(QModelIndex &index);
    void refresh();

private:
    //private var
    int opRow;
    int opCol;

    //private funciton






};

#endif // MYSQLQUERYMODEL_H
