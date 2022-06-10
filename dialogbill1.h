#ifndef DIALOGBILL1_H
#define DIALOGBILL1_H

#include <QDialog>

namespace Ui {
class Dialogbill1;
}

class Dialogbill1 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialogbill1(QWidget *parent = nullptr);
    ~Dialogbill1();

private slots:
    void on_Dialogbill1_accepted();

    void on_label_3_linkActivated(const QString &link);

    void on_pushButton_clicked();

private:
    Ui::Dialogbill1 *ui;
};

#endif // DIALOGBILL1_H
