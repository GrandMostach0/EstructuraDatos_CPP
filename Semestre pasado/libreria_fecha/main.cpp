#include <cstdlib>
#include <iostream>
#include "libreria_fechas.h"
using namespace std;
/*CREAR UNA LIBRERIA LLAMADA FECHAS QUE MANEJE UNA CLASE LLAMADA FECHA
 * QUE EN SU PARTE PRIVADA TENGA EL DIA, MES Y AÑO Y CREE TODOS LOS MÉTODOS
 * GETTER Y SETTER, ADEMÁS CREE UN MÉTODO QUE ENCUENTRE SI LAS FECHAS ES
 * POSTERIOR AL 2015 Y OTRO MÉTODOS QUE MENCIONE SI EL AÑO DE LA FECHA ES BICIESTO*/

int main() {
    fecha f2;
    f2.leer_fecha();
    if(f2.fecha_posterior2015()){
        cout<<"La fecha es posterior a 2015"<<endl;
    }else{
        cout<<"La fecha es del 2015 o antes"<<endl;
    }
    return 0;
}

