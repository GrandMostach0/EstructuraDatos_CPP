#include <cstdlib>
#include <iostream>

using namespace std;

/*PROBLEMA 6            VICTOR BERNARDO CHAN VARGUEZ --- 3SB
 * Elabora un métod que permita trabajar la inserción de datos enteros a una lista
 * simplemente ligada circular como si fuera una cola.
 */
class cola{
private:
    class nodo{
    public:
        int info;
        nodo *sig;
    };
    nodo *frente, *fondo, *nuevo, *aux;
public:
    cola();
    void insertar(int dato);
    void mostrar_Cola();
};
cola::cola(){
    frente = NULL; fondo = NULL; nuevo = NULL; aux = NULL;
}
void cola::insertar(int dato){
    nuevo = new nodo();
    nuevo->info = dato;
    nuevo->sig = NULL;
    if(fondo == NULL){
        frente = nuevo;
        fondo = nuevo;
        nuevo = NULL;
    }else{
        fondo->sig = nuevo;
        fondo = nuevo;
        nuevo = NULL;
    }
}
void cola::mostrar_Cola(){
    if(frente==NULL){
        cout<<"ERROR LA COLA ESTA VACÍA"<<endl;
        return;
    }
    cout<<"\nFrente"<<endl;
    cout<<" | "<<endl;
    for(aux = frente; aux!=NULL; aux = aux->sig){
        if(aux->sig==NULL){
            cout<<aux->info<<"---FONDO";
        }else{
            cout<<aux->info<<"--->";
        }
    }
}
int main() {
    cola *p = new cola();
    p->insertar(1); p->insertar(2); p->insertar(3); p->insertar(4); p->insertar(5);
    p->mostrar_Cola();

    return 0;
}

