#include "warning.h"
#include "ui_warning.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QFile>
#include<QTextStream>
#include<QIODevice>
#include<QString>
#include<QDebug>
Warning::Warning(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Warning)
{
    ui->setupUi(this);
    connect(ui->yes,SIGNAL(clicked(bool)),this,SLOT(cleard()));
    connect(ui->no,SIGNAL(clicked(bool)),this,SLOT(close()));
}
void Warning::cleard()
{
    QFile cf("c:\\test2.txt");
    cf.open(QIODevice::Truncate|QIODevice::WriteOnly);
    cf.close();
     this->close();
}

Warning::~Warning()
{
    delete ui;
}

