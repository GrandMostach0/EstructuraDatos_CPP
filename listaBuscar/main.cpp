#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */

class pila{
private:
    class nodo{
    public:
        int info;
        nodo *sig;
    };
    nodo *aux, *nuevo, *tope, *q;
public:
    pila();
    void insertar(int dato);
    void mostrar_pila();
    void buscar_eliminar(int valor);
    void divir();
    void contar_ocurrencias(int valor);
    void menu();
};

//constructor
pila::pila(){
    aux = NULL; nuevo = NULL; tope = NULL; q = NULL;
}

//metodo para agregar elemento a la pila
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

//metodo para mostrar los dato que tiene la pila
void pila::mostrar_pila(){
    if(tope == NULL){
        cout<<"ERROR LA LISTA ESTA VACÍA"<<endl;return;
    }else{
        cout<<"\nPrimera"<<endl;
        cout<<"|"<<endl;
        for(aux = tope; aux!=NULL; aux = aux->sig){
            if(aux->sig == NULL){
                cout<<aux->info<<"---NULL";
            }else{
                cout<<aux->info<<"--->";
            }
        }
    }
}

 //metodo para buscar y elimnar un elemento
void pila::buscar_eliminar(int valor){
    nodo *temp;
    if(tope==NULL){
        cout<<"ERROR LA LISTA ESTA VACÍA"<<endl;return;
    }else{
        for(aux = tope; aux!=NULL; aux = aux->sig){
            if(aux == tope && aux->sig==NULL && aux->info == valor){
                tope = NULL;
                return;
            }
            if(aux->sig!=NULL && aux->sig->info == valor){
                temp = aux->sig;
                aux->sig = aux->sig->sig;
                delete(temp);
            }
        }
    }
}

 //metodo para dividr una lista que tiene elementos
void pila::divir(){
    int cont = 0;
    double mitad = 0;
    if(tope == NULL){
        cout<<"ERROR LA LISTA ESTA VACÍA "<<endl;return;
    }else{
        for(aux = tope; aux!=NULL; aux = aux->sig){
            cont ++;//obtenemos la cantidad de nodos que tiene la lista para poder dividrla
        }
        mitad = cont/2; // se divide entre dos para poder obtener la mitad
        q = tope;
        for(int i=1; i<=mitad; i++){ //pasamos el puntero q en la mitad obtenida
            q = q->sig;
        }
        
        for(aux = tope; aux->sig!=q; aux = aux->sig);//pasamos aux antes de q
        
        aux->sig = NULL;
        aux = NULL;
    }
    
    for(aux=q; aux!=NULL; aux = aux->sig){
        cout<<aux->info<<"--->";
    }
}

 //contar la cantidad de ocurrencias que hay en la lista
void pila::contar_ocurrencias(int valor){
    int contador = 0;
    for(aux = tope; aux!=NULL; aux = aux->sig){
        if(aux->info == valor){
            contador++;
        }
    }
    
    cout<<"\nLa cantidad de ocurrencias de "<<valor<<" es  de "<<contador<<endl;
}

//metodo que realiza un menu
void pila::menu(){
    pila *p = new pila();
    int opcion=0, dato=0, con2=0;
    do{
    cout<<"\t.:MENÚ:."<<endl;
    cout<<"1.- Ingresar datos "<<endl;
    cout<<"2.- Llenar automaticamente "<<endl;
    cout<<"3.- Eliminar dato "<<endl;
    cout<<"4.- dividir "<<endl;
    cout<<"5.- Salir del programa "<<endl;
    cout<<" Opcion :  ";
    cin>>opcion;
    if(opcion==2){
        con2++;
    }
    if(con2==2){
        cout<<"No puede eligir esta opcion ya que ha agregado datos usted mismo "<<endl;
    }
    
    switch(opcion){
        case 1: cout<<"Ingrese el dato :  "<<endl;
        cin>>dato;
        p->insertar(dato);
        break;
        
        case 2: cout<<"Llenando automaticamente ..... "<<endl;
        int lista[6];
        
        //llenando el array del 0 - 5
        for(int i = 0; i<6; i++){
            lista[i] = i;
        }
        //llenando la lista con los datos del array
        for(int j = 0; j < 6; j++){
            p->insertar(lista[j]);
        }
        
        cout<<"LLENANO SUSEYFULL"<<endl;
    }
    
    }while(opcion!=5);
}
int main() {
    pila *c = new pila();
    c->menu();
    return 0;
}

