/*Ejercicio:8) Hacer un programa para ingresar una lista de 20 números, luego informar que
porcentaje son positivos, negativos, y ceros.*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;



int main(){

int i,p=0,n=0,ig=0;
for(i=1;i<=20;i++){
    int nu;
    cout<<"ingresar un numero:";cin>>nu;
    if(nu>0){
        p++;
    }
    if(nu<0){
        n++;
    }
    if(nu==0){
        ig++;
    }
}
float porP=(p*100)/20;
float porN=(n*100)/20;
float porIG=(ig*100)/20;

cout<<"positivos:%"<<porP<<",negativos:%"<<porN<<",iguales a 0:%"<<porIG;

return 0 ;
}
