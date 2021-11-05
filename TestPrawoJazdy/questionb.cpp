#include "questionb.h"
#include "ui_questionb.h"

QuestionB::QuestionB(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::QuestionB)
{
    ui->setupUi(this);
}

QuestionB::~QuestionB()
{
    delete ui;
}
