/*Ejercicio:11) Hacer un programa para ingresar una lista de 10 números, luego informar el máximo y el
mínimo.
Ejemplo: 10, 20, -5, 30,-15, 5, 42, 0, 22, -13. Se listará Máximo 42 Mínimo -15.
Ejemplo: 10, 20, 5, 30, 15, 5, 42, 8, 22, 13. Se listará Máximo 42 Mínimo 5.
Ejemplo: -10, -20, -5, -30, -15, -12, -42, -8, -22, -13. Se listará Máximo -5 Mínimo -42.
Los Ejemplos 2 y 3 demuestran que no siempre en una lista de números el máximo es un
positivo y que no siempre el mínimo es un negativo.*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;

int main(){

int n,baseMayor,baseMenor,i;
cout<<"ingresar un numero:";cin>>n;
baseMayor=n;
baseMenor=n;

for(i=1;i<=9;i++){
    int nu;
    cout<<"ingresar otro valor:";cin>>nu;
    if(nu>baseMayor){
      baseMayor=nu;
    }
    if(nu<baseMenor){
      baseMenor=nu;
    }
}
cout<<"el mayor es:"<<baseMayor<<" y el menor es:"<<baseMenor;
return 0 ;
}
