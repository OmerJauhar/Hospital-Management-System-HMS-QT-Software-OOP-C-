#ifndef DIALOGAPPOINTMENT_H
#define DIALOGAPPOINTMENT_H

#include <QDialog>

namespace Ui {
class Dialogappointment;
}

class Dialogappointment : public QDialog
{
    Q_OBJECT

public:
    explicit Dialogappointment(QWidget *parent = nullptr);
    ~Dialogappointment();

private slots:
    void on_comboBox_activated(int index);

    void on_pushButton_8_clicked();

private:
    Ui::Dialogappointment *ui;
};

#endif // DIALOGAPPOINTMENT_H
