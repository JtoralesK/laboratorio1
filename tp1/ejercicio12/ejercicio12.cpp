/*Ejercicio:12) Una granja vende la caja de 12 unidades a $ 100 y cada huevo suelto a $ 12.
Hacer un programa para ingresar la cantidad de huevos que compra un cliente y mostrar por
pantalla el importe total a pagar.
Recordatorio. Por cada 12 huevos se debe calcular una caja y el excedente se calcula como
suelto.
Ejemplo 1. Si la cantidad ingresada son 15 huevos, el programa calcular� 1 caja y 3 sueltos, es
decir $ 100 + $ 12 x 3 = $ 136.
Ejemplo 2. Si la cantidad ingresada son 28 huevos el programa calcular� 2 cajas y 4 sueltos,
es decir $ 100 x 2 + $12 x 4 = $ 248.
Ejemplo 3.Si la cantidad ingresada son 8 huevos, el programa calcular�: 0 cajas y 8 sueltos, es
decir $ 12 x 8 = $ 96.*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;

int main(){
int h;
cout<<"ingresar cantidad de huevos a comprar:";
cin>>h;
int huevos=h%12;
int cajas=(h-huevos)/12;
cout<<cajas<<":maple,"<<huevos<<"huevos"<<",precio:$"<<cajas*100+huevos*12;
return 0 ;
}
