/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_menu
{
public:
    QPushButton *pushButton;
    QCommandLinkButton *PLANIFICAR;
    QCommandLinkButton *VER;

    void setupUi(QDialog *menu)
    {
        if (menu->objectName().isEmpty())
            menu->setObjectName(QStringLiteral("menu"));
        menu->resize(646, 464);
        pushButton = new QPushButton(menu);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(180, 220, 85, 27));
        PLANIFICAR = new QCommandLinkButton(menu);
        PLANIFICAR->setObjectName(QStringLiteral("PLANIFICAR"));
        PLANIFICAR->setGeometry(QRect(150, 60, 168, 41));
        VER = new QCommandLinkButton(menu);
        VER->setObjectName(QStringLiteral("VER"));
        VER->setGeometry(QRect(150, 110, 168, 41));

        retranslateUi(menu);

        QMetaObject::connectSlotsByName(menu);
    } // setupUi

    void retranslateUi(QDialog *menu)
    {
        menu->setWindowTitle(QApplication::translate("menu", "Dialog", 0));
        pushButton->setText(QApplication::translate("menu", "Salir", 0));
        PLANIFICAR->setText(QApplication::translate("menu", "Planificar", 0));
        VER->setText(QApplication::translate("menu", "Ver Cronograma", 0));
    } // retranslateUi

};

namespace Ui {
    class menu: public Ui_menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
