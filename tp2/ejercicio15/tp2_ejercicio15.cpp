/*Ejercicio:15) Hacer un programa para ingresar por teclado la fecha de nacimiento de una persona,
ingresando d�a, mes y a�o como 3 datos individuales. Luego ingresar la fecha actual
ingresando d�a, mes y a�o como 3 datos individuales. Calcular luego la edad en a�os de esa
persona y listarlo por pantalla.
Ejemplo 1. Si se ingresa como fecha de nacimiento: 3/12/2000 y la fecha actual es 26/2/2019
la edad de esa persona es 18 ya que los 19 reci�n los cumple en diciembre.
Ejemplo 2. Si se ingresa como fecha de nacimiento: 3/1/2000 y la fecha actual es 26/2/2019 la
edad de esa persona es 19.
Ejemplo 3. Si se ingresa como fecha de nacimiento: 28/2/2000 y la fecha actual es 26/2/2019
la edad de esa persona es 18 ya que le faltan 2 d�as para cumplir los 19 a�os.*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;

int main(){

int dianaci,mesnaci,yearNaci,diaactual,mesactual,yearActtual;
cout<<"ingresar el numero del dia en el que naciste:";
cin>>dianaci;
cout<<"ingresar el numero del mes en el que naciste:";
cin>>mesnaci;
cout<<"ingresar el year en el que naciste:";
cin>>yearNaci;

cout<<"ingresar el numero del dia de hoy:";
cin>>diaactual;
cout<<"ingresar el numero del mes en el que estamos actualmente:";
cin>>mesactual;
cout<<"ingresar el year en el que estamos actualmente:";
cin>>yearActtual;

int youYear= yearActtual-yearNaci;
int youDay= diaactual-dianaci;
int youMonth= mesactual-mesnaci;

if(youMonth<=0 && youDay<0){
 cout<<"tu edad es de:"<<youYear-1;

}
if(youMonth<0){
     cout<<"tu edad es de:"<<youYear-1;

}

if(youMonth==0 && youDay>=0){
  cout<<"tu edad es de:"<<youYear;

}
if(youMonth>0){
  cout<<"tu edad es de:"<<youYear;

        }

return 0 ;
}
