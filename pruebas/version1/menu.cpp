#include "menu.h"
#include "ui_menu.h"

menu::menu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::menu)
{
    ui->setupUi(this);
}

menu::~menu()
{
    delete ui;
}

void menu::on_planificar_clicked()
{
    this->r.show();
    this->hide();
}

void menu::on_Cronograma_clicked()
{

    this->p.show();
    this->hide();
}
