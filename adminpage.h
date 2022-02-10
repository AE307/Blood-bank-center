#ifndef ADMINPAGE_H
#define ADMINPAGE_H
#include<string>
#include<cstring>
#include<list>
#include "user.h"
#include <QDialog>
#include "regisiter.h"

using namespace std;

namespace Ui {
class adminpage;
}

class adminpage : public QDialog
{
    Q_OBJECT

public:
    explicit adminpage(QWidget *parent = nullptr);
    ~adminpage();
    list<user> read_from_file();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();




    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();





    void on_pushButton_5_clicked();

private:
    Ui::adminpage *ui;
    Regisiter *regisiter;


};

#endif // ADMINPAGE_H
