/*Ejercicio: 11) Hacer un programa para ingresar por teclado una cantidad de cantidad de minutos y
mostrar por pantalla a cuantos días, horas y minutos equivalen.
Ejemplo 1: si se ingresan 1520 minutos el programa mostrará por pantalla que equivalen a 1
día, 1 hora y 20 minutos.
Ejemplo 2: si se ingresan 480 minutos el programa mostrará por pantalla que equivalen a 0
día, 8 horas y 0 minutos.*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;

int main(){
int m;
cout<<"igresar cantidad de minutos:";
cin>>m;
int mi = m%60;
int horasTotales = (m-mi)/60;
int ho = horasTotales%24;
int di = (horasTotales-ho)/24;
cout<<di<<" d"<<", "<<ho<<"hs, "<<mi<<" minutos";
return 0 ;
}
