#include <cstdlib>
#include <iostream>
using namespace std;
/*Ejercicio 8
 * 
 */
int SumarListaEnteros(int array[], int pos, int total){
    if(pos!=10){
        return total = array[pos] + SumarListaEnteros(array, pos+1, total);
    }
}
int main() {
    int numero[]={10,20,30,40,50,60,70,80,90,100};
    
    cout<<"Suma de los numeros : "<<SumarListaEnteros(numero,0,0);
    
    return 0;
}

