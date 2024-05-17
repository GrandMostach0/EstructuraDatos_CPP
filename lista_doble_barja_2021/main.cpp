#include <cstdlib>
#include <iostream>
using namespace std;
/*Crear una lista doblemente ligada agregando cinco nodos utilizando el metodo
 * de baraja para ordenarlo de forma ascendentemente
 */
class doble{
private:
    class nodo{
    public:
        int info;
        nodo *sig;
        nodo *ant;
    };
    nodo *primer, *ultimo, *nuevo, *aux, *aux2;
public:
    doble();
    void insertar(int dato);
    void muestrar_lista();
};
doble::doble(){
    primer = NULL;
    ultimo = NULL;
    nuevo = NULL;
    aux = NULL;
    aux2 = NULL;
}
void doble::insertar(int dato){
    nuevo = new nodo();
    nuevo->info = dato;
    nuevo->sig = NULL;
    nuevo->ant = NULL;
    if(primer == NULL){// si la lista esta vacía entonces se crea la lista
        primer = nuevo;
        ultimo = nuevo;
        nuevo = NULL;
    }else{
        if(nuevo->info <= primer->info){//caso de insertar antes del primero
            ultimo->sig = nuevo;
            nuevo->sig = primer;
            primer->ant = nuevo;
            nuevo->ant = ultimo;
            primer = nuevo;
            nuevo = NULL;
        }else{// caso de que el nodo se inserte despues del ultimo
            if(nuevo->info >= ultimo->info){
                ultimo->sig = nuevo;
                nuevo->sig = primer;
                primer->ant = nuevo;
                nuevo->ant = ultimo;
                ultimo = nuevo;
                nuevo = NULL;
            }else{//caso de insertar en medio
                aux2 = primer;
                for(aux = primer->sig; aux!=NULL; aux = aux->sig){
                    if(aux->info >= nuevo->info){
                        aux2->sig = nuevo;
                        nuevo->sig = aux;
                        aux->ant = nuevo;
                        nuevo->ant = aux2;
                        aux2 = NULL;
                        aux = NULL;
                        nuevo = NULL;
                    }
                    aux2 = aux->sig;
                }
            }
        }
    }
}
void doble::muestrar_lista(){
    if(primer  == NULL){
        cout<<"La lista se encuentra vacía "<<endl; return;
    }else{
        cout<<"\nPrimer "<<endl;
        cout<<" | "<<endl;
        for(aux = primer; aux!=ultimo; aux = aux->sig){
            if(aux == ultimo){
                cout<<aux->info<<"--NULL";
            }else{
                cout<<aux->info<<"<-->";
            }
        }
    }
}
int main() {
    doble *w=new doble();
    w->insertar(4); w->insertar(7); w->insertar(9); w->insertar(8); w->insertar(1);
    w->muestrar_lista();
    return 0;
}

