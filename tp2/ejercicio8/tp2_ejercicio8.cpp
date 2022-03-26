/*Ejercicio:8) Basado en los 2 ejercicios anteriores, hacer un programa para ingresar por teclado la
longitud de los tres lados de un triángulo y luego listar que tipo de triángulo es:
- Equilátero: si los tres lados son iguales
- Isósceles: si dos de los tres lados son iguales
- Escaleno: si los tres lados son distintos entre sí*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;

int main(){
int a,b,c;
cout <<"ingresar la longitud de un lado:";
cin>>a;
cout <<"ingresar la longitud de otro lado:";
cin>>b;
cout <<"ingresar la longitud de otro lado:";
cin>>c;
int escaleno=a!=b && a!=c && b!=c;
int equilatero=a==b && b==c;
if(escaleno){
    cout<<"El triangulo es escaleno";
}else{

if(equilatero){
    cout<<"El triangulo es equilatero";
}else{
    cout<<"El triangulo es Isosceles";

}
}
return 0 ;
}
