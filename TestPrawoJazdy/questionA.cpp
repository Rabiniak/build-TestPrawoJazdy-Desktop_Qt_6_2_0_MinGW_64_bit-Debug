#include "questionA.h"
#include "ui_questionA.h"

QuestionA::QuestionA(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::QuestionA)
{
    ui->setupUi(this);
}

QuestionA::~QuestionA()
{
    delete ui;
}
