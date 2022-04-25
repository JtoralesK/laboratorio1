/*Ejercicio:*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;

int main(){
int v=0,mayor=0,contador=-1,n;
while(contador!=0){
    cout<<"ingresar un numero:";cin>>n;
   if(n%2==0){
     if(v==0){
        mayor=n;
        v++;
    }else{
        if(n>mayor){
            if(n!=0){
                mayor=n;
            }
        }
    }
   }
    contador=n;
}
cout<<"el mayor es:"<<mayor;
return 0 ;
}
