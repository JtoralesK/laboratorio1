/*Ejercicio:9) Dada una lista de 20 números enteros cargarlos en un vector. Determinar e informar
con un cartel aclaratorio si el sector está ordenado estrictamente en forma creciente.
 Por ejemplo: el vector (1, 3, 5, 7, 9) está ordenado estrictamente.
 el vector (1, 5, 3, 7) no lo está.*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;

int main(){
int array[20];
 int i ;
 for(i=0;i<20;i++){
    cout<<"ingresar n:";cin>>array[i];
 }
 int lista = 0;
 bool ordenado = true;
 for(i=0;i<20;i++){
    int n= array[i];
    if(i==0){
        lista=n;
    }else{
     if(n>lista && ordenado==true){
        lista=n;
    }else{
        ordenado=false;
    }
    }

 }
 if(ordenado){
     cout<<"ordenado"<<endl;

 }else{
    cout<<"lista desordenado"<<endl;

 }
return 0 ;
}
