#include "atleta.h"
Atleta::Atleta(char*nombre,
               int numero,
               char*nacionalidad)
{
    this->setNombre(nombre);
    this->setNumero(numero);
    this->setNacionalidad(nacionalidad);
}
void Atleta::setNombre(char* nombre)
{
    this->nombre = nombre;
}
void Atleta::setNumero(int numero)
{
    this->numero = numero;
}
void Atleta::setNacionalidad(char* nacionalidad)
{
    this->nacionalidad = nacionalidad;
}
void Atleta::setTiempo(double tiempo)
{
    this->tiempo = tiempo;
}
char* Atleta::getNombre()
{
    return this->nombre;
}
int Atleta::getNumero()
{
    return this->numero;
}
char* Atleta::getNacionalidad()
{
    return this->nacionalidad;
}
double Atleta::getTiempo()
{
    return this->tiempo;
}
