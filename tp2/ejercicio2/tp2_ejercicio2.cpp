/*Ejercicio:2) Hacer un programa para ingresar por teclado dos números y luego informar por pantalla
con un cartel aclaratorio si el primer número es múltiplo del segundo. */
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;

int main(){
int n1,n2;
cout<< "ingresar un numero:";
cin>> n1;
cout<< "ingresar otro numero:";
cin>>n2;
int multi = n1%n2;
if(multi==0){
    cout<<"el primer numero ingresado es multipo del segundo";
}else{
    cout<<"el primer numero ingresado no es multipo del segundo";
}

return 0 ;
}
