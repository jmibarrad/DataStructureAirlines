#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "qlabel.h"
#include <QMessageBox>
#include <QXmlStreamReader>
#include <QPixmap>
#include <QMouseEvent>
#include <QtXml/QDomDocument>
#include <QFile>
#include <QTextStream>

MainWindow::MainWindow(QWidget *parent) :  QMainWindow(parent),   ui(new Ui::MainWindow)
{  ui->setupUi(this);
    this->setWindowTitle("TEST");
    this->setWindowIcon(QIcon("air.png"));
    this->setFixedSize(1366,700);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//NOTE: "le" stand for LineEdit
void MainWindow::mousePressEvent(QMouseEvent *cl){

    if (ui->leName->text().compare("")!=0&&ui->leCode->text()!=0&&ui->leCost->text()!=0){
    QPixmap mark=QPixmap("mark.png");
    QLabel *imagen=new QLabel(ui->map) ;
    imagen->setPixmap(mark);
    imagen->setScaledContents(true);
    this->x=cl->x()-5;
    this->y=cl->y()-10;
    imagen->setGeometry(x,y,10,10);
    imagen->raise();
    imagen->show();
    }

}

//Found a bug... Se supone que dibujara la linea

//void MainWindow::drawLine(){

//    line = new QFrame(w);
//    line->setObjectName(QString::fromUtf8("line"));
//    line->setGeometry(QRect(320, 150, 118, 3));
//    line->setFrameShape(QFrame::HLine);
//    line->setFrameShadow(QFrame::Sunken);
//}


//NOTE: "le" stand for LineEdit
void MainWindow::on_btnAdd_clicked()
{
    if (ui->leCost->text().compare("")!=0&&ui->leCode->text()!=0&&y>0&&y<400&&ui->leName->text().compare("")!=0){

        QDomDocument docs;
        QDomElement root= docs.createElement("TestAirports");
        docs.appendChild(root);

        //Inicialize File
        QFile xml ("TestAirports.xml");
        QDomElement airport=docs.createElement("Airports");
        airport.setAttribute("Country",ui->leName->text());
        airport.setAttribute("Airport",ui->leCode->text());
        airport.setAttribute("Cost",ui->leCost->text());
        airport.setAttribute("x",this->x);
        airport.setAttribute("y",this->y);
        root.appendChild(airport);

        xml.open(QIODevice::WriteOnly);
        QTextStream stream(&xml);
        stream<<docs.toString();

        xml.close();

    }
}

