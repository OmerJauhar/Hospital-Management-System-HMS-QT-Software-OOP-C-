#ifndef DIALOGDOCTOR_H
#define DIALOGDOCTOR_H
#include<doctor.h>

#include <QDialog>

namespace Ui {
class DialogDoctor;
}

class DialogDoctor : public QDialog
{
    Q_OBJECT

public:
    explicit DialogDoctor(QWidget *parent = nullptr);
    ~DialogDoctor();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_doctor_label_linkActivated(const QString &link);

    void on_DialogDoctor_accepted();

private:
    Ui::DialogDoctor *ui;
};

#endif // DIALOGDOCTOR_H
