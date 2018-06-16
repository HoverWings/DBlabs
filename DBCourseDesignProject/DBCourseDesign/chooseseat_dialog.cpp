#include "chooseseat_dialog.h"
#include "ui_chooseseat_dialog.h"

chooseSeat_Dialog::chooseSeat_Dialog(QWidget *parent,int FID) :
    QDialog(parent),
    ui(new Ui::chooseSeat_Dialog)
{
    ui->setupUi(this);
    this->FID=FID;
    qDebug()<<this->FID;
    setWindowTitle(tr("请选择座位！"));
    setStyleSheet("background-color:white;"
                  "QPushButton{"
                  "background-color:white;"
                  "color:black;"
                  "text-align:center;"
                  "border-radius: 8px;"
                  "border: 2px groove gray;"
                  "border-style: outset;"
                  "}");
    setButtonGroup(FID);
    setImage(FID);
    queryFSTATUS(FID);
}

void chooseSeat_Dialog::setImage(int FID)
{
    // set plane image
//    QString fileName = QFileDialog::getOpenFileName(
//                    this, "open image file",
//                    ".",
//                    "Image files (*.bmp *.jpg *.pbm *.pgm *.png *.ppm *.xbm *.xpm);;All files (*.*)");
    QString fileName="FSTATUSimage/B747-89L";
    QImage *image;
    if(fileName != "")
    {
        if(image->load(fileName))
        {
            QGraphicsScene *scene = new QGraphicsScene;
            scene->addPixmap(QPixmap::fromImage(*image));
            ui->graphicsView->setScene(scene);
            ui->graphicsView->resize(image->width() + 10, image->height() + 10);
            ui->graphicsView->show();
        }
    }
}


void chooseSeat_Dialog::setButtonGroup(int FID)
{
    // set button group
    QGridLayout *layout = ui->gridLayout;
    QSqlQuery query;
    QString opName="FLIGHTinfo";
    QString showItem="FLIGHT";
    QString str="select * from FSTATUSinfo where FID ="+QString::number(FID, 10);
    query.prepare(str);
    bool isOk = query.exec();
    if(!isOk)
    {
        qDebug()<<"set seat button fail!";
        return;
    }
    ;
    QPushButton* pushbutton=NULL;
    int rowBefore=1;
    int row=1;
    int col=-1;
    int len=0;
    int usable=-1;
    while (query.next())
    {
        //qDebug()<<query.value(2).toString();
        usable=query.value(2).toString().toInt();
        len=query.value(1).toString().length();
        //qDebug()<<query.value(1).toString();
        row=query.value(1).toString().mid(0,len-1).toInt();
        if(row!=rowBefore)
        {
            col=0;
            rowBefore=row;
        }
        else
        {
            col+=1;
        }
        pushbutton = new QPushButton();
        pushbutton->setText(query.value(1).toString());
        pushButtonMap[query.value(1).toString()]=pushbutton;
        layout->addWidget(pushbutton,row,col,1,1);
        if(usable)
        {
            pushbutton->setCheckable(true);
            pushbutton->setAutoExclusive(true);
        }
        else
        {
            pushbutton->setCheckable(false);
            pushbutton->setStyleSheet("background-color: rgb(170, 0, 255);"); //set the background color
        }

    }
}



chooseSeat_Dialog::~chooseSeat_Dialog()
{
    delete ui;
}


//query the choosable seat
void chooseSeat_Dialog::queryFSTATUS(int FID)
{
    StatusModel=new MySqlQueryModel(this);
    StatusModel->opTable=2;
    StatusModel->set_op();
    QString str="select * from "+StatusModel->opName+" where FID ="+QString::number(FID, 10)+" AND USABLE = 1";
    //qDebug()<<str;
    StatusModel->setQuery(str);
    StatusModel->query().bindValue(":FID",FID);
    StatusModel->query().exec();
    if(StatusModel->query().next())
    {
        qDebug()<<StatusModel->query().value(0).toString();
    }
    else
    {
        qDebug()<<"No Search Result!";
    }
    for(int i=0;i<StatusModel->opTitle.size();i++)
    {
        StatusModel->setHeaderData(i, Qt::Horizontal, StatusModel->opTitle[i]);
    }
    ui->FSTATUS_tableView->setModel(StatusModel);
    ui->FSTATUS_tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
//    qDebug()<<"columnCount"<<StatusModel->columnCount();
//    qDebug()<<"rowCount"<<StatusModel->rowCount();
//    for(int i=0;i<myModel->opTitle.size();i++)
//    {
//        QModelIndex index= model->index(row,i);//选中行第一列的内容
//        QVariant data = model->data(index);
//        qDebug()<<data.toString();
//        chsVecs.append(data.toString());
//    }
//    if(isOk)
//    {
//        //QMessageBox::about(NULL, "Attention", "退订成功");
//        qDebug()<<"查询座位成功";
//    }
//    else
//    {
//        QMessageBox::about(NULL, "Attention", "查询座位失败!");
//        qDebug()<<"查询座位失败";
//        return;
//    }
}

void chooseSeat_Dialog::on_chooseSteat_pushButton_clicked()
{

    QMapIterator<QString,QPushButton*>  i(pushButtonMap);
    seatName="";
    while (i.hasNext())
    {
//        qDebug() <<i.next().key()<<i.next().value();
        if(i.next().value()->isChecked()==true)
        {
            seatName=i.key();
            break;
        }
    }
    if(seatName=="")
    {
        QModelIndex selIndex=ui->FSTATUS_tableView->currentIndex();
        int selRow=selIndex.row();
        int selCol=selIndex.column();
        qDebug()<<selRow;
        QModelIndex index= StatusModel->index(selRow,1);
        QVariant data = StatusModel->data(index);
        qDebug()<<data.toString();
        seatName=data.toString();
    }
    QMessageBox::StandardButton rb = QMessageBox::question(NULL, "请确认座位", "您选择的座位为:"+seatName, QMessageBox::Yes | QMessageBox::No, QMessageBox::Yes);
    if(rb == QMessageBox::Yes)
    {
        this->close();
    }
    if(rb == QMessageBox::Yes)
    {
        return;
    }
    //rb = information(NULL, "Show Qt", "Do you want to show Qt dialog?", QMessageBox::Yes QMessageBox::No, QMessageBox::Yes);
}
