#ifndef DIALOGBILL_H
#define DIALOGBILL_H

#include <QDialog>

namespace Ui {
class Dialogbill;
}

class Dialogbill : public QDialog
{
    Q_OBJECT

public:
    explicit Dialogbill(QWidget *parent = nullptr);
    ~Dialogbill();

private slots:
    void on_pushButton_clicked();

    void on_label_linkActivated(const QString &link);

    void on_Dialogbill_accepted();

    void on_linedoctor_activated(int index);

private:
    Ui::Dialogbill *ui;
};

#endif // DIALOGBILL_H
