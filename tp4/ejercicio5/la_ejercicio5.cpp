/*Ejercicio:5) Hacer un programa para que el usuario ingrese dos n�meros y luego el programa
muestre por pantalla los n�meros entre el menor y el mayor de ambos.
Ejemplo, si el usuario ingresa 3 y 15, se mostrar�n los n�meros entre el 3 y el 15; y si el
usuario ingresa 25 y 8, se mostrar�n los n�meros entre el 8 y el 25.
*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;

int main(){
int menor=0,mayor=0;
int a,b;
cout<<"ingresar un numero:";cin>>a;
cout<<"ingresar otro numero:";cin>>b;

if(a>b){
   mayor=a;
   menor=b;
}else{
mayor=b;
menor=a;
}
while(menor!=(mayor+1)){
    cout<<menor<<endl;
    menor++;
}
return 0 ;
}
