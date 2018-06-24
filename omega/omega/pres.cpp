#include "pres.h"
#include "ui_pres.h"

pres::pres(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::pres)
{
    ui->setupUi(this);
}

pres::~pres()
{
    delete ui;
}

void pres::on_pushButton_clicked()
{
    this->pre.show();
}
