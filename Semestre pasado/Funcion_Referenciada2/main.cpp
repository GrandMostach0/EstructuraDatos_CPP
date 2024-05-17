#include <cstdlib>
#include <iostream>
using namespace std;
/*MEIDANTE UNA FUNCIÓN POR REFERENCIA SE DEBE LEER UNA CADENA
 * Y ENCONTRAR:
 * a) LA CANTIDAD DE ESPACIOS EN BLANCO
 * b) LA CANTIDAD DE DIGITOS
 * c) LA CANTIDAD DE PUNTOS Y COMAS
 * NOTA: MOSTRAR EN EL PROGRAMA LOS 3 CONTADORES*/
void encontrar(char s[80], int *e, int *d, int *p){
    cout<<"Frase: ";cin.getline(s,80);
    for(int i=0; s[i]='\0'; i++){
        if(s[i]==' ')e++;
        if(s[i]=='.'||s[i]==',')p++;
        if(s[i]>='0'&&s[i]<='9')d++;
    }
}
int main() {
    char s[80];
    int conte=0, contd=0, contp=0;
    encontrar(s,&conte,&contd,&contp);
    cout<<"La cantidad de espacios: "<<conte<<endl;
    cout<<"La cantidad de comas o puntos es: "<<contd<<endl;
    cout<<"La cantidad de digitos son: "<<contp<<endl;
    
    return 0;
}

