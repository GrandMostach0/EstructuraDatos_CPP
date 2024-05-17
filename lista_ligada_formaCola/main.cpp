#include <cstdlib>
#include <iostream>

using namespace std;
/*Crear una lista ligada en forma de cola
 */
class cola{
private:
    class nodo{
    public:
        int info;
        nodo *sig;
    };
    nodo *frente,*fondo,*nuevo,*aux;
public:
    cola();//constructor
    void insert(int dato);
    int remove();
    void mostrar_Cola();
};
cola::cola(){
    frente = NULL;
    fondo = NULL;
    nuevo = NULL;
    aux = NULL;
}
void cola::insert(int dato){
    nuevo = new nodo();
    nuevo->info=dato;
    nuevo->sig=NULL;
    if(fondo==NULL){//si la cola esta vacia entonces se procede a crearla
        frente = nuevo;
        fondo = nuevo;
        nuevo = NULL;
    }else{//si la lista no esta vacía, entra aquí
        fondo->sig=nuevo;
        fondo = nuevo;
        nuevo = NULL;
    }
}
void cola::mostrar_Cola(){
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
int cola::remove(){
    if(frente == NULL){
        cout<<"ERROR\t-\tNO SE PUEDE BORRAR YA QUE NO TIENE ELEMENTOS"<<endl;
    }else{
        if(frente->sig==NULL){//en caso que solo tenga un nodo
            aux = frente;
            frente = NULL;//borramos la lista
            fondo = NULL;//borramos la lista
            return 0;
        }else{//en caso que tenga varios nodos
            aux = frente;
            frente = frente->sig;
            aux->sig=NULL;
            return 0;
        }
    }
}
int main() {
    cola *p = new cola();
    p->insert(1); p->insert(2); p->insert(3); p->insert(4); p->insert(5);
    p->mostrar_Cola();
    p->remove(); p->remove(); p->remove();
    p->mostrar_Cola();
    return 0;
}

