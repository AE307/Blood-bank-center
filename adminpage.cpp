#include "adminpage.h"
#include "ui_adminpage.h"
#include <fstream>
#include <QMessageBox>
#include <string>
#include <cstring>
#include <QString>
#include "user.h"
#include <QFile>
#include <QTextStream>
#include "userdonation.h"

adminpage::adminpage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adminpage)
{
    ui->setupUi(this);

}

adminpage::~adminpage()
{
    delete ui;
}

void adminpage::on_pushButton_clicked()
{
  /* QFile file("C:\\Users\\Lenovo\\Documents\\BloodBankcenter\\users.txt");
        if(!file.open(QIODevice::ReadOnly))
        {
            QMessageBox::information(0, "error", file.errorString());
        }


        QTextStream in(&file);
        ui->textBrowser->setText(in.readAll());
        file.close();*/
    ifstream InTextFile;
    InTextFile.open("C:\\Users\\Lenovo\\Documents\\userdonation.txt");
    userdonation *new_donation = new userdonation();
    list<userdonation*> donation_list;
    InTextFile.seekg(0);

    while(InTextFile>>new_donation->where>>new_donation->age>>new_donation->weight>>new_donation->illnes>>new_donation->username ){

          donation_list.push_back(new userdonation(new_donation->where, new_donation->age, new_donation->weight, new_donation->illnes, new_donation->username));

      }
    InTextFile.close();
    string resault="";
    for(auto d:donation_list)
    {
        QString ln =QString::fromStdString(d->username);
                qDebug("%s", qUtf8Printable(ln));
        if(d->username == ui->lineEdit->text().toStdString())
        {
             resault.append(d->where +" " +d->age +" " +d->weight +"\n");
             qDebug("%s", "high");
        }
    }
    QString ln =QString::fromStdString(resault);
            qDebug("%s", qUtf8Printable(ln));


}




void adminpage::on_pushButton_4_clicked()
{
    QFile file("C:\\Users\\DELL\\Downloads\\BloodBankcenterNEW\\users.txt");
    if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(this,"info",file.errorString());
    QTextStream in(&file);
    ui->textBrowser->setText(in.readAll());


}

void adminpage::on_pushButton_2_clicked()
{
    QFile file("C:\\Users\\DELL\\Downloads\\BloodBankcenterNEW\\userdonation.txt");
    if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(this,"info",file.errorString());
    QTextStream in(&file);
    ui->textBrowser->setText(in.readAll());
}

void adminpage::on_pushButton_3_clicked()
{
    QFile file("C:\\Users\\DELL\\Downloads\\BloodBankcenterNEW\\usertransfusion.txt");
    if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(this,"info",file.errorString());
    QTextStream in(&file);
    ui->textBrowser->setText(in.readAll());
}













void adminpage::on_pushButton_5_clicked()
{
    hide();
    regisiter = new Regisiter;
    regisiter-> show();
}
