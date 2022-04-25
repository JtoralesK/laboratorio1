/*Ejercicio:6) Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un
cero, luego informar cuántos son positivos y cuántos son negativos.
Ejemplo: 4, -3, 8, -5, 18, 20, 0. Se listará Positivos: 4 Negativos: 2.
*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;

int main(){
int po=0,ne=0,n;
int cont=-1;
while(cont!=0){
    cout<<"ingresar un numero:";cin>>n;
    if(n>=0){
        po++;
    }else{
    ne++;
    }
    cont=n;
}
cout<<"los positivos son:"<<po-1<<" y los negativos son:"<<ne;
return 0 ;
}
