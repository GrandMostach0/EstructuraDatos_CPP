#include <cstdlib>
#include <iostream>
using namespace std;

/*PEDIR 3 NUMEROS ENTEROS POSITIVOS Y MOSRTRAR LOS DATOS OBTENIDOS
 * A DEMAS DE MOSTRAR EN PANTALLA CUAL DE LOS NUERMOS ES EL MAYOR
 * 
 */

int main(){
    //pedimos las variables
    int a=0,b=0,c=0;
    char s[80];
    //bucle do para verificar
    
    //variable a
    do{
        cout<<"Número : ";
        cin.getline(s,80);
        a = atoi(s);
        
        if(a<0){
            cout<<"\nERROR\t-\tSOLO SE PERMITEN NUMEROS ENTEROS POSITIVOS\n"<<endl;
        }
    }while(a<0);
    
    //variable b
    do{
        cout<<"Número : ";
        cin.getline(s,80);
        b = atoi(s);
        
        if(b<0){
            cout<<"\nERROR\t-\tSOLO SE PERMITEN NUMEROS ENTEROS POSITIVOS\n"<<endl;
        }
    }while(b<0);
    
    //variable c
    do{
        cout<<"Número : ";
        cin.getline(s,80);
        c = atoi(s);
        
        if(c<0){
            cout<<"\nERROR\t-\tSOLO SE PERMITEN NUMEROS ENTEROS POSITIVOS\n"<<endl;
        }
    }while(c<0);
    
    //mostramos los datos obtenidos
    cout<<"a : "<<a<<" b : "<<b<<" c : "<<c<<endl;
    
    //checamos
    if(a>b && a>c){
        cout<<"LA VARIBALE A : "<<a<<" ES MAYOR"<<endl;
    }else if(b>a && b>c){
        cout<<"LA VARIABLE B : "<<b<<" ES MAYOR"<<endl;
    }else if(c>a && c>b){
        cout<<"LA VARIABLE C : "<<c<<" ES MAYOR"<<endl;
    }else{
        cout<<"LOS NUMEROS SON IGUALES!!!"<<endl;
    }
    
    return 0;
}
