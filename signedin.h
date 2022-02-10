#ifndef SIGNEDIN_H
#define SIGNEDIN_H

#include <QDialog>
#include "donation.h"
#include "transfusion.h"
namespace Ui {
class signedin;
}

class signedin : public QDialog
{
    Q_OBJECT

public:
    explicit signedin(QWidget *parent = nullptr);
    ~signedin();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::signedin *ui;
    Donation *donation;
    Transfusion *transfusion;

};

#endif // SIGNEDIN_H
