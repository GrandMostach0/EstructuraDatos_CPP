#ifndef AREASS_H
#define AREASS_H

using namespace std;
class matematica{
private:
    float lado1,lado2, altura, radio;
    float areaC, areaR, areaT;
public:
    matematica();//  constructor
    float area_ciruclo();
    float area_rectangulo();
    float area_triangulo();
};
matematica::matematica(){
    lado1=0,lado2=0, altura=0, radio=0, areaC=0, areaR=0, areaT=0;
}
float matematica::area_ciruclo(){
    char s[80];
    cout<<"Radio : ";cin.getline(s,80);
    radio = atof(s);
    areaC = 3.1416*radio*radio;
    return areaC;
}
float matematica::area_rectangulo(){
    char s[80];
    cout<<"Base : ";cin.getline(s,80);
    lado1 = atof(s);
    char d[80];
    cout<<"Altura: ";cin.getline(d,80);
    lado2 = atof(d);
    areaR = lado1*lado2;
    return areaR;
}
float matematica::area_triangulo(){
    char s[80];
    cout<<"Base : ";cin.getline(s,80);
    lado1 = atof(s);
    char d[80];
    cout<<"Altura: ";cin.getline(d,80);
    lado2 = atof(d);
    areaR = (lado1*lado2)/2;
    return areaT;
}
#endif /* AREASS_H */

