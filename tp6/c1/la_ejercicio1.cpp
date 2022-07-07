/*Ejercicio:1) Leer 10 números y guardarlos en un vector. Determinar e informar cual es la suma de
los valores del vector.*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;

int main(){
const int numb=10;
int i;
int v[numb];
for(i=0;i<10;i++){
    int x;
    cout<<"ingresar un numero:";cin>>v[i];
}
for(i=0;i<10 ;i++){
    cout<<v[i]<<endl;
}
return 0 ;
}
