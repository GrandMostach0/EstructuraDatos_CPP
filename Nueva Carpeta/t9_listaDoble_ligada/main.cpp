#include <cstdlib>
#include <iostream>

using namespace std;

/*PROBLEMA 9            VICTOR BERNARDO CHAN VARGUEZ --- 3SB
 * Escribe un método que permita unir dos listas doblemente ligada que están ordenadas ascendemente.
 * La primera es controlada por los punteros p y q y la segunda es controlada por los punteros p2 y q2.
 * La únion de las listas debe dejar la lista resultante en el mismo orden ascendemente y en la lista
 * controlada por los punteros p y q.
 */
class listaConcatenar{
private:
    class nodo{
    public:
        int info;
        nodo *sig;
        nodo *ant;
    };
    nodo *p, *q, *p2, *q2, *aux, *aux2, *nuevo;
public:
    listaConcatenar();
    void insertarlis1(int dato);
    void insertarlis2(int valor);
    void concatenar();
    void mostrarListas();
};
listaConcatenar::listaConcatenar(){
    p = NULL; p2 = NULL; q = NULL; q2 = NULL; aux = NULL; aux2 = NULL; nuevo = NULL;
}
void listaConcatenar::insertarlis1(int dato){
    nuevo = new nodo();
    nuevo->info = dato;
    nuevo->sig = NULL;
    nuevo->ant = NULL;
    if(p==NULL){
        p = nuevo;
        q = nuevo;
        nuevo = NULL;
    }else{
        q->sig = nuevo;
        nuevo->ant = q;
        q = nuevo;
        nuevo = NULL;
    }
}
void listaConcatenar::insertarlis2(int valor){
    nuevo = new nodo();
    nuevo->info = valor;
    nuevo->sig = NULL;
    nuevo->ant = NULL;
    if(p2==NULL){
        p2 = nuevo;
        q2 = nuevo;
        nuevo = NULL;
    }else{
        q2->sig = nuevo;
        nuevo->ant = q2;
        q2 = nuevo;
        nuevo = NULL;
    }
}
void listaConcatenar::mostrarListas(){
    cout<<"\nLista 1----------"<<endl;
    if(p==NULL){
        cout<<"ERROR LA LISTA ESTA VACÍA"<<endl;return;
    }else{
        cout<<"\nPrimer"<<endl;
        cout<<"|"<<endl;
        for(aux = p; aux!=NULL; aux=aux->sig){
            if(aux->sig==NULL){
                cout<<aux->info<<"---NULL";
            }else{
                cout<<aux->info<<"<--->";
            }
        }
    }
    cout<<"\n\n\n"<<endl;
    cout<<"Lista 2-----------"<<endl;
    if(p2==NULL){
        cout<<"ERROR LA LISTA ESTA VACÍA"<<endl;return;
    }else{
        cout<<"\nPrimer"<<endl;
        cout<<"|"<<endl;
        for(aux2 = p2; aux2!=NULL; aux2=aux2->sig){
            if(aux2->sig==NULL){
                cout<<aux2->info<<"---NULL";
            }else{
                cout<<aux2->info<<"<--->";
            }
        }
    }
}
void listaConcatenar::concatenar(){
    if(p!=NULL &&p2!=NULL){
        aux = p;
        while(aux->sig!=NULL){
            aux = aux->sig;
        }
        aux->sig = p2;
        q->sig = p2;
        p2->ant = aux;
        p2->ant = q;
        aux = p2;
        q = p2;
    }else{
        cout<<"ERROR LISTA VACIA"<<endl;
    }
    //ordenrar ascendentemente
    nodo *aux2, *aux3;
    int temp;
    aux2 = p;
    while(aux2!=NULL){
        aux3 = aux2->sig;
        while(aux3!=NULL){
            if(aux3->info < aux2->info){
                temp = aux2->info;
                aux2->info = aux3->info;
                aux3->info = temp;
            }
            aux3 = aux3->sig;
        }
        aux2 = aux2->sig;
    }
}
int main() {
    listaConcatenar *l=new listaConcatenar();
    //lista 1
    l->insertarlis1(4); l->insertarlis1(3); l->insertarlis1(1); l->insertarlis1(2); l->insertarlis1(5);
    //lista 2
    l->insertarlis2(10); l->insertarlis2(9); l->insertarlis2(8); l->insertarlis2(7); l->insertarlis2(6);
    //mostrar
    l->mostrarListas();
    l->concatenar();
    cout<<"\n\n"<<endl;
    l->mostrarListas();
    return 0;
}

