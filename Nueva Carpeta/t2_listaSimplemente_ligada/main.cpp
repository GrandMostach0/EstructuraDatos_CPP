#include <cstdlib>
#include <iostream>

using namespace std;

/*PROBLEMA 2            VICTOR BERNARDO CHAN VARGUEZ --- 3SB
 * Implementar un método que devuelva el número de elementos de una lista simplemente ligada
 * - mayores o iguales que 100
 * - menores o iguales a 60
 */
class pila{
private:
    class nodo{
    public:
        int info;
        nodo *sig;
    };
    nodo *tope, *nuevo, *aux;
public:
    pila();
    void insertar(int dato);
    void mostrar_pila();
    int getNumerosSesenta();
    int getNumerosCien();
};
pila::pila(){
    tope = NULL; nuevo = NULL; aux = NULL;
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
void pila::mostrar_pila(){
    if(tope == NULL){
        cout<<"ERROR LA PILA ESTA VACÍA"<<endl;
        return;
    }
    cout<<"\nTope"<<endl;
    cout<<" | "<<endl;
    for(aux=tope; aux!=NULL; aux=aux->sig){
        if(aux->sig==NULL){
            cout<<aux->info<<"---NULL";
        }else{
            cout<<aux->info<<"--->";
        }
    }
}
int pila::getNumerosSesenta(){
    int S=0;
    if(tope == NULL){
        cout<<"ERROR LA PILA ESTA VACÍA "<<endl;
    }else{
        for(aux = tope; aux!=NULL; aux = aux->sig){
            if(aux->info<=60){
                S++;
            }
        }
    }
    
    return S;
}
int pila::getNumerosCien(){
    int C=0;
    if(tope == NULL){
        cout<<"ERROR LA PILA ESTA VACÍA"<<endl;
    }else{
        for(aux = tope; aux!=NULL; aux = aux->sig){
            if(aux->info>=100){
                C++;
            }
        }
    }
    return C;
}
int main() {
    pila *a = new pila();
    //numeros <=60 : 5
    a->insertar(1); a->insertar(4); a->insertar(50); a->insertar(20); a->insertar(60);
    //numeros >=100 : 5
    a->insertar(100); a->insertar(105); a->insertar(110); a->insertar(200); a->insertar(101);
    int n;
    cout<<"Numeros menores o igual que 60 : "<<a->getNumerosSesenta()<<endl;
    cout<<"Numeros mayores o igual que 100  : "<<a->getNumerosCien()<<endl;
    cout<<"Mostrando tabla : "<<endl;
    a->mostrar_pila();
    return 0;
}

