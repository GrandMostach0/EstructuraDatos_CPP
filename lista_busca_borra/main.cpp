#include <cstdlib>
#include <iostream>
using namespace std;
/*VICTOR BERNARO CHAN CHAN VARGUEZ ----- 3SB
 * Crear una lista simplemente ligada desordenada con 5 nodos
 * solicitar al ususario que teclee cual desea buscar y encaso de encontrar
 * este debera ser eliminado de la lista
 */
class pila{
private:
    class nodo{
    public:
        int info;
        nodo *sig;
    };
    nodo *aux, *tope, *nuevo, *temp;
public:
    pila();//constructor
    void push(int dato);
    void pop(int num);
    void mostrar_Pila();  
};
pila::pila(){
    aux=NULL;
    tope = NULL;
    nuevo = NULL;
    temp = NULL;
}
void pila::push(int dato){
    nuevo=new nodo();
    nuevo->info=dato;
    nuevo->sig=NULL;
    if(tope == NULL){
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
        cout<<"ERROR\t-\tLA PILA ESTA VACÍA"<<endl;return;
    }else{
        cout<<"\nTope"<<endl;
        cout<<"|"<<endl;
        for(aux = tope; aux!=NULL; aux = aux->sig){
            if(aux->sig==NULL){
                cout<<aux->info<<"--NULL";
            }else{
                cout<<aux->info<<"-->";
            }
        }
    }
}
void pila::pop(int num){
    if(tope == NULL){
        cout<<"ERROR\t-\tLA PILA ESTA VACÍA POR LO QUE NO SE PODRA BORRAR"<<endl;
    }else{
        for(aux = tope; aux!=NULL; aux=aux->sig){
            if(aux==tope && aux->sig==NULL && aux->info==num){//borrar lista con un solo nodo
                tope=NULL;
                return;
            }
            if(aux==tope && aux->sig!=NULL && aux->info==num){//borrar lista con varios nodos
                temp = tope;
                tope = tope->sig;
                aux = aux->sig;
                temp->sig = NULL;
                return;
            }
            if(aux->sig==NULL && aux->info==num){//si se quiere borrar el ultimo
                for(temp==tope; temp->sig!=aux; temp=temp->sig);
                temp->sig=NULL;
                temp = NULL;
                return;
            }
            if(aux->info==num){//si se desea elimnar el que esta en la primera fila
                    temp->sig=aux->sig;
                    aux->sig=NULL;
                    return;
            }
        }
    }
}
int main() {
    pila *p=new pila();
    p->push(5); p->push(1); p->push(3); p->push(2); p->push(4);
    p->mostrar_Pila();
    int dato;
    cout<<"\nIngrese un dato que desee eliminar :  ";cin>>dato;
    p->pop(dato);
    p->mostrar_Pila();
    return 0;
}

