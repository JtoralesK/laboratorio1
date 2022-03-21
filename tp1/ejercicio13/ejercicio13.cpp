/*Ejercicio:13) Hacer un programa para un cajero automático para ingresar un importe a retirar y
convertir el mismo en la cantidad de billetes de $ 1.000, $ 500, $ 200 y $ 100 a entregar.
Ejemplo 1: Si el importe a retirar es $ 2.500 se mostrara por pantalla que se deberán entregar
2 billetes de $ 1.000, 1 billete de $ 500 y 0 billetes de $ 200 y $ 100. SIGUE 
Ejemplo 2: Si el importe a retirar es $ 3.400 se mostrara por pantalla que se deberán entregar
3 billetes de $ 1.000, 2 billetes de $ 200 y 0 billetes de $ 500 y $ 100.
Ejemplo 3: Si el importe a retirar es $ 300 se mostrara por pantalla que se deberán entregar 1
billete de $ 200, 1 billete de $ 100, 0 billetes de $ 1.000 y 0 billetes de $ 500.
Recordatorio. Considerar en todos los casos que el importe a retirar es en todos los casos
múltiplo de $ 100 ya que el cajero no cuenta con billetes de $ 50, $ 20 o $ 10.*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;

int main(){
int plata;
cout << "import a retirar:$";
cin >>plata;
int restoDeMil= (plata%1000);
int b1000= (plata-restoDeMil)/1000;
int restoDeQuinientos = (restoDeMil%500);
int b500= (restoDeMil-restoDeQuinientos)/500;
int restoDeDoscientos=(restoDeMil-b500*500)%200;
int b200 =((restoDeMil-b500*500)-restoDeDoscientos)/200;
int b100 = restoDeDoscientos/100;
cout<<b1000<<" billetes de 1000,"<<b500<< "billetes de 500,"<<b200<<" billetes de 200,"<<b100<< "billetes de 100,";//<<" billetes de 100";
return 0 ;
}
