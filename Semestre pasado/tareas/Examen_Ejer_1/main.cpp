#include <cstdlib>
#include <iostream>
#include "libreria_examen.h"
using namespace std;
/*VICTOR BERNARDO CHAN VARGUEZ
 * 1.- En un solo proyecto elabora las siguientes funciones en C++ y construye una librería con ellas llamada “libreria_examen”:
a) Un método que permita leer un arreglo de tipo entero de tamaño 10 y encuentre la cantidad de números terminados en 3 y 6.
b) Un método que permita leer cinco calificaciones flotantes y encontrar el número más grande.  ( 13 puntos)*/

int main() {
    numero n;
    cout<<"**********   OBTERNER NUMEROS TERMINAN EN 3 O 6 **********"<<endl;
    n.asignarNum();
    n.getNumTer3o6();
    cout<<"\n\n**********   OBTERNER CALIFICACION MAS ALTA (FLOAT)  **********"<<endl;
    n.asignarCalif();
    n.getCalifMayor();
    n.MostrarTodasLasCalificaciones();
    return 0;
}

