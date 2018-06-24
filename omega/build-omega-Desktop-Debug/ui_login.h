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
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QLabel *nombrelogin;
    QLabel *clavelogin;
    QLineEdit *nombre;
    QLineEdit *clave;
    QPushButton *botonlogin;

    void setupUi(QDialog *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QStringLiteral("login"));
        login->resize(639, 466);
        nombrelogin = new QLabel(login);
        nombrelogin->setObjectName(QStringLiteral("nombrelogin"));
        nombrelogin->setGeometry(QRect(70, 60, 54, 17));
        clavelogin = new QLabel(login);
        clavelogin->setObjectName(QStringLiteral("clavelogin"));
        clavelogin->setGeometry(QRect(70, 150, 54, 17));
        nombre = new QLineEdit(login);
        nombre->setObjectName(QStringLiteral("nombre"));
        nombre->setGeometry(QRect(130, 50, 113, 27));
        clave = new QLineEdit(login);
        clave->setObjectName(QStringLiteral("clave"));
        clave->setGeometry(QRect(120, 140, 113, 27));
        botonlogin = new QPushButton(login);
        botonlogin->setObjectName(QStringLiteral("botonlogin"));
        botonlogin->setGeometry(QRect(140, 210, 85, 27));

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QDialog *login)
    {
        login->setWindowTitle(QApplication::translate("login", "login", 0));
        nombrelogin->setText(QApplication::translate("login", "Nombre", 0));
        clavelogin->setText(QApplication::translate("login", "Clave", 0));
        botonlogin->setText(QApplication::translate("login", "Entrar", 0));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
