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
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pres
{
public:
    QLabel *label;
    QTextBrowser *textBrowser;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_3;
    QCommandLinkButton *ingresar;
    QSpacerItem *horizontalSpacer_2;
    QCommandLinkButton *registrar;
    QSpacerItem *horizontalSpacer;
    QCommandLinkButton *SALIR;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QWidget *pres)
    {
        if (pres->objectName().isEmpty())
            pres->setObjectName(QStringLiteral("pres"));
        pres->resize(800, 500);
        label = new QLabel(pres);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(410, 60, 381, 61));
        QFont font;
        font.setFamily(QStringLiteral("Padauk"));
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        textBrowser = new QTextBrowser(pres);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(470, 140, 256, 111));
        textBrowser->setFrameShape(QFrame::WinPanel);
        textBrowser->setFrameShadow(QFrame::Plain);
        textBrowser->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        textBrowser->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        layoutWidget = new QWidget(pres);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(12, 313, 707, 50));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        ingresar = new QCommandLinkButton(layoutWidget);
        ingresar->setObjectName(QStringLiteral("ingresar"));
        QFont font1;
        font1.setFamily(QStringLiteral("Padauk"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        ingresar->setFont(font1);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/u.png"), QSize(), QIcon::Normal, QIcon::Off);
        ingresar->setIcon(icon);
        ingresar->setAutoRepeatDelay(300);

        horizontalLayout->addWidget(ingresar);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        registrar = new QCommandLinkButton(layoutWidget);
        registrar->setObjectName(QStringLiteral("registrar"));
        QFont font2;
        font2.setFamily(QStringLiteral("Padauk Book [PYRS]"));
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setItalic(false);
        font2.setWeight(75);
        registrar->setFont(font2);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/prefix1/regis.png"), QSize(), QIcon::Normal, QIcon::Off);
        registrar->setIcon(icon1);

        horizontalLayout->addWidget(registrar);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        SALIR = new QCommandLinkButton(layoutWidget);
        SALIR->setObjectName(QStringLiteral("SALIR"));
        QFont font3;
        font3.setFamily(QStringLiteral("Padauk"));
        font3.setPointSize(14);
        SALIR->setFont(font3);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/prefix1/salir.png"), QSize(), QIcon::Normal, QIcon::Off);
        SALIR->setIcon(icon2);

        horizontalLayout->addWidget(SALIR);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);


        retranslateUi(pres);

        QMetaObject::connectSlotsByName(pres);
    } // setupUi

    void retranslateUi(QWidget *pres)
    {
        pres->setWindowTitle(QApplication::translate("pres", "pres", 0));
        label->setText(QApplication::translate("pres", "LaSDAI Metodolog\303\255a de Estudio 1", 0));
        textBrowser->setHtml(QApplication::translate("pres", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Noto Sans'; font-size:9pt; font-weight:400; font-style:normal;\" bgcolor=\"#d4e6f1\">\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:600; color:#000000;\">Pretende ser una gu\303\255apara los estudiantes que cursan la asignatura \342\200\234Programaci\303\263n 1\342\200\235 (en cuanto a la organizacion del tiempo), la cual est\303\241 divida en tres etapas: planificaci\303\263n, asistencia a clases y pr\303\241ctica.</span></p></body></html>", 0));
        ingresar->setText(QApplication::translate("pres", "Ingresar", 0));
        registrar->setText(QApplication::translate("pres", "Registrar", 0));
        SALIR->setText(QApplication::translate("pres", "Salir", 0));
    } // retranslateUi

};

namespace Ui {
    class pres: public Ui_pres {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRES_H
