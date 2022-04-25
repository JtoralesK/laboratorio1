/*Ejercicio:17) Hacer un programa para leer tres números diferentes y determinar e informar el
número del medio, es decir el que no es ni mayor ni menor. Suponer que los 3
números ingresados son siempre distintos.
Ejemplo, si se ingresan 6, 10, 8, se emitirá 6.
Debe utilizar un ciclo exacto (ciclo For) para resolver este ejercicio*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;

int main(){
int i,conta=0,menor=0,medio=0,mayor=0;
for(i=1;i<=3;i++){
    int nu;
    cout<<"Ingresar un numero:";cin>>nu;
    if(conta==0){
        mayor=nu;
    }
    if(conta==1){
        if(nu>mayor){
        medio=mayor;
        mayor=nu;
        }else{
        medio=nu;
        }
    }
    if(conta==2){
        if(nu>mayor){
            menor=medio;
            medio=mayor;
            mayor=nu;
        }else{
            if(nu>medio){
                menor=medio;
                medio=nu;
            }else{
            menor=nu;
            }
        }
    }
    conta++;
}
cout<<"El del medio:"<<medio;
return 0 ;
}
