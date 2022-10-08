#include <iostream>
#include "atleta.h"
using namespace std;

int main()
{
    cout << "Ejericio 03: a" << endl;
    Atleta a("Juan",18,"peruano");
    a.setTiempo(200.0);
    Atleta b("Pablo",19,"chileno");
    b.setTiempo(300.4);
    if(a.getTiempo()<= b.getTiempo())
        std::cout<<"Ganador: "<<a.getNombre()<<" tiempo: "<<a.getTiempo()<<std::endl;
    else
        std::cout<<"Ganador: "<<b.getTiempo()<<std::endl;
    return 0;
}
