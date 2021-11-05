#include "kata.h"
#include "ui_kata.h"
#include <vector>
#include <string>
#include <time.h>
#include <stdlib.h>
#include <QString>
#include <QMessageBox>
#include "startwindow.h"
using namespace std;
void showPoints();

kata::kata(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::kata)
{
    ui->setupUi(this);
}

kata::~kata()
{
    delete ui;
}

void kata::loadQuestion(){
    licznik++;
    if (licznik==10) showPoints();
    srand (time(NULL));
    obecnePytanie = rand() % 15;
    while (std::find(oldquestion.begin(), oldquestion.end(), obecnePytanie) != oldquestion.end()) {
            obecnePytanie = rand()%15;
        }
        oldquestion.push_back(obecnePytanie);
    ui->PytaniaTekst->setText(questions.at(obecnePytanie));


}

void kata::showPoints(){
    QMessageBox MessageBox;
    if(punkty>=9)
    MessageBox.setText("Zdałeś egzamin!");
    else MessageBox.setText("Nie zdałeś egzaminu");
    MessageBox.exec();
    this->close();
}
void kata::on_PrzyciskC_clicked()
{
    QString string = "C";
    checkAnswer(string);
}


void kata::on_PrzyciskB_clicked()
{
    QString string = "B";
    checkAnswer(string);
}


void kata::on_PrzyciskA_clicked()
{
    QString string = "A";
    checkAnswer(string);
}
void kata::checkAnswer(QString answer){
    int x = QString::compare(answer, answers.at(obecnePytanie), Qt::CaseInsensitive);
    if(x==0) punkty++;
    this->loadQuestion();
}
