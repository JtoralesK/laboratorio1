/*Ejercicio:12) Dada una lista de números que finaliza cuando se ingresa un cero, informar cual es el
primer y último número impar ingresado.
Ejemplo 8, 4, -5, 6, 9, 5, 18, 0 se informa -5 y 5*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;

int main(){
int priIn=0, ultiIn=0,contador=1,v=0,n;
while(contador!=0){
    cout<<"ingresar un numero:";cin>>n;
    contador=n;
    int resto = n%2;
    if(resto!=0 && v==0){
        priIn=n;
        ultiIn=n;
        v++;
    }else if(resto!=0 && v>0){
        ultiIn=n;
    }
}
cout<<"primer inpar:"<<priIn<<",ultimo inpar:"<<ultiIn;
return 0 ;
}
