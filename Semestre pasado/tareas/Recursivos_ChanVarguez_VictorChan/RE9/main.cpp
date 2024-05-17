#include <cstdlib>
#include <iostream>
using namespace std;
/*Ejercicio 9
 * INVERTIR UNA LISTA
 */
void invertir(int array[], int p, int f){
    if(p<f){
        int ayuda;
        ayuda = array[p];
        array[p] = array[f];
        array[f]=ayuda;
        invertir(array, p+1, f-1);
    }
    
}
int main() {
    int numero[]={1,2,3,4,5,6,7,8,9,10};
    invertir(numero, 0, 9);
    for(int i=0; i<10;i++){
        cout<<numero[i]<<", ";
    }
    return 0;
}

