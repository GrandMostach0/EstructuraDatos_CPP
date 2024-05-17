#include <cstdlib>
#include <iostream>
#include <string.h>
using namespace std;
/*Ejercicio 1
 *Escriba una definicion recursiva de una función que tiene un parametro
 * n de tipo entero y que devuelve el n-ésimo número de Fibonacci.*/

int posicionFibonacci(int n){
    if(n<2)
        return n;
    else
        return posicionFibonacci(n-1)+posicionFibonacci(n-2);
}
int main() {
    int num=0;
    int res = 0;
    char s[80];
    cout<<"Introduce el número : ";cin.getline(s,80);num=atoi(s);
    cout<<"La posicion indicada : "<<num<<" en Fibonacci es : "<<posicionFibonacci(num)<<endl;;
    
    return 0;
}

