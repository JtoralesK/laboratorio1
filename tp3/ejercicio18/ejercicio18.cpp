/*Ejercicio:18) Hacer un programa para ingresar una lista de 8 números y luego informar si todos
están ordenados en forma creciente. En caso de haber dos números “empatados”
considerarlos como crecientes.
Por ejemplo si la lista fuera:
Ejemplo 1: -10, 1, 5, 7, 15, 18, 20, 23 se emitirá un cartel: “Conjunto Ordenado”
Ejemplo 2: 10, 10, 15, 20, 25, 25, 28, 33 se emitirá un cartel: “Conjunto Ordenado”
Ejemplo 3: 10, 1, 15, 7, -15, 18, 20, 23 se emitirá un cartel: “Conjunto No Ordenado”*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;

int main(){
    int i,contador=0,base=0;
bool ordenado;
for(i=1;i<=8;i++){
    int n;
    cout<<"ingresar un numero:";cin>>n;
    if(contador==0){
        base=n;
        ordenado=true;
    }
    if(contador>0 && ordenado){
        if(n>=base){
            base=n;
            ordenado=true;
        }else{
        ordenado=false;
        }
    }
    contador++;
}
if(ordenado){
    cout<<"la lista esta ordenada";
}else{
    cout<<"la lista NO esta ordenada";

}
return 0 ;
}
