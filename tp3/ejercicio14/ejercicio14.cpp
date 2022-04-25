/*Ejercicio:14) Dada una lista de 7 números informar cual es el primer y segundo número impar
ingresado.
Ejemplo 8, 4, 5, 6, -9, 5,7 se informa 5 y -9.*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;

int main(){
int i,conta=0,preIm=0,seIm=0;
for(i=1;i<=7;i++){
    int n;
    cout<<"ingresar un numero:";cin>>n;
    int resto;
    resto=n%2;
    if(conta==1 && !(resto==0) ){
        seIm=n;
        conta++;
    }
    if(conta==0 && !(resto==0) ){
        preIm=n;
        conta++;
    }

}
cout<<"primer numero impar:"<<preIm<<",segundo numero impar:"<<seIm;
return 0 ;
}
