/*Ejercicio:10) Hacer un programa para ingresar una lista de n�meros que finaliza cuando se ingresa un
cero, luego informar el m�ximo y el m�nimo.
Ejemplo: 10, 20, -5, 30,-15, 5, 42, 2, 22, -13, 0. Se listar� M�ximo 42 M�nimo -15.
Ejemplo: 10, 20, 5, 30, 15, 5, 42, 8, 22, 13, 0. Se listar� M�ximo 42 M�nimo 5.
Ejemplo: -10, -20, -5, -30, -15, -12, -42, -8, -22, -13, 0. Se listar� M�ximo -5 M�nimo -42.
Observe que los tres ejemplos dejan en claro que la idea de que el m�ximo
�seguramente� es un positivo y el m�nimo �seguramente� es un negativo, queda
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
