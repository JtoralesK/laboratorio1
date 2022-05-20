/*Ejercicio:1) Hacer un programa para ingresar una lista de 10 números y luego informar cuantos de
los números ingresados son primos. Se informa 1 resultado al final.*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;

int main(){
int x,primos=0,div,i,a;
for(x=1;x<11;x++){
    cout<<"ingresar un numero:";cin>>a;
    if(a!=0){
        div=0;
        i=0;
        bool num;
        if(a>0){
            num=true;
        }else{
            num=false;
        }
        bool cond=true;
        while(cond==true){
            if(num){
                /// si el numero es positivo
                cond= i<a && div<=2;
                i++;
            }else{
            /// si el numero es negativo
              cond= a<=i && div<=2;
                i--;
            }
            int rest= a%i==0;
            if(rest){
                div++;
            }
        }
        if(div<=2){
            primos++;
        }
    }
}
cout<<"numeros primos:"<<primos;
return 0 ;
}
