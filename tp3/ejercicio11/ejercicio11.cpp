/*Ejercicio:11) Hacer un programa para ingresar una lista de 10 n�meros, luego informar el m�ximo y el
m�nimo.
Ejemplo: 10, 20, -5, 30,-15, 5, 42, 0, 22, -13. Se listar� M�ximo 42 M�nimo -15.
Ejemplo: 10, 20, 5, 30, 15, 5, 42, 8, 22, 13. Se listar� M�ximo 42 M�nimo 5.
Ejemplo: -10, -20, -5, -30, -15, -12, -42, -8, -22, -13. Se listar� M�ximo -5 M�nimo -42.
Los Ejemplos 2 y 3 demuestran que no siempre en una lista de n�meros el m�ximo es un
positivo y que no siempre el m�nimo es un negativo.*/
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
