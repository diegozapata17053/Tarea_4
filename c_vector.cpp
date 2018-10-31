#include "c_vector.h"
#include <QString>

c_vector::c_vector()
{

}

QString c_vector::getnombre()
{
    return nombre;
}

QString c_vector::getmateria()
{
    return materia;
}

QString c_vector::getnivel()
{
    return nivel;
}

int c_vector::getedad()
{
    return edad;
}

double c_vector::getpuntaje()
{
    return puntaje;
}

 QString c_vector::getcontrato()
{
    return contrato;
}


 void c_vector::setnombre(QString n)
 {
     nombre=n;
 }

 void c_vector::setmateria(QString m)
 {
     materia=m;
 }

 void c_vector::setnivel(QString niv)
 {
     nivel=niv;
 }

 void c_vector::setedad(int e)
 {
     edad=e;
 }

 void c_vector::setpuntaje(double p)
 {
     puntaje=p;
 }

 void c_vector::setcontrato(QString c)
 {
     contrato=c;
 }









