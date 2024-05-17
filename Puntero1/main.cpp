#include <cstdlib>
#include <iostream>
using namespace std;
/*Ejemplo del uso de punteros en C++*/
int main(){
    int a=0;
    int *p=&a;//creamos el puntero que tiene la direccion de a
    cout<<"La direcció donde se almacena a es : "<<p<<endl;
    cout<<"El contenido de lo que apunta p es : "<<*p<<endl;
    cout<<"valor de a + 1 "<<(*p)++<<endl;
    cout<<"valor de a + 1 "<<a<<endl;
    //que pasaria que se crear una array con valores asignados
    int num[10]={1,233,334,3,45};
    int *w=num;//tanto w como num son punteros almacenan la dirrecion el indice 0;
    cout<<*w<<"-vs-"<<num[0]<<endl;//decimos que apuntara el valor de puntero w y el indice de la posicion num en cero
    w++;//aumentamos la posicion del puntero
    cout<<*w<<"-vs-"<<num[1]<<endl;//imprime la posicion del puntero y la posicion del indice 1 del array
    w++;
    cout<<*w<<"-vs-"<<num[2]<<endl;//y asi nuevamente.
    //creamos un puntero tipo char
    char s[80]="Este es ejemplo";
    char *q;
    for(q=s; *q!='\0';q++){
        cout<<*q<<endl;
    }
    return 0;
}

