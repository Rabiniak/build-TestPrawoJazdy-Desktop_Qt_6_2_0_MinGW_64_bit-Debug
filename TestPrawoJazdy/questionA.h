#ifndef QUESTIONA_H
#define QUESTIONA_H

#include <QDialog>

namespace Ui {
class QuestionA;
}

class QuestionA : public QDialog
{
    Q_OBJECT

public:
    explicit QuestionA(QWidget *parent = nullptr);
    ~QuestionA();

private:
    Ui::QuestionA *ui;
};

#endif // QUESTIONA_H
