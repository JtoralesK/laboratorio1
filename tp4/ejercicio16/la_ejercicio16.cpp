/*Ejercicio:16) Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un
cero, informar los 2 mayores valores ingresados, aclarando cual es el máximo y cual el que
le sigue.
Ejemplo: 10, 8, 12, 14, 3, 0 el resultado será 14 y 12.
Ejemplo: 14, 8, 12, 14, 3, 0 el resultado será 14 y 14.
Ejemplo: -4, -8, -12, -20, -2, 0 el resultado será -2 y -4*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;

int main(){

int n,v=0,cont=1,mayor=0,seMayor=0;
while(cont!=0){
    cout<<"ingresar un valor:";cin>>n;
    cont=n;
    if(n!=0){
        if(v==0){
            mayor=n;
            seMayor=n;
            v++;
        }else{
            if(n>=mayor  ){
                seMayor=mayor;
                mayor=n;

            }
        }
    }
}

cout<<"el mayor:"<<mayor<<",segundo mayor:"<<seMayor;
return 0 ;
}
