/*Ejercicio:5) Un negocio de perfumería efectúa descuentos según el importe de la venta.
- Si el importe es menor a $100 aplicar un descuento del 5%
- Si el importe es entre $100 y hasta $500 aplicar un descuento del 10%
- Si el importe es mayor a $500 aplicar un descuento del 15%
Hacer un programa donde se ingresa el importe original sin descuento y que se informe por
pantalla el importe con el descuento ya aplicado.*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;

int main(){
int venta;
cout<< "ingresar el importe de la venta:";
cin>>venta;
int descuento;
if(venta>500){
    descuento=(venta*15)/100;
        cout<<"descuento del 15"<<endl;
}else{
    if(venta>=100){
        descuento=(venta*10)/100;
        cout<<"descuento del 10"<<endl;

    }else{
    descuento=(venta*5)/100;
        cout<<"descuento del 5"<<endl;

    }
}
cout<<"la venta mas el descuento aplicado es de $"<<venta-descuento;
return 0 ;
}
