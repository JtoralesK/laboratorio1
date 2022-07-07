/*Ejercicio:11) Dada una lista de 10 números cargarlos en un vector. Luego ingresar un número e
informar el primer índice donde ese número aparece en el vector. En caso de no
aparecer se mostrará el valor índice igual a -1. */
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
int n;
cout<<"ingresa un numero:";cin>>n;
bool esta=false;
int indice=0;
for(int i=0;i<10;i++){
    if(v[i]==n){
        esta=true;
        indice=i;
    }else{
        if(esta==false){
            indice=-1;

        }
    }
}
cout<<"indice:"<<indice<<endl;
return 0 ;
}
