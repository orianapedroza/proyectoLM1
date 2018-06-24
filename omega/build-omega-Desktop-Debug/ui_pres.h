/********************************************************************************
** Form generated from reading UI file 'pres.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRES_H
#define UI_PRES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pres
{
public:
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QCommandLinkButton *ingresar;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QCommandLinkButton *registrar;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *salir;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_4;

    void setupUi(QWidget *pres)
    {
        if (pres->objectName().isEmpty())
            pres->setObjectName(QStringLiteral("pres"));
        pres->resize(760, 472);
        verticalLayout_4 = new QVBoxLayout(pres);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer = new QSpacerItem(48, 60, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        ingresar = new QCommandLinkButton(pres);
        ingresar->setObjectName(QStringLiteral("ingresar"));
        QFont font;
        font.setFamily(QStringLiteral("Padauk"));
        font.setPointSize(14);
        font.setBold(true);
        font.setWeight(75);
        ingresar->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/u.png"), QSize(), QIcon::Normal, QIcon::Off);
        ingresar->setIcon(icon);
        ingresar->setAutoRepeatDelay(300);

        horizontalLayout->addWidget(ingresar);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(10, 15, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        registrar = new QCommandLinkButton(pres);
        registrar->setObjectName(QStringLiteral("registrar"));
        QFont font1;
        font1.setFamily(QStringLiteral("Padauk Book [PYRS]"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        registrar->setFont(font1);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/prefix1/icons.ico"), QSize(), QIcon::Normal, QIcon::Off);
        registrar->setIcon(icon1);

        horizontalLayout_2->addWidget(registrar);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer_3 = new QSpacerItem(50, 100, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);


        verticalLayout_3->addLayout(verticalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(100, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        salir = new QPushButton(pres);
        salir->setObjectName(QStringLiteral("salir"));
        QFont font2;
        font2.setFamily(QStringLiteral("Noto Naskh Arabic UI"));
        font2.setPointSize(10);
        salir->setFont(font2);

        horizontalLayout_3->addWidget(salir);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout_3->addLayout(horizontalLayout_3);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_4);


        verticalLayout_4->addLayout(verticalLayout_3);


        retranslateUi(pres);

        QMetaObject::connectSlotsByName(pres);
    } // setupUi

    void retranslateUi(QWidget *pres)
    {
        pres->setWindowTitle(QApplication::translate("pres", "pres", 0));
        ingresar->setText(QApplication::translate("pres", "Ingresar", 0));
        registrar->setText(QApplication::translate("pres", "Registrar", 0));
        salir->setText(QApplication::translate("pres", "Salir", 0));
    } // retranslateUi

};

namespace Ui {
    class pres: public Ui_pres {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRES_H
