
#include <cstdlib>
#include <iostream>

using namespace std;

long int factorial(int n){
    if(n==0||n==1)
        return 1;
    else
        return n*factorial(n-1);
}
/*
 * PROGRAMA RECURSIVO PARA ENCONTRAR EL FACTORIAL DE UN NUMERO
 */
int main() {
    char s[80]; int num=0;
    cout<<"Valor para encontrar factorial:  ";
    cin.getline(s,80);num=atoi(s);
    cout<<"El factorial es:  "<<factorial(num)<<endl;
    cout<<"Presione ENTER para terminar ";cin.get();
    return 0;
}

