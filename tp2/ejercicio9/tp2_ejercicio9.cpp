/*Ejercicio:Hacer un programa para ingresar tres números y listar el máximo de ellos. */
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;

int main(){
int a,b,c;
cout <<"ingresar un numero:";
cin>>a;
cout <<"ingresar otro numero:";
cin>>b;
cout <<"ingresar otro numero:";
cin>>c;
if(a>b){
    if(a>c){
        cout<<a<<" es el mayor de todos";
    }else{
    cout<<c<<" es el mayor de todos";
    }
}else{
if(b>c){
    cout<<b<<" es el mayor de todos";
}else{
    cout<<c<<" es el mayor de todos";

}
}
return 0 ;
}
