#include "katb.h"
#include "ui_katb.h"
#include <vector>
#include <string>
#include <time.h>
#include <stdlib.h>
#include <QString>
#include <QMessageBox>
using namespace std;
void showPoints();

katb::katb(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::katb)
{
    ui->setupUi(this);
}

katb::~katb()
{
    delete ui;
}
void katb::loadQuestion(){
    licznik_b++;
    if (licznik_b==10) showPoints();
    srand (time(NULL));
    obecnePytanie_b = rand() % 15;
    while (std::find(oldquestion.begin(), oldquestion.end(), obecnePytanie_b) != oldquestion.end()) {
            obecnePytanie_b = rand()%15;
        }
        oldquestion.push_back(obecnePytanie_b);
    ui->PytaniaTekstB->setText(questions_b.at(obecnePytanie_b));
    ui->PytaniaTekstB->setText(questions_b.at(obecnePytanie_b));

}

void katb::showPoints(){
    QMessageBox MessageBox;
    if(punkty_b>=9)
    MessageBox.setText("Zdałeś egzamin!");
    else MessageBox.setText("Nie zdałeś egzaminu");
    MessageBox.exec();
    this->close();
}

void katb::on_PrzyciskC_clicked()
{
    QString string = "C";
    checkAnswer(string);
}


void katb::on_PrzyciskB_clicked()
{
    QString string = "B";
    checkAnswer(string);
}


void katb::on_PrzyciskA_clicked()
{
    QString string = "A";
    checkAnswer(string);
}
void katb::checkAnswer(QString answer){
    int x = QString::compare(answer, answers_b.at(obecnePytanie_b), Qt::CaseInsensitive);
    if(x==0) punkty_b++;
    this->loadQuestion();
}

