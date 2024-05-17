#include <cstdlib>
#include <iostream>

using namespace std;
/*EJERCICIO 4
 * Escribir un programa que encuentre la suma de los enteros positivos pares 
 * desde N hasta 2. 
 * Chequear que si N es impar se imprima un mensaje de error.*/
int sumaPar(int num){
    int total=0;
    if(num%2==0){
        return total = num + sumaPar(num - 2);
    }else{
        cout<<"Los numero ingresados no son pares "<<endl;
        return 1;
    }
}
int main() {
    int numero;
    char s[80];
    cout<<"Ingrese un numero para calcular la suma de sus pares : ";cin.getline(s,80);numero=atoi(s);
    cout<<"La suma de los numeros pares son : "<<sumaPar(numero);
    return 0;
}

