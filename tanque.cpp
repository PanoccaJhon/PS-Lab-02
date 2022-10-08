#include "tanque.h"
#include <iostream>
Tanque::Tanque()
{
    this->contenido = 0;
}
double Tanque::getContenido()const
{
    return contenido;
}
void Tanque::agregar(double cantidad)
{
    if(this->contenido + cantidad < this->capacidad)
        this->contenido += cantidad;
    else
        std::cout<<"Error: capacidad maxima superada, "
                   "vuelva a intentar\n";
}
void Tanque::sacar(double cantidad)
{
    if(this->contenido - cantidad > 0)
        this->contenido -= cantidad;
    else
        std::cout<<"Error: contenido insuficiente, "
                   "agrege mas o quite menos y vuelva"
                   " a intentar\n";
}
void Tanque::sacaMitad()
{
    if(this->contenido > 0)
        this->contenido /= 2;
    else
        std::cout<<"Error: el contenido es 0\n";
}
