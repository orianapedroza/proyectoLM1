#include "modi.h"
#include "ui_modi.h"
#include <QDebug>
#include <QPixmap>
#include <QDesktopWidget>
#include <fstream>
#include <vector>
#include <string>
#include <QMessageBox>

modi::modi(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::modi)
{
    ui->setupUi(this);

    this->setGeometry(QStyle::alignedRect(Qt::LeftToRight,Qt::AlignCenter,this->size(),qApp->desktop()->availableGeometry()));
    QPixmap bkgnd("../bonito3.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);

}

modi::~modi()
{
    delete ui;
}

void modi::on_REGRESAR_clicked()
{
    this->hide();
}

void modi::on_AGREGAR_clicked()
{
   /* QString hor3 = ui->hora_3->text();
    QString min = ui->min_3->text();
    QString uni = ui->universal->currentText();
    QString Hf = hor3 +":"+ min+uni ;
    QString act = ui->actividad_2->text();
    QString tipo = ui->TIPO->currentText();

    bool lun = ui->lun->checkState();
    bool mar = ui->mar->checkState();
    bool mie = ui->mier->checkState();
    bool jue = ui->jue->checkState();
    bool vie = ui->vie->checkState();
    bool sab = ui->sab->checkState();
    bool dom = ui->dom->checkState();





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
            nuevo>>c;
            if(ori[i]==c){
                hora= hora+ori[i];
                if(ori.size()==hora.size()){
                    if(ori==hora){
                        numero=j;
                    }
                    else{
                        hora.clear();
                        i=0;
                    }
                }
                i++;
            }

          j++;
        }
        QString csm = QString::fromStdString(hora);
        qDebug()<<csm;
        qDebug()<<numero;

        nuevo.close();

        std::fstream salida;

        salida.open(num.c_str());
        if(salida.bad()) qDebug()<<"Malo";

        int pos=numero+4;

        salida.seekg(pos, salida.beg);
        int hhh= salida.tellg();
        qDebug()<<"Por aqui";
        qDebug()<<hhh;

    std::string a = act.toStdString();
    std::string t = tipo.toStdString();

    salida<<a<<"#"<<t<<"#"<<lun<<"#"<<mar<<"#"<<mie<<"#"<<jue<<"#"<<vie<<"#"<<sab<<"#"<<dom<<'\n';

///        salida<<h<<"#"<<a<<"#"<<t<<"#"<<lun<<"#"<<mar<<"#"<<mie<<"#"<<jue<<"#"<<vie<<"#"<<sab<<"#"<<dom<<'\n';
       /// salida<<"holaaaaaaaaaaaaaaaaaaaaaaa programacion";
        salida.close();*/
        QString hor3 = ui->hora_3->text();
        QString min = ui->min_3->text();
        QString uni = ui->universal->currentText();
        QString Hf = hor3 +":"+ min+uni ;
        QString act = ui->actividad_2->text();
        QString tipo = ui->TIPO->currentText();

        bool lun = ui->lun->checkState();
        bool mar = ui->mar->checkState();
        bool mie = ui->mier->checkState();
        bool jue = ui->jue->checkState();
        bool vie = ui->vie->checkState();
        bool sab = ui->sab->checkState();
        bool dom = ui->dom->checkState();



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
            std::fstream salida;

            std::string horaas= Hf.toStdString();

            salida.open(num.c_str());
            if(salida.bad()) qDebug()<<"Malo";

            std::string a = act.toStdString();
            std::string t = tipo.toStdString();

            for(int i=0;i<todo.size();i++){
                std::string ocho = todo[i].substr(0,5);
                if(ocho == horaas){

                    salida<<horaas<<"#"<<a<<"#"<<t<<"#"<<lun<<"#"<<mar<<"#"<<mie<<"#"<<jue<<"#"<<vie<<"#"<<sab<<"#"<<dom<<'\n';

                }
                else{
                    salida<<todo[i]<<'\n';

                }
            }
    QMessageBox::information(this,"Registro","Registro modificado");


}
