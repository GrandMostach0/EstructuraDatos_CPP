#include <cstdlib>
#include <iostream>
using namespace std;
/*
 * 
 */
int main() {
    char s[80];
    bool biciesto;
    int dia=0, mes=0, anio=0, mes2=0;
    cout<<"------    PROGRAMA DE FECHAS   --------"<<endl;
    cout<<"Ingrese de forma de numero interos para indicar la fecha"<<endl;
    cout<<"Ingrese el año: ";cin.getline(s,80);anio=atoi(s);
    if(anio<=0){
        do{
            cout<<"No pude ingresar años negativos\t -\t !!INTENTE DE NUEVO!!!"<<endl;
            cout<<"Ingrese el año: ";cin.getline(s,80);anio=atoi(s);
                    
        }while(anio<=0);
    }
    //----- COMPROBAMOS ----//
    if(anio%4!=0){
        biciesto = false;
    }else if(anio%100!=0){
        biciesto = true;
    }else if(anio%400!=0){
        biciesto = false;
    }
    
    cout<<"\n Ingrese el Mes: ";cin.getline(s,80);mes=atoi(s);
     if(mes<=0||mes>11 ){
        do{
            cout<<"EL MES INDICADO !NO EXISTE! \t -\t !!INTENTE DE NUEVO!!!"<<endl;
            cout<<"Ingrese el Mes ";cin.getline(s,80);mes=atoi(s);
                    
        }while(mes<0||mes>11);
    }
    mes2 = mes;

    if(mes2==1||mes2==3||mes2==5||mes2==7||mes2==8||mes2==10||mes2==12){//mes con 31 dias
        mes2=1;
    }else if(mes2==4||mes2==6||mes2==9||mes2==11){//mes con 30 dias
        mes2=3;
    }else{//febrero si es biciesto : 29 dias, si no lo es: 28 dias
        mes2=2;
    }
    
    switch(mes2){
        case 1:
            cout<<"Ingrese el dia: ";cin.getline(s,80);dia=atoi(s);
            if(dia<0||dia>31){
            do{
                cout<<"El dia indicado no esta en el mes"<<endl;
                cout<<"Intente de nuevo: ";cin.getline(s,80);dia=atoi(s);
            }while(dia<0 || dia>31);
            }
            break;
        case 2:
            if(biciesto==true){
                cout<<"Ingrese el dia: ";cin.getline(s,80);dia=atoi(s);
                if(dia<0 || dia>29){
                    do{
                       cout<<"El dia ingresado !!NO EXISTE!!\t - \t INTENTE DE NUEVO "<<endl;
                       cout<<"Ingrese el dia: ";cin.getline(s,80);dia=atoi(s);
                    }while(dia<0 || dia>29);
                }
            }else if(biciesto==false){
                cout<<"Ingrese el dia: ";cin.getline(s,80);dia=atoi(s);
                if(dia<0 || dia>28){
                    do{
                        if(dia==29){
                            cout<<"EL AÑO NO ES BICIESTO POR LO QUE NO EXISTE ESE DIA"<<endl;
                        }
                       cout<<"\nEl dia ingresado !!NO EXISTE!!\t - \t INTENTE DE NUEVO "<<endl;
                       cout<<"Ingrese el dia: ";cin.getline(s,80);dia=atoi(s);
                    }while(dia<=0 || dia>28);
                }
            }
            break;
        case 3:
            cout<<"Ingrese el dia: ";cin.getline(s,80);dia=atoi(s);
            if(dia<0||dia>30){
            do{
                cout<<"El dia indicado no esta en el mes"<<endl;
                cout<<"Intente de nuevo: ";cin.getline(s,80);dia=atoi(s);
            }while(dia<0 || dia>30);
            }
            break;
    }
    
    
    cout<<"  DIA  /  MES  /  AÑO  "<<endl;
    cout<<"   "<<dia<<"  /   "<<mes<<"  /  "<<anio<<endl;
    return 0;
}

