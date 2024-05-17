#include <cstdlib>
#include <iostream>

using namespace std;

/*PROBLEMA 4            VICTOR BERNARDO CHAN VARGUEZ --- 3SB
 * Implementar un método que dada una lisra simplemente ligada con N nodos, donde N es mayor que cero
 * - Genere una nueva lista con punto inicial Q, con solamente
 * - los nodos que almacenan un dato mayo que el promedio de la lista
 */
class pila{
private:
    double promedio;
    class nodo{
    public:
        int info;
        nodo *sig;
    };
    nodo *nuevo, *aux, *tope, *q;
public:
    pila();
    void insertar(int dato);
    void mostrar_Pila();
    void Promedio();
    void mostrardatos_mayorProm();
};
pila::pila(){
    aux = NULL; nuevo = NULL; tope = NULL; promedio = 0; q = NULL;
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
void pila::Promedio(){
    int n=0, sum=0;
    if(tope == NULL){
        cout<<"ERROR LA LISTA ESTA VACÍA"<<endl;
    }else{
        for(aux = tope; aux!=NULL; aux = aux->sig){
            n++;
            sum = sum + aux->info;
        }
        
        promedio = sum/n;
    }
    cout<<"Suma : "<<sum<<endl;
    cout<<"Promedio : "<<promedio<<endl;
    
}
void pila::mostrar_Pila(){
    if(tope==NULL){
        cout<<"ERROR LA PILA ESTA VACÍA"<<endl;return;
    }else{
        cout<<"\nTope"<<endl;
        cout<<"|"<<endl;
        for(aux = tope; aux!=NULL; aux = aux->sig){
            if(aux->sig==NULL){
                cout<<aux->info<<"---NULL";
            }else{
                cout<<aux->info<<"--->";
            }
        }
    }
}
void pila::mostrardatos_mayorProm(){
    int pos=0;
    for(aux=tope; aux!=NULL; aux = aux->sig){
        if(aux->info>promedio){
            pos++;
        }
    }
    int n=0;
    if(tope==NULL){
        cout<<"ERROR LA PILA ESTA VACÍA"<<endl;
    }else{
        cout<<"\nTope"<<endl;
        cout<<"|"<<endl;
        q = tope;
        while(q!=NULL){
            if(q->info>promedio){
                n++;
                if(n==pos){
                    cout<<q->info<<"---NULL";
                    q = q->sig;
                }else{
                    cout<<q->info<<"--->";
                    q = q->sig;
                }
            }else{
                q = q->sig;
            }
        }
    }
}
int main() {
    pila *e = new pila();
    e->insertar(2); e->insertar(3); e->insertar(3); e->insertar(5); e->insertar(7);
    e->insertar(10);
    e->mostrar_Pila();
    cout<<"\n"<<endl;
    e->Promedio();
    cout<<"\n"<<endl;
    e->mostrardatos_mayorProm();
    return 0;
}

