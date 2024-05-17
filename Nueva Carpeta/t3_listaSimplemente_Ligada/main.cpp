#include <cstdlib>
#include <iostream>

using namespace std;

/*PROBLEMA 3        VICTOR BERNARDO CHAN VARGUEZ --- 3SB
 * Implemente un método que, dada un lista simplemente ligada con N nodos, en donde N es mayor que cero
 * - genere una nueva lista con puntero inicial Q
 * - con solamente los nodos que almacenen un dato impar.
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
    void mostrar_pila_nImpar();
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
void pila::mostrar_pila_nImpar(){
    int impar, pos=0;
    for(aux = tope; aux!=NULL; aux = aux->sig){
        if(aux->info%2!=0){
            impar++;
        }
    }
    if(tope==NULL){
        cout<<"ERROR PILA VACÍA"<<endl;
    }else{
        cout<<"\nTope"<<endl;
        cout<<"|"<<endl;
        while(tope!=NULL){
            q = tope;
            if(q->info%2!=0){
                pos++;
                if(pos==impar){
                    cout<<q->info<<"---NULL";
                }else{
                    cout<<q->info<<"--->";
                }
                tope = tope->sig;
                q = tope;
            }else{
                tope = tope->sig;
                q = tope;
            }
        }
    }
}
void pila::mostrar_pila(){
    if(tope == NULL){
        cout<<"ERROR LA PILA ESTA VACÍA "<<endl;
        return;
    }
    cout<<"\nTope"<<endl;
    cout<<" | "<<endl;
    for(aux = tope; aux!=NULL; aux = aux->sig){
        if(aux->sig==NULL){
            cout<<aux->info<<"---NULL";
        }else{
            cout<<aux->info<<"--->";
        }
    }
}
int main() {
    pila *p = new pila();
    p->insertar(2); p->insertar(2); p->insertar(3); p->insertar(3); p->insertar(7); p->insertar(9);
    cout<<"Mostrando la lista original : "<<endl;
    p->mostrar_pila();
    cout<<"\n\n\nMostrando la lista con datos impares : "<<endl;
    p->mostrar_pila_nImpar();
    return 0;
}

