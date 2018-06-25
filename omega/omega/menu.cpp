#include "menu.h"
#include "ui_menu.h"
#include <QPixmap>
#include <QDesktopWidget>
#include <QStyle>
#include <fstream>

menu::menu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::menu)
{
    ui->setupUi(this);
    this->setGeometry(QStyle::alignedRect(Qt::LeftToRight,Qt::AlignCenter,this->size(),qApp->desktop()->availableGeometry()));
    QPixmap bkgnd("/home/maferg/Proyecto/proyectoLM1/pruebas/bonito3.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);
}

menu::~menu()
{
    delete ui;
}

void menu::on_PLANIFICAR_clicked()
{
    this->r.setGeometry(QStyle::alignedRect(Qt::LeftToRight,Qt::AlignCenter,r.size(),qApp->desktop()->availableGeometry()));
    ///this->r.setFixedSize(650,435);
    this->r.show();
    //this->hide();
}

void menu::on_VER_clicked()
{

    /*std::ifstream otro;
    otro.open("../bd/actual.txt");
    std::string num;

        getline(otro, num, '\n');


    otro.close();

    std::ifstream nuevo;
    nuevo.open(num.c_str());
    while(nuevo.eof()){
        char c;
        nuevo>>c;
    }
    nuevo.close();*/

    this->p.setGeometry(QStyle::alignedRect(Qt::LeftToRight,Qt::AlignCenter,p.size(),qApp->desktop()->availableGeometry()));
///    this->p.setFixedSize(650,435);
    this->p.vercro();
    this->p.show();


}

void menu::on_SALIR_clicked()
{
    hide();
}
