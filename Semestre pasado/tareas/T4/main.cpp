#include <cstdlib>
#include <iostream>
#include <string.h>
using namespace std;
class ahorcado{
private:
    int vidas;
    string palabra;
    bool vivo;
public:
    ahorcado();
    void Palabra();
    void palabraMostrar();
};
ahorcado::ahorcado(){
    vidas = 4;
    palabra;
    vivo=true;
}
void ahorcado::palabraMostrar(){
    cout<<"Vidas : "<<vidas<<endl;
    cout<<palabra<<endl;
}
void ahorcado::Palabra(){
    string pal;
    cout<<"Ingrese una palabra para adivinar : "<<endl;
    cin>>pal;
    palabra = pal;
    
    for(int i=0 ; i<palabra.length() ; i++){
        if(palabra[i]>='A' && palabra[i]<='Z'){
            palabra[i]+=32;
        }
    }
    for(int i=0 ; i<palabra.length();i++){
      if(palabra[i]>='a' && palabra[i]<='z'){
        palabraMostrar+='-';
      }else{
        palabraMostrar +=palabra[i];
      }
    }
}

void 
int main() {
    ahorcado a;
    a.Palabra();
    a.palabraMostrar();
    return 0;
}