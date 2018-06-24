/********************************************************************************
** Form generated from reading UI file 'cronograma.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CRONOGRAMA_H
#define UI_CRONOGRAMA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_cronograma
{
public:
    QTableWidget *tableWidget;
    QPushButton *regresar;

    void setupUi(QDialog *cronograma)
    {
        if (cronograma->objectName().isEmpty())
            cronograma->setObjectName(QStringLiteral("cronograma"));
        cronograma->resize(647, 464);
        tableWidget = new QTableWidget(cronograma);
        if (tableWidget->columnCount() < 9)
            tableWidget->setColumnCount(9);
        QFont font;
        font.setBold(true);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(75);
        font.setStrikeOut(false);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QFont font1;
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font1);
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(5, 60, 611, 192));
        tableWidget->setMinimumSize(QSize(611, 192));
        regresar = new QPushButton(cronograma);
        regresar->setObjectName(QStringLiteral("regresar"));
        regresar->setGeometry(QRect(270, 320, 85, 27));

        retranslateUi(cronograma);

        QMetaObject::connectSlotsByName(cronograma);
    } // setupUi

    void retranslateUi(QDialog *cronograma)
    {
        cronograma->setWindowTitle(QApplication::translate("cronograma", "Dialog", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("cronograma", "Hora", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("cronograma", "Actividades                                                                                        ", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("cronograma", "Lun", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("cronograma", "Mar", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("cronograma", "Mie", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("cronograma", "Jue", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("cronograma", "Vie", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("cronograma", "Sab", 0));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("cronograma", "Dom", 0));
        regresar->setText(QApplication::translate("cronograma", "Regresar", 0));
    } // retranslateUi

};

namespace Ui {
    class cronograma: public Ui_cronograma {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CRONOGRAMA_H
