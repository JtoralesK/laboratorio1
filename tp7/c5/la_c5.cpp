/*Ejercicio:5) Escribir una funci�n que reciba tres n�meros y retorne el m�ximo.*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;
int maximo(int a,int b,int c){
    if(a>b && a>c){
        return a;
    }else{
        if(b>c){
            return b;
        }else{
            return c;
        }
    }
}
int main(){
int a,b,c;
cout<<"ingresa n :";cin>>a;
cout<<"ingresa n :";cin>>b;
cout<<"ingresa n :";cin>>c;
int max=maximo(a,b,c);
cout<<"maximo:"<<max;
return 0 ;
}
