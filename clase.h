#ifndef CLASE_H
#define CLASE_H
#include <vector>
#include <QWidget>
#include "c_vector.h"

using namespace std;
namespace Ui {
class clase;
}

class clase : public QWidget
{
    Q_OBJECT

public:
    explicit clase(QWidget *parent = nullptr);
    ~clase();


private slots:
    void on_pushButton_clicked();

private:
    Ui::clase *ui;

    vector<c_vector>contenedor;
};

#endif // CLASE_H
