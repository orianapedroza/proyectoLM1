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
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cronograma
{
public:
    QTableWidget *tableWidget;
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QCommandLinkButton *REGRESAR;
    QSpacerItem *horizontalSpacer;
    QCommandLinkButton *MODIFICAR;

    void setupUi(QDialog *cronograma)
    {
        if (cronograma->objectName().isEmpty())
            cronograma->setObjectName(QStringLiteral("cronograma"));
        cronograma->resize(800, 500);
        tableWidget = new QTableWidget(cronograma);
        if (tableWidget->columnCount() < 9)
            tableWidget->setColumnCount(9);
        QFont font;
        font.setFamily(QStringLiteral("Padauk"));
        font.setPointSize(12);
        font.setBold(true);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(75);
        font.setStrikeOut(false);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setFont(font);
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QFont font1;
        font1.setFamily(QStringLiteral("Padauk"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFont(font1);
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QFont font2;
        font2.setFamily(QStringLiteral("Padauk"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFont(font2);
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFont(font2);
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setFont(font2);
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setFont(font2);
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setFont(font2);
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setFont(font2);
        tableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setFont(font2);
        tableWidget->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(0, 100, 800, 300));
        tableWidget->setMinimumSize(QSize(611, 192));
        QFont font3;
        font3.setFamily(QStringLiteral("Padauk"));
        font3.setPointSize(12);
        tableWidget->setFont(font3);
        label = new QLabel(cronograma);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(280, 20, 231, 31));
        QFont font4;
        font4.setFamily(QStringLiteral("Padauk"));
        font4.setPointSize(28);
        font4.setBold(true);
        font4.setWeight(75);
        label->setFont(font4);
        widget = new QWidget(cronograma);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(170, 420, 496, 50));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        REGRESAR = new QCommandLinkButton(widget);
        REGRESAR->setObjectName(QStringLiteral("REGRESAR"));
        QFont font5;
        font5.setFamily(QStringLiteral("Padauk"));
        font5.setPointSize(14);
        font5.setBold(true);
        font5.setWeight(75);
        REGRESAR->setFont(font5);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/regre.png"), QSize(), QIcon::Normal, QIcon::Off);
        REGRESAR->setIcon(icon);

        horizontalLayout->addWidget(REGRESAR);

        horizontalSpacer = new QSpacerItem(138, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        MODIFICAR = new QCommandLinkButton(widget);
        MODIFICAR->setObjectName(QStringLiteral("MODIFICAR"));
        MODIFICAR->setFont(font5);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/prefix1/icons(1).png"), QSize(), QIcon::Normal, QIcon::Off);
        MODIFICAR->setIcon(icon1);

        horizontalLayout->addWidget(MODIFICAR);


        retranslateUi(cronograma);

        QMetaObject::connectSlotsByName(cronograma);
    } // setupUi

    void retranslateUi(QDialog *cronograma)
    {
        cronograma->setWindowTitle(QApplication::translate("cronograma", "Dialog", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("cronograma", "Hora", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("cronograma", "Actividades                                                 ", 0));
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
        label->setText(QApplication::translate("cronograma", "Cronograma", 0));
        REGRESAR->setText(QApplication::translate("cronograma", "Regresar", 0));
        MODIFICAR->setText(QApplication::translate("cronograma", "Modificar", 0));
    } // retranslateUi

};

namespace Ui {
    class cronograma: public Ui_cronograma {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CRONOGRAMA_H
