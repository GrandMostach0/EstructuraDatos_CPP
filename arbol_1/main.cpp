#include <cstdlib>
#include <iostream>
#include <valarray>

using namespace std;

struct nodo{
    int info;
    nodo *der;
    nodo *izq;
};
//prototipos
void menu();
nodo *crearNodo(int dato);
void insertarNodo(nodo *&, int);
void mostrarArbol(nodo *, int);
bool buscarNodo(nodo *, int);

nodo *arbol = NULL;
int main() {
    //agregamos al main
    menu();
    
    return 0;
}

//funcion de menu
void menu(){
    int dato, opcion, contador=0;
    do{
        cout<<"\t.:MENU:."<<endl;
        cout<<"1. insertar nuevo nodo "<<endl;
        cout<<"2. mostrar el arbol completo "<<endl;
        cout<<"3. encontrar un elemento "<<endl;
        cout<<"4. salir "<<endl;
        cout<<" opcion :  ";
        cin>>opcion;
        
        switch(opcion){
            case 1: cout<<"\nDigite un numero: ";
            cin>>dato;
            insertarNodo(arbol, dato);//insertamos un nuevo nodo;
            cout<<"\n";
            break;
            
            case 2: cout<<"\nMostrando el arbol completo\n\n";
            mostrarArbol(arbol, contador);
            cout<<"\n";
            break;
            
            case 3: cout<<"\nDigite el elemento a buscar : ";
            cin>>dato;
            if(buscarNodo(arbol, dato) == true){
                cout<<"\nElemento "<<dato<<" a sido enconrado en el arbol\n";
            }else{
                cout<<"\nElemento no encontrado\n\n";
            }
            break;
            
        }
    }while(opcion!=4);
}
//funciones para crear nuevo nodo
nodo *crearNodo(int dato){
    nodo *nuevo_nodo = new nodo();
    nuevo_nodo->info = dato;
    nuevo_nodo->der = NULL;
    nuevo_nodo->izq = NULL;
    
    return nuevo_nodo;
}

//funcion para buscar un elemento en el arbol
bool buscarNodo(nodo *arbol, int n){
    if(arbol == NULL){//si el arbol esta vacio
        return false;
    }
    else if(arbol->info == n){//si el nodo es igual al elemento
        return true;
    }
    else if(n < arbol->info){//si el valor a buscar es meno que el dato se va a la derecha
        return buscarNodo(arbol->izq, n); //funcion recursiva que se llama nuevamente
    }
    else{//si el elemento es mayo que la informacion del nodo se busca por el derecho
        return buscarNodo(arbol->der, n);//otra funcion recursiva que busca del lado derecho
    }
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