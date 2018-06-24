#include "menu.h"
#include "ui_menu.h"
#include <QPixmap>

menu::menu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::menu)
{
    ui->setupUi(this);
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
    this->r.setFixedSize(600,435);
    this->r.show();
    //this->hide();
}

void menu::on_VER_clicked()
{
    this->p.setFixedSize(600,435);
    this->p.show();
    //this->hide();
}

void menu::on_pushButton_clicked()
{
    hide();
}
