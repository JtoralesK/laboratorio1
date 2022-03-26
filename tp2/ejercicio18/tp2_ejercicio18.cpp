/*Ejercicio:18) Hacer un programa para ingresar por teclado cuatro números. Si los valores que se
ingresaran están ordenados en forma creciente, emitir el mensaje “Conjunto Ordenado”, caso
contrario emitir el mensaje: “Conjunto Desordenado”.
Ejemplo 1: si los números que se ingresan son 8,10, 12 y 14, entonces están ordenados.
Ejemplo 2: si los números que se ingresan son 8,12, 12 y 14, entonces están ordenados.
Ejemplo 3: si los números que se ingresan son 10, 8,12 y 14, entonces están desordenados*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;

int main(){
int primerValor,confirmar,i;
cout<<"ingresar primer valor:";
cin>>primerValor;
confirmar=true;
for(i=0;i<3;i++){
    int otro;
    cout<<"ingresar otro valor:";
    cin>>otro;
    if(confirmar){
        if(primerValor<=otro){
            primerValor=otro;
            confirmar=true;
        }else{
        confirmar=false;

        }
    }
}
if(confirmar){
cout<<"esta en orden"<<endl;
}else{
cout<<"no esta en orden"<<endl;

}

return 0 ;
}
