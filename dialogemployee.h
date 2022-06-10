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

    void on_pushButton_clicked();

    void on_label_53_linkActivated(const QString &link);

    void on_Dialogemployee_accepted();

    void on_label_2_linkActivated(const QString &link);

private:
    Ui::Dialogemployee *ui;
};

#endif // DIALOGEMPLOYEE_H
