#include <cstdlib>
#include <iostream>

using namespace std;

/*PROBLEMA 3            VICTOR BERNARDO CHAN VARGUEZ --- 3SB
 */
struct nodo{
    int info;
    nodo *der;
    nodo *izq;
    nodo *padre;
};


nodo *crearNodo(int dato, nodo *);
void insertarNodo(nodo *&, int, nodo *);
void mostrarArbol(nodo *, int);
void eliminar(nodo *, int);
void eliminarNodo(nodo *);
nodo *minimo(nodo *);
void reemplazar(nodo *, nodo *);
void destruirNodo(nodo *);

nodo *arbol = NULL;
int main() {
    int contador = 0;
    int num;
    
    //genera datos enteros de 1 a 100;
    insertarNodo(arbol, 10, NULL); insertarNodo(arbol, 1, NULL); insertarNodo(arbol, 8, NULL); insertarNodo(arbol, 9, NULL);
    insertarNodo(arbol, 4, NULL); insertarNodo(arbol, 12, NULL); insertarNodo(arbol, 3, NULL); insertarNodo(arbol, 19, NULL);
    /*En este ejemplo la raíz es el número 5 es que el arbol que muesta esta de manera
     horizontal*/
    mostrarArbol(arbol, contador);
    
    cout<<"\n\n"<<endl;
    int numEliminar, i=1;
    do{
    cout<<"Que numero quiere eliminar "<<endl;
    cin>>numEliminar;
    eliminar(arbol, numEliminar);
    cout<<"\n\n"<<endl;
    mostrarArbol(arbol, contador);
    i++;
    }while(i!=3);
    return 0;
}

//funciones para crear nuevo nodo
nodo *crearNodo(int dato, nodo *padre){
    nodo *nuevo_nodo = new nodo();
    nuevo_nodo->info = dato;
    nuevo_nodo->der = NULL;
    nuevo_nodo->izq = NULL;
    nuevo_nodo->padre = padre;
    
    return nuevo_nodo;
}

//funcion para insertar elementos en el arbol
void insertarNodo(nodo *&arbol, int dato, nodo *padre){
    if(arbol==NULL){//si el arbol esta vacio
        nodo *nuevo_nodo = crearNodo(dato, padre);
        arbol = nuevo_nodo;
    }else{
        int valorRaiz = arbol->info;//obtenemos el valor de la raiz
        if(dato < valorRaiz){
            insertarNodo(arbol->izq, dato, arbol);
        }else{
            insertarNodo(arbol->der, dato, arbol);
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
 
 //fución para eliminar un nodo del arbol
void eliminar(nodo *arbol, int dato){
    if(arbol == NULL){
        cout<<"Arbol vacío"<<endl; return;
    }
    else if(dato < arbol->info){//si el valor es menor busca por la izquierda
        eliminar(arbol->izq, dato);
    }
    else if(dato > arbol->info){//buscara por la derecha
        eliminar(arbol->der, dato);
    }else{//si encontro el valor
        eliminarNodo(arbol);
    }
}

 //funcion para determinar el nodo mas a la izquierda
nodo *minimo(nodo *arbol){
    if(arbol == NULL){
        return NULL;
    }
    if(arbol->izq){
        return minimo(arbol->izq);
    }else{
        return arbol;
    }
}

 //funcion para remplazar dos nodos
void reemplazar(nodo *arbol, nodo *nuevoNodo){
    if(arbol->padre){
        if(arbol->info == arbol->padre->izq->info){
            arbol->padre->izq = nuevoNodo;
        }
        else if(arbol->info == arbol->padre->der->info){
            arbol->padre->der = nuevoNodo;
        }
    }
    if(nuevoNodo){
        nuevoNodo->padre = arbol->padre;
    }
}

//funcion para destruir un nodo
void destruirNodo(nodo *nodo){
    nodo->izq = NULL;
    nodo->der = NULL;
    
    delete nodo;
}

 //funcion para eliminar el nodo encontrado
    void eliminarNodo(nodo *nodoEliminar){
        if(nodoEliminar->izq && nodoEliminar->der){// si tiene dos hijos
            nodo *menor = minimo(nodoEliminar->der);
            nodoEliminar->info = menor->info;
            eliminarNodo(menor);
        }
        else if(nodoEliminar->izq){//si tiene un hijo izquierdo        
            reemplazar(nodoEliminar, nodoEliminar->izq);
            destruirNodo(nodoEliminar);
        }
        else if(nodoEliminar->der){//si tiene un hijo derecho
            reemplazar(nodoEliminar, nodoEliminar->der);
            destruirNodo(nodoEliminar);
        }
        else{//si no tiene hijos
            reemplazar(nodoEliminar, NULL);
            destruirNodo(nodoEliminar);
        }
    }