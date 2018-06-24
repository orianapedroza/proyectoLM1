#include "login.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    login w;
    w.setFixedSize(600,435);
    w.show();

    ///menu x;
    ///x.show();
    return a.exec();
}
