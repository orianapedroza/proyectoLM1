#include "pres.h"
#include "ui_pres.h"
#include <QDesktopWidget>
#include <QStyle>
#include <QPixmap>

pres::pres(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::pres)
{
    ui->setupUi(this);




    this->setGeometry(QStyle::alignedRect(Qt::LeftToRight,Qt::AlignCenter,this->size(),qApp->desktop()->availableGeometry()));
    this->setFixedSize(650,435);
    QPixmap bkgnd("../ini.jpg");
    bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
    QPalette palette;
    palette.setBrush(QPalette::Background, bkgnd);
    this->setPalette(palette);


}

pres::~pres()
{
    delete ui;
}

void pres::on_ingresar_clicked()
{
    this->pre.setGeometry(QStyle::alignedRect(Qt::LeftToRight,Qt::AlignCenter,pre.size(),qApp->desktop()->availableGeometry()));
    this->pre.setFixedSize(650,435);
    this->pre.show();
    hide();
}


void pres::on_salir_clicked()
{
    hide();
}

void pres::on_registrar_clicked()
{
    this->h.setGeometry(QStyle::alignedRect(Qt::LeftToRight,Qt::AlignCenter,h.size(),qApp->desktop()->availableGeometry()));
    this->h.setFixedSize(650,435);
    this->h.show();
    hide();
}
