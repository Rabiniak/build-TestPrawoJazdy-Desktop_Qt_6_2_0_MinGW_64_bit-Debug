#include "startwindow.h"
#include "ui_mainwindow.h"
#include "kata.h"
#include "katb.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}



MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    //this->hide();
    kata *w = new kata;
    w->loadQuestion();
    w->show();

}


void MainWindow::on_pushButton_2_clicked()
{
    //this->hide();
    katb *w = new katb;
    w->loadQuestion();
    w->show();

}

