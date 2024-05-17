#include <cstdlib>
#include <iostream>
#include "Areass.h"

using namespace std;
/*Crear una biblioteca que me permita utilizar mediante una clase los métodos para encontrar
 * a) el área de un círculo
 * b) el área de un rectángulo
 * c) el área de un triángulo
 * NOTA: Los valores de lados, altura y radio serán datos privados, así como los
 * resultados de las aréas */

int main() {
    matematica u8;
    cout<<"El áre del circulo es : "<<u8.area_ciruclo()<<endl;
    cout<<"El área del rectángulo es : "<<u8.area_rectangulo()<<endl;
    cout<<"El área del tringulo es : "<<u8.area_triangulo()<<endl;
    
    //cout<<"Presio ENTER para finalizar";cin.get();

    return 0;
}

