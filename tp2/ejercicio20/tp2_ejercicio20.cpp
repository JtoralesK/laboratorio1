/*Ejercicio:20) Una fábrica abona a sus empleados un pago semanal a partir de las horas trabajadas y de
acuerdo a las siguientes escalas.
Las primeras 40 horas se pagan a un valor de $ 300 cada una.
Las horas excedentes de las 40 horas se pagan a un valor de $ 450 cada una.
Las horas excedentes de las 50 horas se pagan a un valor de $ 600 cada una.
Hacer un programa para que, dadas las horas trabajadas por un empleado, el programa calcule
e informe el total a pagar por las mismas.
Ejemplo 1. Si el empleado trabajó 40 horas, se le abonará 40 x 300 = 12.000
Ejemplo 2. Si el empleado trabajó 45 horas, se le abonará 40 x 300 + 5 x 450 = 14.250.
Ejemplo 3. Si el empleado trabajó 52 horas, se le abonará 40 x 300 + 10 x 450 + 2 x 600 =
17.700.*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;

int main(){
int h,s01,resultado;
cout<<"ingresar horas trabajadas:";
cin>>h;
resultado=0;
if(h>40){
    int resta = h-40;
    resultado= resta*450+40*300;
}
if(h>50){
    int resta = h-50;
    resultado= resta*600+10*450+40*300;
}
if(h>0 && h<=40){
    resultado= h*300;
}
cout<<"informe a pagar:$"<<resultado;
return 0 ;
}
