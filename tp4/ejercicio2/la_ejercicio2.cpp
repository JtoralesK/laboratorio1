/*Ejercicio:2) Hacer un programa para mostrar por pantalla los n�meros del 1 al 20 salteando de a 3
elementos. Es decir: 1, 4, 7, 10, 13, 16, 19.
Importante: El programa no tiene ning�n ingreso de datos.*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;

int main(){
int n=1;
while(n<20){
    cout<<n<<endl;
    n=n+3;
}
return 0 ;
}
