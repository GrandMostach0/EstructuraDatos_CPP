#include <cstdlib>
#include <iostream>

using namespace std;
/*CONVERTIR UN NUMERO DECIMAL A BINARIO
 * utilizando la recursividad */
void binario(int n){
    if(n>1)binario(n/2); //estado de básico
    cout<< n%2;
}
int main() {
    int num; char s[80];
    cout<<"\n\t\t NUMERO DECIMAL: ";cin.getline(s,80);num=atoi(s);
    binario(num);
    cout<<"\nPresione ENTER para terminar";cin.get();
    return 0;
}

