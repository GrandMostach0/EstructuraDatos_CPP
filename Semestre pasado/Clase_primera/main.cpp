#include <cstdlib>
#include<iostream>
#include<string.h>
using namespace std;
/*Ejemplo del uso de una clase en C++ */
class alumno{
//por default es privado, pero si se le pones se puede cambiar los accesos
// de los metodos que tiene;
private:
    char matricula[12];
    char nombre[55];
    int ingreso;
    float couta;
public:
    //Este es un constructor por default
    alumno();//Constructor sirven para los Objetos
    //metodos
    alumno(char m[12]);// constructor 2
    alumno(char m[12],char n[55],int i,float c);//contructor 3
    void leer();
    void imprimir();
};
//para que se declare una funcion en una clase hay que poner "::" paara que pueda funcionar
alumno::alumno(){
    cout<<"Constructor 1"<<endl;
    strcpy(matricula,"");strcpy(nombre,"");ingreso=1; couta=2150;
}
//constructor 2
alumno::alumno(char m[]){
    cout<<"Constructor 2"<<endl;
    strcpy(matricula,m);strcpy(nombre,"");ingreso=1; couta=2150;
}
//constructor 3
alumno::alumno(char m[12], char n[15], int i, float c){
    cout<<"Constructor 3"<<endl;
    strcpy(matricula,m);strcpy(nombre,n);ingreso=i; couta=c;
}
//el metodo imprimir le pertenece a la clase alumno se indica = clase::nombre_metodo
void alumno::imprimir(){
    cout<<endl;
    cout<<matricula<<"\t"<<nombre<<"\t"<<ingreso<<"\t"<<couta<<endl;
}
void alumno::leer(){
    cout<<"Matricula: "; cin.getline(matricula,12);
    cout<<"Nombre: ";cin.getline(nombre,55);
    char s[80];
    cout<<"Ingreso ";cin.getline(s,80);ingreso = atoi(s);
    cout<<"Cuota ";cin.getline(s,80); couta = atof(s);
}

int main() {
    //creamos el objeto alumno
    alumno a; //SOLO UTILIZA EL PRIMER CONSTRUCTOR DE DAFAULT
    a.imprimir();
    alumno a2;//EJECUTA EL SEGUNDO CONSTRUCTOR
    a2 = ("E200");
    a2.imprimir();
    alumno a3;
    a3 = ("E20080421","Oscar Diaz",12,1250);
    a3.imprimir();
    return 0;
}

