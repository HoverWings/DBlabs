#include "mysqlquerymodel.h"
#include <QSqlQuery>
#include <QColor>

MySqlQueryModel::MySqlQueryModel(QObject *parent) :
    QSqlQueryModel(parent)
{

}

Qt::ItemFlags MySqlQueryModel::flags(
        const QModelIndex &index) const //返回表格是否可更改的标志
{
    Qt::ItemFlags flags = QSqlQueryModel::flags(index);
    if (index.column()!=0) // value can be changed except first
        flags |= Qt::ItemIsEditable;
    return flags;
}
// add data
bool MySqlQueryModel::addData()
{

    return true;
}

// update
bool MySqlQueryModel::setData(const QModelIndex &index, const QVariant &value, int /* role */)
{
    set_op();
    switch(opTable)
    {
        case (1):
        {
            qDebug()<<"FIGHTinfo changed";
            if (index.column() < 1 || index.column() > 8)
                return false;
            QModelIndex primaryKeyIndex = QSqlQueryModel::index(index.row(), 0);
            int id = data(primaryKeyIndex).toInt(); //获取id号
            qDebug()<<id;
            QSqlQuery query;
            query.prepare("update "+opName+" SET "+opTitle[opCol]+" = :value WHERE FID =:FID");
            query.bindValue(":opCol", opTitle[opCol]);
            query.bindValue(":value", value);
            query.bindValue(":FID", id);
            bool isOk = query.exec();
            qDebug() <<isOk;
        }
    }
    refresh();
    return true;
}

// delete data
bool MySqlQueryModel::deleteData(QModelIndex &index)
{
    set_op();
    set_opIndex(index);
    //DELETE FROM 表名称 WHERE 列名称 = 值
    qDebug()<<opPRI;
    QSqlQuery query;
    // get pri
    QModelIndex data_index = this->index(index.row(),opPRI_col);
    QVariant data = this->data(data_index);
    qDebug()<<data;
    query.prepare("DELETE FROM "+opName+" WHERE "+opPRI+"= :pri");
    query.bindValue(":pri", data);
    bool isOk = query.exec();
    qDebug() <<"delete"<<isOk;
    refresh();
    return true;
}

bool MySqlQueryModel::set_opTitle()
{
    QSqlQuery query;
    //qDebug()<<opName;
    query.prepare("SHOW COLUMNS FROM "+opName);
    bool isOk = query.exec();
    //qDebug() <<"title"<<isOk;
    if(!isOk)
    {
        return false;
    }
    opTitle.clear();
    while (query.next())
    {
        opTitle.append(query.value(0).toString());
    }
    //qDebug() <<opTitle;
    QSqlQuery priquery;
    priquery.prepare("SHOW COLUMNS FROM FLIGHTinfo where `Key`='PRI'");
    isOk = priquery.exec();
    priquery.next();
    //qDebug() <<priquery.value(0);
    opPRI=priquery.value(0).toString();
    for (int i = 0; i < opTitle.size(); ++i)
    {
         if (opTitle.at(i) ==opPRI)
         {
             opPRI_col=i;
             break;
         }
    }
    return true;
}

void MySqlQueryModel::refresh() //更新显示
{
    //qDebug() << "refresh";
    switch (this->opTable)
    {
    case 1:
        mw->on_action_F_triggered();
        //qDebug() << "refresh";
        break;
    default:
        break;
    }
//    setQuery("select * from user");
//
//   setHeaderData(1, Qt::Horizontal, QObject::tr("name"));
}



//更改数据显示样式
QVariant MySqlQueryModel::data(const QModelIndex &index, int role) const
{
    QVariant value = QSqlQueryModel::data(index, role);
    //第一个字段的字体颜色为红色
    if (role == Qt::TextColorRole && index.column() == 0)
        return qVariantFromValue(QColor(Qt::red));
    return value;
}



bool MySqlQueryModel::set_op()
{
    set_opName();
    set_opTitle();
    return true;
}


bool MySqlQueryModel::set_opIndex(QModelIndex &index)
{
    opRow=index.row();
    opCol=index.column();
    return true;
}


bool MySqlQueryModel::set_opName()
{
    switch(opTable)
    {
        case (1):opName="FLIGHTinfo";
    }
    return true;
}








