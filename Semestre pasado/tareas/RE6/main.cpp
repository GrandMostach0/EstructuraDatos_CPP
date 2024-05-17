#include <cstdlib>
#include <iostream>
#define length(x) (sizeof(x)/sizeof(x[0]))

using namespace std;
/*Ejercicio 6
 *Saber si dos arreglos son iguales
 */
bool SonIguales(int a[], int b[], int pos){
    if(pos==5){
        return true;
    }else if(a[pos] != b[pos]){
        return false;
    }else{
        return SonIguales(a, b, pos+1);
    }
}
int main() {
    int num[]={1,2,3,4,5};
    int num2[]={1,2,3,4,5};
    cout<<SonIguales(num, num2, 0);
    /*No entiendo porque me retorna 1 y 0 lo intenete poner con un if, pero 
     no me deja.*/
    return 0;
}

