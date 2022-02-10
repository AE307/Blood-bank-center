#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include<fstream>
#include<QDebug>
#include"user.h"
string MainWindow::username = "ola";

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


void MainWindow::on_pushButton_signup_clicked()
{

    hide();
    SecDialog=new secdialog(this);
    SecDialog->show();

}

void MainWindow::on_pushButton_clicked()
{
    ifstream InTextFile;
    InTextFile.open("C:\\Users\\Lenovo\\Documents\\users.txt");
    user *new_user = new user();
    list<user*> users_list;
    InTextFile.seekg(0);

    while(InTextFile>>new_user->first_name>>new_user->last_name>>new_user->password>>new_user->username>>new_user->blood_type>>new_user->age>>new_user->gender ){

          users_list.push_back(new user(new_user->first_name, new_user->last_name, new_user->password, new_user->username, new_user->blood_type , new_user->age , new_user->gender ));

      }
    InTextFile.close();

    for(auto u:users_list)
    {
        if(u->username == ui->lineEdit_username->text().toStdString())
        {
            if(u->password == ui->lineEdit_password->text().toStdString())
            {
                MainWindow::username=u->username;
                hide();
                Signedin=new signedin(this);
                Signedin->show();
                //login
            }
            else
            {
                QMessageBox:: warning(this,"Login","Wrong Password");
                //invalid password;
            }
        }
        //QString ln =QString::fromStdString(u->username);
        //qDebug("%s", qUtf8Printable(ln));
        //QString ps =QString::fromStdString(u->password);
        //qDebug("%s", qUtf8Printable(ps));
    }
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();
    if(username == "admin" && password == "2468")
    {
        hide();
        Adminpage=new adminpage(this);
        Adminpage->show();
    }
    //else
    //{
       // QMessageBox:: warning(this,"Login","Wrong username or Password");
    //}

}
