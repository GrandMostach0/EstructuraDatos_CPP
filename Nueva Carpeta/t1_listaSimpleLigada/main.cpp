#include <cstdlib>
#include <iostream>

using namespace std;
/*PROBLEMA 1            VICTOR BERNARDO CHAN VARGUEZ --- 3SB
 * Implementar un método que inserte un dato de tipo entero en una lista simplemente ligada
 * - no se debe permitir insertar datos repetidos
 * - si un dato ya está almacenado entonces no se debe insetar el dato
 */

class pila{
private:
    class nodo{
    public:
        int info;
        nodo *sig;
    };
    nodo *tope, *aux, *nuevo;
public:
    pila();
    void insertar(int dato);
    void mostrar_pila();
};
pila::pila(){
    tope = NULL; aux = NULL; nuevo = NULL;
}
void pila::insertar(int dato){
    nuevo = new nodo();
    nuevo->info=dato;
    nuevo->sig = NULL;
    if(tope == NULL){
        tope = nuevo;
        nuevo = NULL;
    }else{
        for(aux = tope; aux!=NULL; aux = aux->sig){
            if(aux->info == dato){
                cout<<"!!El numero ingresado ya existe en la pila¡¡"<<endl;
                return;
            }
        }
        nuevo->sig = tope;
        tope = nuevo;
        nuevo = NULL;
    }
}
void pila::mostrar_pila(){
    if(tope == NULL){
        cout<<"La pila esta vacía "<<endl;
        return;
    }
    cout<<"\nTope"<<endl;
    cout<<" | "<<endl;
    for(aux=tope; aux!=NULL; aux = aux->sig){
        if(aux->sig==NULL){
            cout<<aux->info<<"---NULL";
        }else{
            cout<<aux->info<<"---->";
        }
    }
}
int main() {
    pila *p = new pila();
    char s[80];
    int n, tam, v=0;
    //datos definidos
    p->insertar(1); p->insertar(2); p->insertar(3);
    cout<<"Ingrese la cantidad de datos que desee ingresar : ";cin.getline(s,80);tam=atoi(s);
    while(v<tam){
    cout<<"Ingrese un dato ";cin.getline(s,80);n=atoi(s);
    p->insertar(n);
    v++;
    }
    p->mostrar_pila();

    return 0;
}

