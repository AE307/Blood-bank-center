#ifndef ADDUSER_H
#define ADDUSER_H

#include <QDialog>
#include "adminpage.h"
namespace Ui {
class Adduser;
}

class Adduser : public QDialog
{
    Q_OBJECT

public:
    explicit Adduser(QWidget *parent = nullptr);
    ~Adduser();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Adduser *ui;

};

#endif // ADDUSER_H
