/*Ejercicio:*10) Hacer un programa para ingresar cinco n�meros. Se pide luego resolver como tres casos
diferentes:
a) Listar el m�ximo
b) Listar el m�nimo
c) Listar el m�ximo y el m�nimo*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;

int main(){
int numeroBase,numero,i,mayor,menor;
 cout<<"ingrese un numero:";
 cin>>numeroBase;
mayor=numeroBase;
menor=numeroBase;
for(i=0;i<4;i++){
    cout<<"ingrese un numero:";
       cin>>numero;
       if(numero>mayor){
        mayor=numero;
       }if(numero<menor){
           menor=numero;
       }
}
cout<<mayor<<"es el mayor"<<endl;
cout<<menor<<"es el menor";

return 0 ;
}
