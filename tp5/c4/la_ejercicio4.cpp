/*Ejercicio:4) Dada una lista de n�meros enteros todos distintos entre s� y que finaliza con un cero,
determinar e informar con un cartel aclaratorio si los n�meros primos que aparezcan en la
misma est�n ordenados de menor a mayor. Los n�meros positivos primos pueden no ser
consecutivos, pero s� estar ordenados.
Por ejemplo:
4, 5, 7, 12, 13, 0 Se emite un cartel que diga �Ordenados� (5,7 y 13)
2, 10, 3, 5, 11, 7, 14, 0 Se emite un cartel que diga �Desordenados� (2, 3, 5, 11 y 7)*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;

int main(){

    int n=1, divisores=0,i=1;
    bool ordenado=true;
    int ultimo=0;
    while(n!=0){
        cout<<"ingresar un numero:";cin>>n;
            if(n!=0){
                while(divisores<=2 && i<(n+1)){
                    int resto=(n%i)==0;
                    if(resto){
                        divisores++;
                    }
                    i++;
                }
                if(divisores<=2){
                    if(n>ultimo && ordenado==true){
                        ultimo=n;
                    }else{
                    ordenado=false;
                    }
                }
            }
    }
    if(ordenado){
        cout<<"lista ordenada";
    }else{
    cout<<"lista NOO ordenada";

    }
return 0 ;
}
