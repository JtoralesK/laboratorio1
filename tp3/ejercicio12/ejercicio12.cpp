/*Ejercicio:12) Hacer un programa para ingresar una lista 10 n�meros e informar el m�ximo de los
negativos y el m�nimo de los positivos.
Ejemplo: 5, 8, 12, 2, -10, 15, -20, 8, -3, 24. M�ximo Negativo -3. M�nimo Positivo 2.
*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;

int main(){

int n,baseMayor,baseMenor,i;
cout<<"ingresar un numero:";cin>>n;
baseMayor=n;
baseMenor=n;
for(i=1;i<=9;i++){
    int nu;
    cout<<"ingresar otro valor:";cin>>nu;
    if(baseMayor<0){
         if(nu>0){
            baseMayor=nu;
        }
    }
    if(nu>=0 && nu<baseMayor){
      baseMayor=nu;

    }if(baseMenor>=0){
        if(nu<0){
            baseMenor=nu;
        }
    }if(nu>baseMenor && nu<0){
            baseMenor=nu;
        }


}
cout<<"el mayor de los menores:"<<baseMenor<<" ,el menor de los mayores:"<<baseMayor;
return 0 ;
}
