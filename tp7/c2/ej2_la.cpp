/*Ejercicio:2) Escribir una funci�n que reciba dos n�meros y retorne la suma de ambos*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;
int suma(int a,int b){
    int suma = a+b;
    return suma;
}
int main(){
    int a,b;
    cout<<"ingresar un numero:";cin>>a;
    cout<<"ingresar un numero:";cin>>b;
    int re = suma(a,b);
    cout<<"resultado:"<<re;


return 0 ;
}
