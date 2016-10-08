#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QString>
namespace Ui {
class MainWindow;
}

class GaoProduct : public QMainWindow
{
    Q_OBJECT

public:
    explicit GaoProduct(QWidget *parent = 0);
    ~GaoProduct();
    QString ifEmpty;
    public slots:
    void openHelp();
    void openCreate();
    void openInform();
    void openWa();
    void openAbout();

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
