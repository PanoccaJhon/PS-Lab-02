#ifndef ATLETA_H
#define ATLETA_H
class Atleta
{
public:
    Atleta();
    Atleta(char*,int,char*);
    void setTiempo(double);
    char* getNombre();
    int getNumero();
    char* getNacionalidad();
    double getTiempo();
private:
    char* nombre;
    int numero;
    char* nacionalidad;
    double tiempo;
    void setNombre(char*);
    void setNumero(int);
    void setNacionalidad(char*);
};
#endif // ATLETA_H
