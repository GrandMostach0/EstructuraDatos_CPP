#include <iostream>
#include <cstdlib>

using namespace std;

class Calculadora{
public:
    Calculadora();//constructor
    int sumar(int a, int b);
};

Calculadora::Calculadora(){
}

int Calculadora::sumar(int a, int b){
    int total=0;
    if(a<0){
        cout<<"El primer numero "<<a<<" Es negativo"<<endl;
    }
    if(b<0){
        cout<<"El segundo numero "<<b<<" Es negativo"<<endl;
    }
    total = a + b;
    
    return total;
}

int main(){
    Calculadora c;
    cout<<"La suma de los numeros son : "<<c.sumar(5,6)<<endl;
    return 0;
}

