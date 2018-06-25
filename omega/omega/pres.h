#ifndef PRES_H
#define PRES_H

#include <QWidget>
#include "login.h"
#include "registrar.h"

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

    void on_ingresar_clicked();

    void on_registrar_clicked();

    void on_SALIR_clicked();

private:
    Ui::pres *ui;
    login pre;
    registrar h;
};

#endif // PRES_H
