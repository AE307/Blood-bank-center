#ifndef REGISITER_H
#define REGISITER_H

#include <QDialog>

namespace Ui {
class Regisiter;
}

class Regisiter : public QDialog
{
    Q_OBJECT

public:
    explicit Regisiter(QWidget *parent = nullptr);
    ~Regisiter();

private slots:
    void on_pushButton_clicked(bool checked);

    void on_pushButton_clicked();

private:
    Ui::Regisiter *ui;

};

#endif // REGISITER_H
