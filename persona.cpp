#include <iostream>
#include "persona.h"

Persona::Persona()
{

}
void Persona::dormir()
{
    std::cout<<"Persona::dormir\n";
}
void Persona::hablar()
{
    std::cout<<"Persona::hablar\n";
}
void Persona::contar()
{
    std::cout<<"Perosna::contar\n";
}
void Persona::adquirirNombre(char* nombre)
{
    this->nombre = nombre;
}
void Persona::decirNombre()
{
    std::cout<<"nombre: "<<this->nombre<<"\n";
}
