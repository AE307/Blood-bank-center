#include "secdialog.h"
#include "ui_secdialog.h"
#include "user.h"
#include <fstream>
#include<QDebug>
#include<QString>

secdialog::secdialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::secdialog)
{
    ui->setupUi(this);
}

secdialog::~secdialog()
{
    delete ui;
}

void secdialog::on_pushButton_done_clicked()
{
    user *current_user;
    current_user = new user();
    current_user->first_name = ui->lineEdit_firstname->text().toStdString();
    current_user->last_name = ui->lineEdit_lastname->text().toStdString();
    current_user->username = ui->lineEdit_username->text().toStdString();
    current_user->password = ui->lineEdit_password->text().toStdString();
    current_user->blood_type = ui->comboBox->currentText().toStdString();
    current_user->age = ui->spinBox_age->value();

    if(ui->radioButton_female->isChecked() == true)
    {
        current_user->gender = "Female";
    }
    else if(ui->radioButton_male->isChecked() == true)
    {
        current_user->gender = "male";
    }


   current_user->write_to_file();



    hide();
    Signedin= new signedin(this);
    Signedin ->show();

}
