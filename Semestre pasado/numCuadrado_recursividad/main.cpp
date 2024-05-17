#include <cstdlib>
#include <iostream>
using namespace std;
/*
 * 
 */
long int potencia(int base, int e){
    if(e==0)return 1; //ESTADO
    if(e==1)return base;
    else return base*potencia(base,e-1);
}
int main() {
    char s[80]; int n=0, m=0;
    cout<<"Base: ";cin.getline(s,80);n=atoi(s);
    cout<<"Exponente: ";cin.getline(s,80);m=atoi(s);
    cout<<"\n\n Resultado "<<potencia(n,m)<<endl;
    return 0;
}

