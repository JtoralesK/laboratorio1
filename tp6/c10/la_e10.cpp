/*Ejercicio:10) Dada una lista de 20 números cargarlos en un vector. Determinar e informar la
cantidad de “rupturas” que tiene el vector con respecto a un orden estrictamente
creciente. Ejemplo: el vector 1,3,4,2,4,4,6,8,1,7,9 tiene 3 rupturas.*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;

int main(){
int array[20];
for(int i=0;i<20;i++){
    cout<<"ingresa n :";cin>>array[i];
}
    int lista=0,ruptura=0;
for(int i=0;i<20;i++){
    int a =array[i];
    if(i==0){
        lista=a;
    }else{
        if(a>lista){
            lista=a;
        }else{
            ruptura++;
            lista=a;
        }
    }
}
cout<<"la lista tuvo  "<<ruptura<<" rupturas"<<endl;
return 0 ;
}
