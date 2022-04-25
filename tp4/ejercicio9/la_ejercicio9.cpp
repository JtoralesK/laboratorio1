/*Ejercicio:9) Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un
cero, luego informar el máximo y la posición del máximo en la lista. En caso de “empates”
considerar la primera aparición.
Ejemplo: 5, -10, 20, 8, 25, 13, 35, -8, -5, 20, 0. Se listará Máximo 35 Posición 7.
Ejemplo: 5, -10, 20, 8, 25, 13, 55, -8, 55, 20, 0. Se listará Máximo 55 Posición 7.
Ejemplo: -25, -10, -20, -8, -25, -13, -55, -18, -55, 0. Se listará Máximo -8 Posición 4.*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;

int main(){
int v=0,mayor=0,cuentaPosiciones=0,posicion=0,contador=-1,n;
while(contador!=0){
    cout<<"ingresar un numero:";cin>>n;
    cuentaPosiciones++;
    contador=n;
    if(v==0 && n!=0){
        mayor=n;
        v++;
        posicion=cuentaPosiciones;
    }else{
        if(n>mayor && n!=0){
            mayor=n;
            posicion=cuentaPosiciones;
        }
    }
}

if(mayor!=0){
    cout<<"el mayor es:"<<mayor<<" y su posicion es:"<<posicion;
}else{
cout<<"no hay lista de numeros";
}
return 0 ;
}
