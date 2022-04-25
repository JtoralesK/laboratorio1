/*Ejercicio:6) Hacer un programa para ingresar un N valor que indica la cantidad de números que
componen una lista y luego solicitar se ingresen esos N números. Se pide informar cuantos
son positivos.
Ejemplo: Se ingresa como valor N un 5, y luego se ingresa: 10, -3, 2, 5, 4. Se listará
Cantidad de Positivos: 4
Ejemplo: Se ingresa como valor N un 6, y luego se ingresa: -10, -3, -2, 0, -5, -4. Se listará
Cantidad de Positivos: 0*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;

int main(){
int i,il,contador;
contador=0;
cout<<"ingresar cuantos numeros se van a ingresar:";cin>>il;
for(i=1;i<=il;i++){
        int n;
   cout<<"ingresar un numero:";cin>>n;
 if(n>=0){
    contador++;
 }
}
cout<<"los numeros positivos son:"<<contador;
return 0 ;
}
