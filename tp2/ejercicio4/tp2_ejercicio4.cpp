/*Ejercicio:4) Hacer un programa para ingresar por teclado dos números y luego informar por pantalla la
diferencia absoluta entre ambos.
Ejemplo 1: Si se ingresan 3 y 8, se emite 5. Si se ingresan 8 y 3, se emite 5.
Ejemplo 2: Si se ingresan -3 y 9, se emite 12. Si se ingresan -12 y -1, se emite 11.*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;

int main(){
int a,b;
cout<<"ingresar un numero:";
cin>>a;
cout<<"ingresar otro numero:";
cin>>b;
int diferencia=a-b;

   if(a>b){
       cout<<"la diferencia entre ambos numeros es de "<<diferencia;
   }else{
        cout<<"la diferencia entre ambos numeros es de "<<-(diferencia);
   }

return 0 ;
}
