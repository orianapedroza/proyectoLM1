#ifndef CRONOGRAMA_H
#define CRONOGRAMA_H


#include <QDialog>
#include "modi.h"
#include "eliminar.h"

namespace Ui {
class cronograma;
}

class cronograma : public QDialog
{
    Q_OBJECT

public:
    explicit cronograma(QWidget *parent = 0);
    void vercro();
    ~cronograma();

private slots:

    void on_REGRESAR_clicked();

    void on_MODIFICAR_clicked();

    void on_ELIMINAR_clicked();
    
private:
    Ui::cronograma *ui;
    modi p;
    eliminar j;

};

#endif // CRONOGRAMA_H
