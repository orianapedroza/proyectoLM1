/********************************************************************************
** Form generated from reading UI file 'eliminar.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ELIMINAR_H
#define UI_ELIMINAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_eliminar
{
public:
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QCommandLinkButton *ELIMINAR;
    QSpacerItem *horizontalSpacer;
    QCommandLinkButton *REGRESAR;
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QSpinBox *hora_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_3;
    QSpinBox *min_3;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer;
    QComboBox *universal;

    void setupUi(QDialog *eliminar)
    {
        if (eliminar->objectName().isEmpty())
            eliminar->setObjectName(QStringLiteral("eliminar"));
        eliminar->resize(800, 500);
        layoutWidget_2 = new QWidget(eliminar);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(200, 270, 451, 50));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        ELIMINAR = new QCommandLinkButton(layoutWidget_2);
        ELIMINAR->setObjectName(QStringLiteral("ELIMINAR"));
        QFont font;
        font.setFamily(QStringLiteral("Padauk"));
        font.setPointSize(14);
        ELIMINAR->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/papelera.png"), QSize(), QIcon::Normal, QIcon::Off);
        ELIMINAR->setIcon(icon);

        horizontalLayout_3->addWidget(ELIMINAR);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        REGRESAR = new QCommandLinkButton(layoutWidget_2);
        REGRESAR->setObjectName(QStringLiteral("REGRESAR"));
        QFont font1;
        font1.setFamily(QStringLiteral("Padauk"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        REGRESAR->setFont(font1);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/prefix1/regre.png"), QSize(), QIcon::Normal, QIcon::Off);
        REGRESAR->setIcon(icon1);

        horizontalLayout_3->addWidget(REGRESAR);

        label = new QLabel(eliminar);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(320, 60, 181, 71));
        QFont font2;
        font2.setFamily(QStringLiteral("Padauk"));
        font2.setPointSize(28);
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);
        widget = new QWidget(eliminar);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(190, 150, 401, 77));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font3;
        font3.setFamily(QStringLiteral("Padauk"));
        font3.setPointSize(12);
        label_2->setFont(font3);

        verticalLayout->addWidget(label_2);

        hora_3 = new QSpinBox(widget);
        hora_3->setObjectName(QStringLiteral("hora_3"));
        hora_3->setAccelerated(false);
        hora_3->setMinimum(0);
        hora_3->setMaximum(12);
        hora_3->setSingleStep(1);
        hora_3->setValue(0);

        verticalLayout->addWidget(hora_3);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font3);

        verticalLayout_2->addWidget(label_3);

        min_3 = new QSpinBox(widget);
        min_3->setObjectName(QStringLiteral("min_3"));
        min_3->setMaximum(59);

        verticalLayout_2->addWidget(min_3);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        universal = new QComboBox(widget);
        universal->setObjectName(QStringLiteral("universal"));
        universal->setEditable(true);
        universal->setMaxVisibleItems(3);
        universal->setMaxCount(3);
        universal->setInsertPolicy(QComboBox::InsertAtCurrent);
        universal->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);

        verticalLayout_3->addWidget(universal);


        horizontalLayout->addLayout(verticalLayout_3);

        layoutWidget_2->raise();
        label->raise();

        retranslateUi(eliminar);

        universal->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(eliminar);
    } // setupUi

    void retranslateUi(QDialog *eliminar)
    {
        eliminar->setWindowTitle(QApplication::translate("eliminar", "Dialog", 0));
        ELIMINAR->setText(QApplication::translate("eliminar", "Eliminar", 0));
        REGRESAR->setText(QApplication::translate("eliminar", "Regresar", 0));
        label->setText(QApplication::translate("eliminar", "Eliminar", 0));
        label_2->setText(QApplication::translate("eliminar", "Hora", 0));
        hora_3->setSuffix(QString());
        hora_3->setPrefix(QString());
        label_3->setText(QApplication::translate("eliminar", "Minutos", 0));
        universal->clear();
        universal->insertItems(0, QStringList()
         << QApplication::translate("eliminar", "AM", 0)
         << QApplication::translate("eliminar", "PM", 0)
         << QApplication::translate("eliminar", "M", 0)
        );
#ifndef QT_NO_TOOLTIP
        universal->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        universal->setAccessibleDescription(QString());
#endif // QT_NO_ACCESSIBILITY
        universal->setCurrentText(QApplication::translate("eliminar", "AM", 0));
    } // retranslateUi

};

namespace Ui {
    class eliminar: public Ui_eliminar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ELIMINAR_H
