

#ifndef CHECAR_CADENAS_H
#define CHECAR_CADENAS_H
#include <string.h>

using namespace std;
class cadenas{​​​​
private:
char frase[80];
int cont_espacios;
bool para;
bool longitud;
public:
cadenas(); // CONSTRUCTOR
void leer_frase();
int contar_espacios();
bool almenos_unpara();
bool tamanio18();
////// DECLARAR LOS SETTER -- ASIGNAR
void asignar_frase(char s[80]);
void asignar_cont(int c);
void asignar_para(bool p);
void asignar_longitud(bool l);
//////// DECLARAR LOS GETTERS -- OBTENER --- LEER
char* obtener_frase();
int obtener_cont();
bool obtener_para();
bool obtener_longitud();
}​​​​;
cadenas::cadenas(){​​​​
strcpy(frase,""); cont_espacios=0; para=false; longitud=false;
}​​​​



void cadenas::leer_frase(){​​​​
cout << "Frase: "; cin.getline(frase,80);
}​​​​
int cadenas::contar_espacios(){​​​​
for(int i=0; frase[ i ] != '\0'; i++){​​​​
if( frase[ i ] == ' ')cont_espacios++;
}​​​​
return cont_espacios;
}​​​​
bool cadenas::almenos_unpara(){​​​​
if( strstr(frase,"para") != NULL ){​​​​ // SI EXISTE UNA OCURRENCIA DE PARA EN FRASE
return true;
}​​​​else{​​​​
return false;
}​​​​
}​​​​
bool cadenas::tamanio18(){​​​​
if( strlen(frase) > 18 )
return true;
else
return false;
}​​​​
char* cadenas::obtener_frase(){​​​​
return frase;
}​​​​
int cadenas::obtener_cont(){​​​​
return cont_espacios;
}​​​​
bool cadenas::obtener_longitud(){​​​​
return longitud;
}​​​​
bool cadenas::obtener_para(){​​​​
return para;
}​​​​
void cadenas::asignar_frase(char s[80]){​​​​
strcpy(frase,s);
}​​​​
void cadenas::asignar_cont(int c){​​​​
cont_espacios = c;
}​​​​
void cadenas::asignar_longitud(bool l){​​​​
longitud = l;
}​​​​
void cadenas::asignar_para(bool p){​​​​
para = p;
}​​​​
#endif

