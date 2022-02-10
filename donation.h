#ifndef DONATION_H
#define DONATION_H

#include <QMainWindow>
#include "finalpage.h"
namespace Ui {
class Donation;
}

class Donation : public QMainWindow
{
    Q_OBJECT

public:
    explicit Donation(QWidget *parent = nullptr);
    ~Donation();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Donation *ui;
    finalpage *Finalpage;
};

#endif // DONATION_H
