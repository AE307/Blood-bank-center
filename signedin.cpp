#include "signedin.h"
#include "ui_signedin.h"
#include <QMessageBox>
#include "mainwindow.h"
#include<QDebug>
#include <fstream>
#include "userdonation.h"
#include <QFile>
using namespace std;

signedin::signedin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::signedin)
{
    ui->setupUi(this);
    QString ln =QString::fromStdString(MainWindow::username);
    qDebug("%s", qUtf8Printable(ln));


}

signedin::~signedin()
{
    delete ui;
}

void signedin::on_pushButton_clicked()
{
    hide();
    donation=new Donation(this);
    donation->show();
}

void signedin::on_pushButton_2_clicked()
{
    hide();
    transfusion=new Transfusion(this);
    transfusion->show();
}






