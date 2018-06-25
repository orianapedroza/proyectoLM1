#ifndef MENU_H
#define MENU_H

#include <QDialog>
#include "planificar.h"
#include "cronograma.h"

namespace Ui {
class menu;
}

class menu : public QDialog
{
    Q_OBJECT

public:
    explicit menu(QWidget *parent = 0);
    ~menu();

private slots:

    void on_PLANIFICAR_clicked();

    void on_VER_clicked();

    void on_SALIR_clicked();

private:
    Ui::menu *ui;
    planificar r;
    cronograma p;

};

#endif // MENU_H
