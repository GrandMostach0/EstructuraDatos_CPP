#include <cstdlib>
#include <iostream>
#include <fstream>

using namespace std;

/*EJEMPLO SOBRE LA CREACION Y LECTURA DE ARCHIVOS DE TEXTO
 */

int main() {
    string arch;
    cout<<"Nombre del archivo: "; getline(cin,arch);
    ofstream grabar;
    grabar.open("salon.txt",ios::out);
    grabar.open(arch.c_str(),ios::out);
    //apertura archivos para escritura, si existe el contenido del archivo se borra
    if(grabar.is_open()){//is_open() devuelve si es true si se abrio el archivo
        
    }

    return 0;
}

