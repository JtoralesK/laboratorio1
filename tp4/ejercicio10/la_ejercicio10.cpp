/*Ejercicio:10) Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un
cero, luego informar el máximo y el mínimo.
Ejemplo: 10, 20, -5, 30,-15, 5, 42, 2, 22, -13, 0. Se listará Máximo 42 Mínimo -15.
Ejemplo: 10, 20, 5, 30, 15, 5, 42, 8, 22, 13, 0. Se listará Máximo 42 Mínimo 5.
Ejemplo: -10, -20, -5, -30, -15, -12, -42, -8, -22, -13, 0. Se listará Máximo -5 Mínimo -42.
Observe que los tres ejemplos dejan en claro que la idea de que el máximo
“seguramente” es un positivo y el mínimo “seguramente” es un negativo, queda
totalmente descartada.
*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;

int main(){
int n,v=0, menor=0,mayor=0,contador=-1;
while(contador!=0){
    cout<<"ingresar un numero:";cin>>n;
    contador=n;
    if(v==0 && n!=0){
        mayor=n;
        menor=n;
        v++;
    }else{
        if(n<menor && n!=0){
            menor=n;
        }
         if(n>mayor && n!=0){
            mayor=n;
        }
    }
}
cout<<"menor:"<<menor<<", mayor:"<<mayor;
return 0 ;
}
