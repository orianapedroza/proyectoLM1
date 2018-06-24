#include "registrar.h"
#include "ui_registrar.h"
#include <QDesktopWidget>
#include <QStyle>
#include <QPixmap>
#include <QDebug>
#include <QMessageBox>

registrar::registrar(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::registrar)
{
    ui->setupUi(this);
    QPixmap bkgnd("/home/maferg/Proyecto/proyectoLM1/pruebas/bonito3.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);
}

registrar::~registrar()
{
    delete ui;
}

void registrar::on_pushButton_clicked()
{
    QString nom = ui->NOMBRE->text();
    QString ape = ui->APELLIDO->text();
    QString usu = ui->USUARIO->text();
    QString cor = ui->CORREO->text();
    QString con = ui->CONTRA->text();

    if((nom=="") or (nom.size()<2)){
         QMessageBox::information(this,"Login","Nombre invalido, reintente");
    }
    else{
        if((ape=="") or (ape.size()<2)){
            QMessageBox::information(this,"Login","Apellido invalido, reintente");
        }
        else{
            if((usu=="") or (usu.size()<2)){
                QMessageBox::information(this,"Login","Usuario invalido, reintente");
            }
            else{
                if((cor=="") or (cor.size()<2)){
                    QMessageBox::information(this,"Login","Correo invalido, reintente");
                }
                else{
                    if((con=="") or (con.size()<2)){
                        QMessageBox::information(this,"Login","Clave invalido, reintente");
                    }
                    else{
                        this->n.show();
                          hide();
                    }
                }
            }
        }
    }

    qDebug()<<nom;
    qDebug()<<ape;
    qDebug()<<usu;
    qDebug()<<cor;
    qDebug()<<con;


   /// this->n.show();

}