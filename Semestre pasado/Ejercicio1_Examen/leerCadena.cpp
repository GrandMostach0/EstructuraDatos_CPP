#include <iostream>
#include <cstdlib>
#include <string.h>
#include "libreria_examen.h"
/*
Alumno:Francisco Felipe Amaro Rejón
*/
using namespace std;
int main(){
	leercadenas();
	if(compararcad()==true){
		cout<<"Las cadenas son iguales"<<endl;
	}else{
		cout<<"Las cadenas son diferentes"<<endl;
	}
	return 0;
}
