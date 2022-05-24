#ifndef DIALOGEMPLOYEE_H
#define DIALOGEMPLOYEE_H

#include <QDialog>

namespace Ui {
class Dialogemployee;
}

class Dialogemployee : public QDialog
{
    Q_OBJECT

public:
    explicit Dialogemployee(QWidget *parent = nullptr);
    ~Dialogemployee();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::Dialogemployee *ui;
};

#endif // DIALOGEMPLOYEE_H
