#ifndef SECDIALOG_H
#define SECDIALOG_H

#include <QDialog>
#include "signedin.h"
namespace Ui {
class secdialog;
}

class secdialog : public QDialog
{
    Q_OBJECT

public:
    explicit secdialog(QWidget *parent = nullptr);
    ~secdialog();

private slots:
    void on_pushButton_done_clicked();

private:
    Ui::secdialog *ui;
    signedin *Signedin;
};

#endif // SECDIALOG_H
