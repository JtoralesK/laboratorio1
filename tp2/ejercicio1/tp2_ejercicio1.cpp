/*Ejercicio:1) Hacer un programa para ingresar por teclado un número y luego emitir por pantalla un
cartel aclaratorio indicando si el mismo es positivo, negativo o cero.*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;

int main(){
int n;
cout<<"ingresar un numero:";
cin>>n;
if(n>=0){
        if(n==0){
            cout<<"tu numero es cero";
        }else{
        cout<<"tu numero es positivo";
        }

}else{
    cout<<"tu numero es negativo";
}
return 0 ;
}
