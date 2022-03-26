/*Ejercicio:3) Hacer un programa para ingresar por teclado un número y luego informar por pantalla con
un cartel aclaratorio si el mismo es par o impar.*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;

int main(){
int n;
cout<<"ingresar un numero:";
cin>>n;
int nu = n%2;
if(nu==0){
    cout<<"su numero es par";
}else{
    cout<<"su numero es impar";
}
return 0 ;
}
