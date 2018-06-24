#include "planificar.h"
#include "ui_planificar.h"
#include <fstream>
#include <QDebug>
#include <QPixmap>
planificar::planificar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::planificar)
{
    ui->setupUi(this);

    //ui->setupUi(this);
    QPixmap bkgnd("../bonito3.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);
}

planificar::~planificar()
{
    delete ui;
}

void planificar::on_botonagregar_clicked()
{
    QString hor = ui->hora_2->text();
    QString act = ui->actividad_2->text();
    QString tipo = ui->tipoact_2->text();

    bool lun = ui->lun->checkState();
    bool mar = ui->mar->checkState();
    bool mie = ui->mier->checkState();
    bool jue = ui->jue->checkState();
    bool vie = ui->vie->checkState();
    bool sab = ui->sab->checkState();
    bool dom = ui->dom->checkState();

    qDebug()<<hor;
    qDebug()<<act;
    qDebug()<<lun;

    std::ifstream otro;
    otro.open("../bd/actual.txt");
    std::string num;

        getline(otro, num, '\n');


    otro.close();

    QString rafa = QString::fromStdString(num);
    qDebug()<<"rafaAqui esta rafa";
    qDebug()<<rafa;

    std::fstream salida;

    salida.open(num.c_str());
    if(salida.bad()) qDebug()<<"Malo";

    salida.seekg(0, salida.end);

    std::string h = hor.toStdString();
    std::string a = act.toStdString();
    std::string t = tipo.toStdString();

    salida<<h<<"#"<<a<<"#"<<t<<"#"<<lun<<"#"<<mar<<"#"<<mie<<"#"<<jue<<"#"<<vie<<"#"<<sab<<"#"<<dom<<'\n';

    salida.close();
}


void planificar::on_regresar_clicked()
{

   /* std::ifstream otro;
    otro.open("../bd/actual.txt");
    std::string num;

        getline(otro, num, '\n');


    otro.close();

    std::ofstream nuevo;
    nuevo.open(num.c_str());
    nuevo.close();*/
    this->close();
}
