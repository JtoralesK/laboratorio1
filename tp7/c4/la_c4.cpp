/*Ejercicio:4) Escribir una funci�n que reciba dos n�meros y retorne el m�ximo*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;
int devuelveMaximo(int a, int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}
int main(){
int a,b;
cout<<"ingresar un numero :";cin>>a;
cout<<"ingresar un numero :";cin>>b;
int max = devuelveMaximo(a,b);
cout<<"maximo:"<<max;
return 0 ;
}
