#include <cstdlib>
#include <iostream>
using namespace std;
/*VICTOR BERNARDO CHAN VARGUEZ
 * Elabora un proyecto en C++ que cree una clase que permita almacenar fechas con los campos día, mes y año. 
Crea cuatro constructores para esta clase y utilízalos en el programa principal para inicializar las instancias llamadas a1, a2 y a3.
 * Deberá mostrar el contenido de las instancias en main().
Debe crear un método del tipo por referencia que permita obtener los tres valores booleanos que serán declarados en main() 
 * llamados band_dia que nos permite averiguar en el método si el día es mayor a 10 , 
 * band_mes que nos permite averiguar en el método si el mes es menor que 6 y band_anio que nos permitirán averiguar en el método si el año es 2021
 * . Los resultados deberán imprimirse en main()  (14 puntos)
 */
class fechas{
private:
    int dia, mes, anio;
public:
    //constructores
    fechas();
    void fechas2();
    void fechas3();
    void fechas4();
    //setters
    int setDia();
    int setMes();
    int setAnio();
    //metodo referencia
    void metRef(bool *d, bool *m, bool *a);
};
//------   constructores
fechas::fechas(){
    dia=0; mes=0; anio=0;
}
void fechas::fechas2(){
    dia=0; mes=0; anio=0;
}
void fechas::fechas3(){
    dia=0; mes=0; anio=0;
}
void fechas::fechas4(){
    dia=0; mes=0; anio=0;
}
//----- setters -----
int fechas::setAnio(){
    char s[80];
    cout<<"INGRESE EL AÑO : ";cin.getline(s,80);anio=atoi(s);
    return anio;
}
int fechas::setMes(){
    char s[80];
    cout<<"INGRESE EL MES : ";cin.getline(s,80);mes=atoi(s);
    return mes;
}
int fechas::setDia(){
    char s[80];
    cout<<"INGRESE EL DIA : ";cin.getline(s,80);dia=atoi(s);
    return dia;
}
//---- metodos ---
void fechas::metRef(bool *d, bool *m, bool *a){
    if(dia>10){
        d = true;
    }
    if(mes<6){
        m = true;
    }
    if(anio==2021){
        a = true;
    }
}
int main() {
    fechas a1;
    fechas a2;
    fechas a3;
    bool band_dia = false; // si dia es mayor que 10
    bool band_mes = false; // si mes es menor que 6
    bool band_anio = false;// si año es igual que 2021
    //constructor 1
    cout<<"El dia es : "<<a1.setDia();
    cout<<"El mes es : "<<a1.setMes();
    cout<<"El Año es : "<<a1.setAnio();
    a1.metRef(&band_dia,&band_mes,&band_anio);
    cout<<"El dia es mayor que 10 : "<<band_dia<<endl;;
    cout<<"El Mes es menor que 6  : "<<band_mes<<endl;
    cout<<"El Año es igual al año 2021 : "<<band_anio<<endl;
    return 0;
}

