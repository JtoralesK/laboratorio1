/*Ejercicio:1) Escribir una función que reciba un número y lo muestre tres veces por pantalla.*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;
void devuelveNumero(int n){
    cout<<n<<endl;
    cout<<n<<endl;
    cout<<n<<endl;

}
int main(){
int x;
cout<<"ingresar un numero:";cin>>x;
devuelveNumero(x);
return 0 ;
}
