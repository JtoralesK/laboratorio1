/*Ejercicio:15) Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un
cero, informar si todos están ordenados en forma creciente. En caso de haber dos números
“empatados” considerarlos como crecientes. Por ejemplo, si la lista fuera:
Ejemplo 1: -10, 1, 5, 7, 15, 18, 20, 23, 0 se emitirá un cartel: “Conjunto Ordenado”
Ejemplo 2: 10, 10, 15, 20, 25, 25, 28, 33, 0 se emitirá un cartel: “Conjunto Ordenado”
Ejemplo 3: 10, 1, 15, 7, -15, 18, 20, 23, 0 se emitirá un cartel: “Conjunto No Ordenado”
*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;

int main(){

int n,v=0,cont=1,mayor=0;
int ordenado=true;
while(cont!=0){
    cout<<"ingresar un valor:";cin>>n;
    cont=n;
    if(n!=0){
        if(v==0){
            mayor=n;
            v++;
        }else{
            if(n>=mayor && ordenado==true ){
                ordenado = true;
            }else{
            ordenado = false;
            }
        }
    }
}
if(ordenado){
    cout<<"conjunto ordenado";
}else{
    cout<<"conjunto NO ordenado";

}
return 0 ;
}
