/*Ejercicio:7) Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un
cero, luego informar el máximo.
Ejemplo: 5, 10, 20, 8, 25, 13, 35, -8, -5, 20, 0. Se listará Máximo 35.
Ejemplo: 5, 10, 20, 8, 55, 13, 55, -8, -5, 20, 0. Se listará Máximo 55.
Ejemplo: -5, -10, -20, -8, -55, -13, -55, -8, -15, -20, 0. Se listará Máximo -5.*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;

int main(){
int v=0,mayor=0,contador=-1,n;
while(contador!=0){
    cout<<"ingresar un numero:";cin>>n;
    if(v==0){
        mayor=n;
        v++;
    }else{
        if(n>mayor){
            if(n!=0){
                mayor=n;
            }
        }
    }
    contador=n;
}
cout<<"el mayor es:"<<mayor;
return 0 ;
}
