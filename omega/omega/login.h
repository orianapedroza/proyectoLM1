#ifndef LOGIN_H
#define LOGIN_H

#include <QDialog>
#include "menu.h"

namespace Ui {
class login;
}

class login : public QDialog
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = 0);
    ~login();

private slots:
    void on_botonlogin_clicked();

    void on_salir_clicked();

private:
    Ui::login *ui;
    menu x;

};

#endif // LOGIN_H
