#ifndef DIALOGPATIENT_H
#define DIALOGPATIENT_H

#include <QDialog>

namespace Ui {
class DialogPatient;
}

class DialogPatient : public QDialog
{
    Q_OBJECT

public:
    explicit DialogPatient(QWidget *parent = nullptr);
    ~DialogPatient();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_DialogPatient_accepted();

private:
    Ui::DialogPatient *ui;
};

#endif // DIALOGPATIENT_H
