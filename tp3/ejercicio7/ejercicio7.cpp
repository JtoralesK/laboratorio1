/*Ejercicio:7) Hacer un programa para ingresar una lista de 20 números, luego informar cuántos son
positivos, cuántos son negativos, y cuántos iguales a cero.*/
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
cout<<"positivos:"<<p<<",negativos:"<<n<<",iguales a 0:"<<ig;
return 0 ;
}
