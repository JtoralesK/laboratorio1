/*Ejercicio:6) Escribir una función que reciba dos números y retorne la suma y el producto de ambos.*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;
int sumaYproducto(int a,int b){
    int suma = a+b;
    int multi = a*b;
    int va[2];
     va[0]=suma;
     va[1]=multi;
    return va;
}
int main(){
    int a,b;
    cout<<"ingresa n:";cin>>a;
    cout<<"ingresa n:";cin>>b;

    int array = sumaYproducto(a,b);
    cout<<"suma:"<<array[0];
return 0 ;
}
