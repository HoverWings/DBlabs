#include "login_dialog.h"
#include "ui_login_dialog.h"

login_dialog::login_dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login_dialog)
{
    ui->setupUi(this);
}

login_dialog::~login_dialog()
{
    delete ui;
}

void login_dialog::on_login_pushButton_clicked()
{
    QString username=ui->usrName_lineEdit->text();
    QString password=ui->password_lineEdit->text();
    QSqlQuery query;
    query.exec("select DBCourseDesign;");
    query.prepare("select * from user where `username`=:username and password=:password;");
    query.bindValue(0, username);
    query.bindValue(1, password);
    query.exec();
    if (query.next())
    {
        qDebug() << query.value(0).toString();
    }
    else
    {
        QMessageBox::warning(NULL,"警告","用户名或者密码错误！");
        return;
    }
    MainWindow* w=new MainWindow;
    this->close();
    w->show();
}
