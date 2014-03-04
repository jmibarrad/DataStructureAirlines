#include "boss.h"
#include "ui_boss.h"
#include "mainwindow.h"
#include "client.h"

Boss::Boss(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Boss)
{
    ui->setupUi(this);
    this->setWindowTitle("Administrator");
}

//Named Boss for Administrator
Boss::~Boss()
{
    delete ui;
}

//Show Adminisrator WindowPane
void Boss::on_btnAdmin_clicked()
{
    MainWindow *ma= new MainWindow();
    ma->show();
    this->hide();

}

//Show client WindowPane
void Boss::on_btnClient_clicked()
{
    Client *cl=new Client();
    cl->show();
    this->hide();
}
