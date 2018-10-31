#ifndef VECTORGUARDAR_H
#define VECTORGUARDAR_H

#include <QDialog>

namespace Ui {
class Vectorguardar;
}

class Vectorguardar : public QDialog
{
    Q_OBJECT

public:
    explicit Vectorguardar(QWidget *parent = nullptr);
    ~Vectorguardar();

private:
    Ui::Vectorguardar *ui;
};

#endif // VECTORGUARDAR_H
