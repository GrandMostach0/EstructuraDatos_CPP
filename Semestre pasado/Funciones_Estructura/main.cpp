#include <cstdlib>
#include <iostream>
#include <string.h>
using namespace std;

/*Elabora una función que permita leer una frase de hasta 
 * 80 caracteres llamada CAD y encontrar:
 * a) la cantidad de preposiciones "DE" en la frase
 * b) si la frase termina en "SA"
 * c) la cantidad de espacios en blanco
 * Todos los datos solicitados imprimirlos en el programa
 * principal*/

//FUNCION DESREFERENCIADA(O POR REFERENCIA)
//*a recibe una direccion de la &
void encontrar(char cad[80], int *de, int *esp, bool *sa){
    
    for(int i=0; cad[i]!='\0'; i++){
        //"de"," de " puede que sea esas 2 formas
        if(cad[i]=='d'){
            if(cad[i+1]=='e'&&cad[i+2]==' ')(*de)++;
            i+=3;
            continue;
        }
        if(cad[i]==' '){
            if(cad[i+1]=='d' && cad[i+2]=='e' && cad[i+3==' '])(*de)++;
            i+=4;
            continue;
        }
        if(cad[i]==' '){
            if(cad[i+1]=='d' && cad[i+2]=='e')(*de)++;
            i+=3;
            continue;
        }
        
        if(cad[i]==' ')(*esp)++;
    }
    
    int largo = strlen(cad);
    if(cad[largo-1]=='A'&&cad[largo-2]=='S')(*sa)=true;
    
}

int main() {
    int contde=0,contespa=0;
    bool termina_sa = false;
    char cad[80]="";
    cout<<"Frase : ";cin.getline(cad,80);
    encontrar(cad,&contde,&contespa,&termina_sa);//envian una direccion
    cout<<"La cantidad de preposiciones \"de\" son : "<<contde<<endl;
    cout<<"La cantidad de espacios son : "<<contespa<<endl;
    //vemos si termina en SA no es sa;
    if(termina_sa==true)cout<<"Si termina en SA"<<endl;
    else cout<<"NO termina en SA"<<endl;
    
    return 0;
}

