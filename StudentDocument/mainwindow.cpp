#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "inform.h"
#include "ui_inform.h"
#include "document.h"
#include "ui_document.h"
#include "help.h"
#include "ui_help.h"
#include "warning.h"
#include "ui_warning.h"
#include<QMenuBar>
#include<QMenu>
#include<QAction>
#include "about.h"
#include "ui_about.h"
#include<QMessageBox>
GaoProduct::GaoProduct(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
     this->setWindowTitle("GaoProduct");
    QMenu * inf= new QMenu(this);
    inf= (ui->menuBar->addMenu("Information"));
    QAction * Quit= new QAction(inf);
    Quit= inf->addAction("Quit");
    connect(Quit,SIGNAL(triggered(bool)),this,SLOT(close()));
    QAction * Help = new QAction (inf);
    Help =inf->addAction("Help");
    QAction * About = new QAction(inf);
    About=inf->addAction("About");
    ifEmpty= ui->Sname->text();
    connect(Help,SIGNAL(triggered(bool)),this,SLOT(openHelp()));
    connect(ui->wantCreate,SIGNAL(clicked(bool)),this,SLOT(openCreate()));
    connect(ui->search,SIGNAL(clicked(bool)),this,SLOT(openInform()));
     connect(ui->cLear,SIGNAL(clicked(bool)),this,SLOT(openWa()));
     connect(About,SIGNAL(triggered(bool)),this,SLOT(openAbout()));
}
void GaoProduct::openWa()
{
    Warning*w1=new Warning;
    w1->show();
}

void GaoProduct::openInform()
{   if((ui->Sname->text())==ifEmpty)
    {
        QMessageBox b3(this);
        b3.setWindowTitle("warning");
        b3.setText("Please type the Search Name!");

        b3.exec();

    }
        else{
    Inform * i1=new Inform(this,(ui->Sname->text()));
    }
}

void GaoProduct::openCreate()
{
    document * d1 = new document;
    d1->show();
}

void GaoProduct::openHelp()
{
    Help * h1 =new Help;
    h1->show();
}
void GaoProduct::openAbout()
{
    About* a1= new About(this);
    a1->show();
}

GaoProduct::~GaoProduct()
{
    delete ui;
}
