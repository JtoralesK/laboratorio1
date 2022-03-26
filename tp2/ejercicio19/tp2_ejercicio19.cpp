/*Ejercicio:19) Una empresa de electricidad cobra el servicio a sus clientes de acuerdo a la siguiente
escala:
$ 10 por kilovatio por el consumo hasta los primeros 100 kilovatios de consumo.
$ 12 por kilovatio por el consumo excedente de 101 a 200 kilovatios.
$ 15 por kilovatio por el consumo excedente de 201 kilovatios en adelante.
Hacer un programa para que, dado el consumo en kilovatios de un determinado cliente, el
programa calcule e informe el total a pagar por el mismo.
Ejemplo 1: Un consumo de 55 kilovatios, se calculará: $ 10 x 55= $ 550
Ejemplo 2: Un consumo de 125 kilovatios, se calculará: $ 10 x 100 + $ 12 x 25=$ 1300
Ejemplo 3: Un consumo de 250 kilovatios, se calculará: $ 10 x 100 + $ 12 x 100 + $ 15 x 50 = $ 2950*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;

int main(){
int k,resultado;
cout<<"ingresar kilovatios:";
cin>>k;
resultado=0;
if(k>100){
    int resta = k-100;
    resultado= resta*12+100*10;
}
if(k>200){
    int resta = k-200;
    resultado= resta*15+100*10+100*12;
}
if(k>0 && k<100){
    resultado= k*10;
}
cout<<"informe a pagar:$"<<resultado;
return 0 ;
}
