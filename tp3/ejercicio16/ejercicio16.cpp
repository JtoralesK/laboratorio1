/*Ejercicio:16) Dada una lista de 7 números informar cual es el anteúltimo y último número
impar ingresado. Ejemplo 8, 4, -5, 6, 10, 5, 18, 0 se informa -5 y 5*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;

int main(){
int i,conta=0;
int pri=0,se=0,ter=0,cua=0,qui=0,sex=0,ulti=0;
for(i=1;i<=7;i++){
    int n;
    cout<<"ingresar un numero:";cin>>n;
    int resto;
    resto=n%2;
    if(conta<7 && !(resto==0) ){
            if(conta==0){
                pri=n;
            }if(conta==1){
                se=n;
            }if(conta==2){
                ter=n;
            }if(conta==3){
                cua=n;
            }if(conta==4){
                qui=n;
            }if(conta==5){
                sex=n;
            }
        ulti=n;
        conta++;
    }
}
    if(conta>=2){
        conta=conta-2;
        switch(conta){
        case 0:
        cout<<"El anteultimo numero impar es:"<<pri<<endl;
        break;
        case 1:
        cout<<"El anteultimo numero impar es:"<<se<<endl;
        break;
         case 2:
        cout<<"El anteultimo numero impar es:"<<ter<<endl;
        break;
         case 3:
        cout<<"El anteultimo numero impar es:"<<cua<<endl;
        break;
         case 4:
        cout<<"El anteultimo numero impar es:"<<qui<<endl;
        break;
        case 5:
        cout<<"El anteultimo numero impar es:"<<sex<<endl;
        break;

        }
    }
    cout<<"El ultimo numero impar es:"<<ulti;
return 0 ;
}
