#include <cstdlib>
#include <iostream> 

using namespace std;

/*PROBLEMA 7            VICTOR BERNARDO CHAN VARGUEZ --- 3SB
 * Elaborar un método que permita trabajar la supresión de nodos en una lista simplemente ligada
 * circular como si fuera una cola.
 * - Se debe conservar el final del nodo.
 */
class cola{
private:
    class nodo{
    public:
        int info;
        nodo *sig;
    };
    nodo *aux, *frente, *fondo, *nuevo;
public:
    cola();
    void insertar(int dato);
    void suprimir();
    void mostrar_cola();
};
cola::cola(){
    aux = NULL; frente = NULL; fondo = NULL; nuevo = NULL;
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
void cola::mostrar_cola(){
    cout<<"\nFrente"<<endl;
    cout<<"|"<<endl;
    for(aux = frente; aux!=NULL; aux = aux->sig){
        if(aux->sig==NULL){
            cout<<aux->info<<"---FONDO";
        }else{
            cout<<aux->info<<"--->";
        }
    }
}
void cola::suprimir(){
    if(frente == NULL){
        cout<<"ERROR NO SE PUEDE ELIMINAR PORQUE ESTA VACÍA"<<endl;
    }else{
        if(frente->sig==NULL){
            cout<<"\n\nERROR EL ÚLTIMO ELEMENTO NO SE PUEDE SUPRIMIR "<<endl;
        }else{
            aux = frente;
            frente = frente->sig;
            aux->sig=NULL;
        }
    }
}
int main() {
    cola *c=new cola();
    c->insertar(1); c->insertar(2); c->insertar(3); c->insertar(4); c->insertar(5);
    //mostramos
    c->mostrar_cola();
    //elimiamos hasta llegar a lo último
    c->suprimir(); c->suprimir(); c->suprimir(); c->suprimir(); c->suprimir();
    //mostramos con los cambios
    c->mostrar_cola();
    return 0;
}

