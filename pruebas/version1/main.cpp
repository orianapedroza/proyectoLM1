#include "login.h"
#include "menu.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    login w;
    w.show();

    ///menu x;
    ///x.show();
    return a.exec();
}
