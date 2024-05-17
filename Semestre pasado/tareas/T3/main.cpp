#include <cstdlib>
#include <iostream>
using namespace std;
class fech{
private:
    int dia, mes, anio;
    bool bisiesto;
public:
    char s[80];
    //Constructor
    fech();
    //metodos
    void mostrarFecha();
    void separarMes();
    int getMes();
    bool getBisiesto();
    void setDia(int d);
    void setMes(int m);
    void setAnio(int a);
};
fech::fech(){
    dia=0;mes=0;anio=0;bisiesto=false;
}
void fech::setDia(int d){
    dia = d;
}
void fech::setMes(int m){
    mes = m;
    if(mes==1||mes==3||mes==5||mes==7||mes==8||mes==10||mes==12){//mes con 31 dias
        mes=1;
    }else if(mes==4||mes==6||mes==9||mes==11){//mes con 30 dias
        mes=3;
    }else{//febrero si es biciesto : 29 dias, si no lo es: 28 dias
        mes=2;
    }
}
int fech::getMes(){
    return mes;
}
void fech::setAnio(int a){
    anio = a;
    
    if(anio%4!=0){
        bisiesto = false;
    }else if(anio%100!=0){
        bisiesto = true;
    }else if(anio%400!=0){
        bisiesto = false;
    }
}
bool fech::getBisiesto(){
    return bisiesto;
}
void fech::mostrarFecha(){
    cout<<"\n  DIA  /  MES  /  AÑO"<<endl;
    cout<<"  "<<dia<<"  /  "<<mes<<"  /  "<<anio<<"  "<<endl;
}

int main() {
    fech f;
    char s[80];
    int d, m , a;
    cout<<"**********   fechas   *********"<<endl;
    cout<<"Ingrese los datos en forma de entero : "<<endl;
    cout<<"Año:  ";cin.getline(s,80);a=atoi(s);
    if(a<=0){
        do{
            cout<<"NO PUEDE INGRESAR NUMEROS NEGATIVOS  "<<endl;
            cout<<"Año :  ";cin.getline(s,80);a=atoi(s);
        }while(a<=0);
    }
    f.setAnio(a);
    cout<<"Mes:  ";cin.getline(s,80);m=atoi(s);
    if(m<=0 || m>11){
        do{
            cout<<"El MES INDICADO NO EXISTE SOLO PUDE PONER 1-11  "<<endl;
            cout<<"Mes :  ";cin.getline(s,80);m=atoi(s);
        }while(m<=0 || m>11);
    }
    f.setMes(m);
    switch(f.getMes()){
        case 1:
            cout<<"Ingrese el dia: ";cin.getline(s,80);d=atoi(s);
            if(d<=0||d>31){
            do{
                cout<<"El dia indicado no esta en el mes"<<endl;
                cout<<"Intente de nuevo: ";cin.getline(s,80);d=atoi(s);
            }while(d<=0 || d>31);
            f.setDia(d);
            }
            break;
        case 2:
            if(f.getBisiesto()==true){
                cout<<"Ingrese el dia: ";cin.getline(s,80);d=atoi(s);
                if(d<=0 || d>29){
                    do{
                       cout<<"El dia ingresado !!NO EXISTE!!\t - \t INTENTE DE NUEVO "<<endl;
                       cout<<"Ingrese el dia: ";cin.getline(s,80);d=atoi(s);
                    }while(d<=0 || d>29);
                    f.setDia(d);
                }
            }else if(f.getBisiesto()==false){
                cout<<"Ingrese el dia: ";cin.getline(s,80);d=atoi(s);
                if(d<=0 || d>28){
                    do{
                        if(d==29){
                            cout<<"EL AÑO NO ES BICIESTO POR LO QUE NO EXISTE ESE DIA"<<endl;
                        }else{
                       cout<<"\nEl dia ingresado !!NO EXISTE!!\t - \t INTENTE DE NUEVO "<<endl;
                        }
                       cout<<"Ingrese el dia: ";cin.getline(s,80);d=atoi(s);
                    }while(d<=0 || d>28);
                    f.setDia(d);
                }
            }
            break;
        case 3:
            cout<<"Ingrese el dia: ";cin.getline(s,80);d=atoi(s);
            if(d<=0||d>30){
            do{
                cout<<"El dia indicado no esta en el mes"<<endl;
                cout<<"Intente de nuevo: ";cin.getline(s,80);d=atoi(s);
            }while(d<=0 || d>30);
            }
            f.setDia(d);
            break;
    }

    f.mostrarFecha();
    return 0;   
    }

