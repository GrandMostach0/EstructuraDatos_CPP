#include <cstdlib>
#include <iostream>;
#define MAX 3
//el que dice MAX es una variable global esto quiere decir que si se cambia el 3
//que indica la dimension entonces todo lo que tenga MAX cambiara igual
using namespace std;

/*LEER 10 NUMEROS FLOTANTES EN UN ARREGLO LLAMADO N DE TAMAÑO 10 Y ORDENARLO DE
 * MANERA ASCEDENTE Y DESEDENTE LOS VALORES Y MOSTRARLO EN PANTALLA
 */
int main() {
    float n[MAX]={0};
    /*UTILIZAREMOS EL METODO BURBUJA, ES NOMBRADO ASI YA QUE ESCORA UN ARREGLO
     Y AL UTILIZARLO SE NECESITA DE OTRA VARIABLE AUXILIAR EN ESTE CASO SE LLAMARA
     AUX, EL AUX SERVIRA COMO UN SWAP(DE CAMBIOS) PARA ESCORAR*/
    float aux;
    char s[80];
    
    for(int i=0; i<MAX; i++){
        
        cout<<"Valor float : "<<endl;
        cin.getline(s,80);
        n[i]=atof(s);
        
        /*ENTEROS = ATOI (ANALFABETIC TO INTEGER)
         FLOAT = ATOF (ANALFABETIC TO FLOAT)*/
        
    }
    
    //////// ORDEN ASCENDENTE
    for(int i=0; i<MAX; i++){
        for(int k=i+1; k<MAX; k++){
            if(n[i]>n[k]){
                aux = n[i];
                n[i] = n[k];
                n[k] = aux;
            }
        }
    }
    
    cout<<"\t ORDEN ASCENDENTE\n"<<endl;
    for(int i=0; i<MAX; i++){
        cout<<n[i]<<endl;
    }
    
    //////// ORDEN ASCENDENTE
    for(int i=0; i<MAX; i++){
        for(int k=i+1; k<MAX; k++){
            if(n[i]<n[k]){
                aux = n[i];
                n[i] = n[k];
                n[k] = aux;
            }
        }
    }
    
    cout<<"\t ORDEN DESCENDENTE\n"<<endl;
    for(int i=0; i<MAX; i++){
        cout<<n[i]<<endl;
    }
    return 0;
}

