#ifndef DIALOGADMITTED_H
#define DIALOGADMITTED_H

#include <QDialog>

namespace Ui {
class Dialogadmitted;
}

class Dialogadmitted : public QDialog
{
    Q_OBJECT

public:
    explicit Dialogadmitted(QWidget *parent = nullptr);
    ~Dialogadmitted();

private slots:
    void on_Dialogadmitted_accepted();

    void on_pushButton_6_clicked();

private:
    Ui::Dialogadmitted *ui;
};

#endif // DIALOGADMITTED_H
