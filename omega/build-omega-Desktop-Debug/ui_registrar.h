/********************************************************************************
** Form generated from reading UI file 'registrar.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRAR_H
#define UI_REGISTRAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_registrar
{
public:
    QLineEdit *NOMBRE;
    QLineEdit *APELLIDO;
    QLineEdit *CORREO;
    QLineEdit *CONTRA;
    QLineEdit *USUARIO;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *registrar)
    {
        if (registrar->objectName().isEmpty())
            registrar->setObjectName(QStringLiteral("registrar"));
        registrar->resize(760, 471);
        registrar->setMouseTracking(false);
        registrar->setAcceptDrops(false);
        registrar->setAutoFillBackground(true);
        NOMBRE = new QLineEdit(registrar);
        NOMBRE->setObjectName(QStringLiteral("NOMBRE"));
        NOMBRE->setGeometry(QRect(140, 90, 181, 27));
        NOMBRE->setLayoutDirection(Qt::LeftToRight);
        NOMBRE->setAutoFillBackground(true);
        NOMBRE->setInputMethodHints(Qt::ImhNone);
        NOMBRE->setFrame(true);
        NOMBRE->setEchoMode(QLineEdit::Normal);
        NOMBRE->setDragEnabled(false);
        NOMBRE->setReadOnly(false);
        NOMBRE->setClearButtonEnabled(true);
        APELLIDO = new QLineEdit(registrar);
        APELLIDO->setObjectName(QStringLiteral("APELLIDO"));
        APELLIDO->setGeometry(QRect(140, 130, 181, 27));
        CORREO = new QLineEdit(registrar);
        CORREO->setObjectName(QStringLiteral("CORREO"));
        CORREO->setGeometry(QRect(140, 210, 113, 27));
        CONTRA = new QLineEdit(registrar);
        CONTRA->setObjectName(QStringLiteral("CONTRA"));
        CONTRA->setGeometry(QRect(140, 260, 113, 27));
        USUARIO = new QLineEdit(registrar);
        USUARIO->setObjectName(QStringLiteral("USUARIO"));
        USUARIO->setGeometry(QRect(140, 170, 113, 27));
        label = new QLabel(registrar);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(180, 40, 161, 17));
        pushButton = new QPushButton(registrar);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(90, 350, 85, 27));
        pushButton_2 = new QPushButton(registrar);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(290, 350, 85, 27));

        retranslateUi(registrar);

        QMetaObject::connectSlotsByName(registrar);
    } // setupUi

    void retranslateUi(QWidget *registrar)
    {
        registrar->setWindowTitle(QApplication::translate("registrar", "Form", 0));
        NOMBRE->setInputMask(QString());
        NOMBRE->setText(QString());
        NOMBRE->setPlaceholderText(QApplication::translate("registrar", "Nombre", 0));
        APELLIDO->setPlaceholderText(QApplication::translate("registrar", "Apellido", 0));
        CORREO->setText(QString());
        CORREO->setPlaceholderText(QApplication::translate("registrar", "Correo", 0));
        CONTRA->setPlaceholderText(QApplication::translate("registrar", "Contrase\303\261a", 0));
        USUARIO->setPlaceholderText(QApplication::translate("registrar", "Usuario", 0));
        label->setText(QApplication::translate("registrar", "Registro de Usuario", 0));
        pushButton->setText(QApplication::translate("registrar", "Registrar", 0));
        pushButton_2->setText(QApplication::translate("registrar", "Salir", 0));
    } // retranslateUi

};

namespace Ui {
    class registrar: public Ui_registrar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRAR_H
