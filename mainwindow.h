#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "secdialog.h"
#include "signedin.h"
#include "adminpage.h"
#include <string>
#include<cstring>
using namespace std;
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_signup_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    secdialog *SecDialog;
    signedin *Signedin;
    adminpage *Adminpage;
public:
    static string username;


};
#endif // MAINWINDOW_H
