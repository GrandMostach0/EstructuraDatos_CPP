#include <cstdlib>
#include <iostream>

using namespace std;

/*PROBLEMA 13           VICTOR BERNARDO CHAN VARGUEZ --- 3SB
 * Escriba un método que elimine los nodos que están duplicados en una lista
 * simplemente ligada circular
 */
class colaSimple{
private:
    class nodo{
    public:
        int info;
        nodo *sig;
    };
    nodo *frente, *fondo, *nuevo, *aux, *eliminarNodo;
public:
    colaSimple();
    void insertar(int dato);
    void eliminar_nodos_Duplicados(int valor);
    void mostrar_Cola();
};
colaSimple::colaSimple(){
    frente=NULL; fondo=NULL; nuevo=NULL; aux=NULL;
}
void colaSimple::insertar(int dato){
    nuevo=new nodo();
    nuevo->info = dato;
    nuevo->sig = NULL;
    if(frente==NULL){
        frente=nuevo;
        fondo=nuevo;
        nuevo=NULL;
    }else{
        fondo->sig=nuevo;
        fondo=nuevo;
        nuevo = NULL;
    }
}

void colaSimple::eliminar_nodos_Duplicados(int valor){
    nodo *r, *q;
    aux = frente;
    while(aux!=NULL){
        if(frente->info==valor){
            r = frente;
            frente = frente->sig;
            aux = aux->sig;
            delete(r);
        }else{
            if(aux->sig!=NULL && aux->sig->info==valor){
                r = aux->sig;
                aux->sig = aux->sig->sig;
                delete(r);
            }else{
                aux = aux->sig;
            }
        }
    }
}
void colaSimple::mostrar_Cola(){
    cout<<"\nFrente"<<endl;
    cout<<"|"<<endl;
    for(aux=frente; aux!=NULL; aux=aux->sig){
        if(aux->sig==NULL){//si esta en la ultima posicion
            cout<<aux->info<<"<----FONDO";
        }else{
            cout<<aux->info<<"--->";
        }
    }
}
int main() {
    colaSimple *cs = new colaSimple();
    cs->insertar(5); cs->insertar(1); cs->insertar(5); cs->insertar(6); cs->insertar(6); cs->insertar(5); cs->insertar(10);
    cout<<"\n\n"<<endl;
    cs->mostrar_Cola();
    //eliminando los nodos duplicados
    cs->eliminar_nodos_Duplicados(5);
    cs->eliminar_nodos_Duplicados(6);
    cout<<"\n\n"<<endl;
    //mostrando con los nodos borrados
    cs->mostrar_Cola();
    
    return 0;
}

