/*Ejercicio:4) Hacer un programa para ingresar por teclado la cantidad de asientos disponibles en un
avi�n y la cantidad de pasajes ocupados y luego calcular e informar el porcentaje de
ocupaci�n y el porcentaje de no ocupaci�n del mismo.
Ejemplo si el avi�n tiene 200 asientos disponibles y se vendieron 80 pasajes, el porcentaje de
ocupaci�n que se informar� ser� de un 40% y el porcentaje de no ocupaci�n ser� de un 60%. */
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;

int main(){
int asientosDisponibles, asientosOcupados, porcentajeOcupacion,porcentajeDesocupacion;
cout<<"Cantidad de asientos disponibles:";
cin>>asientosDisponibles;
cout<<"Cantidad de asientos ocupados:";
cin>>asientosOcupados;
porcentajeOcupacion=(asientosOcupados*100)/asientosDisponibles;
porcentajeDesocupacion=100-porcentajeOcupacion;
cout<<"Porcentaje de ocupacion:%"<<porcentajeOcupacion<<endl;
cout<<"Porcentaje de desocupacion:%"<<porcentajeDesocupacion;

return 0 ;
}
