#include <cstdlib>
#include <iostream>

using namespace std;

/*EXAMEN LISTAS  VICTOR BERARDO CHAN VARGUEZ 3SB
 * PROBLEMA 1
 */

class pila{
private:
    class nodo{
    public:
        int info;
        nodo *sig;
    };
    nodo *aux, *nuevo, *tope, *q;
public:
    pila();
    void insertar(int dato);
    void mostrar_pila();
    void buscar_agregar(int valor, int posicion);
};

pila::pila(){
    aux = NULL; nuevo = NULL; tope = NULL; q = NULL;
}

void pila::insertar(int dato){
    nuevo = new nodo();
    nuevo->info = dato;
    nuevo->sig = NULL;
    if(tope == NULL){
        tope = nuevo;
        nuevo = NULL;
    }else{
        nuevo->sig = tope;
        tope = nuevo;
        nuevo = NULL;
    }
}

void pila::buscar_agregar(int valor, int posicion){
    nodo *temp = new nodo();
    temp->info = valor;
    temp->sig == NULL;
    nodo *aux2;
    if(tope!=NULL){
        aux = tope;
        while(aux!=NULL){
            
            if(aux->info == posicion){//si el aux encontra el valor entonces entra aqui
                
                aux2 = aux; //si aux esta en 90 entonces el puntero dos estara en aux2
                aux = aux->sig; //ahora aux se mueve al siguiente dato para no perderlo y luego enlazarlo con el nuevo dato
                
                aux2->sig = temp;
                temp->sig = aux;
                
            }
            aux = aux->sig;
        }
    }else{
        cout<<"ERROR LA LISTA ESTA VACÍA"<<endl;
    }
}


void pila::mostrar_pila(){
    if(tope == NULL){
        cout<<"ERROR LA LISTA ESTA VACÍA"<<endl;return;
    }else{
        cout<<"\nPrimera"<<endl;
        cout<<"|"<<endl;
        for(aux = tope; aux!=NULL; aux = aux->sig){
            if(aux->sig == NULL){
                cout<<aux->info<<"---NULL";
            }else{
                cout<<aux->info<<"--->";
            }
        }
    }
}


int main() {
    pila *c = new pila();
    c->insertar(910); c->insertar(90); c->insertar(11);
    c->mostrar_pila();
    c->buscar_agregar(95, 90);
    cout<<"\n\n";
    c->mostrar_pila();
    return 0;
}

