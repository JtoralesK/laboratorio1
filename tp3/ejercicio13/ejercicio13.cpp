/*Ejercicio:13) Hacer un programa para ingresar una lista de 10 números, luego informar el máximo
de los pares.
Ejemplo: 2, 10, 20, 8, 25, 13, 36, -8, -5, 20. Se listará Máximo 36.
Ejemplo: 5, -13, 23, 81, -55, -13, 55, 4, 15, -20. Se listará Máximo 4.
Ejemplo: -5, -13, -20, -8, -55, -13, -55, -14, -15, -20. Se listará Máximo -8.*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;

int main(){
int i,contador=0,base=0;
for(i=0;i<=9;i++){
    int n;
    cout<<"ingresar un numero:";cin>>n;
    int resto;
    resto=n%2;
    if(contador==0 && resto==0 ){
        base=n;
        contador++;
    }

    if(resto==0 && n>base){
          base=n;
    }
}
cout<<"el mayor de los pares:"<<base;
return 0 ;
}
