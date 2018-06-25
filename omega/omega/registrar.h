#ifndef REGISTRAR_H
#define REGISTRAR_H

#include <QWidget>
#include "login.h"

namespace Ui {
class registrar;
}

class registrar : public QWidget
{
    Q_OBJECT

public:
    explicit registrar(QWidget *parent = 0);
    ~registrar();

private slots:

    void on_REGISTRAR_clicked();

    void on_SALIR_clicked();

private:
    Ui::registrar *ui;
    login n;
};

#endif // REGISTRAR_H
