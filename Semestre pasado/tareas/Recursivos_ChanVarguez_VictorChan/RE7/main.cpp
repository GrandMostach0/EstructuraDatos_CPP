#include <cstdlib>
#include <iostream>
using namespace std;
/*Ejercicio 7
Escriban una función recursiva llamada ExisteElemento que verifique si un elemento x
 *  se encuentra en una lista L */
int ExisteElemento(int array[], int pos, int busN){
    if(pos==10){
        return -1;
    }else if(array[pos]==busN){
        return pos;
    }else{
        return ExisteElemento(array,pos+1,busN);
    }
}
int main() {
    int numeros[]={1,2,3,4,5,6,7,8,9,10};
    int buscar = 5;
    cout<<"Elmento : "<<ExisteElemento(numeros, 0, buscar);
    //la posicion empieza de 0 por loque si encuentra 1 entonces, indica la posicion pero antes.
    return 0;
}

