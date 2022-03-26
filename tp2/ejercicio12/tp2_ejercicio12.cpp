/*Ejercicio:12) Hacer un programa para leer tres números diferentes y determinar e informar el número
del medio. Ejemplo: si se ingresan 6, 10, 8, se emitirá 8.*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;

int main(){
int a,b,c,mayor,menor,medio;
cout<<"ingresar un numero:";
cin>>a;
cout<<"ingresar otro numero:";
cin>>b;
cout<<"ingresar otro numero:";
cin>>c;
if(a>b){
    mayor=a;
    menor=b;
}else{
    mayor=b;
    menor=a;
}
if(c>mayor){
    medio=mayor;
    mayor=c;
}else{
if(c>menor){
    medio=c;

}else{
 menor=c;
 medio=b;
}

}
cout<<"el del medio:"<<medio;
return 0 ;
}
