/*Ejercicio:2) Hacer un programa que solicite por teclado que se ingresen dos números y luego
guardarlos en dos variables distintas. A continuación se deben intercambiar mutuamente los
valores en ambas variables y mostrarlos por pantalla.
Ejemplo: Suponiendo que se ingresan 3 y 8 como valores y que la variables usadas son A y B,
entonces A=3 y B=8, pero luego debe quedar A=8 y B=3.*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;

int main(){
int A,B,variable1,variable2;
cout<<"ingresar un valor: ";
cin>>A;
cout<<"ingresar otro valor: ";
cin>>B;
variable1=A;
variable2=B;
cout<<"primero es "<<"variable1:"<<variable1<<" y variable2:"<<variable2<<endl;

variable1=B;
variable2=A;
cout<<"despues es "<<"variable1:"<<variable1<<" y variable2:"<<variable2;

return 0 ;
}
