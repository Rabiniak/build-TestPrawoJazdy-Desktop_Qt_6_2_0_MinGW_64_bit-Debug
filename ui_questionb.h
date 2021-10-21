/********************************************************************************
** Form generated from reading UI file 'questionb.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUESTIONB_H
#define UI_QUESTIONB_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>

QT_BEGIN_NAMESPACE

class Ui_QuestionB
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QuestionB)
    {
        if (QuestionB->objectName().isEmpty())
            QuestionB->setObjectName(QString::fromUtf8("QuestionB"));
        QuestionB->resize(400, 300);
        buttonBox = new QDialogButtonBox(QuestionB);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(QuestionB);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, QuestionB, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, QuestionB, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(QuestionB);
    } // setupUi

    void retranslateUi(QDialog *QuestionB)
    {
        QuestionB->setWindowTitle(QCoreApplication::translate("QuestionB", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QuestionB: public Ui_QuestionB {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUESTIONB_H
