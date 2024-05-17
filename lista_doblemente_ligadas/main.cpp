#include <cstdlib>
#include <iostream>
using namespace std;
/*- Crear una lista doblemente ligada insetando al final 5 nodos
 *- mostrar el contenido de la lista
 */
class doble{
private:
    class nodo{
    public:
        int info;
        nodo *sig;//guarda la informacion del siguiente nodo
        nodo *ant;//guarda la informacion del anterior nodo
    };
    nodo *primer, *ultimo, *nuevo, *aux;
public:
    doble();//constructor
    void insertar(int dato);
    void mostrarContenido();
};
doble::doble(){//ya creamos el constructor
    primer = NULL;
    ultimo = NULL;
    nuevo = NULL;
    aux = NULL;
}
void doble::insertar(int dato){//entonces creamos el metodo insertar
    nuevo = new nodo();// se construye el cascaron
    nuevo->info=dato;
    nuevo->sig = NULL;
    nuevo->ant= NULL;
    if(primer==NULL){//si la lista esta vacía entonces hay que creala
        primer = nuevo;
        ultimo = nuevo;
        nuevo = NULL;
    }else{//en caso de no estar vacía, entonces procedemos a agregarlo despues del ultimo
        ultimo->sig=nuevo;
        nuevo->ant=ultimo;
        ultimo = nuevo;
        nuevo = NULL;
    }
}
void doble::mostrarContenido(){
    if(primer==NULL){
        cout<<"La lista se encuentra vacía "<<endl;return;
    }else{
        cout<<"\nPrimer"<<endl;
        cout<<" | "<<endl;
        for(aux=primer; aux!=NULL; aux = aux->sig){
            if(aux->sig==NULL){
                cout<<aux->info<<"--NULL";
            }else{
                cout<<aux->info<<"<-->";
            }
        }
    }
}
int main() {
    doble *p=new doble();
    p->insertar(1); p->insertar(2); p->insertar(3); p->insertar(4); p->insertar(5);
    p->mostrarContenido();
    return 0;
}

