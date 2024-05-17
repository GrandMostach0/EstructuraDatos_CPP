#include <cstdlib>
#include <iostream>
#define MAX 3
using namespace std;
/*--GENERAR UNA FUNCION PARA LEER UN ARREGLO DE TAMAÑO 10 X 80
 * DE TIPO CHAR LLAMADO NOMBRES
 * --CREAR OTRA FUNCION PARA ORDENAR ASCENDENTEMENTE EL CONTEGIDO DEL ARREGLO
 * --CREAR UNA TERCERA FUNCIÓN PARA IMPRIMIR EL CONTENIDO DEL ARREGLO ANTES Y DESPUES DE ORDENARLO */
void leer(char n[MAX][80]){
    for(int i=0; i<MAX; i++ ){
        cout<<"Nombre ";cin.getline(n[i],80);
    }
}
void mostrar(char n[MAX][80]){
    for(int i=0; i<MAX; i++){
        cout<<n[i]<<endl;
    }
}
void ordenar(char n[MAX][80]){
    char aux[80]="";
    //METODO DE BURBUJA
    for(int i=0; i<MAX-1; i++){
        for(int k=i+1; k<MAX;k++){
            if(strcmp(n[i], n[k])>0)){
                //SE CAMBIA SE A < SI SE DESEA DESCENDENTEMENTE
                strcpy(aux, n[i]);
                strcpy(n[i],n[k]);
                strcpy(n[k],aux);
            }
        }
    }
}

int main() {
    char nombres[MAX][80];
    leer(nombres);
    ordenar(nombres);
    mostrar(nombres); 
    return 0;
}

