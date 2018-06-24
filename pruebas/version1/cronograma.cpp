#include "cronograma.h"
#include "ui_cronograma.h"
#include <fstream>
#include <QDebug>


cronograma::cronograma(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cronograma)
{
    ui->setupUi(this);


   ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
   QTableWidgetItem *itab;
   itab = new QTableWidgetItem; // add this line
   itab->setText("9am");


   ui->tableWidget->setItem(0, 0, itab);

  /// int num=0;

   ///ui->tableWidget->insertRow(ui->tableWidget->rowCount());

    std::ifstream nuevo;
    nuevo.open("../bd/Entrada.txt");

    if(nuevo.bad()){
        qDebug()<<"No sirvio";
    }
    qint8 numero =0;

    while(!nuevo.eof()){

        std::string hora;
        std::string act;
        std::string tipo;
        std::string dias;

        getline(nuevo,hora,':');
        getline(nuevo,act,':');
        getline(nuevo,tipo,':');
        getline(nuevo,dias,'\n');

        QString h = QString::fromStdString(hora);
        QString a = QString::fromStdString(act);
        QString t = QString::fromStdString(tipo);
        QString d = QString::fromStdString(dias);
        qDebug()<<h;
        qDebug()<<a;
        qDebug()<<t;
        qDebug()<<d;

         ui->tableWidget->insertRow(ui->tableWidget->rowCount());


            QTableWidgetItem *ho;
            ho = new QTableWidgetItem; // add this line
            ho->setText(h);
            ui->tableWidget->setItem(numero, 0, ho);

            QTableWidgetItem *ac;
            ac = new QTableWidgetItem; // add this line
            ac->setText(a);
            ui->tableWidget->setItem(numero, 1, ac);

            qint8 g=2;
            for(int i=0; i<d.size();i=i+2){
                QChar m = d[i];
                QTableWidgetItem *da;
                da = new QTableWidgetItem; // add this line
                da->setText(m);
                ui->tableWidget->setItem(numero, g, da);
                g++;
            }
        ///num++;
        numero++;
    }
    nuevo.close();

}

cronograma::~cronograma()
{
    delete ui;
}
