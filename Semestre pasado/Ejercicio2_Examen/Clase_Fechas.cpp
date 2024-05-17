#include <iostream>
#include <cstdlib>
/*
Alumno:Francisco Felipe Amaro Rejon
*/
using namespace std;
class fechas{
	private:
		int dia;
		int mes;
		int anio;
	public:
		fechas();
		fechas2();
		fechas3();
		fechas4();
		int leerdia();
		int leermes();
		int leeranio();
		void AntiguaResiente(int d4,int m4, int an4,int d5, int m5, int an5);
};
fechas::fechas(){
	dia=0;
	mes=0;
	anio=0;
}
fechas::fechas2(){
	dia=0;
	mes=0;
	anio=0;
}
fechas::fechas3(){
	dia=0;
	mes=0;
	anio=0;
}
fechas::fechas4(){
	dia=0;
	mes=0;
	anio=0;
}
int fechas::leerdia(){
	char s[80];
	cout<<"Dame el dia ";cin.getline(s,80);dia=atoi(s);
	return dia;
}
int fechas::leermes(){
	char s[80];
	cout<<"Dame el mes ";cin.getline(s,80);mes=atoi(s);
	return mes;
}
int fechas::leeranio(){
	char s[80];
	cout<<"Dame el anio ";cin.getline(s,80);anio=atoi(s);
	return anio;
}
void fechas::AntiguaResiente(int d4,int m4, int an4,int d5, int m5, int an5){
	if(an4>an5){
		cout<<"Fecha mas antigua "<<d5<<"/"<<m5<<"/"<<an5<<endl;
		cout<<"Fecha mas resiente "<<d4<<"/"<<m4<<"/"<<an4<<endl;
	}else{
		if(an5>an4){
			cout<<"Fecha mas antigua "<<d4<<"/"<<m4<<"/"<<an4<<endl;
			cout<<"Fecha mas reciente "<<d5<<"/"<<m5<<"/"<<an5<<endl;
		}else{
			if(m4>m5){
				cout<<"Fecha mas antigua "<<d5<<"/"<<m5<<"/"<<an5<<endl;
				cout<<"Fecha mas reciente "<<d4<<"/"<<m4<<"/"<<an4<<endl;
			}else{
				if(m5>m4){
					cout<<"Fecha mas antigua "<<d4<<"/"<<m4<<"/"<<an4<<endl;
					cout<<"Fecha mas reciente "<<d5<<"/"<<m5<<"/"<<an5<<endl;
				}else{
					if(d4>d5&&an4>=an5){
						cout<<"Fecha mas antigua "<<d5<<"/"<<m5<<"/"<<an5<<endl;
						cout<<"Fecha mas reciente "<<d4<<"/"<<m4<<"/"<<an4<<endl;
					}else{
						if(d5>d4&&an5>=an4){
							cout<<"Fecha mas antigua "<<d4<<"/"<<m4<<"/"<<an4<<endl;
							cout<<"Fecha mas reciente "<<d5<<"/"<<m5<<"/"<<an5<<endl;
						}else{
							cout<<"Las fechas son iguales"<<endl;
						}
					}
				}
			}
		}
	}
}
int main(){
	fechas a1;
	fechas a2;
	fechas a3;
	fechas a4,a5;
	int d4=a4.leerdia();
	int m4=a4.leermes();
	int an4=a4.leeranio();
	int d5=a5.leerdia();
	int m5=a5.leermes();
	int an5=a5.leeranio();
	a1.AntiguaResiente(d4,m4,an4,d5,m5,an5);
	return 0;
}
