#include "mainwindow.h"
#include "login_dialog.h"
#include <QApplication>
#include <QSqlQuery>
#include <QMessageBox>
#include <QBuffer>
#include <QDir>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("hover");
    db.setDatabaseName("DBCourseDesign");
    db.setUserName("root");
    db.setPassword("990123");
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
//    QString currentPath;
//    QDir dir;
//    currentPath=dir.currentPath();
//    qDebug()<<"path"<<currentPath;
//    QPixmap image("./FMODELimage/B747-89L.jpg");
//    QByteArray bytes;
//    QBuffer buffer(&bytes);
//    buffer.open(QIODevice::WriteOnly);
//    image.save(&buffer, "PNG");
//    QVariant imageData(bytes);

//    QSqlQuery query;
//    query.prepare("insert into FMODELinfo(FMODEL,Fimage),values(:FMODEL,:Fimage)");
//    query.bindValue(":FMODEL", "B747-89L");
//    query.bindValue(":Fimage", imageData);
//    bool isOK=query.exec();


//    QSqlQuery query;
//    query.prepare("DELETE FROM FLIGHTinfo WHERE FID =1");
//    bool isOk = query.exec();
//    qDebug() <<"delete"<<isOk;

//    QString str="asd";

//    int a=str.toInt();
    login_dialog l;
    l.db=&db;
    l.show();

    return a.exec();
}
