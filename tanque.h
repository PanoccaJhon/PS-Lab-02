#ifndef TANQUE_H
#define TANQUE_H
class Tanque
{
private:
    double contenido;
public:
    Tanque();
    static const int capacidad = 5000.0;
    double getContenido() const;
    void agregar(double); //No superar cantidad
    void sacar(double);     //No sacar mas de los que hay
    void sacaMitad();       //Elimina mitad si no hay no hace nada
};
#endif // TANQUE_H
