/********************************************************************************
** Form generated from reading UI file 'modi.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODI_H
#define UI_MODI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_modi
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
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
    QLineEdit *actividad_2;
    QComboBox *TIPO;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *lun;
    QCheckBox *mar;
    QCheckBox *mier;
    QCheckBox *jue;
    QCheckBox *vie;
    QCheckBox *sab;
    QCheckBox *dom;
    QLabel *label;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_3;
    QCommandLinkButton *AGREGAR;
    QSpacerItem *horizontalSpacer;
    QCommandLinkButton *REGRESAR;

    void setupUi(QDialog *modi)
    {
        if (modi->objectName().isEmpty())
            modi->setObjectName(QStringLiteral("modi"));
        modi->resize(800, 500);
        modi->setBaseSize(QSize(0, 0));
        layoutWidget = new QWidget(modi);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(170, 130, 449, 186));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setFamily(QStringLiteral("Padauk"));
        font.setPointSize(12);
        label_2->setFont(font);

        verticalLayout->addWidget(label_2);

        hora_3 = new QSpinBox(layoutWidget);
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
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        verticalLayout_2->addWidget(label_3);

        min_3 = new QSpinBox(layoutWidget);
        min_3->setObjectName(QStringLiteral("min_3"));
        min_3->setMaximum(59);

        verticalLayout_2->addWidget(min_3);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        universal = new QComboBox(layoutWidget);
        universal->setObjectName(QStringLiteral("universal"));
        universal->setEditable(true);
        universal->setMaxVisibleItems(3);
        universal->setMaxCount(3);
        universal->setInsertPolicy(QComboBox::InsertAtCurrent);
        universal->setSizeAdjustPolicy(QComboBox::AdjustToContentsOnFirstShow);

        verticalLayout_3->addWidget(universal);


        horizontalLayout->addLayout(verticalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout);

        actividad_2 = new QLineEdit(layoutWidget);
        actividad_2->setObjectName(QStringLiteral("actividad_2"));
        actividad_2->setClearButtonEnabled(true);

        verticalLayout_4->addWidget(actividad_2);

        TIPO = new QComboBox(layoutWidget);
        TIPO->setObjectName(QStringLiteral("TIPO"));

        verticalLayout_4->addWidget(TIPO);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        lun = new QCheckBox(layoutWidget);
        lun->setObjectName(QStringLiteral("lun"));
        QFont font1;
        font1.setFamily(QStringLiteral("Padauk"));
        font1.setPointSize(14);
        lun->setFont(font1);

        horizontalLayout_2->addWidget(lun);

        mar = new QCheckBox(layoutWidget);
        mar->setObjectName(QStringLiteral("mar"));
        mar->setFont(font1);

        horizontalLayout_2->addWidget(mar);

        mier = new QCheckBox(layoutWidget);
        mier->setObjectName(QStringLiteral("mier"));
        mier->setFont(font1);

        horizontalLayout_2->addWidget(mier);

        jue = new QCheckBox(layoutWidget);
        jue->setObjectName(QStringLiteral("jue"));
        jue->setFont(font1);

        horizontalLayout_2->addWidget(jue);

        vie = new QCheckBox(layoutWidget);
        vie->setObjectName(QStringLiteral("vie"));
        vie->setFont(font1);

        horizontalLayout_2->addWidget(vie);

        sab = new QCheckBox(layoutWidget);
        sab->setObjectName(QStringLiteral("sab"));
        sab->setFont(font1);

        horizontalLayout_2->addWidget(sab);

        dom = new QCheckBox(layoutWidget);
        dom->setObjectName(QStringLiteral("dom"));
        dom->setFont(font1);

        horizontalLayout_2->addWidget(dom);


        verticalLayout_4->addLayout(horizontalLayout_2);

        label = new QLabel(modi);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(340, 50, 181, 71));
        QFont font2;
        font2.setFamily(QStringLiteral("Padauk"));
        font2.setPointSize(28);
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);
        layoutWidget_2 = new QWidget(modi);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(170, 360, 451, 50));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        AGREGAR = new QCommandLinkButton(layoutWidget_2);
        AGREGAR->setObjectName(QStringLiteral("AGREGAR"));
        AGREGAR->setFont(font1);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/gua.png"), QSize(), QIcon::Normal, QIcon::Off);
        AGREGAR->setIcon(icon);

        horizontalLayout_3->addWidget(AGREGAR);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        REGRESAR = new QCommandLinkButton(layoutWidget_2);
        REGRESAR->setObjectName(QStringLiteral("REGRESAR"));
        REGRESAR->setFont(font1);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/prefix1/regre.png"), QSize(), QIcon::Normal, QIcon::Off);
        REGRESAR->setIcon(icon1);

        horizontalLayout_3->addWidget(REGRESAR);


        retranslateUi(modi);

        universal->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(modi);
    } // setupUi

    void retranslateUi(QDialog *modi)
    {
        modi->setWindowTitle(QApplication::translate("modi", "Dialog", 0));
        label_2->setText(QApplication::translate("modi", "Hora", 0));
        hora_3->setSuffix(QString());
        hora_3->setPrefix(QString());
        label_3->setText(QApplication::translate("modi", "Minutos", 0));
        universal->clear();
        universal->insertItems(0, QStringList()
         << QApplication::translate("modi", "AM", 0)
         << QApplication::translate("modi", "PM", 0)
         << QApplication::translate("modi", "M", 0)
        );
#ifndef QT_NO_TOOLTIP
        universal->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        universal->setAccessibleDescription(QString());
#endif // QT_NO_ACCESSIBILITY
        universal->setCurrentText(QApplication::translate("modi", "AM", 0));
        actividad_2->setPlaceholderText(QApplication::translate("modi", "Ingrese Actividad", 0));
        TIPO->clear();
        TIPO->insertItems(0, QStringList()
         << QApplication::translate("modi", "Acad\303\251micas", 0)
         << QApplication::translate("modi", "Rutinarias", 0)
         << QApplication::translate("modi", "Eventuales", 0)
        );
        lun->setText(QApplication::translate("modi", "Lun", 0));
        mar->setText(QApplication::translate("modi", "Mar", 0));
        mier->setText(QApplication::translate("modi", "Mie", 0));
        jue->setText(QApplication::translate("modi", "Jue", 0));
        vie->setText(QApplication::translate("modi", "Vie", 0));
        sab->setText(QApplication::translate("modi", "Sab", 0));
        dom->setText(QApplication::translate("modi", "Dom", 0));
        label->setText(QApplication::translate("modi", "Modificar", 0));
        AGREGAR->setText(QApplication::translate("modi", "Modificar", 0));
        REGRESAR->setText(QApplication::translate("modi", "Regresar", 0));
    } // retranslateUi

};

namespace Ui {
    class modi: public Ui_modi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODI_H
