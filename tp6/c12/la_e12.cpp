/*Ejercicio:12) Dada una lista de 10 n�meros cargarlos en un vector. Luego ingresar un n�mero e
informar la cantidad de veces que ese n�mero aparece en el vector. */
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
int cant=0;
for(int i=0;i<10;i++){
    if(v[i]==n){
       cant++;
    }
}
cout<<n<<" aparece "<< cant<< " veces";
return 0 ;
}
