#include <cstdlib>
#include <iostream>
using namespace std;

int main() {
    char fram[8];
    char letra;
    int tamano;
    int vacio;
    for(int k=0; k<3; k++){
    cout<<"Ingrese una letra : ";cin>>letra;
    cout<<"Ingrese el tamano : ";cin>>tamano;
    
    for(int i=0; i<8; i++){
        if(fram[i]!='0'){
            vacio++;
        }
    }
    for(int i=vacio; vacio<8;i++){
        if(i<tamano){
            fram[i]=letra;
        }
    }
    for(int i=0; i<8; i++){
        cout<<fram[i]<<endl;
    }
    
    }
    
    return 0;
}

