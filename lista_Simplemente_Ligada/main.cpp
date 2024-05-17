#include <cstdlib>
#include <iostream>
using namespace std;
/*Crear una lista simplemente ligada tipo pila*/
class pila{
private:
    class nodo{
    public:
        int info;
        nodo *sig;
    };
    nodo *tope,*aux,*nuevo;
    public:
    pila();
    void push(int dato);
    int pop();
    void mostrar_Pila();
};
pila::pila(){
    tope=NULL;
    aux=NULL;
    nuevo=NULL;
}
void pila::push(int dato){
    nuevo = new nodo();
    nuevo->info=dato;
    nuevo->sig=NULL;
    if(tope==NULL){
        tope = nuevo;
        nuevo = NULL;
    }else{
        nuevo->sig=tope;
        tope = nuevo;
        nuevo = NULL;
    }
}
void pila::mostrar_Pila(){
    if(tope == NULL){
        cout<<"LA PILA ESTA VACIA"<<endl; return;
    }
    cout<<"\nTope"<<endl;
    cout<<"|"<<endl;
    for(aux = tope; aux!=NULL; aux=aux->sig){
        if(aux->sig == NULL){
            cout<<aux->info<<"--NULL";
        }else{
            cout<<aux->info<<"-->";
        }
    }
}
int pila::pop(){
    if(tope ==NULL){//si lista esta vacía
        cout<<"ERRO\t-\tLA ESTA VACÍA, POR LO QUE NO SE PODRA BORRAR"<<endl;
    }else{//si no esta vacía
        if(tope->sig==NULL){//si la lista solo tiene un elemento
            aux = tope;
            tope = NULL;
        }else{//en caso de que tenga mas nodos
            aux = tope;
            tope = tope->sig;
            aux->sig = NULL;
        }
    }
}
int main() {
    pila *k=new pila();
    k->push(1); k->push(2); k->push(3); k->push(4); k->push(5);
    k->mostrar_Pila();
    k->pop(); k->pop(); k->pop();
    k->mostrar_Pila();
    return 0;
}