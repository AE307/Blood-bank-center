#ifndef FINALPAGE_H
#define FINALPAGE_H

#include <QDialog>

namespace Ui {
class finalpage;
}

class finalpage : public QDialog
{
    Q_OBJECT

public:
    explicit finalpage(QWidget *parent = nullptr);
    ~finalpage();

private slots:
    void on_pushButton_clicked();

private:
    Ui::finalpage *ui;
};

#endif // FINALPAGE_H
