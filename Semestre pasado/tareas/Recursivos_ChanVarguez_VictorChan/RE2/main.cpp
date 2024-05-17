#include <cstdlib>
#include <iostream>
using namespace std;
/*EJRCICIO 2
 * Escribir una función recursiva que devuelva la suma de los primeros N enteros*/
int SumaDelos10N(int num){
    int total = 0;
    if(num==1){
        return 1;
    }else{
        return total = num + SumaDelos10N(num-1);
    }
}

int main() {
    int numero=10;
    cout<<"La suma de los 10 primeros numero enteros N son : "<<SumaDelos10N(numero);
    return 0;
}

