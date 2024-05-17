#include <cstdlib>
#include <iostream>
using namespace std;
/*Ejercicio 10
 * MCD de dos numeros
 */
int MaximoComunDivisor(int n, int n2){
    if(n==0){
        return n2;
    }else{
        return MaximoComunDivisor(n2,n%n2);
    }
}
int main() {
    int num1, num2;
    char s[80];
    cout<<"Ingrese un numero : ";cin.getline(s,80); num1 = atoi(s);
    cout<<"\nIngrese otro numero : ",cin.getline(s,80), num2=atoi(s);
    if(num1>num2){
        cout<<"MCD de "<<num1<<" y "<<num2<<" es : "<<MaximoComunDivisor(num1,num2);
    }else if(num2>num1){
        cout<<"MCD de "<<num2<<" y "<<num1<<" es : "<<MaximoComunDivisor(num2,num1);
    }
    return 0;
}

