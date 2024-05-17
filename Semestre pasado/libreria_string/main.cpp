#include<iostream>
#include <cstdlib>
#include "checar_cadenas.h"
using namespace std;
/* CREAR UNA LIBRERIA LLAMADA MANEJO_CADENAS QUE CONTENGA LOS SIGUIENTES VALORES EN EL PARTE
* PRIVADA: UNA FRASE DE HASTA 80 CARACTERES, UN CONTADOR DE CUANTOS ESPACIOS EN BLANCO
* TIENE LA FRASE, UNA VARIABLE BOOLEANA PARA DETERMINAR SI EXISTE AL MENOS UNA CADENA "PARA"
* EN LA FRASE Y OTRA VARIABLE BOOLENA QUE ME INDIQUE SI LA FRASE TIENE UNA LONGITUD MAYOR DE
* 18 CARACTERES.
*/

int main() {​​​​
cadenas f2;
f2.asignar_frase("ESte es el ejemplo de para que ");
f2.asignar_cont(0); f2.asignar_longitud(true); f2.asignar_para(false);

f2.leer_frase();
cout << "La cantidad de espacios en blanco es : " << f2.contar_espacios() << endl;
if( f2.almenos_unpara() )
cout << "SI EXISTE AL MENOS UNA OCURRENCIA DE PARA EN LA FRASE" << endl;
else
cout << "NO HAY OCURRENCIA DE PAR EN LA FRASE" << endl;



if( f2.tamanio18() )
cout << "LA FRASE TIENE UN TAMAÑO MAYOR DE 18 CARACTERES" << endl;
else
cout << "LA FRASE NO TIENE UN LARGO MAYOR A 18 CARACTERES" << endl;

return 0;
}​​​​