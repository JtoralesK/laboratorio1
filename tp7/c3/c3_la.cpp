/*Ejercicio:3) Escribir una funci�n que reciba tres n�meros y retorne el promedio.*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;
float promedio(int a,int b,int c){
    int suma = a+b+c;
    float promedioo = (float)suma/3;
    return promedioo;
}
int main(){
int a,b,c;
cout<<"ingresar un numero:";cin>>a;
cout<<"ingresar un numero:";cin>>b;
cout<<"ingresar un numero:";cin>>c;
float promedioo = promedio(a,b,c);
cout<<"promedio:"<<promedioo;
return 0 ;
}
