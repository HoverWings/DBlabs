#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    MySqlQueryModel* myModel = new MySqlQueryModel(this);
    this->myModel=myModel;
    myModel->mw=this;
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_action_F_triggered() // print FLIGHTinfor 1 to view
{
    // show flight info
    myModel->opTable=1;
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
    myModel->setQuery("insert into "+myModel->opName+" values()");
    myModel->refresh();
}
