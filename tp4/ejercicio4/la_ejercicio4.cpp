/*Ejercicio:4) Hacer un programa para que el usuario ingrese un n�mero positivo y que luego se
muestren por pantalla los n�meros entre el 1 y el n�mero ingresado por el usuario.
Ejemplo. Si el usuario ingresa 15, se mostrar�n los n�meros entre el 1 y el 15.
*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;

int main(){
int contador=1,n;
cout<<"ingresar un numero:";cin>>n;
while(contador!=(n+1)){
    cout<<contador<<endl;
    contador++;

}
return 0 ;
}
