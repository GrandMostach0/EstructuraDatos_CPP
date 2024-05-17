#include <cstdlib>
#include <iostream>
using namespace std;
/*VICTOR BERNARDO CHAN VARGUEZ
 * En main() leer 10 valores enteros y almacenarlos en un arreglo de tipo entero llamado nums
 * elabora un proyecto en C++ que cree un método recursivo que permita duplicar el valor de todos los valores pares en el arreglo.
 * El mismo problema deberás realizarlo mediante otro método utilizando un ciclo for(). (13 puntos)
 */
void Duplicar(int array[],int pos, int tam){
    if(pos!=tam){
        if(array[pos]%2==0){
            array[pos]=array[pos]*2;
            cout<<array[pos]<<" , ";
            Duplicar(array, pos+1, tam);
        }else{
            Duplicar(array, pos+1, tam);
        }
    }
}
int main() {
    int nums[10];
    char s[80];
    for(int i=0; i<10; i++){
        cout<<"Ingrese un numero entero : ";cin.getline(s,80);nums[i]=atoi(s);
    }
    cout<<"\n";
    cout<<"Numeros sin duplicar : "<<endl;
    for(int i=0;i<10;i++){
        cout<<nums[i]<<" , ";
    }
    
    cout<<"\n\nNUMEROS DUPLICADOS CON RECURSIVIDAD ***"<<endl;
    cout<<"Numeros duplicados :  ";Duplicar(nums,0,10);
    
    cout<<"\n\n";
    cout<<"NUMEROS DUPLICADOS CON EL CICLO FOR "<<endl;
    for(int i=0;i<10;i++){
        if(nums[i]%2==0){
        nums[i]=nums[i]*2;
        }
    }
    for(int i=0;i<10;i++){
        cout<<nums[i]<<" , ";
    }
    return 0;
}

