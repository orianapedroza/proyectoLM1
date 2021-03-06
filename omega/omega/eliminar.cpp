#include "eliminar.h"
#include "ui_eliminar.h"
#include <QDebug>
#include <QPixmap>
#include <QDesktopWidget>
#include <fstream>
#include <vector>
#include <string>
#include <QMessageBox>

eliminar::eliminar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::eliminar)
{
    ui->setupUi(this);
    this->setGeometry(QStyle::alignedRect(Qt::LeftToRight,Qt::AlignCenter,this->size(),qApp->desktop()->availableGeometry()));
    QPixmap bkgnd("../bonito3.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);
}

eliminar::~eliminar()
{
    delete ui;
}

void eliminar::on_ELIMINAR_clicked()
{
    QString hor3 = ui->hora_3->text();
    QString min = ui->min_3->text();
    QString uni = ui->universal->currentText();
    QString Hf = hor3 +":"+ min+uni ;

    std::vector<std::string> todo;

    std::ifstream otro;
        otro.open("../bd/actual.txt");
        std::string num;

            getline(otro, num, '\n');


        otro.close();
        std::ifstream nuevo;
        nuevo.open(num.c_str(),std::ios::in);

        if(nuevo.bad()){
            qDebug()<<"No sirvio";
        }

        std::string nue = Hf.toStdString();

        std::string ori = nue;
        int numero = 0, i=0, j=0;
        std::string hora;
        char c;
        while(!nuevo.eof()){

            getline(nuevo,hora,'\n');
            todo.push_back(hora);
        }

        nuevo.close();
        remove(num.c_str());
        std::ofstream salida;

       /// std::string horaas= Hf.toStdString();



        salida.open(num.c_str());
        salida.clear();
        if(salida.bad()) qDebug()<<"Malo";



        for(int i=0;i<todo.size();i++){
            std::string ocho = todo[i].substr(0,5);
            if(ocho != nue){
                salida<<todo[i]<<'\n';
            }
            ocho.clear();

        }
        QMessageBox::information(this,"Registro","Registro eliminado");

}



void eliminar::on_REGRESAR_clicked()
{
    this->hide();
}
