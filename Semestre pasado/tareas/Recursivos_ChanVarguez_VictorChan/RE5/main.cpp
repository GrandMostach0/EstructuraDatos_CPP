#include <cstdlib>
#include <iostream>
using namespace std;
/* Ejercicio 5
 * saber que hace la funcion
*/
static int f(int x){
    if(x>100){
        return (x-10);
    }else{
        return(f(f(x+11)));
    }
}
int main() {
    int numero;
    cout<<"Ingrese un valor  : ";cin>>numero;
    f(numero);
    return 0;
}

