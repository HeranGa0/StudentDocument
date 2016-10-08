#include "document.h"
#include "ui_document.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QFile>
#include<QTextStream>
#include<QIODevice>
#include<QString>
#include<QDebug>
document::document(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::document)
{
    ui->setupUi(this);
    connect(ui->quitx,SIGNAL(clicked(bool)),this,SLOT(close()));
    connect (ui->save,SIGNAL(clicked(bool)),this,SLOT(save()));
}

void document::save()
{
    QFile Inp ("c:\\test2.txt");
    Inp.open(QIODevice::Text|QIODevice::Append);
    QTextStream Inu(&Inp);

    QString input[5];
    input[0]=(ui->stuname->text());
    Inu<<endl<<input[0];
    if (ui->male->isChecked())
    {
        input[1]=(ui->male->text());
        Inu<<endl<<input[1];
    }
    else
    {
        input[1]=(ui->female->text());
        Inu<<endl<<input[1];
    }
    int num=ui->stunum->value();
    input[2]=QString::number(num);
    Inu<<endl<<input[2];
    input[3]=ui->addi->toPlainText();
    Inu<<endl<<input[3];
    Inp.close();
}

document::~document()
{
    delete ui;
}
