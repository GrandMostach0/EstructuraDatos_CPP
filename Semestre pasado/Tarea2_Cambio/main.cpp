#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
    char s[80];
    int pago,cambio, art=3257;
    int mil=0, quinientos=0, docientos=0, cien=0, cincuenta=0, veinte=0, diez=0;
    int cinco=0, dos=0, uno=0;
    
    cout<<"El valor del articulo es: "<<"$"<<art<<" Pesos"<<endl;
    cout<<"Ingrese la cantidad a pagar:  $";cin.getline(s,80);pago=atoi(s);
    
    //// VALIDACIÓN DEL PAGO
    if(pago<art){
        do{
            cout<<"El pago es insuficiente \t - \t INTENTE DE NUEVO "<<endl;
            cout<<"Ingrese la cantidad : $";cin.getline(s,80);pago=atoi(s);
        }while(pago<art);
    }
    
    ////// CAMBIO
    cambio = pago - art;
    cout<<"El cambio es :  "<<"$"<<cambio<<" Pesos"<<endl;
    
    while(cambio!=0){
        if(cambio>=1000){
            mil++;
            cambio = cambio - 1000;
        }else if(cambio>=500){
            quinientos++;
            cambio = cambio - 500;
        }else if(cambio>=200){
            docientos++;
            cambio = cambio - 200;
        }else if(cambio>= 100){
            cien++;
            cambio = cambio - 100;
        }else if(cambio>= 50){
            cincuenta++;
            cambio = cambio - 50;
        }else if(cambio>=20){
            veinte++;
            cambio = cambio - 20;
        }else if(cambio>=10){
            diez;
            cambio= cambio-10;
        }else if(cambio>=5){
            cinco++;
            cambio= cambio-5;
        }else if(cambio>=2){
            dos++;
            cambio = cambio - 2;
        }else if(cambio==1){
            uno++;
            cambio = cambio - 1;
        }
    }
    
    ///// IMPRESION DEL CAMBIO EN BILLETES 
    cout<<"\nCambios en Billetes y/o Monedas: "<<endl;
    
    ///CHECANDO CUANTOS SERAN SI EN PLURAL O EN SINGULAR
    if(mil>0){
        if(mil>1){
            cout<<mil<<" Billetes de Mil Pesos"<<endl;
        }else{
            cout<<mil<<" Billete de Mil Pesos"<<endl;
        }
    }
    if(quinientos>0){
        if(quinientos>1){
            cout<<quinientos<<" Billetes de Quinientos Pesos"<<endl;
        }else{
            cout<<quinientos<<" Billete de Quinientos Pesos"<<endl;
        }
    }
    if(docientos>0){
        if(docientos>1){
            cout<<docientos<<" Billetes de Docientos Pesos"<<endl;
        }else{
            cout<<docientos<<" Billete de Docientos Pesos"<<endl;
        }
    }
    if(cien>0){
        if(cien>1){
            cout<<cien<<" Billetes de Cien Pesos"<<endl;
        }else{
            cout<<cien<<" Billete de Cien Pesos"<<endl;
        }
    }
    if(cincuenta>0){
        if(cincuenta>1){
            cout<<cincuenta<<" Billetes de Cincuenta Pesos"<<endl;
        }else{
            cout<<cincuenta<<" Billete de Cincuenta Pesos"<<endl;
        }
    }
    if(veinte>0){
        if(veinte>1){
            cout<<veinte<<" Billetes de Veinte Pesos"<<endl;
        }else{
            cout<<veinte<<" Billete de Veinte Pesos"<<endl;
        }
    }
    if(diez>0){
        if(diez>1){
            cout<<diez<<" Monedas de Diez Pesos"<<endl;
        }else{
            cout<<diez<<" Moneda de Diez Pesos"<<endl;
        }
    }
    if(cinco>0){
        if(cinco>1){
            cout<<cinco<<" Monedas de Cinco Pesos"<<endl;
        }else{
            cout<<cinco<<" Moneda de Cinco Pesos"<<endl;
        }
    }
    if(dos>0){
        if(dos>1){
            cout<<dos<<" Monedas de Dos Pesos"<<endl;
        }else{
            cout<<dos<<" Moneda de Dos Pesos"<<endl;
        }
    }
    if(uno>0){
        if(uno>1){
            cout<<uno<<" Monedas de un Pesos"<<endl;
        }else{
            cout<<uno<<" Moneda de un Peso"<<endl;
        }
    }
    
    return 0;
}





