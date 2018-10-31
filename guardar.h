#ifndef GUARDAR_H
#define GUARDAR_H

#include <QDialog>

namespace Ui {
class guardar;
}

class guardar : public QDialog
{
    Q_OBJECT

public:
    explicit guardar(QWidget *parent = nullptr);
    ~guardar();

private:
    Ui::guardar *ui;
};

#endif // GUARDAR_H
