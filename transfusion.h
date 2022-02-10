#ifndef TRANSFUSION_H
#define TRANSFUSION_H

#include <QDialog>

namespace Ui {
class Transfusion;
}

class Transfusion : public QDialog
{
    Q_OBJECT

public:
    explicit Transfusion(QWidget *parent = nullptr);
    ~Transfusion();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Transfusion *ui;
};

#endif // TRANSFUSION_H
