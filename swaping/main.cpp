#include <cstdlib>
#include <iostream> 
#include <windows.h>
using namespace std;

void imprimir(string array1[6], string array2[6]){
    cout<<"Memoria fisica "<<endl;
    for(int i=0; i<6; i++){
        cout<<array1[i]<<"\t"<<array2[i]<<endl;
    }
}

void swapOut(string proceso, string array1[6], string array2[6]){
    cout<<"\t swap out: "<<proceso<<" > "<<endl;
    cout<<"\n"<<endl;
    //array2[2]=array2[1];
    array2[1]=array2[0];
    array2[0]=proceso;
    for(int i=0; i<6; i++){
        if(i<5){
            array1[i]=array1[i+1];
        }else{
            array1[5]=" ";
        }
    }
}

void swapIn(string proceso, string array1[6], string array2[6]){
    cout<<"\t Swap In : "<<proceso<<" < "<<endl;
    cout<<"\n "<<endl;
    array1[4]=array1[5];
    array1[5]=array2[1];
    array2[1]=array2[0];
    array2[0]=" ";
}
int main() {
    string vec1[6]={"Proceso 1","proceso 2","proceso 3","proceso 4","proceso 5","proceso 6"};
    string vec2[6]={" "," "," "," "," "," "};
    /**/
    int n=0;
    imprimir(vec1,vec2);
    while(n<6){
    swapOut(vec1[0],vec1, vec2);
    imprimir(vec1,vec2);
    swapOut(vec1[0],vec1, vec2);
    imprimir(vec1,vec2);
    swapIn(vec2[0],vec1, vec2);
    imprimir(vec1, vec2);
    swapIn(vec2[1],vec1, vec2);
    imprimir(vec1, vec2);
    n++;
    }
    return 0;
}

