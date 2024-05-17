#include <cstdlib>
#include <iostream>
#include <time.h>

using namespace std;

/*PROBLEMA 2           VICTOR BERNARDO CHAN VARGUE --- 3SB*/
struct nodo{
    int info;
    nodo *der;
    nodo *izq;
};


nodo *crearNodo(int dato);
void insertarNodo(nodo *&, int);
void mostrarArbol(nodo *, int);

nodo *arbol = NULL;
int main() {
    int contador = 0;
    int num;
    srand(time(NULL));
    
    //genera datos enteros de 1 a 100;
    for(int i = 1; i <=10; i++){
        num = 1 + rand()%(101-1);
        insertarNodo(arbol, num); //los agrega al árbol
    }
    
    /*En este ejemplo la raíz es el número 5 es que el arbol que muesta esta de manera
     horizontal*/
    mostrarArbol(arbol, contador);
    
    return 0;
}

//funciones para crear nuevo nodo
nodo *crearNodo(int dato){
    nodo *nuevo_nodo = new nodo();
    nuevo_nodo->info = dato;
    nuevo_nodo->der = NULL;
    nuevo_nodo->izq = NULL;
    
    return nuevo_nodo;
}

//funcion para insertar elementos en el arbol
void insertarNodo(nodo *&arbol, int dato){
    if(arbol==NULL){//si el arbol esta vacio
        nodo *nuevo_nodo = crearNodo(dato);
        arbol = nuevo_nodo;
    }else{
        int valorRaiz = arbol->info;//obtenemos el valor de la raiz
        if(dato < valorRaiz){
            insertarNodo(arbol->izq, dato);
        }else{
            insertarNodo(arbol->der, dato);
        }
    }
}

//funcion para mostrar el arbol
void mostrarArbol(nodo *arbol, int cont){
    if(arbol == NULL){
        return;
    }else{
        mostrarArbol(arbol->der, cont+1);
        for(int i=0; i<cont; i++){
            cout<<"   "; //genera espacios para poder tener una mejor estetica al momento de imprimir el arbol
        }
        cout<<arbol->info<<endl;
        mostrarArbol(arbol->izq, cont+1);
    }
}