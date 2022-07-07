/*Ejercicio:4) Leer 10 números y guardarlos en un vector. Determinar e informar cual es el valor
máximo absoluto del vector. Por ejemplo 20, -43 y 5, el máximo absoluto es -43.*/
//Autor:Javier Torales
//fecha:Es de hoy


#include <iostream>

using namespace std;

int main(){
int i;
int v[10];
int total=0;
for(i=0;i<10;i++){
    cout<<"ingresar un numero:";cin>>v[i];
    int n=v[i];
}
int mayor=0;
bool primero=false;
bool positivo=true;
bool signoMayor;
for(i=0;i<10;i++){
        int n=v[i];
        positivo=true;
        if(n<0){

            n=-(n);
            positivo=false;
        }
        if(primero==false){
            mayor=n;
            primero=true;
            signoMayor=positivo;
        }else{
            if(n>mayor){
              mayor=n;
            signoMayor=positivo;

            }
        }
}
    cout<<"mayor:"<<mayor<<endl;
    if(signoMayor){
        cout<<" y es positivo"<<endl;
    }else{
        cout<<" y es negativo"<<endl;
    }

return 0 ;
}
