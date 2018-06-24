#include "login.h"
#include "usuario.h"
#include "ui_login.h"
#include <QDebug>
#include <QMessageBox>
#include <QPixmap>

login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    QPixmap bkgnd("/home/maferg/Proyecto/proyectoLM1/pruebas/bonito3.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);
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
           this->x.setFixedSize(600,435);
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
