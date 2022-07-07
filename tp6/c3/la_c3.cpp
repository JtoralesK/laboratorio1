/*Ejercicio:3) Leer 10 números y guardarlos en un vector. Determinar e informar cual es el valor
máximo y su posición dentro del vector.
*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;

int main(){
int i;
int v[10];
bool primero = true;
int mayor=0,posicion=0;
for(i=0;i<10;i++){
    int x;
    cout<<"ingresar un numero:";cin>>v[i];
   if(primero==true){
    mayor=v[i];
    primero=false;
    posicion=i;

   }else{
    if(v[i]>mayor){
       mayor=v[i];
       posicion=i;
    }
   }
}
cout<<"mayor:"<<mayor<<endl;
cout<<"posicion:"<<posicion<<endl;

return 0 ;
}
