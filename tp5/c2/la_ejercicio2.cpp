/*Ejercicio:2) Dada una lista de números compuesta por 10 grupos y cada grupo separado del
siguiente por un cero, se pide determinar e informar:
a) Para cada uno de los grupos el máximo de los números pares y el máximo de los
números impares. Se informan 2 resultados por cada grupo.
b) Para cada uno de los grupos el porcentaje de números negativos y números positivos. Se
informan 2 resultados por cada grupo.
c) Cuantos números positivos había en total entre los 10 grupos. Se informa 1 resultado al
final.*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;

int main(){
int i;
int posTotal=0;
for(i=1;i<11;i++){
int n=1;
///contadores
int mayorPar=0,mayorImpar=0,v=-1,pos=0,neg=0,vPar=0,vImpar=0;

    cout<<"#grupo"<<i<<endl<<endl;
        while(n!=0){
            cout<<"ingresar un numero:";cin>>n;
            v++;
            bool resto = (n%2)==0;
            if(n!=0){

                if(resto){
                    if(vPar==0){
                        mayorPar=n;
                        vPar++;
                    }else{
                        if(n>mayorPar){
                            mayorPar=n;
                        }
                    }
                }else{
                 if(vImpar==0){
                        mayorImpar=n;
                        vImpar++;
                    }else{
                        if(n>mayorImpar){
                            mayorImpar=n;
                        }
                    }
                }

                if(n>0){
                    pos++;
                    posTotal++;
                }else{
                neg++;
                }


            }
        }
        int porcentajePos= (pos*100)/v;
        int porcentajeNeg= (neg*100)/v;
        cout<<"porcentaje de n positivos:%"<<porcentajePos<<endl;
        cout<<"porcentaje de n negativos:%"<<porcentajeNeg<<endl;
        cout<<"maximo par:"<<mayorPar<<endl;
        cout<<"maximo impar:"<<mayorImpar<<endl;

}
    cout<<"total positivos:"<<posTotal<<endl<<endl;

return 0 ;
}
