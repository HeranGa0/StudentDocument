#ifndef INFORM_H
#define INFORM_H

#include <QMainWindow>
#include<QString>

namespace Ui {
class Inform;
}

class Inform : public QMainWindow
{
    Q_OBJECT

public:
    explicit Inform(QWidget *parent = 0,QString se="b");





    ~Inform();
    QString searchName;


private:
    Ui::Inform *ui;
};

#endif // INFORM_H
