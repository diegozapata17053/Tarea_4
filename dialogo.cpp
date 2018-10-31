#include "dialogo.h"
#include "ui_dialogo.h"
#include <QString>


Dialogo::Dialogo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialogo)
{
    ui->setupUi(this);
}

Dialogo::~Dialogo()
{
    delete ui;
}

void Dialogo::on_buttonBox_accepted()
{
    accept();
}

void Dialogo::on_buttonBox_rejected()
{
   reject();
}

QString Dialogo::getDatoLineEdit()
{
    return ui->lineEdit->text();
}

QString Dialogo::getDatoComboBox()
{
    return ui->comboBox->currentText();
}

QString Dialogo::getDatoComboBox_2()
{
    return ui->comboBox_2->currentText();
}

int Dialogo::getDatoSpinBox()
{
    return ui->spinBox->value();

}

double Dialogo::getDatoDoubleSpinBox()
{
    return ui->doubleSpinBox->value();
}

QString Dialogo::getDatoGroupBox()
{
    if(ui->radioButton->isChecked())
       return ui->radioButton->text();
    if(ui->radioButton_2->isChecked())
       return ui->radioButton_2->text();
    if(ui->radioButton_3->isChecked())
       return ui->radioButton_3->text();

}

