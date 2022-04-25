/*Ejercicio:19) Hacer un programa para ingresar 5 números, luego informar los 2 mayores
valores ingresados, aclarando cual es el máximo y cuál es el segundo máximo.
Ejemplo 1: 10, 8,12, 14 ,3 el resultado será 14 y 12.
Ejemplo 2: 14, 8, 12, 14, 3 el resultado será 14 y 14.
Ejemplo 3: -20, - 25, -3, -8, -50, el resultado será -3 y -8.
Ejemplo 4: 100, 20, 5, - 15, 70, el resultado será 100 y 70.
 Se recomienda probar el diagrama que vaya a desarrollar con todos los ejemplos, en particular
 el Ejemplo 4, en el cual el máximo de la lista aparece en el primer lugar y que si no se tiene
 precaución puede llevar a resultados como 100 como máximo y 100 como segundo máximo.
 ¡ESO ES INCORRETO! El resultado debe ser 100 y 70.
*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;

int main(){
 int i,contador=0;
 int pri=0,se=0,ter=0,cua=0,qui=0;
for(i=1;i<=5;i++){
    int n;
    cout<<"ingresar un numero:";cin>>n;
    ///primer numero
    if(contador==0){
        pri=n;
    }
    ///segundo numero
     if(contador==1){
       if(n>pri){
        se=pri;
        pri=n;
       }else{
       se=n;
       }
    }
    ///tercer numero
    if(contador==2){
        if(n>pri){
        ter=se;
        se=pri;
        pri=n;
       }else{
            if(n>se){
                ter=se;
                se=n;
            }else{
                ter=n;
            }
        }
    }
    ///cuarto numero
     if(contador==3){
        if(n>pri){
        cua=ter;
        ter=se;
        se=pri;
        pri=n;
       }else{
            if(n>se){
                cua=ter;
                ter=se;
                se=n;

            }if(n>ter){
            cua=ter;
            ter=n;
            }else{
            cua=n;
            }
        }
    }
    ///quinto numero
    if(contador==4){
        if(n>pri){
        qui=cua;
        cua=ter;
        ter=se;
        se=pri;
        pri=n;
       }else{
            if(n>se){
                qui=cua;
                cua=ter;
                ter=se;
                se=n;

            }if(n>ter){
            qui=cua;
            cua=ter;
            ter=n;
            }if(n>cua){
            qui=cua;
            cua=n;
            }else{
            qui=n;
            }
        }
    }
    contador++;
}
cout<<"el mas grande:"<<pri<<",el segundo mas grande:"<<se;crefvc
return 0 ;
}

