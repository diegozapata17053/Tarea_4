#ifndef DIALOGO_H
#define DIALOGO_H

#include <QDialog>

namespace Ui {
class Dialogo;
}

class Dialogo : public QDialog
{
    Q_OBJECT

public:
    explicit Dialogo(QWidget *parent = nullptr);
    ~Dialogo();

    QString getDatoLineEdit();
    QString getDatoComboBox();
    QString getDatoComboBox_2();
    QString getDatoGroupBox();
    int getDatoSpinBox();
    double getDatoDoubleSpinBox();

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();


private:
    Ui::Dialogo *ui;
};

#endif // DIALOGO_H
