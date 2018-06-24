#ifndef CRONOGRAMA_H
#define CRONOGRAMA_H

#include <QDialog>


namespace Ui {
class cronograma;
}

class cronograma : public QDialog
{
    Q_OBJECT

public:
    explicit cronograma(QWidget *parent = 0);
    ~cronograma();

private:
    Ui::cronograma *ui;

};

#endif // CRONOGRAMA_H
