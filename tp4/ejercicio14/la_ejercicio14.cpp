/*Ejercicio:14) Dada una lista de números que finaliza cuando se ingresa un cero, informar cual es la
posición del primer y segundo número impar ingresado.
Ejemplo 8, 4, 5, 6, -9, 15, 7, 0 se informa 3 y 5. */
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;

int main(){
int v=0,cont=1,contIm=1,priPo=0,sePo=0,n;
while(cont!=0){
    cout<<"ingresar un numero:";cin>>n;
    cont=n;
    v++;
    int resto= n%2;
    if(resto!=0){
        if(contIm==1){
            priPo=v;
            sePo=v;
        }
        if(contIm==2){
            sePo=v;
        }
        contIm++;
    }
}
cout<<"posicion primer inpar:"<<priPo<<",posicion segundo inpar:"<<sePo;
return 0 ;
}
