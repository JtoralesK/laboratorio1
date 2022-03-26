/*Ejercicio:13) Hacer un programa para ingresar tres números distintos y listarlos ordenados de menor a
mayor. Ejemplo: si se ingresa 4,-3,7, se debe mostrar -3, 4,7.
*/
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
 medio=menor;
 menor=c;

}

}
cout<<menor<<","<<medio<<","<<mayor;
return 0 ;
}
