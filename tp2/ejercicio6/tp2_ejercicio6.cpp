/*Ejercicio:6) Hacer un programa para ingresar por teclado tres números y luego determinar e informar
con una leyenda aclaratoria si los tres son iguales entre sí, caso contrario no emitir nada.
Ayuda: Si A es igual a B y B es igual a C, entonces A y C son iguales.*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;

int main(){
int a,b,c;
cout <<"ingresar un numero:";
cin>>a;
cout <<"ingresar otro numero:";
cin>>b;
cout <<"ingresar otro numero:";
cin>>c;
int bo=a==b && b==c;
if(bo){
    cout<<"los tres numeros ingresados son iguales";
}else{
   // cout<<"los tres numeros ingresados nooo son iguales";
}
return 0 ;
}
