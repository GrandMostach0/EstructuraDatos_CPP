#include <cstdlib>
#include <iostream>
using namespace std;
class letra{
private:
    int x;
public:
    letra();
    void setNumero(int num);
    void mostrar();
};
letra::letra(){
    x=0;
}
void letra::setNumero(int num){
    x = num;
}
void letra::mostrar(){
     if(x>90000) {cout<<"NOVENTA Y "   ;x=x-90000; }
            if(x==90000)   {cout<<"NOVENTA MIL "  ;x=x-90000; }  
            if(x>80000) {cout<<"OCHENTA Y "   ;x=x-80000; }
            if(x==80000)   {cout<<"OCHENTA MIL "  ;x=x-80000; }
            if(x>70000) {cout<<"SETENTA Y "   ;x=x-70000; }
            if(x==70000)   {cout<<"SETENTA MIL "  ;x=x-70000; }
            if(x>60000) {cout<<"SESENTA Y "   ;x=x-60000; }
            if(x==60000)   {cout<<"SESENTA MIL "  ;x=x-60000; }
            if(x>50000) {cout<<"CINCUENTA Y " ;x=x-50000; }
            if(x==50000)   {cout<<"CINCUENTA MIL "    ;x=x-50000; }
            if(x>40000) {cout<<"CUARENTA Y "  ;x=x-40000; }
            if(x==40000)   {cout<<"CUARENTA MIL " ;x=x-40000; }
            if(x>30000) {cout<<"TREINTA Y "   ;x=x-30000; }
            if(x==30000)   {cout<<"TREINTA MIL "  ;x=x-30000; }
            if(x>20000) {cout<<"VEINTI"       ;x=x-20000; }
            if(x==20000)   {cout<<"VEINTE MIL " ;x=x-20000; }
            if(x==19000) {cout<<"NOVENTA MIL "   ;x=x-70000; }
            if(x==18000)   {cout<<"OCHENTA MIL "  ;x=x-70000; }
            if(x==17000) {cout<<"SESENTA MIL "   ;x=x-60000; }
            if(x==16000)   {cout<<"SEIS MIL "  ;x=x-60000; }
            if(x==15000) {cout<<"CINCUENTA MIL " ;x=x-50000; }
            if(x==14000)   {cout<<"CATORCE MIL "    ;x=x-50000; }
            if(x==13000) {cout<<"TRECE MIL "  ;x=x-40000; }
            if(x==12000)   {cout<<"DOCE MIL " ;x=x-40000; }
            if(x==11000) {cout<<"ONCE MIL "   ;x=x-30000; }
            if(x==10000)   {cout<<"DIEZ MIL "  ;x=x-30000; }
    
    if(x>=9000){cout<<"NUEVE MIL " ;x=x-9000;}
       else if(x>=8000)   {cout<<"OCHO MIL " ;x=x-8000;}
       else if(x>=7000)   {cout<<"SIETE MIL " ;x=x-7000;}
       else if(x>=6000)   {cout<<"SEIS MIL " ;x=x-6000;}
       else if(x>=5000)   {cout<<"CINCO MIL "  ;x=x-5000;}
       else if(x>=4000)   {cout<<"CUATRO MIL "   ;x=x-4000;}
       else if(x>=3000)   {cout<<"TRES MIL " ;x=x-3000;}
       else if(x>=2000)   {cout<<"DOS MIL "  ;x=x-2000;}
       else if(x>=1000)  {cout<<"CIEN MIL "  ;x=x-20000;}
       else if(x==1000)  {cout<<"MIL "     ;x=x-1000;}
    
    if(x>=900){cout<<"NOVECIENTOS " ;x=x-900;}
       else if(x>=800)   {cout<<"OCHOCIENTOS " ;x=x-800;}
       else if(x>=700)   {cout<<"SETECIENTOS " ;x=x-700;}
       else if(x>=600)   {cout<<"SEISCIENTOS " ;x=x-600;}
       else if(x>=500)   {cout<<"QUINIENTOS "  ;x=x-500;}
       else if(x>=400)   {cout<<"CUATROCIENTOS "   ;x=x-400;}
       else if(x>=300)   {cout<<"TRESCIENTOS " ;x=x-300;}
       else if(x>=200)   {cout<<"DOSCIENTOS "  ;x=x-200;}
       else if(x>100)    {cout<<"CIENTO "  ;x=x-100;}
       else if(x==100)  {cout<<"CIEN"     ;x=x-100;}
    
        if(x>90) {cout<<"NOVENTA Y "   ;x=x-90; }
            if(x==90)   {cout<<"NOVENTA"  ;x=x-90; }  
            if(x>80) {cout<<"OCHENTA Y "   ;x=x-80; }
            if(x==80)   {cout<<"OCHENTA"  ;x=x-80; }
            if(x>70) {cout<<"SETENTA Y "   ;x=x-70; }
            if(x==70)   {cout<<"SETENTA"  ;x=x-70; }
            if(x>60) {cout<<"SESENTA Y "   ;x=x-60; }
            if(x==60)   {cout<<"SESENTA"  ;x=x-60; }
            if(x>50) {cout<<"CINCUENTA Y " ;x=x-50; }
            if(x==50)   {cout<<"CINCUENTA"    ;x=x-50; }
            if(x>40) {cout<<"CUARENTA Y "  ;x=x-40; }
            if(x==40)   {cout<<"CUARENTA" ;x=x-40; }
            if(x>30) {cout<<"TREINTA Y "   ;x=x-30; }
            if(x==30)   {cout<<"TREINTA"  ;x=x-30; }
            if(x>20) {cout<<"VEINTI"       ;x=x-20; }
            if(x==20)   {cout<<"VEINTE"       ;x=x-20; }
        if(x>=16)    {cout<<"DIECI"        ;x=x-10; }
       else if(x==15)   {cout<<"QUINCE"       ;x=x-15; }
       else if(x==14)   {cout<<"CATORCE"  ;x=x-14; }
       else if(x==13)   {cout<<"TRECE"        ;x=x-13; } 
       else if(x==12)   {cout<<"DOCE"     ;x=x-12; }
       else if(x==11)   {cout<<"ONCE"     ;x=x-11; }
       else if(x==10)   {cout<<"DIEZ"     ;x=x-10; }      
        if(x==9)    {cout<<"NUEVE"        ;x=x-9;  }
        if(x==8)    {cout<<"OCHO"     ;x=x-8;  }
        if(x==7)    {cout<<"SIETE"        ;x=x-7;  }
            if(x==6)    {cout<<"SEIS"     ;x=x-6;  }
       else if(x==5)    {cout<<"CINCO"        ;x=x-5;  }
       else if(x==4)    {cout<<"CUATRO"       ;x=x-4;  }
       else if(x==3)    {cout<<"TRES"     ;x=x-3;  }
       else if(x==2)    {cout<<"DOS"      ;x=x-2;  }
       else if(x==1)    {cout<<"UNO"      ;x=x-1;  }
}
int main() {
    letra l;
    int numero;
    
    for(int i=0; i<2; i++){
        cout<<"Ingrese un numero : ";cin>>numero;
        cout<<""<<endl;
        l.setNumero(numero);
        l.mostrar();
    }

    return 0;
}

