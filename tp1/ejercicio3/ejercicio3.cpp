/*Ejercicio:3) Una concesionaria de autos paga a los vendedores un sueldo fijo de $ 15.000 más $ 2.000
de premio por cada auto vendido. Hacer un programa que permita ingresar por teclado la
cantidad de autos vendidos por un vendedor y luego informar por pantalla el sueldo total a
pagar.
Ejemplo. Si la cantidad de autos vendidos fuera 4 entonces el sueldo total a pagar es de
$ 23.000.*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;

int main(){
int sueldoFijo,autoVendido,premio,sueldo;
sueldoFijo=15000;
premio=2000;
cout<<"ingresar cantidad de autos vendidos:";
cin>> autoVendido;
sueldo=autoVendido*premio + sueldoFijo;
cout<<"Su sueldo es de:$"<<sueldo;
system("pause");
return 0 ;
}
