#include <cstdlib>
#include <iostream>

using namespace std;

/*PROBLEMA 4            VICTOR BERNARDO CHAN VARGUEZ --- 3SB
 */
struct nodo{
    int info;
    nodo *der;
    nodo *izq;
};


nodo *crearNodo(int dato);
void insertarNodo(nodo *&, int);
void contarNodo(nodo *);
void mostrarArbol(nodo *, int);

nodo *arbol = NULL;

int main(){
    int contador = 0;
    
    insertarNodo(arbol, 5); insertarNodo(arbol, 4); insertarNodo(arbol, 7);
    insertarNodo(arbol, 2); insertarNodo(arbol, 6); insertarNodo(arbol, 1);
    /*En este ejemplo la raíz es el número 5 es que el arbol que muesta esta de manera
     horizontal*/
    mostrarArbol(arbol, contador);
    cout<<"\n\n";
    cout<<"Numero de nodos : "; contarNodo(arbol);
    
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

 //funcion para contar los nodos de un arbol
void contarNodo(nodo *arbol){
    int numNodos = 1;
    if(arbol == NULL){
        cout<<"Erro"<<endl;
    }else{
        if(arbol->izq!=NULL){
            numNodos++;
            contarNodo(arbol->izq);
        }
        
        if(arbol->der!=NULL){
            numNodos++;
            contarNodo(arbol->der);
        }
    }
    
   cout<<"Numero de nodoso :"<<numNodos;
}