/********************************************************************************
** Form generated from reading UI file 'planificar.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLANIFICAR_H
#define UI_PLANIFICAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_planificar
{
public:
    QLabel *label;
    QPushButton *regresar;
    QPushButton *botonagregar;
    QCheckBox *dom;
    QCheckBox *sab;
    QCheckBox *mier;
    QCheckBox *jue;
    QCheckBox *vie;
    QCheckBox *lun;
    QCheckBox *mar;
    QLineEdit *tipoact_2;
    QLabel *tipoact;
    QLineEdit *hora_2;
    QLabel *hora;
    QLabel *actividad;
    QLineEdit *actividad_2;

    void setupUi(QDialog *planificar)
    {
        if (planificar->objectName().isEmpty())
            planificar->setObjectName(QStringLiteral("planificar"));
        planificar->resize(760, 471);
        label = new QLabel(planificar);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 10, 131, 17));
        regresar = new QPushButton(planificar);
        regresar->setObjectName(QStringLiteral("regresar"));
        regresar->setGeometry(QRect(470, 240, 85, 27));
        botonagregar = new QPushButton(planificar);
        botonagregar->setObjectName(QStringLiteral("botonagregar"));
        botonagregar->setGeometry(QRect(248, 242, 85, 27));
        dom = new QCheckBox(planificar);
        dom->setObjectName(QStringLiteral("dom"));
        dom->setGeometry(QRect(420, 171, 57, 22));
        sab = new QCheckBox(planificar);
        sab->setObjectName(QStringLiteral("sab"));
        sab->setGeometry(QRect(360, 171, 50, 22));
        mier = new QCheckBox(planificar);
        mier->setObjectName(QStringLiteral("mier"));
        mier->setGeometry(QRect(181, 171, 50, 22));
        jue = new QCheckBox(planificar);
        jue->setObjectName(QStringLiteral("jue"));
        jue->setGeometry(QRect(240, 171, 47, 22));
        vie = new QCheckBox(planificar);
        vie->setObjectName(QStringLiteral("vie"));
        vie->setGeometry(QRect(300, 171, 47, 22));
        lun = new QCheckBox(planificar);
        lun->setObjectName(QStringLiteral("lun"));
        lun->setGeometry(QRect(61, 171, 51, 22));
        mar = new QCheckBox(planificar);
        mar->setObjectName(QStringLiteral("mar"));
        mar->setGeometry(QRect(121, 171, 52, 22));
        tipoact_2 = new QLineEdit(planificar);
        tipoact_2->setObjectName(QStringLiteral("tipoact_2"));
        tipoact_2->setGeometry(QRect(176, 111, 112, 27));
        tipoact = new QLabel(planificar);
        tipoact->setObjectName(QStringLiteral("tipoact"));
        tipoact->setGeometry(QRect(71, 111, 99, 17));
        hora_2 = new QLineEdit(planificar);
        hora_2->setObjectName(QStringLiteral("hora_2"));
        hora_2->setGeometry(QRect(105, 41, 112, 27));
        hora = new QLabel(planificar);
        hora->setObjectName(QStringLiteral("hora"));
        hora->setGeometry(QRect(71, 41, 28, 17));
        actividad = new QLabel(planificar);
        actividad->setObjectName(QStringLiteral("actividad"));
        actividad->setGeometry(QRect(71, 81, 52, 17));
        actividad_2 = new QLineEdit(planificar);
        actividad_2->setObjectName(QStringLiteral("actividad_2"));
        actividad_2->setGeometry(QRect(129, 81, 112, 27));

        retranslateUi(planificar);

        QMetaObject::connectSlotsByName(planificar);
    } // setupUi

    void retranslateUi(QDialog *planificar)
    {
        planificar->setWindowTitle(QApplication::translate("planificar", "Dialog", 0));
        label->setText(QApplication::translate("planificar", "Planificar", 0));
        regresar->setText(QApplication::translate("planificar", "Regresar", 0));
        botonagregar->setText(QApplication::translate("planificar", "Agregar", 0));
        dom->setText(QApplication::translate("planificar", "Dom", 0));
        sab->setText(QApplication::translate("planificar", "Sab", 0));
        mier->setText(QApplication::translate("planificar", "Mie", 0));
        jue->setText(QApplication::translate("planificar", "Jue", 0));
        vie->setText(QApplication::translate("planificar", "Vie", 0));
        lun->setText(QApplication::translate("planificar", "Lun", 0));
        mar->setText(QApplication::translate("planificar", "Mar", 0));
        tipoact->setText(QApplication::translate("planificar", "Tipo de actividad ", 0));
        hora->setText(QApplication::translate("planificar", "Hora", 0));
        actividad->setText(QApplication::translate("planificar", "Actividad", 0));
    } // retranslateUi

};

namespace Ui {
    class planificar: public Ui_planificar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLANIFICAR_H
