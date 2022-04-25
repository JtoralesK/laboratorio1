yf/*Ejercicio:7) Hacer un programa para ingresar por teclado tres números e informar con una leyenda
aclaratoria si los tres son todos distintos entre sí, caso contrario no emitir nada.
Ayuda: Si A es distinto de B y B es distinto de C, es no sígnica que A y C sean distintos.
Ejemplo: A=8, B=6 y C=8.*/
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
int bo=a!=b && a!=c && b!=c;
if(bo){
    cout<<"los tres numeros ingresados son distintos";
}else{
  // cout<<"dos o todos los numeros ingresados  son iguales";
}
return 0 ;
}
