/********************************************************************************
** Form generated from reading UI file 'kata.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KATA_H
#define UI_KATA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>

QT_BEGIN_NAMESPACE

class Ui_kata
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *kata)
    {
        if (kata->objectName().isEmpty())
            kata->setObjectName(QString::fromUtf8("kata"));
        kata->resize(400, 300);
        buttonBox = new QDialogButtonBox(kata);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(kata);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, kata, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, kata, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(kata);
    } // setupUi

    void retranslateUi(QDialog *kata)
    {
        kata->setWindowTitle(QCoreApplication::translate("kata", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class kata: public Ui_kata {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KATA_H
