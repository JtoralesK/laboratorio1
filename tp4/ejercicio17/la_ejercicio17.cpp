/*Ejercicio:17) Hacer un programa para ingresar una lista de n�meros que finaliza cuando se ingresan
dos n�meros consecutivos iguales, y luego informar el m�ximo. Cuando se ingresa el
n�mero repetido el mismo debe ser descartado.
Ejemplo: 5, 10, 20, 8, 25, 13, 35, -8, -5, 22, 22. Se listar� M�ximo 35.
En este caso, el segundo n�mero 22 no se analiza, solo sirve para finalizar el ingreso.
Ejemplo: 5, 10, 20, 8, 55, 13, 55, -8, -5, 33, 33. Se listar� M�ximo 55.
En este caso, el segundo n�mero 33 no se analiza, solo sirve para finalizar el ingreso.
Ejemplo: 5, 10, 20, 8, 55, 13, 55, -8, -5, -13, -13. Se listar� M�ximo 55.
En este caso, el segundo n�mero -13 no se analiza, solo sirve para finalizar el ingresoiyt77t8*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;

int main(){

int n,v=0,mayor=0,base=0;
bool cont =false;
while(cont!=true){
    cout<<"ingresar un valor:";cin>>n;
    if(cont==false){
        if(v==0){
            mayor=n;
            base=n;
            v++;
        }else{
            if(n>mayor  ){
                mayor=n;
                base=n;
            }else{
             if(n==base  ){
                cont=true;
            }else{
                base=n;

            }
            }

        }
    }
}

cout<<"el mayor:"<<mayor;
return 0 ;
}
