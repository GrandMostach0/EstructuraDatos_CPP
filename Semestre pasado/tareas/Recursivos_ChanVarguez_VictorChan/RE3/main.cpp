#include <cstdlib>
#include <iostream>
using namespace std;
/* EJERCICIO 3
 * Programe un método recursivo que transforme un número entero positivo a notación binaria*/

void convertirBinario(int n){
    if(n>1){
        convertirBinario(n/2);
        cout<<n%2;
    }
}
int main() {
    int num;
    char s[80];
    for(int i=0; i<2;i++){
    cout<<"INGRESE UN NUMERO PARA CONVERTIR A BINARIO : ";cin.getline(s,80);num=atoi(s);
    cout<<"El numero : "<<num<<" En binario es : ";convertirBinario(num);
    }
    return 0;
}

