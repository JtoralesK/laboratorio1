/*Ejercicio:16) Un a�o es bisiesto si es m�ltiplo de 4, exceptuando a los a�os que son m�ltiplos de 100
pero que no sean m�ltiplos de 400. Esto �ltimo significa que el a�o 1900 no es bisiesto, pero
el a�o 2000 si lo es.
Hacer un programa para que ingresar un a�o y listar por pantalla si es bisiesto o no lo es.
Ejemplo 1. Si se ingresa el a�o 2020 se indicar� como bisiesto.
Ejemplo 2. Si se ingresa el a�o 2019 se indicar� como no bisiesto.
Ejemplo 3. Si se ingresa el a�o 1800 o 1900 se indicar� como no bisiesto.
Ejemplo 4. Si se ingresa el a�o 1600 o 2000 se indicar� como bisiesto.*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;

int main(){
int year;
cout<<"ingresar el year:";
cin>>year;
int multi4= (year%4)==0;
int resto100= (year%100);
int multi100= (year-resto100);
int multi400= (multi100%400);

if(multi400==0&& multi4){
    cout<<"es year bisiesto";
}else{
 cout<<"no es year bisiesto";

}

return 0 ;
}
