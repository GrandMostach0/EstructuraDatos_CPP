#include <iostream>
#include <cstdlib>

using namespace std;

/*PROBLEMA 12            VICTOR BERNARDO CHAN VARGUEZ --- 3SB
 * Escribe un método que permita recorrer una lista doblemente ligada e imprima el contenido
 * de los nodos en un sentido y después del otro sentido
 */
class pilaDoble{
private:
    class nodo{
    public:
        int info;
        nodo *sig;
        nodo *ant;
    };
    nodo *primero, *ultimo, *nuevo, *aux;
public:
    pilaDoble();
    void insertar(int dato);
    void mostrar_pilaDoble();
    void mostrar_OtroSentido();
};
pilaDoble::pilaDoble(){
    primero = NULL; ultimo = NULL; nuevo = NULL; aux = NULL;
}
void pilaDoble::insertar(int dato){
    nuevo = new nodo();
    nuevo->info = dato;
    nuevo->sig = NULL;
    nuevo->ant = NULL;
    if(primero == NULL){
        primero = nuevo;
        ultimo = nuevo;
        nuevo = NULL;
    }else{
        ultimo->sig = nuevo;
        nuevo->ant = ultimo;
        ultimo = nuevo;
        nuevo = NULL;
    }
}

void pilaDoble::mostrar_pilaDoble(){
    if(primero==NULL){
        cout<<"ERROR LA PILA ESTA VACÍA"<<endl; return;
    }else{
        cout<<"\nPrimero"<<endl;
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

void pilaDoble::mostrar_OtroSentido(){
    for(aux = primero; aux!=NULL; aux = aux->sig);//pasar aux al final;
    if(primero==NULL){
        cout<<"ERROR LA LISTA ESTA VACÍA "<<endl;return;
    }
    cout<<"\n\t\t\t\t     Primero "<<endl;
    cout<<"\t\t\t\t     |"<<endl;
    for(aux = ultimo; aux!=NULL; aux = aux->ant){
        if(aux->sig==NULL){
            cout<<"NULL---"<<aux->info;
        }else{
            cout<<"<--->"<<aux->info;
        }
    }
}
int main() {
    pilaDoble *d=new pilaDoble();
    d->insertar(1); d->insertar(2); d->insertar(3); d->insertar(4); d->insertar(5); d->insertar(6);
    d->mostrar_pilaDoble();
    cout<<"\n\nSentido Contrario: "<<endl;
    d->mostrar_OtroSentido();
    return 0;
}