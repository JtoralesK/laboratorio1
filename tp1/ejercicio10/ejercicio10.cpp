/*Ejercicio:10) Hacer un programa para ingresar por teclado una cantidad de horas y mostrar por pantalla
a cuantas d�as y horas equivalen.
Ejemplo 1: si se ingresan 26 horas el programa mostrar� por pantalla que equivalen a 1 d�a y
2 horas.
Ejemplo 2: si se ingresan 72 horas el programa mostrar� por pantalla que equivalen a 3 d�as y
0 horas.
Ejemplo 3: si se ingresan 20 horas el programa mostrar� por pantalla que equivalen a 0 d�as y
20 horas.*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;

int main(){
int h,horas,dias;
cout<<"ingresar horas:";
cin>>h;
horas=h%24;
dias=(h-horas)/24;
cout<<dias<<"dias"<<" y "<<horas<<" hs";
return 0 ;
}
