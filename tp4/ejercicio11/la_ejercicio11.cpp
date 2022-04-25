/*Ejercicio:11) Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un
cero, informar el máximo de los negativos y el mínimo de los positivos.
Ejemplo: 5, 8, 12, 2, -10, 15, -20, 8, -3, 24, 0. Máximo Negativo -3. Mínimo Positivo 2.*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;

int main(){
int n,v=0,vn=0, menorP=0,mayorN=0,contador=-1;
while(contador!=0){
    cout<<"ingresar un numero:";cin>>n;
    contador=n;

    if(n!=0 && n>0){
        if(v==0){
            menorP=n;
            v++;
        }else{
            if(n<menorP){
                menorP=n;
            }
        }
    }else if(n!=0 && n<0){
        if(vn==0){
            mayorN=n;
            vn++;
        }else{
            if(n>mayorN){
                mayorN=n;
            }
        }
    }

}
cout<<"menor de los positivos:"<<menorP<<", mayor de los negativos:"<<mayorN;
return 0 ;
}
