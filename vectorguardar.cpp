#include "vectorguardar.h"
#include "ui_vectorguardar.h"


Vectorguardar::Vectorguardar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Vectorguardar)

{
    ui->setupUi(this);   
}

Vectorguardar::~Vectorguardar()
{
    delete ui;
}
