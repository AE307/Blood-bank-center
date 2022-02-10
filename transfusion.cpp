#include "transfusion.h"
#include "ui_transfusion.h"
#include <fstream>
#include <QMessageBox>
#include<QDebug>
#include<QString>
#include "usertransfution.h"
#include "mainwindow.h"
#include <signedin.h>
signedin *e2;


Transfusion::Transfusion(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Transfusion)
{
    ui->setupUi(this);
}

Transfusion::~Transfusion()
{
    delete ui;
}

void Transfusion::on_pushButton_clicked()
{
    usertransfution *current_transfusion;
    current_transfusion = new usertransfution();
    current_transfusion->blood_type = ui->comboBox->currentText().toStdString();
    current_transfusion->where = ui->comboBox_2->currentText().toStdString();
    if(ui->radioButton->isChecked() == true)
    {
        current_transfusion->pmethod = "Cash";
    }
    else if(ui->radioButton_2->isChecked() == true)
    {
        current_transfusion->pmethod = "Visa";
    }
    current_transfusion->username = MainWindow::username;
    current_transfusion->write_to_file();
    hide();
    QMessageBox :: information(this,"Done","your request has been saved");
    e2=new signedin(this);
    e2->show();

}
