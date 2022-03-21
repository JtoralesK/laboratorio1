/*Ejercicio:7) Hacer un programa para ingresar por teclado el importe de una venta y el porcentaje de
descuento aplicada a la misma y luego informar por pantalla el importa a pagar.
Ejemplo 1. Si el importe de la venta es $ 1.200 y el descuento es el 15% entonces el total a
pagar será de $ 1.020.
Ejemplo 2. Si el importe de la venta es $ 800 y el descuento es el 0% entonces el total a pagar
será de $ 800. */
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;

int main(){
float venta,descuento,calculoDescuento,precioFinal;
cout<<"ingresar importe de venta:";
cin>>venta;
cout<<"ingresar descuento de la venta:";
cin>>descuento;
calculoDescuento=(venta*descuento)/100;
precioFinal=venta-calculoDescuento;
cout<<"el precio final es$:"<<precioFinal;
return 0 ;
}
