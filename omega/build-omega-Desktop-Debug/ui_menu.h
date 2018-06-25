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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_menu
{
public:
    QLabel *label;
    QCommandLinkButton *SALIR;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QCommandLinkButton *PLANIFICAR;
    QSpacerItem *horizontalSpacer;
    QCommandLinkButton *APUNTES;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QCommandLinkButton *VER;
    QSpacerItem *horizontalSpacer_2;
    QCommandLinkButton *VIDEOS;

    void setupUi(QDialog *menu)
    {
        if (menu->objectName().isEmpty())
            menu->setObjectName(QStringLiteral("menu"));
        menu->resize(800, 500);
        label = new QLabel(menu);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(340, 40, 131, 41));
        QFont font;
        font.setFamily(QStringLiteral("Padauk"));
        font.setPointSize(28);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        SALIR = new QCommandLinkButton(menu);
        SALIR->setObjectName(QStringLiteral("SALIR"));
        SALIR->setGeometry(QRect(360, 320, 91, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("Padauk"));
        font1.setPointSize(14);
        SALIR->setFont(font1);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/salir.png"), QSize(), QIcon::Normal, QIcon::Off);
        SALIR->setIcon(icon);
        widget = new QWidget(menu);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(200, 150, 394, 50));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        PLANIFICAR = new QCommandLinkButton(widget);
        PLANIFICAR->setObjectName(QStringLiteral("PLANIFICAR"));
        PLANIFICAR->setFont(font1);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/prefix1/regis.png"), QSize(), QIcon::Normal, QIcon::Off);
        PLANIFICAR->setIcon(icon1);

        horizontalLayout->addWidget(PLANIFICAR);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        APUNTES = new QCommandLinkButton(widget);
        APUNTES->setObjectName(QStringLiteral("APUNTES"));
        APUNTES->setFont(font1);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/prefix1/apu.png"), QSize(), QIcon::Normal, QIcon::Off);
        APUNTES->setIcon(icon2);

        horizontalLayout->addWidget(APUNTES);

        widget1 = new QWidget(menu);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(191, 250, 411, 50));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        VER = new QCommandLinkButton(widget1);
        VER->setObjectName(QStringLiteral("VER"));
        VER->setFont(font1);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/new/prefix1/gua(1).png"), QSize(), QIcon::Normal, QIcon::Off);
        VER->setIcon(icon3);

        horizontalLayout_2->addWidget(VER);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        VIDEOS = new QCommandLinkButton(widget1);
        VIDEOS->setObjectName(QStringLiteral("VIDEOS"));
        VIDEOS->setFont(font1);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/new/prefix1/videos.png"), QSize(), QIcon::Normal, QIcon::Off);
        VIDEOS->setIcon(icon4);

        horizontalLayout_2->addWidget(VIDEOS);


        retranslateUi(menu);

        QMetaObject::connectSlotsByName(menu);
    } // setupUi

    void retranslateUi(QDialog *menu)
    {
        menu->setWindowTitle(QApplication::translate("menu", "Dialog", 0));
        label->setText(QApplication::translate("menu", "Men\303\272", 0));
        SALIR->setText(QApplication::translate("menu", "Salir", 0));
        PLANIFICAR->setText(QApplication::translate("menu", "Planificar", 0));
        APUNTES->setText(QApplication::translate("menu", "Apuntes", 0));
        VER->setText(QApplication::translate("menu", "Ver Cronograma", 0));
        VIDEOS->setText(QApplication::translate("menu", "Videos", 0));
    } // retranslateUi

};

namespace Ui {
    class menu: public Ui_menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
