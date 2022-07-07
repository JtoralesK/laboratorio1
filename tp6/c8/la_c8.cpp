/*Ejercicio:8) Dada una lista de números compuesta por 10 subgrupos y cada grupo separado del
siguiente por un cero, se pide generar un vector de 10 elementos con el máximo de
cada uno de los subgrupos. Luego mostrar los elementos del vector por pantalla.*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;

int main(){
    int n,i;
    int ver[10];
    for(i=0;i<10;i++){
        cout<<"grupo "<<i+1<<endl;
    n=1;
    int v=0;
    int mayor=0;
    while(n!=0){
    cout<<"ingresar un numero:";cin>>n;
    if(v==0){
        v++;
        mayor=n;
    }else{
        if(n>mayor){
            mayor=n;
        }
    }


    }

    ver[i]=mayor;
    }

    int x;
    for(x=0;x<10;x++){
        cout<<ver[x]<<endl;
    }
return 0 ;
}
