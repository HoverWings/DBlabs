#include"mainwindow.h"
#include"login_dialog.h"
#include<QApplication>
#include<QSqlQuery>
#include<QMessageBox>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("hover");
    db.setDatabaseName("DBCourseDesign");
    db.setUserName("hover");
    db.setPassword("123456");
    bool ok = db.open();
    if(ok)
    {
          qDebug()<<"成功连接数据库";
    }
    else
    {
          QMessageBox::warning(NULL,"警告","无法连接数据库");
    }
    // 此处调试
//    QSqlQuery query;
//    query.prepare("DELETE FROM FLIGHTinfo WHERE FID =1");
//    bool isOk = query.exec();
//    qDebug() <<"delete"<<isOk;


    login_dialog l;
    l.show();

    return a.exec();
}
