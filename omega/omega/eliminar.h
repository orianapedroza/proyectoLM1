#ifndef ELIMINAR_H
#define ELIMINAR_H

#include <QDialog>

namespace Ui {
class eliminar;
}

class eliminar : public QDialog
{
    Q_OBJECT

public:
    explicit eliminar(QWidget *parent = 0);
    ~eliminar();

private slots:
    void on_ELIMINAR_clicked();


    void on_REGRESAR_clicked();

private:
    Ui::eliminar *ui;
};

#endif // ELIMINAR_H
