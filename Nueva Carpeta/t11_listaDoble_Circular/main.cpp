#include <cstdlib>
#include <iostream>

using namespace std;

/*PROBLEMA 11           VICTOR BERNARDO CHAN VARGUEZ --- 3SB
 * Escribe un métod que permita suprimir un nodo con un valor que ingrese el usuario
 * en una lista doblemente ligada circular
 */
class colaDoble{
private:
    class nodo{
    public:
        int info;
        nodo *sig;
        nodo *ant;
    };
    nodo *nuevo, *primero, *ultimo, *aux;
public:
    colaDoble();
    void insertar(int dato);
    void suprimir(int posicion);
    void mostrar_cola();
};
colaDoble::colaDoble(){
    nuevo = NULL; primero = NULL; ultimo = NULL; aux = NULL;
}
void colaDoble::insertar(int dato){
    nuevo = new nodo();
    nuevo->info = dato;
    nuevo->ant=NULL;
    nuevo->sig = NULL;
    if(primero == NULL){
        ultimo = nuevo;
        primero = nuevo;
        nuevo = NULL;
    }else{
        ultimo->sig = nuevo;
        nuevo->ant = ultimo;
        ultimo = nuevo;
        nuevo = NULL;
    }
}
void colaDoble::mostrar_cola(){
    if(primero == NULL){
        cout<<"ERROR LA LISTA ESTA VACÍA "<<endl; return;
    }else{
        cout<<"\nPrimera "<<endl;
        cout<<"|"<<endl;
        for(aux = primero; aux!=NULL; aux = aux->sig){
            if(aux->sig==NULL){
                cout<<aux->info<<"---NULL";
            }else{
                cout<<aux->info<<"<--->";
            }
        }
    }
}
void colaDoble::suprimir(int posicion){
    int c=1;
    if(primero!=NULL){
        aux = primero;
        while((c!=posicion) && (aux->sig!=primero)){
            aux = aux->sig;
            c++;
        }
        if(c==posicion){
            if(aux == primero){
                if(primero->sig!=aux){
                    primero->ant->sig = primero->sig;
                    primero->sig->ant = primero->ant;
                    primero = primero->sig;
                }else{
                    primero = NULL;
                }
            }else{
                aux->ant->sig = aux->sig;
                aux->sig->ant = aux->ant;
            }
            delete(aux);
        }else{
            cout<<"Posicion inválida"<<endl;
        }
    }else{
        cout<<"ERROR LA LISTA ESTA VACÍA"<<endl;
    }
}
int main() {
    colaDoble *q = new colaDoble();
    q->insertar(5); q->insertar(10); q->insertar(11); q->insertar(4); q->insertar(7);
    q->mostrar_cola();
    int num=0;
    cout<<"\nIngrese la \"posicion\" que quiere eliminar "<<endl;
    cin>>num;
    q->suprimir(num);
    cout<<"\n\n"<<endl;
    //mostrando con los datos con cambios
    q->mostrar_cola();
    return 0;
}

