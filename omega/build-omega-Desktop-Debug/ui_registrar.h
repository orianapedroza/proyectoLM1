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
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_registrar
{
public:
    QLabel *label;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *NOMBRE;
    QLineEdit *APELLIDO;
    QLineEdit *USUARIO;
    QLineEdit *CORREO;
    QLineEdit *CONTRA;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout;
    QCommandLinkButton *REGISTRAR;
    QSpacerItem *horizontalSpacer;
    QCommandLinkButton *SALIR;

    void setupUi(QWidget *registrar)
    {
        if (registrar->objectName().isEmpty())
            registrar->setObjectName(QStringLiteral("registrar"));
        registrar->resize(800, 500);
        registrar->setMaximumSize(QSize(800, 500));
        registrar->setMouseTracking(false);
        registrar->setAcceptDrops(false);
        registrar->setAutoFillBackground(true);
        label = new QLabel(registrar);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(210, 20, 341, 51));
        QFont font;
        font.setFamily(QStringLiteral("Padauk"));
        font.setPointSize(26);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        layoutWidget = new QWidget(registrar);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(210, 60, 291, 271));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        NOMBRE = new QLineEdit(layoutWidget);
        NOMBRE->setObjectName(QStringLiteral("NOMBRE"));
        NOMBRE->setLayoutDirection(Qt::LeftToRight);
        NOMBRE->setAutoFillBackground(true);
        NOMBRE->setInputMethodHints(Qt::ImhNone);
        NOMBRE->setFrame(true);
        NOMBRE->setEchoMode(QLineEdit::Normal);
        NOMBRE->setDragEnabled(false);
        NOMBRE->setReadOnly(false);
        NOMBRE->setClearButtonEnabled(true);

        verticalLayout->addWidget(NOMBRE);

        APELLIDO = new QLineEdit(layoutWidget);
        APELLIDO->setObjectName(QStringLiteral("APELLIDO"));
        APELLIDO->setClearButtonEnabled(true);

        verticalLayout->addWidget(APELLIDO);

        USUARIO = new QLineEdit(layoutWidget);
        USUARIO->setObjectName(QStringLiteral("USUARIO"));
        USUARIO->setClearButtonEnabled(true);

        verticalLayout->addWidget(USUARIO);

        CORREO = new QLineEdit(layoutWidget);
        CORREO->setObjectName(QStringLiteral("CORREO"));
        CORREO->setClearButtonEnabled(true);

        verticalLayout->addWidget(CORREO);

        CONTRA = new QLineEdit(layoutWidget);
        CONTRA->setObjectName(QStringLiteral("CONTRA"));
        CONTRA->setClearButtonEnabled(true);

        verticalLayout->addWidget(CONTRA);

        layoutWidget1 = new QWidget(registrar);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(170, 330, 431, 50));
        horizontalLayout = new QHBoxLayout(layoutWidget1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        REGISTRAR = new QCommandLinkButton(layoutWidget1);
        REGISTRAR->setObjectName(QStringLiteral("REGISTRAR"));
        QFont font1;
        font1.setFamily(QStringLiteral("Padauk"));
        font1.setPointSize(14);
        REGISTRAR->setFont(font1);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/icons.png"), QSize(), QIcon::Normal, QIcon::Off);
        REGISTRAR->setIcon(icon);

        horizontalLayout->addWidget(REGISTRAR);

        horizontalSpacer = new QSpacerItem(98, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        SALIR = new QCommandLinkButton(layoutWidget1);
        SALIR->setObjectName(QStringLiteral("SALIR"));
        SALIR->setFont(font1);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/prefix1/salir.png"), QSize(), QIcon::Normal, QIcon::Off);
        SALIR->setIcon(icon1);

        horizontalLayout->addWidget(SALIR);


        retranslateUi(registrar);

        QMetaObject::connectSlotsByName(registrar);
    } // setupUi

    void retranslateUi(QWidget *registrar)
    {
        registrar->setWindowTitle(QApplication::translate("registrar", "Form", 0));
        label->setText(QApplication::translate("registrar", "Registro de Usuario", 0));
        NOMBRE->setInputMask(QString());
        NOMBRE->setText(QString());
        NOMBRE->setPlaceholderText(QApplication::translate("registrar", "Nombre", 0));
        APELLIDO->setPlaceholderText(QApplication::translate("registrar", "Apellido", 0));
        USUARIO->setPlaceholderText(QApplication::translate("registrar", "Usuario", 0));
        CORREO->setText(QString());
        CORREO->setPlaceholderText(QApplication::translate("registrar", "Correo", 0));
        CONTRA->setPlaceholderText(QApplication::translate("registrar", "Contrase\303\261a", 0));
        REGISTRAR->setText(QApplication::translate("registrar", "Registrar", 0));
        SALIR->setText(QApplication::translate("registrar", "Salir", 0));
    } // retranslateUi

};

namespace Ui {
    class registrar: public Ui_registrar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRAR_H
