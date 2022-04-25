/*Ejercicio:4) Hacer un programa para que el usuario ingrese un número positivo y que luego se
muestren por pantalla los números entre el 1 y el número ingresado por el usuario.
Ejemplo. Si el usuario ingresa 15, se mostrarán los números entre el 1 y el 15*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;

int main(){
int i,n;
cout<<"ingresar un numero:";cin>>n;
for(i=1;i<=n;i++){
    cout<<i<<endl;
}
return 0 ;
}
