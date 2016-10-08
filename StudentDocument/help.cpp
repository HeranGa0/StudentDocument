#include "help.h"
#include "ui_help.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"

Help::Help(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Help)
{
    ui->setupUi(this);
    connect(ui->ok,SIGNAL(clicked(bool)),this,SLOT(close()));
}

Help::~Help()
{
    delete ui;
}
