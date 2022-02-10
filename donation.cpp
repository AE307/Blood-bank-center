#include "donation.h"
#include "ui_donation.h"
#include "userdonation.h"
#include <fstream>
#include<QDebug>
#include<QString>
#include "mainwindow.h"
Donation::Donation(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Donation)
{
    ui->setupUi(this);
}

Donation::~Donation()
{
    delete ui;
}

void Donation::on_pushButton_clicked()
{
    userdonation *current_donation;
    current_donation = new userdonation();
    current_donation->where = ui->comboBox->currentText().toStdString();
    if(ui->radioButton->isChecked() == true)
    {
        current_donation->age = "yes";
    }
    else if(ui->radioButton_2->isChecked() == true)
    {
        current_donation->age = "no";
    }
    if(ui->radioButton_3->isChecked() == true)
    {
        current_donation->weight = "yes";
    }
    else if(ui->radioButton_4->isChecked() == true)
    {
        current_donation->weight = "no";
    }
    if(ui->radioButton_5->isChecked() == true)
    {
        current_donation->illnes = "yes";
    }
    else if(ui->radioButton_6->isChecked() == true)
    {
        current_donation->illnes = "no";
    }
    current_donation->username = MainWindow::username;
    current_donation->write_to_file();


    hide();
    Finalpage=new finalpage(this);
    Finalpage->show();
}
