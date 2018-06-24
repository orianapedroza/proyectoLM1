#include "login.h"
#include "usuario.h"
#include "ui_login.h"
#include <QDebug>
#include <QMessageBox>
#include <QPixmap>
#include <fstream>

login::login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    QPixmap bkgnd("../bonito3.jpg");
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

        std::string name = nombre.toStdString();
        std::string pass = clave.toStdString();

        std::string comp;
        comp="../bd/"+name+pass+".txt";

        QString m = QString::fromStdString(comp);


        qDebug()<<m;


        if (std::ifstream(comp.c_str(),std::ios::in))
        {
             qDebug()<<"El archivo existe";
             this->x.setFixedSize(650,435);
             this->x.show();
             this->hide();

        }
        else{
            QMessageBox::warning(this,"Login","Clave invalida, reintente");
            qDebug()<<"Clave incorrecta";
        }

        std::ofstream arc;
        arc.open("../bd/actual.txt", std::ios::trunc);
            if (arc.is_open()){
                arc<<comp;
                qDebug()<<"Entramos";
            }
            else qDebug()<<"No Entramos";
        arc.close();

                /*

        if((user.ver_nombre()==nuevo) && (user.ver_contrasenna()==nuevacla) ){

*/


            /*QMessageBox::information(this,"Login","Entraste");
            qDebug()<<"Clave correcta";*/
       /* }
        else{
            QMessageBox::information(this,"Login","Clave invalida, reintente");
            qDebug()<<"Clave incorrecta";
        }*/
}

void login::on_salir_clicked()
{
    hide();
}
