#include <cstdlib>
#include <iostream>
using namespace std;

/*              .:ARBOLES:.
 * PROBLEMA 1       VICTOR BERNARDO CHAN VARGUEZ --- 3SB
 * crear un árbolo de búsqueda e imprimirlo en pantalla 
 */
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
    insertarNodo(arbol, 5); insertarNodo(arbol, 4); insertarNodo(arbol, 7);
    insertarNodo(arbol, 2); insertarNodo(arbol, 6); insertarNodo(arbol, 1);
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
    }else{//si el arbol tiene nodo o mas
        int valorRaiz = arbol->info;//obtenemos el valor de la raiz
        if(dato < valorRaiz){// si el elemento es menor que la raiz, insertamos en la izquierda
            insertarNodo(arbol->izq, dato);
        }else{//si el elemnto es mayo que la raiz, se le pone en la derecha
            insertarNodo(arbol->der, dato);
        }
    }
}

//funcion para mostrar el arbol
void mostrarArbol(nodo *arbol, int cont){
    if(arbol == NULL){//si el arbol esta vacio
        return;
    }else{
        mostrarArbol(arbol->der, cont+1);
        for(int i=0; i<cont; i++){
            cout<<"   ";
        }
        cout<<arbol->info<<endl;
        mostrarArbol(arbol->izq, cont+1);
    }
}

