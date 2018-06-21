#include <QApplication>
#include <QtWidgets>
#include <QtCore>
#include <QTableWidget>
#include <QList>
#include <QDebug>
#include <QString>

int main(int argc, char *argv[]){

    QApplication app(argc, argv);

    QTableWidget *filesTable = new QTableWidget(15, 9);

    QStringList labels;

    labels << ("Hora        ") << ("Actividad                                                                 ") << ("Lu") << ("Ma") << ("Mi") << ("Ju") << ("Vi") << ("Sa") << ("Do");
    filesTable->setHorizontalHeaderLabels(labels);
    filesTable->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    filesTable->verticalHeader()->hide();
    filesTable->setShowGrid(false);
    filesTable->resize(500,500);


    QList< QCheckBox* > lista;


    for(int i=0;i<15;i++){

        QCheckBox *cb = new QCheckBox();
        cb->setStyleSheet("background-color: rgb(32, 124, 45);");
        filesTable->setCellWidget(i, 3, cb);
        filesTable->show();

    }
    for(int i=0;i<15;i++){

        QCheckBox *cb = new QCheckBox();
        cb->setStyleSheet("background-color: rgb(32, 123, 134);");
        filesTable->setCellWidget(i, 2, cb);
        filesTable->show();

    }

    for(int i=0;i<15;i++){

        QCheckBox *cb = new QCheckBox();
        cb->setStyleSheet("background-color: rgb(32, 123, 134);");
        filesTable->setCellWidget(i, 4, cb);
        filesTable->show();

    }
    for(int i=0;i<15;i++){

        QCheckBox *cb = new QCheckBox();
        cb->setStyleSheet("background-color: rgb(32, 124, 45);");
        filesTable->setCellWidget(i, 5, cb);
        filesTable->show();

    }
    for(int i=0;i<15;i++){

        QCheckBox *cb = new QCheckBox();
        cb->setStyleSheet("background-color: rgb(32, 123, 134);");
        filesTable->setCellWidget(i, 6, cb);
        filesTable->show();

    }
    for(int i=0;i<15;i++){

        QCheckBox *cb = new QCheckBox();
        cb->setStyleSheet("background-color: rgb(32, 124, 45);");
        filesTable->setCellWidget(i, 7, cb);
        filesTable->show();

    }
    for(int i=0;i<15;i++){

        QCheckBox *cb = new QCheckBox();
        cb->setStyleSheet("background-color: rgb(32, 123, 134);");
        filesTable->setCellWidget(i, 8, cb);
        filesTable->show();

    }
    ///QLabel *label1 = new QLabel("Hora");
    ///filesTable->addWidget(label1);
    QTableWidgetItem *itab;
    itab = new QTableWidgetItem; // add this line
    itab->setText("9am");
    filesTable->setItem(0, 0, itab);




    filesTable->show();

  /*
   *Prueba 1 de una ventana con tablas que funciona lindo
   *
   *  /// QWidget *window = new QWidget;

    ///window->setWindowTitle("Holas !");

    QTableWidget *filesTable = new QTableWidget(15, 9);

    QStringList labels;

    labels << ("Hora") << ("Actividad                               ") << ("Lu") << ("Ma") << ("Mi") << ("Ju") << ("Vi") << ("Sa") << ("Do");
    filesTable->setHorizontalHeaderLabels(labels);
    filesTable->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    filesTable->verticalHeader()->hide();
    filesTable->setShowGrid(false);
    filesTable->resize(400,400);

    QCheckBox *cb = new QCheckBox();
    cb->setStyleSheet("background-color: rgb(0, 85, 0);");
    filesTable->setCellWidget(0, 0, cb);
    filesTable->show();*/

 /*   QGridLayout *layout = new QGridLayout;

    QLabel *label1 = new QLabel("Hora");

    QLineEdit *txtName = new QLineEdit;

    QLabel *label2 = new QLabel("Actividad");

    QLineEdit *txtName2 = new QLineEdit;

    QLabel *label3 = new QLabel("L");

    QLineEdit *txtName3 = new QLineEdit;

    layout->addWidget(label1,0,0);
    layout->addWidget(label2,0,1);
    layout->addWidget(label3,0,2);

    layout->addWidget(txtName,1,0);
    layout->addWidget(txtName2,1,1);
    layout->addWidget(txtName3,1,2);



    window->setLayout(layout);

*/


    ///window->show();

    return app.exec();
}
