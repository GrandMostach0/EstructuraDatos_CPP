#include <cstdlib>
#include <iostream>

using namespace std;

/*EXAMEN LISTAS   VICTOR BERNARDO CHAN VARGUEZ
 * PROBLEMA 4
 * Dada una lista principal con nodos ya obtenidos que genere un nueva lista con
 * los nodos repetidos de la lista principal
 */
class pila{
private:
    class nodo{
    public:
        int info;
        nodo *sig;
    };
    nodo *aux, *nuevo, *p, *r;
public:
    pila();
    void insertar(int dato);
    void mostrar_pila();
    void generar_nuevalista();
    void mostrar_pila2();
};

pila::pila(){
    aux = NULL; nuevo = NULL; p = NULL; r = NULL;
}

void pila::insertar(int dato){
    nuevo = new nodo();
    nuevo->info = dato;
    nuevo->sig = NULL;
    if(p == NULL){
        p = nuevo;
        nuevo = NULL;
    }else{
        nuevo->sig = p;
        p = nuevo;
        nuevo = NULL;
    }
}

void pila::mostrar_pila(){
    if(p == NULL){
        cout<<"ERROR LA LISTA ESTA VACÍA"<<endl;return;
    }else{
        cout<<"\nPrimera"<<endl;
        cout<<"|"<<endl;
        for(aux = p; aux!=NULL; aux = aux->sig){
            if(aux->sig == NULL){
                cout<<aux->info<<"---NULL";
            }else{
                cout<<aux->info<<"--->";
            }
        }
    }
}

void pila::generar_nuevalista(){
    nodo *q;
    aux = p;
    while(aux!=NULL){
        q = aux->sig;
        while(q!=NULL){
            if(q->info==aux->info){
                if(r==NULL){
                    r = aux;
                }else{
                    aux->sig = r;
                    r = aux;
                }
            }
            
            q = q->sig;
        }
        
        aux = aux->sig;
    }
}

int main() {
    pila *c = new pila();
    c->insertar(5); c->insertar(2); c->insertar(7); c->insertar(2); c->insertar(5); c->insertar(5); c->insertar(1);
    c->mostrar_pila();
    cout<<"\n\n";
    return 0;
}