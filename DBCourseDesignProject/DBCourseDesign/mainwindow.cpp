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
    ui->tableView_1->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableView_2->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->dateEdit->setDisplayFormat("yyyy/MM/dd");
    ui->dateEdit->setCalendarPopup(true);
    ui->timeEdit->setDisplayFormat("HH:mm");
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
    pOpView->setModel(myModel);
    return;
}

void MainWindow::on_deleteButton_clicked()
{
    qDebug()<<"delete!!!!";
    //myModel->set_op();
    //myModel->set_opIndex(index);
    QModelIndex selIndex=pOpView->currentIndex();
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
    if(isDataChanged)
    {
        QDate date = ui->dateEdit->date();
        QString dateStr=date.toString("yyyy-MM-dd");
        qDebug()<<dateStr;
        str+=" and ";
        str+="FDATE =";
        str+=" '";
        str+=dateStr;
        str+="' ";
    }
    if(isTimeChanged) // the flight time should before the time
    {
        QTime time = ui->timeEdit->time();
        QString timeStr=time.toString("HH:mm:ss");
        qDebug()<<timeStr;
        str+=" and ";
        str+="FTIME <=";
        str+=" '";
        str+=timeStr;
        str+="' ";
    }
    if(ui->FLIGHT_comboBox->currentText()!="ALL")
    {
        QString Flight=ui->FLIGHT_comboBox->currentText();
        qDebug()<<"FLIGHT:"<<Flight;
        str+=" and ";
        str+="Flight =";
        str+=" '";
        str+=Flight;
        str+="' ";
    }

    myModel->setQuery(str);
    for(int i=0;i<myModel->opTitle.size();i++)
    {
        myModel->setHeaderData(i, Qt::Horizontal, myModel->opTitle[i]);
    }
    pOpView->setModel(myModel);
    return;
}

void MainWindow::on_tabWidget_currentChanged(int index)
{
    myModel->clear();
    switch(index)
    {
        case 0:
        {
            myModel->opTable=0; //FLIGHTinfo
            myModel->opView=0;  //add and delete
            pOpView=ui->tableView_0;
            break;
        }
        case 1:
        {
            myModel->opTable=0;
            myModel->opView=1;
            myModel->set_op();
            pOpView=ui->tableView_1;
            setFlight_Combox();
            break;
        }
        case 2:
        {
            //order table
            myModel->opTable=1;
            myModel->opView=2;
            myModel->set_op();
            pOpView=ui->tableView_2;
            setTab2();
            break;
        }
        case 3:
        {
            //bill table
            QSqlQuery query;
            QString str="";
            QString viewName=userName+"_ORDER";
            qDebug()<<viewName;
            qDebug()<<UID;
            str="create or replace VIEW "+ viewName +" AS select OID, FLIGHTinfo.FID , SID , FFROM, FTO, FDATE-DAY(1) as 'pick up time', FDATE, FTIME , OSTATE FROM FLIGHTinfo , ORDERinfo where FLIGHTinfo.FID=ORDERinfo.FID and OSTATE!='Unsubscribe' AND UID = "+QString::number(UID,10);
            query.prepare(str);
            bool isOK=query.exec();
            if(!isOK)
            {
                qDebug()<<"create user-order fail!";
                return;
            }
            myModel->opName=viewName;
            myModel->set_opTitle();
            pOpView=ui->tableView_3;
            setTab();
            break;
        }
    }
}


void MainWindow::setTab()
{
    //set title
    myModel->clear();
    myModel->setQuery("select * from "+myModel->opName);
    for(int i=0;i<myModel->opTitle.size();i++)
    {
        myModel->setHeaderData(i, Qt::Horizontal, myModel->opTitle[i]);
    }
    pOpView->setModel(myModel);
}


void MainWindow::setTab2()
{
    myModel->clear();
    myModel->setQuery("select * from "+myModel->opName+" where UID ="+QString::number(UID,10));
    for(int i=0;i<myModel->opTitle.size();i++)
    {
        myModel->setHeaderData(i, Qt::Horizontal, myModel->opTitle[i]);
    }
    pOpView->setModel(myModel);
}


void MainWindow::dateChanged()
{
    isDataChanged=true;
}

void MainWindow::timeChanged()
{
    isTimeChanged=true;
}

void MainWindow::setFlight_Combox()
{
    // set time edit
    ui->dateEdit->setDateTime(QDateTime::currentDateTime());
    ui->timeEdit->setDateTime(QDateTime::currentDateTime());
    isDataChanged=false;
    isTimeChanged=false;
    connect(ui->dateEdit,SIGNAL(dateChanged(QDate)),this,SLOT(dateChanged()));
    connect(ui->timeEdit,SIGNAL(timeChanged(QTime)),this,SLOT(timeChanged()));

    // set flight combox
    QComboBox* com=ui->FLIGHT_comboBox;
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
    while (query.next())
    {
        com->addItem(query.value(0).toString());
    }
    com->addItem("ALL");
    com->setCurrentIndex(-1);
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
    chooseSeatD->exec(); // to get the seat id
//    if (res == QDialog::Accepted)
//    {
//       QMessageBox::information(this, "INFORMATION", "You clicked OK button!");
//    }
//    if (res == QDialog::Rejected)
//    {
//       QMessageBox::information(this, "INFORMATION", "You clicked CANCEL button!");

//    }
    qDebug()<<seatName;
    qDebug()<<myModel->opView;
    //int row= myModel->pOpView->currentIndex().row();
    QAbstractItemModel *model =pOpView->model();
    QVector<QString> chsVecs;
    int row=0;
    for(int i=0;i<myModel->opTitle.size();i++)
    {
        QModelIndex index= model->index(row,i);//选中行第一列的内容
        QVariant data = model->data(index);
        qDebug()<<data.toString();
        chsVecs.append(data.toString());
    }
    int FID=chsVecs[0].toInt();
    int UID=this->UID;
    QString OTIME =QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss");
    qDebug()<<OTIME;
    QString OSTATE="unfinish";
    QSqlQuery query;
    query.prepare("insert into "+opName+" (FID, UID,SID, OTIME, OSTATE) VALUES(:FID,:UID,:SID,:OTIME,':OSTATE')");
    query.bindValue(":FID", FID);
    query.bindValue(":UID", UID);
    query.bindValue(":SID", seatName);
    query.bindValue(":OTIME", OTIME);
    query.bindValue(":OSTATE", OSTATE);
    bool isOK1 = query.exec();
    // decrease seat
    query.clear();
    opName="FSTATUSinfo";
    query.prepare("update "+opName+" set USABLE = 0 where SID = :SID ");
    query.bindValue(":SID",seatName);
    bool isOk2 = query.exec();
    if(isOK1&&isOk2)
    {
        setTab();
        qDebug()<<"预订成功";
    }
    else
    {
        // roll backs
        printSQLError();
        qDebug()<<"预订失败";
        return;
    }
}

// debug function
void MainWindow::printSQLError()
{

    QSqlDatabase* db=(this->db);
    QSqlError error;
    error=db->lastError();
    qDebug()<<error;
    if(error.isValid())//发生错误时isValid()返回true
    {
        switch (error.type())
        {
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
    int row= pOpView->currentIndex().row();
    QAbstractItemModel *model =pOpView->model ();
    QVector<QString> chsVecs;
    for(int i=0;i<myModel->opTitle.size();i++)
    {
        QModelIndex index= model->index(row,i);//选中行第一列的内容
        QVariant data = model->data(index);
        qDebug()<<data.toString();
        chsVecs.append(data.toString());
    }
    int OID=chsVecs[0].toInt();
    QString OSTATE=chsVecs.last();
    if(OSTATE=="Unsubscribe")
    {
        //QMessageBox::StandardButton rb = QMessageBox::information(NULL, "退订错误！", "订单状态错误", QMessageBox::Yes, QMessageBox::Yes);
        QMessageBox::information(NULL, "退订错误！", "订单状态错误", QMessageBox::Yes, QMessageBox::Yes);
    }
    //qDebug()<<chsVecs;
    //QMessageBox::StandardButton rb = QMessageBox::question(NULL, "订单退订！", "你确定要退订订单:"+QString::number(OID,10)+"从"+FFROM+"飞往"+FTO+" 于 "+FTIME, QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
    QMessageBox::StandardButton rb = QMessageBox::question(NULL, "订单退订！", "你确定要退订订单:"+QString::number(OID,10), QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
    if(rb == QMessageBox::Yes)
    {
        //process ORDERinfo
        QSqlQuery query;
        //qDebug()<<"opName:"<<myModel->opName;
        query.prepare("update "+myModel->opName+" set OSTATE = :OSTATE where OID = :OID ");
        query.bindValue(":OSTATE","Unsubscribe");
        query.bindValue(":OID",OID);
        bool isOk1 = query.exec();
        // process the FSTATUS
        query.clear();
        QString opName="FSTATUSinfo";
        query.prepare("update "+opName+" set USABLE =false 1 where SID = (select SID from ORDERinfo where OID= :OID) ");
        query.bindValue(":OID",OID);
        bool isOk2 = query.exec();
        if(isOk1&&isOk2)
        {
            QMessageBox::about(NULL, "Attention", "退订成功");
            setTab();
            qDebug()<<"退订成功";
            return;
        }
        else
        {
            // roll back
            QMessageBox::about(NULL, "Attention", "退订失败");
            qDebug()<<"删除失败";
            return;
        }
    }
}













