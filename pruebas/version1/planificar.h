#ifndef PLANIFICAR_H
#define PLANIFICAR_H

#include <QDialog>

namespace Ui {
class planificar;
}

class planificar : public QDialog
{
    Q_OBJECT

public:
    explicit planificar(QWidget *parent = 0);
    ~planificar();

private slots:
    void on_botonagregar_clicked();

private:
    Ui::planificar *ui;
};

#endif // PLANIFICAR_H
