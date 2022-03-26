/*Ejercicio:11) Hacer un programa para ingresar cinco números y listar cuántos de esos cinco números
son positivos.*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;

int main(){
    int n1,n2,n3,n4,n5,contador;
    cout<<"ingresar un numero:";
    cin>>n1;
    cout<<"ingresar un numero:";
    cin>>n2;
    cout<<"ingresar un numero:";
    cin>>n3;
    cout<<"ingresar un numero:";
    cin>>n4;
    cout<<"ingresar un numero:";
    cin>>n5;

    if(n1>=0){
       contador++;
    }
     if(n2>=0){
       contador++;
    }
     if(n3>=0){
       contador++;
    }
     if(n4>=0){
       contador++;
    }
     if(n5>=0){
       contador++;
    }
    cout<<"hay "<<contador<<" numeros positivos";

return 0 ;
}
