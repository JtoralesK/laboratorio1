/*Ejercicio:2) Leer 10 números y guardarlos en un vector. Calcular el promedio y luego mostrar
por pantalla los valores que son mayores al promedio.*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;

int main(){
const int numb=10;
int i;
int v[numb];
int total=0;
for(i=0;i<10;i++){
    int x;
    cout<<"ingresar un numero:";cin>>v[i];
    total+=v[i];
}
float promedio = (float)total/10;

cout<<"promedio:"<<promedio<<endl;
cout<<"mayores al promedio:"<<endl;

for(i=0;i<10 ;i++){
        if(v[i]>promedio){
            cout<<v[i]<<endl;

        }
}
return 0 ;
}
