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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pres
{
public:
    QPushButton *pushButton;

    void setupUi(QWidget *pres)
    {
        if (pres->objectName().isEmpty())
            pres->setObjectName(QStringLiteral("pres"));
        pres->resize(400, 300);
        pushButton = new QPushButton(pres);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(130, 120, 85, 27));

        retranslateUi(pres);

        QMetaObject::connectSlotsByName(pres);
    } // setupUi

    void retranslateUi(QWidget *pres)
    {
        pres->setWindowTitle(QApplication::translate("pres", "pres", 0));
        pushButton->setText(QApplication::translate("pres", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class pres: public Ui_pres {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRES_H
