/*ejercicio:1) Hacer un programa para ingresar por teclado la cantidad de horas trabajadas por un
operario y el valor que se le paga por hora trabajada y listar por pantalla el sueldo que le
corresponda.
*/

//Autor:Javier Torales
//fecha:


#include <iostream>

using namespace std;

int main(){
int horasTrabajadas,valorXHora,sueldo;
cout<<"ingresar horas trabajadas:";
cin>>horasTrabajadas;
cout<<"ingresar valor por hora trabajada:";
cin>>valorXHora;
sueldo=horasTrabajadas*valorXHora;
cout<<"Tu sueldo es de:"<<sueldo;
return 0 ;
}
