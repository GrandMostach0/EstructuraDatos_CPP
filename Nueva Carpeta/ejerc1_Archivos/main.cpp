#include <cstdlib>
#include <iostream>
#include <fstream>//libreria para poder archivos archivos

using namespace std;

/*PRIMER POBLEMA DE PARA PODER ABRIR UN ARCHIVO
 * leer una archivo caracter por caracter de texto y encontrar
 * cuantos digitos tiene */

int main() {
    int linea = 1, col = 1;
    ifstream leer;
    leer.open("main.cpp",ios::in);//esta varible abrira el archivo "main.cpp"
    if(leer.fail()){
        cout<<"ERROR AL ABRIR AL ARCHIVO"<<endl;
        exit(1);
    }
    char ch; int cont = 0;
    ch = leer.get();// leer el 1er carácter para ver si no es EOF
    while(!leer.eof()){//mientras no sea fin de archivo(EOF)
        col++;//incrementa las columnas
        if(isdigit(ch)){
            cont++; //incrementa la cantidad de digitos encontrados
            cout<<"fila : "<<linea<<" y columna : "<<col<<endl;
        }
        if(ch == '\n'){//incrementa la linea
            col = 1;
            linea++;
        }
        ch = leer.get();
    }
    leer.close();//cerrar el archivo
    cout<<"La cantidad de digitos son : "<<cont<<endl;
    return 0;
}

