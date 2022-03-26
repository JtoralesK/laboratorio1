/*Ejercicio:14) Un ciudadano está exento de votar si se cumple alguna de las siguientes situaciones:
 Su edad es mayor a 70 años
 Su edad es entre 18 y 70 años, pero se encuentra a más de 500 km de su ciudad.
Hacer un programa para ingresar la edad y la distancia de su ciudad de un ciudadano e indicar
con un cartel si está o no está exento de votar. */
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;

int main(){
int edad, distancia;
cout<<"ingresar el numero de tu edad:";
cin>>edad;
cout<<"ingresar a cuantos km estas de tu ciudad:";
cin>>distancia;
int condicion1= edad>70;
int condicion2= edad>=18 && edad<=70 && distancia>500;
if(condicion1 || condicion2  ){
    cout<<"no puede votar";

}else{
   cout<<"si puede votar";
}



return 0 ;
}
