/*Ejercicio:9) Hacer un programa para ingresar una lista de 10 n�meros, luego informar el m�ximo.
Ejemplo 1: 5, 10, 20, 8, 25, 13, 35, -8, -5, 20. Se listar� M�ximo 35.
Ejemplo 2: 5, 10, 20, 8, 55, 13, 55, -8, -5, 20. Se listar� M�ximo 55.
Ejemplo 3: -15, -10, -20, -8, -25, -13, -55, -6, -55, -20. Se listar� M�ximo -6.
El Ejemplo 3 demuestra que no siempre en una lista de n�meros el m�ximo es un positivo*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;

int main(){
int n,mayor,i;
cout<<"ingresar un numero:";cin>>n;
mayor=n;

for(i=0;i<=9;i++){
    int nu;
    cout<<"ingresar otro valor:";cin>>nu;
    if(nu>mayor){
      mayor=nu;
    }
}
cout<<"el mayor es: "<<mayor;
return 0 ;
}
