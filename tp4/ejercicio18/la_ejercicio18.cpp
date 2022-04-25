/*Ejercicio:18) Hacer un programa para ingresar una lista de números que finaliza cuando se ingresan
dos números positivos consecutivos, y luego informar el máximo. Cuando se ingresa el
número positivo repetido el mismo debe ser descartado.
Ejemplo: 5, -10, 20, -8, 0, 13, -35, -8, 15, 10. Se listará Máximo 20.
En este caso, el segundo número positivo consecutivo, el 10, no se analiza, solo sirve para
finalizar el ingreso.
Ejemplo: 5, -10, 20, -20, 0, 55, -13, 45, -8, -5, 12, 120. Se listará Máximo 55.
En este caso, el segundo número positivo consecutivo, el 120, no se analiza, solo sirve para
finalizar el ingreso.*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;

int main(){
bool cont=true;
int v=0,base=0,mayor=0,n;
while(cont==true){
    cout<<"ingresar un valor:";cin>>n;
    if(cont==true){
        if(v==0){
            mayor=n;
            base=n;
            v++;
        }else{

            if(n>=0 &&base>=0){
                cont=false;
            }
            base=n;
            if(n>mayor &&cont==true){
                mayor=n;
            }
        }
    }
}
cout<<"el mayor"<<mayor;
return 0 ;
}
