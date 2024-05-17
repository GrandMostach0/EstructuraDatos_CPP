#include <cstdlib>
#include <iostream>
using namespace std;

/*USAR UNA ESTRUCTURA DE ALUMNOS QUE INCORPORE OTRA ESTRUCTURA DE FECHA, DIA Y 
 * AÑO, LEER E IMPRIMIR UN REGISTRO EN PANTALLA
 */

struct fecha{
    int dia;
    int mes;
    int anio;
};

struct alumno{
    char matricula[15];
    char nombre[55];
    fecha ingreso;
};

int main() {
    fecha abc;//instanciamos la estrucutra fecha y alumno
    alumno x1;
    
    char s[80];
    
    cout<<"Matricula ";cin.getline(x1.matricula,15);
    cout<<"Nombre ";cin.getline(x1.nombre,55);
    cout<<"Dia";cin.getline(s,80);
    x1.ingreso.dia = atoi(s);
    cout<<"Mes";cin.getline(s,80);
    x1.ingreso.mes = atoi(s);
    cout<<"Año";cin.getline(s,80);
    x1.ingreso.anio = atoi(s);
    
    //------------ I M P R I M I M O S -------------
    
    cout<<x1.matricula<<"\t"<<x1.nombre<<"\t"<<x1.ingreso.dia<<"/"<<x1.ingreso.mes<<"/"<<x1.ingreso.anio<<endl;
    
    return 0;
    
    /*CONCLUCION :
     LAS ESTRUCTURAS SON PARECIDOS A CREAR OBJECTOS (POO), YA QUE TIENEN
     INSTANCIAS Y HEREDACION, PERO NO SON CONOCIDOS ASI*/
}

