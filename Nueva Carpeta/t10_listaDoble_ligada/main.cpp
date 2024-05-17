#include <cstdlib>
#include <iostream>

using namespace std;

/*PROBLEMA 10           VICTOR BERNARDO CHAN VARGUEZ --- 3SB
 * Escribe un método que permita unir dos listas doblemente ligadas que NO están ordenadas.La
 * primera es controlada por los punteros p y q y la segunda es controlada por los punteros p2 y q2.
 * La union de la dos listas debe dejar la lista controlada por los punteros p y q
 */
class listaDoble{
private:
    class nodo{
    public:
        int info;
        nodo *sig;
        nodo *ant;
    };
    nodo *p, *p2, *q, *q2, *nuevo, *aux, *aux2;
public:
    listaDoble();
    void insertar_lis1(int dato);
    void insertar_lis2(int valor);
    void mostrar();
    void concatenar();
};
listaDoble::listaDoble(){
    p = NULL; p2 = NULL; q = NULL; q2 = NULL; nuevo = NULL; aux = NULL; aux2 = NULL;
}
void listaDoble::insertar_lis1(int dato){
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
void listaDoble::insertar_lis2(int valor){
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
void listaDoble::concatenar(){
    if(p!=NULL && p2!=NULL){
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
        cout<<"ERROR"<<endl;
    }
}
void listaDoble::mostrar(){
    cout<<"LISTA 1"<<endl;
    if(p==NULL){
        cout<<"ERROR LA LISTA ESTA VACÍA"<<endl;
    }else{
        cout<<"\nPrimer"<<endl;
        cout<<"|"<<endl;
        for(aux = p; aux!=NULL; aux = aux->sig){
            if(aux->sig==NULL){
                cout<<aux->info<<"---NULL";
            }else{
                cout<<aux->info<<"<--->";
            }
        }
    }
    
    cout<<"\n\nLISTA 2"<<endl;
    if(p2==NULL){
        cout<<"ERROR LA LISTA ESTA VACÍA"<<endl;
    }else{
        cout<<"\nPrimer"<<endl;
        cout<<"|"<<endl;
        for(aux2 = p2; aux2!=NULL; aux2 = aux2->sig){
            if(aux2->sig==NULL){
                cout<<aux2->info<<"---NULL";
            }else{
                cout<<aux2->info<<"<--->";
            }
        }
    }
}
int main() {
    listaDoble *d = new listaDoble();
    //lista 1
    d->insertar_lis1(5); d->insertar_lis1(10); d->insertar_lis1(3); d->insertar_lis1(2); d->insertar_lis1(15);
    //lista 2
    d->insertar_lis2(14); d->insertar_lis2(4); d->insertar_lis2(11); d->insertar_lis2(6); d->insertar_lis2(18);
    //mostrar datos sin modificar
    d->mostrar();
    //concatenar
    d->concatenar();
    cout<<"\n\n"<<endl;
    //mostrando ya concatenando
    d->mostrar();
    return 0;
}

