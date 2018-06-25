#include "planificar.h"
#include "ui_planificar.h"
#include <fstream>
#include <QDebug>
#include <QPixmap>
#include <QMessageBox>

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

void planificar::on_AGREGAR_clicked()
{
    //QString hor = ui->hora_2->text();
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

    qDebug()<<uni;
    qDebug()<<Hf;
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

    std::string h = Hf.toStdString();
    std::string a = act.toStdString();
    std::string t = tipo.toStdString();

    salida<<h<<"#"<<a<<"#"<<t<<"#"<<lun<<"#"<<mar<<"#"<<mie<<"#"<<jue<<"#"<<vie<<"#"<<sab<<"#"<<dom<<'\n';

    salida.close();
    QMessageBox::information(this,"Registro","Registro existoso");
}

void planificar::on_REGRESAR_clicked()
{
        this->close();
}
