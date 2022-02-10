#include "finalpage.h"
#include "ui_finalpage.h"
#include <signedin.h>

signedin *s2;

finalpage::finalpage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::finalpage)
{
    ui->setupUi(this);
}

finalpage::~finalpage()
{
    delete ui;
}

void finalpage::on_pushButton_clicked()
{
    hide();
    s2=new signedin(this);
    s2->show();
}
