/*Ejercicio:13) Dada una lista de 10 números cargarlos en un vector. Luego contar y listar la
cantidad de números pares que aparecen en el vector. */
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;

int main(){
int v[10];
cout<<"ingresa 10 numeros"<<endl;

for(int i=0;i<10;i++){
        cin>>v[i];
}
int cant =0;
int vPares[10];
for(int i=0;i<10;i++){
        int n= v[i];
        int resto = (n%2)==0;
        int indice=0;
        if(resto){
            vPares[cant]=n;
            cant++;
        }
}
cout<<"en esta lista hay "<<cant<<" pares y son:"<<endl;
for(int i=0;i<cant;i++){
        cout<<vPares[i]<<endl;

}
return 0 ;
}
