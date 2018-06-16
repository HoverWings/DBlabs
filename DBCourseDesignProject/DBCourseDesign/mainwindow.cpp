#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //set model pointer
    MySqlQueryModel* myModel = new MySqlQueryModel(this);
    this->myModel=myModel;
    myModel->mw=this;
    //set table vie selection
    ui->tableView_2->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableView_3->setSelectionBehavior(QAbstractItemView::SelectRows);

}

MainWindow::~MainWindow()
{
    delete ui;
}











void MainWindow::on_action_F_triggered() // print FLIGHTinfor 1 to view
{
    // show flight info
    myModel->opTable=0;
    myModel->set_op();
    myModel->setQuery("select * from "+myModel->opName);
    for(int i=0;i<myModel->opTitle.size();i++)
    {
        myModel->setHeaderData(i, Qt::Horizontal, myModel->opTitle[i]);
    }
    ui->tableView->setModel(myModel);
    return;
}

void MainWindow::on_deleteButton_clicked()
{
    qDebug()<<"delete!!!!";
    //myModel->set_op();
    //myModel->set_opIndex(index);
    QModelIndex selIndex=ui->tableView->currentIndex();
    selRow=selIndex.row();
    selCol=selIndex.column();
    myModel->deleteData(selIndex);
}

void MainWindow::on_addButton_clicked()
{
    myModel->set_op();
    QSqlQuery query;
    query.prepare("insert into "+myModel->opName+" values()");
    bool isOk = query.exec();
    if(!isOk)
    {
        return;
    }
    myModel->refresh();
}

//Query by the condition
void MainWindow::on_queryButton_clicked()
{
    QString str;
//    QTableView * now=ui->tableView_2;
    str="select * from "+myModel->opName+" where ";
    if(ui->FFROM_lineEdit->text().isEmpty())
    {
         QMessageBox::about(NULL, "Attention!", "请输入起始地！");
         return;
    }
    else
    {
        // the fitst condition and don't need 'and'
        qDebug()<<"起始地"<<ui->FFROM_lineEdit->text();
        str+="FFROM =";
        str+=" '";
        str+=ui->FFROM_lineEdit->text();
        str+="' ";
    }
    if(ui->FTO_lineEdit->text().isEmpty())
    {
         QMessageBox::about(NULL, "Attention!", "请输入到达地！");
         return;

    }
    else
    {
        qDebug()<<"到达地"<<ui->FTO_lineEdit->text();
        str+=" and ";
        str+="FTO =";
        str+=" '";
        str+=ui->FTO_lineEdit->text();
        str+="' ";
    }
    myModel->setQuery(str);
    for(int i=0;i<myModel->opTitle.size();i++)
    {
        myModel->setHeaderData(i, Qt::Horizontal, myModel->opTitle[i]);
    }
    ui->tableView_2->setModel(myModel);
    return;
}

void MainWindow::on_tabWidget_currentChanged(int index)
{
    myModel->clear();
    switch(index)
    {
        case 0:
        {
            myModel->opView=0;
            break;
        }
        case 1:
        {
            myModel->opTable=0;
            myModel->set_op();
            myModel->opView=1;
            setFlight_Combox();
            break;
        }
        case 2:
        {
            //order table
            myModel->opTable=1;
            myModel->set_op();
            myModel->opView=2;
            myModel->pOpView=ui->tableView_3;
            setTab2();
            break;
        }
    }
}


void MainWindow::setTab2()
{
    //set title
    myModel->setQuery("select * from "+myModel->opName);
    for(int i=0;i<myModel->opTitle.size();i++)
    {
        myModel->setHeaderData(i, Qt::Horizontal, myModel->opTitle[i]);
    }
    myModel->pOpView->setModel(myModel);
    return;
}


void MainWindow::setFlight_Combox()
{
    // set flight combox
    QComboBox* com=ui->FLISHT_comboBox;
    com->clear();
    QSqlQuery query;
    QString opName="FLIGHTinfo";
    QString showItem="FLIGHT";
    query.prepare("select "+showItem+" FROM "+opName+" group by "+showItem);
    bool isOk = query.exec();
    if(!isOk)
    {
        return;
    }
    qDebug()<<query.value(0).toString();
    while (query.next())
    {
        qDebug()<<query.value(0).toString();
        com->addItem(query.value(0).toString());
    }
    com->addItem("all");

}



//QString MainWindow::getFlight()
//{
//    return ui->FFROM_lineEdit->text();
//}



void MainWindow::on_postButton_clicked()
{
    QString opName="ORDERinfo";
    // process choose seat;
    chooseSeat_Dialog* chooseSeatD=new chooseSeat_Dialog(this,0);
    //chooseSeatD->FID=0;
    //chooseSeatD->queryFSTATUS(0);
    chooseSeatD->exec(); // to get the seat id



//    int row= myModel->pOpView->currentIndex().row();
//    QAbstractItemModel *model =myModel->pOpView->model ();
//    QVector<QString> chsVecs;
//    for(int i=0;i<myModel->opTitle.size();i++)
//    {
//        QModelIndex index= model->index(row,i);//选中行第一列的内容
//        QVariant data = model->data(index);
//        qDebug()<<data.toString();
//        chsVecs.append(data.toString());
//    }
//    int FID=chsVecs[0].toInt();
//    int UID=this->UID;
////  QDateTime current_date_time = QDateTime::currentDateTime();
////  QString current_time = current_date_time.toString("yyyy-MM-dd hh:mm:ss");
//    QString OTIME =QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss");
//    qDebug()<<OTIME;
//    QString OSTATE="unfinish";
//    QSqlQuery query;
//    query.prepare("insert into "+opName+" (FID, UID, OTIME, OSTATE) VALUES(:FID,:UID,:OTIME,':OSTATE')");
//    query.bindValue(":FID", FID);
//    query.bindValue(":UID", UID);
//    query.bindValue(":OTIME", OTIME);
//    query.bindValue(":OSTATE", OSTATE);
//    bool isOk = query.exec();
//    if(isOk)
//    {
//        setTab2();

//        qDebug()<<"预订成功";
//    }
//    else
//    {
//        printSQLError();
//        qDebug()<<"预订失败";
//        return;
//    }

}



void MainWindow::printSQLError()
{

    QSqlDatabase* db=(this->db);
    QSqlError error;
    error=db->lastError();
    qDebug()<<error;
    if(error.isValid())//发生错误时isValid()返回true
    {
        switch (error.type()) {
        case QSqlError::NoError:
            qDebug()<<"无错误";
            break;
        case QSqlError::ConnectionError://连接错语
            qDebug()<<error.text();
            break;
        case QSqlError::StatementError://语句错语
            qDebug()<<error.text();
            break;
        case QSqlError::TransactionError://事务错误
            qDebug()<<error.text();
            break;
        default://未知错误
            qDebug()<<error.text();
            break;
        }
    }
}


void MainWindow::on_Unsubscribe_pushButton_clicked()
{
    QString orderstr="";
    int row= myModel->pOpView->currentIndex().row();
    QAbstractItemModel *model =myModel->pOpView->model ();
    QVector<QString> chsVecs;
    for(int i=0;i<myModel->opTitle.size();i++)
    {
        QModelIndex index= model->index(row,i);//选中行第一列的内容
        QVariant data = model->data(index);
        qDebug()<<data.toString();
        chsVecs.append(data.toString());

    }
    int OID=chsVecs[0].toInt();
    qDebug()<<chsVecs;
    QMessageBox::StandardButton rb = QMessageBox::question(NULL, "订单退订！", "你确定要退订如下订单?", QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
    if(rb == QMessageBox::Yes)
    {
        QSqlQuery query;
        qDebug()<<"opName:"<<myModel->opName;
        query.prepare("update "+myModel->opName+" set OSTATE = :OSTATE where OID = :OID ");
//        query.prepare("UPDATE Person SET FirstName = 'Fred' WHERE LastName = 'Wilson' ");
        query.bindValue(":OSTATE","Unsubscribe");
        query.bindValue(":OID",OID);
        bool isOk = query.exec();
        // process the FSTATUS
        if(isOk)
        {
            QMessageBox::about(NULL, "Attention", "退订成功");
            qDebug()<<"退订成功";
            return;
        }
        else
        {
            QMessageBox::about(NULL, "Attention", "退订失败");
            qDebug()<<"删除失败";
            return;
        }
        // do unsubscribe
//        QMessageBox::aboutQt(NULL, "About Qt");
    }
}













