#ifndef LIBRERIA_FECHAS_H
#define LIBRERIA_FECHAS_H

using namespace std;
class fecha{
private:
    int dia,mes,anio;
public:
    fecha();
    void leer_fecha();
    bool fecha_posterior2015();
    bool biciesto();
    //- - - - - - DECLARAR MÉTODOS SETTER
    void asignar_dia(int d);
    void asignar_mes(int m);
    void asignar_anio(int a);
    //- - - - - - DECLARAR MÉTODOS GETTER
    int obtener_dia();
    int obtener_mes();
    int obtener_anio();
};
fecha::fecha(){
    dia=1, mes=1, anio=2021;
}
void fecha::leer_fecha(){
    char s[80];
    cout<<"Dia: ";cin.getline(s,80);dia=atoi(s);
    cout<<"Mes: ";cin.getline(s,80);mes=atoi(s);
    cout<<"Año: ";cin.getline(s,80);anio=atoi(s);
}
bool fecha::fecha_posterior2015(){
    if(anio>2015)
        return true;
    else
        return false;
}
bool fecha::biciesto(){
    
}
void fecha::asignar_anio(int a){
    anio = a;
}
void fecha::asignar_dia(int d){
    dia = d;
}
void fecha::asignar_mes(int m){
    mes = m;
}
int fecha::obtener_anio(){
    return anio;
}
int fecha::obtener_dia(){
    return dia;
}
int fecha::obtener_mes(){
    return mes;
}

#endif /* LIBRERIA_FECHAS_H */

