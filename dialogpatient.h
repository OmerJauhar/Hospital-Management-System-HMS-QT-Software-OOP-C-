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

    void on_label_linkActivated(const QString &link);

    void on_label_medicine_linkActivated(const QString &link);

    void on_label_3_linkActivated(const QString &link);

    void on_frame_customContextMenuRequested(const QPoint &pos);

private:
    Ui::DialogPatient *ui;
};

#endif // DIALOGPATIENT_H
