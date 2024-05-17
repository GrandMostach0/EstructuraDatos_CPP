#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;
/*
Alumno:Francisco Felipe Amaro Rejón
*/
void alreves(char s1[],int i){
	char aux[80];
	if(i>=0){
		cout<<" "<<s1[i];
		return alreves(s1,i-1);
	}
}

int main(){
	char s1[80]={'E','j','e','m','p','l','o'};
	cout<<"Metodo recursivo"<<endl;
	alreves(s1,7);
	cout<<"\nEcho con for "<<endl;
	for(int i=7;i>=0;i--){
		cout<<" "<<s1[i];
	}
	return 0;
}
