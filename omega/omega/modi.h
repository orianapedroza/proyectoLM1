#ifndef MODI_H
#define MODI_H

#include <QDialog>

namespace Ui {
class modi;
}

class modi : public QDialog
{
    Q_OBJECT

public:
    explicit modi(QWidget *parent = 0);
    ~modi();

private slots:
    void on_REGRESAR_clicked();

    void on_AGREGAR_clicked();

private:
    Ui::modi *ui;
};

#endif // MODI_H
