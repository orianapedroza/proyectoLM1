#include "login.h"
#include "usuario.h"
#include "ui_login.h"
#include <QDebug>
#include <QMessageBox>

login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
}

login::~login()
{
    delete ui;
}

void login::on_botonlogin_clicked()
{
        Usuario user;

        QString nombre = ui->nombre->text();
        QString clave = ui->clave->text();
        std::string nuevo = "m";
        std::string nuevacla = "m";

        std::string n1= nombre.toStdString();
        std::string c1= clave.toStdString();

        user.mod_nombre(n1);
        user.mod_contrasenna(c1);

        qDebug()<<nombre;
        qDebug()<<clave;

        if((user.ver_nombre()==nuevo) && (user.ver_contrasenna()==nuevacla) ){

           this->x.show();
           this->hide();



            /*QMessageBox::information(this,"Login","Entraste");
            qDebug()<<"Clave correcta";*/
        }
        else{
            QMessageBox::information(this,"Login","Clave invalida, reintente");
            qDebug()<<"Clave incorrecta";
        }
}
