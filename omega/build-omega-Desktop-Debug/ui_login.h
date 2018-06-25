/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QLabel *label;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QLineEdit *nombre;
    QLineEdit *clave;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout;
    QCommandLinkButton *ENTRAR;
    QSpacerItem *horizontalSpacer;
    QCommandLinkButton *commandLinkButton;

    void setupUi(QDialog *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QStringLiteral("login"));
        login->resize(800, 500);
        label = new QLabel(login);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(240, 40, 271, 41));
        QFont font;
        font.setFamily(QStringLiteral("Padauk"));
        font.setPointSize(28);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        widget = new QWidget(login);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(250, 130, 221, 141));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        nombre = new QLineEdit(widget);
        nombre->setObjectName(QStringLiteral("nombre"));
        nombre->setClearButtonEnabled(true);

        verticalLayout->addWidget(nombre);

        clave = new QLineEdit(widget);
        clave->setObjectName(QStringLiteral("clave"));
        clave->setEchoMode(QLineEdit::Password);
        clave->setClearButtonEnabled(true);

        verticalLayout->addWidget(clave);

        widget1 = new QWidget(login);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setGeometry(QRect(180, 300, 408, 50));
        horizontalLayout = new QHBoxLayout(widget1);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        ENTRAR = new QCommandLinkButton(widget1);
        ENTRAR->setObjectName(QStringLiteral("ENTRAR"));
        QFont font1;
        font1.setFamily(QStringLiteral("Padauk"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        ENTRAR->setFont(font1);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/entrar.png"), QSize(), QIcon::Normal, QIcon::Off);
        ENTRAR->setIcon(icon);

        horizontalLayout->addWidget(ENTRAR);

        horizontalSpacer = new QSpacerItem(58, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        commandLinkButton = new QCommandLinkButton(widget1);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));
        commandLinkButton->setFont(font1);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/prefix1/salir.png"), QSize(), QIcon::Normal, QIcon::Off);
        commandLinkButton->setIcon(icon1);

        horizontalLayout->addWidget(commandLinkButton);


        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QDialog *login)
    {
        login->setWindowTitle(QApplication::translate("login", "login", 0));
        label->setText(QApplication::translate("login", "Ingrese Usuario", 0));
        nombre->setPlaceholderText(QApplication::translate("login", "Usuario", 0));
        clave->setPlaceholderText(QApplication::translate("login", "Contrase\303\261a", 0));
        ENTRAR->setText(QApplication::translate("login", "Entrar", 0));
        commandLinkButton->setText(QApplication::translate("login", "Salir", 0));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
