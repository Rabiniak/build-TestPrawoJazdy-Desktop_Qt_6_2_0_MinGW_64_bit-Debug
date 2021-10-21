/********************************************************************************
** Form generated from reading UI file 'question.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUESTION_H
#define UI_QUESTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>

QT_BEGIN_NAMESPACE

class Ui_Question
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Question)
    {
        if (Question->objectName().isEmpty())
            Question->setObjectName(QString::fromUtf8("Question"));
        Question->resize(400, 300);
        buttonBox = new QDialogButtonBox(Question);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(Question);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Question, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Question, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Question);
    } // setupUi

    void retranslateUi(QDialog *Question)
    {
        Question->setWindowTitle(QCoreApplication::translate("Question", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Question: public Ui_Question {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUESTION_H
