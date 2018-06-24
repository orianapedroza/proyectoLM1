#ifndef PRES_H
#define PRES_H

#include <QWidget>
#include "login.h"

namespace Ui {
class pres;
}

class pres : public QWidget
{
    Q_OBJECT

public:
    explicit pres(QWidget *parent = 0);
    ~pres();

private slots:
    void on_pushButton_clicked();

private:
    Ui::pres *ui;
    login pre;
};

#endif // PRES_H
