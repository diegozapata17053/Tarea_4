#include "clase.h"
#include "ui_clase.h"
#include "dialogo.h"
#include <vector>
#include <QString>
#include "c_vector.h"

using namespace std;

clase::clase(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::clase)
{
    ui->setupUi(this);
    setWindowTitle("Datos de los Profesores");
    QStringList columnas;
    columnas <<"Nombre"<<"Materia"<<"Nivel"<<"Edad"<<"Puntaje"<<"Contrato";
    ui->tableWidget->setColumnCount(6);
    ui->tableWidget->setHorizontalHeaderLabels(columnas);
}

clase::~clase()
{
    delete ui;
}

void clase::on_pushButton_clicked()
{   
int i=0;
int resultado;
int fila;


c_vector muestra;
Dialogo objeto(this);

objeto.setWindowTitle("Captura de Datos");
resultado=objeto.exec();

if(resultado == QDialog::Rejected)
return;

muestra.setnombre(objeto.getDatoLineEdit());
muestra.setmateria(objeto.getDatoComboBox());
muestra.setnivel(objeto.getDatoComboBox_2());
muestra.setedad(objeto.getDatoSpinBox());
muestra.setpuntaje(objeto.getDatoDoubleSpinBox());
muestra.setcontrato(objeto.getDatoGroupBox());

contenedor.push_back(muestra);

ui->tableWidget->setRowCount(0);

while(i<contenedor.size())
{
ui->tableWidget->insertRow(ui->tableWidget->rowCount());
fila= ui->tableWidget->rowCount()-1;
ui->tableWidget->setItem(fila, 0, new QTableWidgetItem(contenedor[i].getnombre()));
ui->tableWidget->setItem(fila, 1, new QTableWidgetItem(contenedor[i].getmateria()));
ui->tableWidget->setItem(fila, 2, new QTableWidgetItem(contenedor[i].getnivel()));
ui->tableWidget->setItem(fila, 3, new QTableWidgetItem((QString::number(contenedor[i].getedad()))));
ui->tableWidget->setItem(fila, 4, new QTableWidgetItem((QString::number(contenedor[i].getpuntaje()))));
ui->tableWidget->setItem(fila, 5, new QTableWidgetItem(contenedor[i].getcontrato()));
i++;
}

}
