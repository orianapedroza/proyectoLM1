#include "cronograma.h"
#include "ui_cronograma.h"
#include <fstream>
#include <QDebug>
#include <QPixmap>
#include <QDesktopWidget>


cronograma::cronograma(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cronograma)
{
    ui->setupUi(this);

    QPixmap bkgnd("../bonito3.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);



  /// int num=0;

   ///ui->tableWidget->insertRow(ui->tableWidget->rowCount());


  /* std::ifstream otro;
   otro.open("../bd/actual.txt");
   std::string num;

       getline(otro, num, '\n');


   otro.close();


    std::ifstream nuevo;
    nuevo.open(num.c_str());

    if(nuevo.bad()){
        qDebug()<<"No sirvio";
    }
    qint8 numero =0;


    while(!nuevo.eof()){

        std::string hora;
        std::string act;
        std::string tipo;
        std::string dias;

        getline(nuevo,hora,'#');
        getline(nuevo,act,'#');
        getline(nuevo,tipo,'#');
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
                if(m=='1'){
                    QTableWidgetItem *da;
                    da = new QTableWidgetItem; // add this line
                    da->setText(" ");
                    da->setBackground(QColor(15, 139, 100, 127));
                    ui->tableWidget->setItem(numero, g, da);
                }
                g++;
            }
        ///num++;
        numero++;
    }
    nuevo.close();*/

}

cronograma::~cronograma()
{
    delete ui;
}


void cronograma::vercro(){

    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
   /* QTableWidgetItem *itab;
    itab = new QTableWidgetItem; // add this line
    itab->setText("9am");*/


    ///ui->tableWidget->setItem(0, 0, itab);
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
        qint8 numero =0;


        while(!nuevo.eof()){

            std::string hora;
            std::string act;
            std::string tipo;
            std::string dias;

            getline(nuevo,hora,'#');
            getline(nuevo,act,'#');
            getline(nuevo,tipo,'#');
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
                    if(m=='1'){
                        QTableWidgetItem *da;
                        da = new QTableWidgetItem; // add this line
                        da->setText(" ");
                        da->setBackground(QColor(15, 139, 100, 127));
                        ui->tableWidget->setItem(numero, g, da);
                    }
                    g++;
                }
            ///num++;
            numero++;
        }
        nuevo.close();

}

void cronograma::on_REGRESAR_clicked()
{
    this->close();
}

void cronograma::on_MODIFICAR_clicked()
{
    this->p.setGeometry(QStyle::alignedRect(Qt::LeftToRight,Qt::AlignCenter,p.size(),qApp->desktop()->availableGeometry()));
    p.show();
}

void cronograma::on_ELIMINAR_clicked()
{
    this->j.setGeometry(QStyle::alignedRect(Qt::LeftToRight,Qt::AlignCenter,j.size(),qApp->desktop()->availableGeometry()));
    j.show();
}
