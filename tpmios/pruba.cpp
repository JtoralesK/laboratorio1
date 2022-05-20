/*Ejercicio:*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;

int main(){
int i=1;;
int total=0;
int repartidorMenosEnvios=0;
int menorEnvios=0;
for(i;i<=10;i++){
    int repartidor=0,dias=-1,enviosRealizados=0,totalRecaudado=0;
    cout<<"#Repartidor "<<i<<endl;

    while(dias!=0){
            int e,r;
    cout<<"ingresar numero del repartidor:";cin>>repartidor;
    cout<<"ingresar dia trabajado:";cin>>dias;
    cout<<"ingresar envios realizados:";cin>>e;
    cout<<"ingresar total reacaudado:";cin>>r;
    enviosRealizados=enviosRealizados+e;
    totalRecaudado=totalRecaudado+r;
    }
    total=total+totalRecaudado;
    if(enviosRealizados>70){
    cout<<"este repartidor realizo mas de 70 envios"<<endl;

    }
    if(i==1){
        repartidorMenosEnvios=i;
        menorEnvios=enviosRealizados;
    }else{
        if(enviosRealizados<menorEnvios){
        menorEnvios=enviosRealizados;
        }
    }

}
cout<<"recaudado:$"<<total<<endl;
cout<<"repartidor con menos envios realizados:"<<repartidorMenosEnvios<<endl;


return 0 ;
}
