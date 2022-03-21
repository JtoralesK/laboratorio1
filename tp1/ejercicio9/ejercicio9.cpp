/*Ejercicio:9) Hacer un programa para ingresar por teclado una cantidad de minutos y mostrar por
pantalla a cuantas horas y minutos equivalen.
Ejemplo 1: si se ingresan 380 minutos el programa mostrará por pantalla que equivalen a 6
horas y 20 minutos.
Ejemplo 2: si se ingresan 720 minutos el programa mostrará por pantalla que equivalen a 12
horas y 0 minutos.
Ejemplo 3: si se ingresan 50 minutos el programa mostrará por pantalla que equivalen a 0
horas y 50 minutos
*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;

int main(){
int m,horas,minutos;
cout<<"ingresar minutos:";
cin>>m;
minutos=m%60;
horas=(m-minutos)/60;
cout<<horas<<"h"<<" con "<<minutos<<" minutos";
return 0 ;
}
