#ifndef DOCUMENT_H
#define DOCUMENT_H

#include <QMainWindow>

namespace Ui {
class document;
}

class document : public QMainWindow
{
    Q_OBJECT

public:
    explicit document(QWidget *parent = 0);
    ~document();
 public slots:
    void save();

private:
    Ui::document *ui;
};

#endif // DOCUMENT_H
