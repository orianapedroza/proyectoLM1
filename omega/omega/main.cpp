#include "login.h"
#include <QApplication>
#include <QDesktopWidget>
#include <QStyle>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    login w;

    w.setGeometry(QStyle::alignedRect(Qt::LeftToRight,Qt::AlignCenter,w.size(),qApp->desktop()->availableGeometry()));
    w.setFixedSize(600,435);
    w.show();

    ///menu x;
    ///x.show();
    return a.exec();
}
