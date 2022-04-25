/*Ejercicio:13) Dada una lista de números que finaliza cuando se ingresa un cero, informar cual es el
anteúltimo y último número impar ingresado.
Ejemplo 8, 4, -5, 6, 10, 5, 18 se informa -5 y 5.
*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;

int main(){
int n,v=0,cont=1,ultiIn=0,anteIn=0;
while(cont!=0){
    cout<<"ingresar un numero:";cin>>n;
    cont=n;
    int resto = n%2;
    if(resto!=0 && v==0){
        ultiIn=n;
        anteIn=n;
        v++;
    }else if(resto!=0 && v>0){
        anteIn=ultiIn;
        ultiIn=n;

    }
}
cout<<"anteultimo inpar:"<<anteIn<<", ultimo inpar:"<<ultiIn;
return 0 ;
}
