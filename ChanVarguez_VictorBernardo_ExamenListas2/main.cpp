#include <cstdlib>
#include <iostream>

using namespace std;

/*EXAMEN LISTAS VICTOR BERNARDO CHAN VARGUEZ
 * PROBLEMA 2
 */
class circular{
private:
    class nodo{
    public:
        int info;
        nodo *sig;
    };
    nodo *frente, *fondo, *nuevo, *aux;
public:
    circular();//constructor
    void agregar(int dato);
    void mostrar_Cola();
};
circular::circular(){
    frente = NULL;
    fondo = NULL;
    nuevo = NULL;
    aux = NULL;
}
void circular::agregar(int dato){
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
void circular::mostrar_Cola(){
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
    circular *p = new circular();
    int valor[6]={1,2,3,4,5,6};
    
    for(int i=0; i<6; i++){
        p->agregar(valor[i]);
    }
    
    p->mostrar_Cola();
    
    return 0;
}