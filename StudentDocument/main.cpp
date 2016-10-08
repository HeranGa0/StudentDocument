#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    GaoProduct w;
    int *b;
    w.show();

    return a.exec();
}
