#ifndef PERSONA_H
#define PERSONA_H


class Persona
{
private:
    char* nombre;
public:
    Persona();
    void dormir();
    void hablar();
    void contar();
    void adquirirNombre(char*);
    void decirNombre();
};

#endif // PERSONA_H
