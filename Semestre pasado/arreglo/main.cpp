#include <cstdlib>
#include <iostream>
using namespace std;

/*LEER 10 NUMEROS ENTEROS POSITIVOS Y ALMACENARLOS EN UN ARREGLO LLAMADO NUMS
 * DE TAMAÑO 10 ENCONTRAR EL MAYOR ARRELGO Y MOSTRARLO EN 
 * PANTALLA
 */
int main() {
    //CREAMOS EL AREGLO
    int nums[3]={0};
    char s[80];
    int mayor;
    
    for(int i=0; i<3; i++){
        do{
            cout<<"Número entero positivo"<<endl;
            cin.getline(s,80);
            nums[i]=atoi(s);
            
            if(nums[i]<0){
                cout<<"\nQue no etiendes que solo enteros positivos!!!\n"<<endl;
            }
            
        }while(nums[i]<0);
        
        if(nums[i] == 0){
            mayor = nums[i];
        }else if(nums[i] > mayor){
            mayor = nums[i];
        }
    }
    
    for(int k=0; k<3; k++){
        cout<<<<nums[k]<<endl;
    }
    cout<<endl;
    cout<<"EL MAYOR NUMERO ES : "<<mayor<<endl;
    
    return 0;
}
