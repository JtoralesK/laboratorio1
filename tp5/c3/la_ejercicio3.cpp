/*Ejercicio:3) Se dispone de una lista de 10 grupos de n�meros enteros separados entre ellos por
ceros. Se pide determinar e informar:
a) El n�mero de grupo con mayor porcentaje de n�meros impares positivos respecto al total
de n�meros que forman el grupo. Se informa 1 resultado al final.
b) Para cada grupo el �ltimo n�mero primo y en qu� orden apareci� en ese grupo, si en un
grupo no hubiera n�meros primos informarlo con un cartel aclaratorio. Se informan 2
resultados por cada grupo.
c) Informar cuantos grupos est�n formados por todos n�meros ordenados de mayor a
menor. Se informa 1 resultado al final.
*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;

int main(){
int i,porce=0,gruposOrdenados=0,numeroGrupo=0;

for(i=1;i<=10;i++){

    cout<<"#grupo "<<i<<endl;

    int n=1,v=0;
    ///seccion c
    int mayor=0;
    bool ordenado=true;
    ///seccion b
    int ultimoImpar=0, cVueltaIm=0, posicion=0;
    ///seccion a
    int impares=0;
    while(n!=0){
    cout<<"ingresar un numero:";cin>>n;
        if(n!=0){
            int impar= (n%2)!=0;

            if(v==0){
                mayor=n;
            }else{
                if(n<=mayor){
                   mayor=n;
                }else{
                ordenado=false;
                }
            }
            v++;
            if(impar){
                if(n>0){
                    impares++;
                }
                ultimoImpar=n;
                cVueltaIm++;
                posicion=v;
            }
        }
    }
    if(v!=0){
        int porcentajeImpar=(impares*100)/v;
        if(porcentajeImpar>porce){
            numeroGrupo=i;
            porce=porcentajeImpar;
        }
        if(cVueltaIm==0){
            cout<<"en este grupo no hay numero impar positivo"<<endl;
        }else{
        cout<<"el ultimo numero impar:"<<ultimoImpar<<" y su posicion es:"<<posicion<<endl ;

        }
        if(ordenado){
            gruposOrdenados++;
        }
    }
}
cout<<"el #grupo numero:"<<numeroGrupo<< " tiene el:%"<<porce<<" de numeros impares positivos"<<endl;
cout<<"grupos ordenados:"<<gruposOrdenados<<endl;
return 0 ;
}
