#include "client.h"
#include "ui_client.h"

Client::Client(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Client)
{
    ui->setupUi(this);
}

//Just graphics made:: NO CODE YET
Client::~Client()
{
    delete ui;
}
