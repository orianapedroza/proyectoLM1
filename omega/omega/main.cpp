#include "login.h"
#include "pres.h"
#include <QApplication>
#include <QDesktopWidget>
#include <QStyle>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    login w;
    pres t;

   /// w.setGeometry(QStyle::alignedRect(Qt::LeftToRight,Qt::AlignCenter,w.size(),qApp->desktop()->availableGeometry()));
    ///w.setFixedSize(650,435);
   /// w.show();
   /// t.setGeometry(QStyle::alignedRect(Qt::LeftToRight,Qt::AlignCenter,t.size(),qApp->desktop()->availableGeometry()));
    ///t.setFixedSize(650,435);
    t.show();
    ///menu x;
    ///x.show();
    return a.exec();
}
