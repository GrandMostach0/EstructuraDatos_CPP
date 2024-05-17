
#include <cstdlib>
#include <iostream>
using namespace std;
/*Crear una clase que permita utilizar un arreglo de tamño 10 en forma de cola */
class cola_decremento{
private:
    int cola[10];
    int frente;
    int fondo;
public:
    cola_decremento();
    void insert(int dato);
    void remove();
    void muestra();
};
cola_decremento::cola_decremento(){
    frente=-1;fondo-1;
    for(int i=0;i<10;i++)cola[i]=0;
}
void cola_decremento::insert(int dato){
    if(fondo<=9){//MAX -1
        if(fondo==0){ //CASO DE ESTAR INSETANDO EN EL PRIMERO
            fondo++; frente++;
            cola[fondo]=dato;
        }else{//todas las otras inserciones menos la primera
            fondo++;
        }
    }else{
        cout<<"ERROR-COLA SE ENCUENTRA LLENA"<<endl;
    }
}
void cola_decremento::remove(){
    int aux;
    if(frente!=-1){//LA COLA NO ESTA VACÍA
        aux=cola[frente];
        for(int i=1;i<=fondo;i++){//CORIMIENTO DE VALORES
            cola[i-1]=cola[i];
        }
        fondo--;//DECREMENTO DE INDICE
    }else{//LA COLA SI ESTA VACÍA
        cout<<"ERROR-COLA SE ENCUENTRA VACIA"<<endl;
    }
}
void cola_decremento::muestra(){
    if(frente==-1){
        cout<<"ERROR-COLA VACÍA, NO ES POSIBLE MOSTRAR"<<endl;
        return;
    }
    for(int i=frente; i<=fondo;i++){
        if(i==frente)cout<<cola[i]<<"<---FRENTE"<<endl;
        if(i==fondo)cout<<cola[i]<<"<----FONDO"<<endl;
        if(i!=frente && i!=fondo)cout<<cola[i]<<endl;
    }
    cout<<endl;
}
int main(){
    cola_decremento s3;
    s3.insert(5);s3.insert(6);s3.insert(99);s3.insert(12);s3.muestra();
    s3.remove();s3.remove();
    return 0;
}

