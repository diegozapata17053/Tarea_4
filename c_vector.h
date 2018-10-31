#ifndef C_VECTOR_H
#define C_VECTOR_H
#include <QString>

class c_vector
{
public:
    c_vector();


    QString getnombre();
    QString getmateria();
    QString getnivel();
    QString getcontrato();
    int getedad();
    double getpuntaje();

    void setnombre(QString n);
    void setmateria(QString m);
    void setnivel(QString niv);
    void setcontrato(QString c);
    void setedad(int e);
    void setpuntaje(double p);


    QString nombre;
    QString materia;
    QString nivel;
    QString contrato;
    int edad;
    double puntaje;



};

#endif // C_VECTOR_H
