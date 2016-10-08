#include "inform.h"
#include "ui_inform.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QFile>
#include<QTextStream>
#include<QIODevice>
#include<QString>
#include<QDebug>
#include<QMessageBox>
Inform::Inform(QWidget *parent, QString se) :
    QMainWindow(parent),
    ui(new Ui::Inform)
{
    ui->setupUi(this);
   searchName=se;
    QFile rea("c:\\test2.txt");
   rea.open(QIODevice::ReadOnly);
     QTextStream red(&rea);
    QString read[5]; int c;
    for (  c=0;c<=1000;c++)
    {    read[4]=red.readLine();
        if(searchName==read[4])
        {   read[0]=read[4];
            break;
        }
        }




    if(c==1001)
    {QMessageBox* m1=new QMessageBox(this);
        m1->setText("Can't find it!");
        m1->show();
       rea.close();}
    else
    {
    read[1]=red.readLine();
    read[2]=red.readLine();
    read[3]=red.readLine();
    rea.close();
    ui->outPutName->setText(read[0]);
     ui->outPutGender->setText(read[1]);
    ui->outPutNumber->setText(read[2]);
      ui->outPutaddi->setText(read[3]);
    this->show();}

}

Inform::~Inform()
{
    delete ui;
}
