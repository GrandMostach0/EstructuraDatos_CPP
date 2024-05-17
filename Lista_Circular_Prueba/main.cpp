#include <cstdlib>
#include <iostream>

using namespace std;

/*ESTA ES UNA LISTA CIRCULAR SIMPLEMENTE LIGADA CON PILAS*/
class circulo{
private:
    class nodo{
    public:
        int dato;
        nodo *sig;
    };
    
    nodo *tope, *aux, *nuevo, *aux2;
    
public:
    circulo();//constructor
    void insertarElemente(int valor);
    void mostrarDatos();
};

circulo::circulo(){
    tope = NULL; aux = NULL; nuevo = NULL; aux2 = NULL;
}

void circulo::insertarElemente(int valor){
    nuevo = new nodo();
    nuevo->dato = valor;
    nuevo->sig = NULL;
    if(tope = NULL){//en caso de no tener ningun dato se le crea y se le asigna el primer valor
        tope = nuevo;
        nuevo = NULL;
    }else{//en caso de tener un dato o varios entonces se le sigue agreando mas valores
        nuevo->sig = tope;
        tope = nuevo;
        nuevo = NULL;
    }
}

void circulo::mostrarDatos(){
    if(tope = NULL){
        cout<<"ERROR LA LISTA NO TIENE NINGUN VALOR "<<endl;
    }
    cout<<"\nTope"<<endl;
    cout<<"|"<<endl;
    aux = tope;
    aux2 = tope;
    while(aux->dato!=aux2->dato){
        cout<<aux->dato<<"--->";
    }
}

int main() {
    circulo *p = new circulo();
    p->insertarElemente(5); p->insertarElemente(10); p->insertarElemente(11);
    
    p->mostrarDatos();
    return 0;
}

