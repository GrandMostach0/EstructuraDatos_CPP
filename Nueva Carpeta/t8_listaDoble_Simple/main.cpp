#include <cstdlib>
#include <iostream>

using namespace std;

/*PROBLEMA 8            VICTOR BERNARDO CHAN VARGUEZ --- 3SB
 * Escribir un método que permita:
 * - triplicar los valores enteros PARES en los nodos
 * - duplicar los valores IMPARES en los nodos
 * en una lista doblemente ligada.
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
    void duplicar_Triplicar();
};
pilaDoble::pilaDoble(){
    primero = NULL; ultimo = NULL; nuevo = NULL; aux = NULL;
}

void pilaDoble::insertar(int dato){
    nuevo = new nodo();
    nuevo->info = dato;
    nuevo->sig = NULL;
    nuevo->ant = NULL;
    if(primero==NULL){
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
        cout<<"ERROR LA PILA ESTA VACÍA"<<endl;
        return;
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

void pilaDoble::duplicar_Triplicar(){
    for(aux = primero; aux!=NULL; aux = aux->sig){
        if(aux->info%2==0){//PAR = triplicar
            aux->info = aux->info * 3;
        }else{//IMPAR = Duplicar
            aux->info = aux->info * 2;
        }
    }
}
int main() {
    pilaDoble *p=new pilaDoble();
    p->insertar(1); p->insertar(2); p->insertar(3); p->insertar(4); p->insertar(5);
    //mostrar sin cambios
    p->mostrar_pilaDoble();
    p->duplicar_Triplicar();
    //mostrar con cambios
    cout<<"\n\n"<<endl;
    p->mostrar_pilaDoble();
    return 0;
}

