/********************************************************************************
** Form generated from reading UI file 'katb.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KATB_H
#define UI_KATB_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>

QT_BEGIN_NAMESPACE

class Ui_katb
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *katb)
    {
        if (katb->objectName().isEmpty())
            katb->setObjectName(QString::fromUtf8("katb"));
        katb->resize(400, 300);
        buttonBox = new QDialogButtonBox(katb);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(katb);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, katb, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, katb, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(katb);
    } // setupUi

    void retranslateUi(QDialog *katb)
    {
        katb->setWindowTitle(QCoreApplication::translate("katb", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class katb: public Ui_katb {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KATB_H
