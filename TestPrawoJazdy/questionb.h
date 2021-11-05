#ifndef QUESTIONB_H
#define QUESTIONB_H

#include <QDialog>

namespace Ui {
class QuestionB;
}

class QuestionB : public QDialog
{
    Q_OBJECT

public:
    explicit QuestionB(QWidget *parent = nullptr);
    ~QuestionB();

private:
    Ui::QuestionB *ui;
};

#endif // QUESTIONB_H
