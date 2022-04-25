/*Ejercicio:15) Dada una lista de 7 números informar cual es el primer y último número impar
ingresado.
Ejemplo 8, 4, -5, 6, 9, 5, 18 se informa -5 y 5.
*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;

int main(){
int i,conta=0,preIm=0,ultiIm=0;
for(i=1;i<=7;i++){
    int n;
    cout<<"ingresar un numero:";cin>>n;
    int resto;
    resto=n%2;
    if(conta<7 && !(resto==0) ){
        if(conta==0){
            preIm=n;
        }
        ultiIm=n;
        conta++;
    }
}
cout<<"primer n impar:"<<preIm<<",ultimo n impar:"<<ultiIm;

return 0 ;
}
