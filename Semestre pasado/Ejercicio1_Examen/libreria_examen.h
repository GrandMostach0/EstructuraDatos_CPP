#include <iostream>
#include <string.h>
using namespace std;
#ifndef LIBRERIA_EXAMEN_H
#define LIBRERIA_EXAMEN_H
void leercadenas(){
	char cad[80];
	for(int i=0;i<80;i++){
		cad[i]=' ';
	}
	int contarvacios=1;
	cout<<"Ingresa caracteres ";cin.getline(cad,80);
	for(int i=0;i<80;i++){
		if(cad[i]==' '){
			contarvacios++;
		}
	}
	cout<<"La cantidad de espacios vacios es "<<contarvacios<<endl;
}
bool compararcad(){
	char cad1[80];
	char cad2[80];
	cout<<"Ingresa los caracteres de cad1 ";cin.getline(cad1,80);
	cout<<"\nIngresa los caracteres de cad2 ";cin.get(cad2,80);
	for(int i=0;i<80;i++){
		if(cad1[i]!='\0'&&cad2[i]!='\0'){
			if(cad1[i]!=cad2[i]){
				return false;
			}
		}else{
			return true;
		}
	}
}
#endif
