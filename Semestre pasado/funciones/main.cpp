#include <cstdlib>
#include <iostream>
using namespace std;

/*ELABORAR LAS SIGUIENTES FUNCIONES
 * A) LEER UN ARREGLO DE TIPO ENTERO LLAMADO N DE TAMAÑO 10
 * B) ENCONTRAR LA CANTIDAD DE NÚMEROS QUE TERMINAN EN 5 O 7
 * C) DUPLICAR EL CONTENIDO DE LOS VALORES IMPARES
 */

void leer(int x[10]){
 char s[80];
 for(int i=0; i<10; i++){
     cout<<"Valore :";cin.getline(s,80);
     x[i]=atoi(s);
 }
}

int suma(int x, int y, int z){
    x++; y++; z++;
    return x+y+z;
}

int busca(int n[10]){
    int contador = 0;
    
    for(int i=0; i<10; i++){
        if(n[i]%10==5 || n[i]==7){
            contador++;
        }
    }
    
    return contador;
}

void duplicar(int n[10]){
    for(int i=0; i<10; i++){
        if((n[i]%2)!=0){
            n[i]=(n[i]*2);
        }
    }
}

int imprimir(int n[10]){
    
    for(int i=0; i<10; i++){
        cout<<n[i]<<"\t";
        cout<<endl;
    }
    
}

int main() {
    int n[10]={0};
    leer(n);
    
    for(int i=0; i<10; i++){
        cout<<n[i]<<endl;
    }
    //////////////////
    int a=5, b=3, c=2;
    cout<<"La suma es: "<<suma(a,b,c)<<endl;
    
    //----- ENCONTRAR LOS QUE TERMINAN EN 5 O EN 7
    int cont = busca(n);
    cout<<"La cantidad de terminandos en 5 o 7 es: "<<cont<<endl;
    
    ///------- DUPLICAR LOS VALORES IMPARES----
    duplicar(n);
    
    //-------- IMPRIMIR LOS VALORES IMPARES
    imprimir(n);
    
    return 0;
}

