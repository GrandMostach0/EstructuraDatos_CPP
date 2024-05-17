#include <cstdlib>
#include <iostream>
#define MAX 3//por ahora se pone 3 pero se puede poner los 10
using namespace std;
/*Mediante una función leer diez registros de tipo alumno con campos:
 * matricula[12]
 *nombre[55]
 * e ingreso de tipo entero.
 * Mediante otra función imprimir esos díez campos*/
//aqui esta el struct(palabra reservada)
struct alumno{
    char matricula[12];
    char nombre[55];
    int ingreso;
};
//Aqui esta la funcion
void leer(alumno x1[MAX]){
    char s[80];
    for(int i=0; i<MAX; i++){
        cout<<"Matricula : ";cin.getline(x1[i].matricula,12);
        cout<<"Nombre : ";cin.getline(x1[i].nombre,55);
        cout<<"Ingreso: ";cin.getline(s,80);x1[i].ingreso = atoi(s);
    }
}
void mostrar(alumno x1[MAX]){
    for(int i=0; i<MAX; i++){
        cout<<x1[i].matricula<<"\t"<<x1[i].nombre<<"\t"<<x1[i].ingreso<<endl;
    }
}
int main() {
    alumno x1[MAX];
    leer(x1);
    mostrar(x1);
    return 0;
}

