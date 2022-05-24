#include "dialogadmitted.h"
#include "ui_dialogadmitted.h"

Dialogadmitted::Dialogadmitted(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialogadmitted)
{
    ui->setupUi(this);
}

Dialogadmitted::~Dialogadmitted()
{
    delete ui;
}
