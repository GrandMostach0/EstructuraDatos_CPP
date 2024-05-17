#include <cstdlib>
#include <iostream>
#include <string.h>
using namespace std;
/*Crear una clase en donde en la parte privada se encuentre
 * un arreglo de tamaño 10 de tipo entero llamado num, un contador de valores positivos
 * , un contador de valores pares negativos y una variable que almacena la suma
 * de todos los elementos del arreglo*/
class numeros{
private:
    int num[10]={0};
    int contpos;
    int parneg;
    long suma;
public:
    numeros();//constructor
    //METÓDOS
    void leer();
    int encontrar_positivos();
    int encontrar_pares_negativos();
    long sumar();
};
//CREAMOS EL CONSTRUCTOR DE LA CLASE POR DEFAULT
numeros::numeros(){
    contpos = 0;
    parneg = 0;
    suma = 0;
    for(int i = 0; i<10; i++){
        num[i] = 0;
    }
}
void numeros::leer(){
    char s[80];
    for(int i = 0; i<10; i++){
        cout<<"Valor: ";cin.getline(s,80);
        num[i] = atoi(s);
    }
}
int numeros::encontrar_positivos(){
    for(int i=0; i<10; i++){
        if(num[i]>0){
            contpos++;
        }
    }
    return contpos;
}

int numeros::encontrar_pares_negativos(){
    for(int i=0; i<10; i++){
        if(num[i]%2==0 && num[i]<0){
            parneg++;
        }
    }
    return parneg;
}
long numeros::sumar(){
    for(int i=0; i<10; i++){
        suma+=num[i];
    }
    return suma;
}
int main(){
    numeros n;
    n.leer();
    cout<<"\n\nLa cantidad de positivos es:"<<n.encontrar_positivos()<<endl;
    cout<<"La cantidad de enteros negativos son: "<<n.encontrar_pares_negativos()<<endl;
    cout<<"La suma de todos los numeros son: "<<n.sumar()<<endl;
    
    cout<<"Presione ENTER para terminar";cin.get();
    return 0;
}

