#include "guardar.h"
#include "ui_guardar.h"

guardar::guardar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::guardar)
{
    ui->setupUi(this);
}

guardar::~guardar()
{
    delete ui;
}
