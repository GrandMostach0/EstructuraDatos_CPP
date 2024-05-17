#ifndef LIBRERIA_EXAMEN_H
#define LIBRERIA_EXAMEN_H
using namespace std;
class numero{
private:
    float calif[10];
    float mayor;
    int numTer3o6[10];
    int ter3;
    int ter6;
public:
    numero();
    void asignarCalif();
    void getCalifMayor();
    void MostrarTodasLasCalificaciones();
    void asignarNum();//metodos de terminan en 3
    void getNumTer3o6();//metodo de terminan en 3
};
numero::numero(){
    calif[10]={0};
    mayor=0; ter3=0; ter6;
    numTer3o6[10]={0};
}
void numero::asignarCalif(){
    char s[80];
    for(int i=0; i<10; i++){
        cout<<"Ingrese una calificacion  :  ";cin.getline(s,80);calif[i]=atof(s);
    }
}
void numero::MostrarTodasLasCalificaciones(){
    cout<<"\n Mostrando Todas las calificaciones Capturadas : ";
    for(int i=0; i<10; i++){
        cout<<calif[i]<<", ";
    }
    cout<<"\n";
}
void numero::getCalifMayor(){
    for(int i=0; i<10; i++){
        if(calif[i]==1){
            calif[i]==mayor;
        }
        if(calif[i]>mayor){
            mayor = calif[i];
        }
    }
        cout<<"\nLa calificacion mas alta es de : "<<mayor<<endl;
}
void numero::asignarNum(){
    char s[80];
    for(int i =0; i<10; i++){
        cout<<"Ingresa un numero entero : ";cin.getline(s,80);numTer3o6[i]=atoi(s);
    }
}
void numero::getNumTer3o6(){
    for(int i =0; i<10; i++){
        cout<<numTer3o6[i]<<", ";
    }
    cout<<"\n";
    
    float residuo;
    for(int i=0; i<10; i++){
        residuo=numTer3o6[i]%10;
        if(residuo==3){
            ter3++;
        }else if(residuo==6){
            ter6++;
        }
    }
    
    cout<<"\nlos numeros que terminan en 3 son :  "<<ter3<<endl;
    cout<<"los numeros que terminan en 6 son : "<<ter6<<endl;
}
#endif /* LIBRERIA_EXAMEN_H */

